local ShooterWeapon_Projectile = Inherit(require "shooterweapon", AShooterWeapon_Projectile)
local function RunCppCode()
	return false
end

function ShooterWeapon_Projectile:FireWeapon()
	if RunCppCode() then return false end
	local ShootDir = self:GetAdjustedAim()
	local Origin = self:GetMuzzleLocation()

	local ProjectileAdjustRange = 10000
	local StartTrace = self:GetCameraDamageStartLocation(ShootDir)
	local EndTrace = StartTrace + ShootDir * ProjectileAdjustRange
	local Impact = self:WeaponTrace(StartTrace, EndTrace)

	if Impact.bBlockingHit then
		local AdjustedDir = ( Impact.ImpactPoint - Origin):Normal()
		local bWeaponPenetration = false

		local DirectionDot = AdjustedDir:Dot(ShootDir)
		if DirectionDot < 0 then
			bWeaponPenetration = true
		elseif DirectionDot < 0.5 then
			local MuzzleStartTrace = Origin - self:GetMuzzleLocation() * 150
			local MuzzleEndTrace = Origin
			local MuzzleImpact = self:WeaponTrace(MuzzleStartTrace, MuzzleEndTrace)

			if MuzzleImpact.bBlockingHit then
				bWeaponPenetration = true
			end
		end

		if bWeaponPenetration then
			Origin = Impact.ImpactPoint - ShootDir * 10
		else
			ShootDir = AdjustedDir
		end
	end

	self:ServerFireProjectile(Origin, ShootDir)

	return true
end

function ShooterWeapon_Projectile:ServerFireProjectile_Implementation(Origin, ShootDir)
	if RunCppCode() then return false end
	local SpawnTM = FTransform.Make(Origin, ShootDir:Rotation())
	local Projectile = AShooterProjectile.Cast(UGameplayStatics.BeginDeferredActorSpawnFromClass(self, self.ProjectileConfig.ProjectileClass, SpawnTM))
	if Projectile then
		Projectile.Instigator = self.Instigator
		Projectile:SetOwner(self)
		Projectile:InitVelocity(ShootDir)

		UGameplayStatics.FinishSpawningActor(Projectile, SpawnTM)
	end
	return true
end

return ShooterWeapon_Projectile
