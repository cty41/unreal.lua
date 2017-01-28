local ShooterWeapon_Instan = Inherit(require "shooterweapon", AShooterWeapon_Instant)
local function RunCppCode()
	return false
end
function ShooterWeapon_Instan:FireWeapon()
	if RunCppCode() then return false end
	local RandomSeed = math.random(1, 2^31-1)
	local WeaponRandomStream = FRandomStream.New()
	WeaponRandomStream = UKismetMathLibrary.SetRandomStreamSeed(WeaponRandomStream, RandomSeed)

	local CurrentSpread = self:GetCurrentSpread()
	local ConeHalfAngle = UKismetMathLibrary.DegreesToRadians(CurrentSpread*0.5)
	local AimDir = self:GetAdjustedAim()
	local StartTrace = self:GetCameraDamageStartLocation(AimDir)
	local ShootDir = ULuautils.VRandCone(WeaponRandomStream, AimDir, ConeHalfAngle, ConeHalfAngle)
	local EndTrace = StartTrace + ShootDir * self.InstantConfig.WeaponRange

	local Impact = self:WeaponTrace(StartTrace, EndTrace)
	self:ProcessInstantHit(Impact, StartTrace, ShootDir, RandomSeed, CurrentSpread)

	self.CurrentFiringSpread = math.min(self.InstantConfig.FiringSpreadMax, self.CurrentFiringSpread + self.InstantConfig.FiringSpreadIncrement)
	return true
end

function ShooterWeapon_Instan:ProcessInstantHit(Impact, Origin, ShootDir, RandomSeed, ReticleSpread)
	local MyPawn = self.MyPawn
	if MyPawn and MyPawn:IsLocallyControlled() and not UKismetSystemLibrary.IsServer(self) then
		local Impact_Actor = Impact.Actor:Get()
		if Impact_Actor and Impact_Actor:GetRemoteRole() == ENetRole.ROLE_Authority then
			self:ServerNotifyHit(Impact, ShootDir, RandomSeed, ReticleSpread)
		elseif Impact_Actor == nil then
			if Impact.bBlockingHit then
				self:ServerNotifyHit(Impact, ShootDir, RandomSeed, ReticleSpread)
			else
				self:ServerNotifyMiss(ShootDir, RandomSeed, ReticleSpread)
			end
		end
	end 
	self:ProcessInstantHit_Confirmed(Impact, Origin, ShootDir, RandomSeed, ReticleSpread)
end

function ShooterWeapon_Instan:ServerNotifyHit_Implementation(Impact, ShootDir, RandomSeed, ReticleSpread)
	if RunCppCode() then return false end
	local WeaponAngleDot = math.abs(math.sin(ReticleSpread*math.pi / 180))
	local Instigator = self.Instigator
	local Impact_Actor = Impact.Actor:Get()
	if Instigator and ( Impact_Actor or Impact.bBlockingHit) then
		local Origin = self:GetMuzzleLocation()
		local ViewDir = ( Impact.Location - Origin):Normal()

		local ViewDotHitDir = ULuautils.GetViewRotation(Instigator):Vector():Dot(ViewDir)
		if ViewDotHitDir > self.InstantConfig.AllowedViewDotHitDir - WeaponAngleDot then
			if self:GetCurrentState() ~= EWeaponState.Idle then
				if Impact_Actor == nil then
					if Impact.bBlockingHit then
						self:ProcessInstantHit_Confirmed(Impact, Origin, ShootDir, RandomSeed, ReticleSpread)
					end
				elseif Impact_Actor:K2_GetRootComponent().Mobility == EComponentMobility.Static or Impact_Actor:K2_GetRootComponent().Mobility == EComponentMobility.Stationary then
						self:ProcessInstantHit_Confirmed(Impact, Origin, ShootDir, RandomSeed, ReticleSpread)
				else
					local BoxCenter, BoxExtent = Impact_Actor:GetActorBounds(true, FVector.New(), FVector.New())
					BoxExtent = BoxExtent*self.InstantConfig.ClientSideHitLeeway
					BoxExtent.X = math.max(20, BoxExtent.X)
					BoxExtent.Y = math.max(20, BoxExtent.Y)
					BoxExtent.Z = math.max(20, BoxExtent.Z)
					local Impact_Location = Impact.Location
					if math.abs(Impact_Location.Z - BoxCenter.Z) < BoxExtent.Z and
						math.abs(Impact_Location.X - BoxCenter.X) < BoxExtent.X and
						math.abs(Impact_Location.Y - BoxCenter.Y) < BoxExtent.Y then
						self:ProcessInstantHit_Confirmed(Impact, Origin, ShootDir, RandomSeed, ReticleSpread)
					else
					end
				end
			end
		elseif ViewDotHitDir <= self.InstantConfig.AllowedViewDotHitDir then
		else
		end
	end
	return true
end

function ShooterWeapon_Instan:ProcessInstantHit_Confirmed(Impact, Origin, ShootDir, RandomSeed, ReticleSpread)
	if self:ShouldDealDamage(Impact.Actor:Get()) then
		self:DealDamage(Impact, ShootDir)
	end
	if self.Role == ENetRole.ROLE_Authority then
		self.HitNotify.Origin = Origin
		self.HitNotify.RandomSeed = RandomSeed
		self.HitNotify.ReticleSpread = ReticleSpread
	end

	if not UKismetSystemLibrary.IsDedicatedServer(self) then
		local EndTrace = Origin + ShootDir * self.InstantConfig.WeaponRange
		local EndPoint = Impact.Actor:Get() and Impact.ImpactPoint or EndTrace

		self:SpawnTrailEffect(EndPoint)
		self:SpawnImpactEffects(Impact)
	end

end

function ShooterWeapon_Instan:ShouldDealDamage(TestActor)
	if TestActor then
		if UKismetSystemLibrary.IsServer(self) 
			or TestActor.Role == ENetRole.ROLE_Authority
			or TestActor.bTearOff then
			return true
		end
	end
	return false
end

function ShooterWeapon_Instan:DealDamage(Impact, ShootDir)
	PointDmg = FPointDamageEvent.New()
	PointDmg.DamageTypeClass = self.InstantConfig.DamageType
	PointDmg.HitInfo = Impact
	PointDmg.ShotDirection = ShootDir
	PointDmg.Damage = self.InstantConfig.HitDamage

	AShooterCharacter.TakeDamage(Impact.Actor:Get(), PointDmg.Damage, PointDmg, self.MyPawn.Controller, self)
end

function ShooterWeapon_Instan:SpawnImpactEffects(Impact)
	if self.ImpactTemplate and Impact.bBlockingHit then
		local UseImpact = Impact

		if not Impact.Component:Get() then
			local StartTrace = Impact.ImpactPoint + Impact.ImpactNormal * 10
			local EndTrace = Impact.ImpactPoint - Impact.ImpactNormal * 10
			UseImpact = self:WeaponTrace(StartTrace, EndTrace)
		end

		local SpawnTransform = FTransform.Make(Impact.ImpactPoint, Impact.ImpactNormal:Rotation())
		local EffectActor = UGameplayStatics.BeginDeferredActorSpawnFromClass(self, self.ImpactTemplate, SpawnTransform)
		EffectActor = AShooterImpactEffect.Cast(EffectActor)
		if EffectActor then
			EffectActor.SurfaceHit = UseImpact
			UGameplayStatics.FinishSpawningActor(EffectActor, SpawnTransform)
		end
	end
end

function ShooterWeapon_Instan:SpawnTrailEffect(EndPoint)
	if self.TrailFX then
		local Origin = self:GetMuzzleLocation()
		local TrailPSC = UGameplayStatics.SpawnEmitterAtLocation(self, self.TrailFX, Origin, FRotator.New())
		if TrailPSC then
			TrailPSC:SetVectorParameter(self.TrailTargetParam, EndPoint)
		end
	end
end

return ShooterWeapon_Instan