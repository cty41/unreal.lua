local ShooterWeapon = Inherit(AShooterWeapon)
local RunCppCode = false
function ShooterWeapon:CtorCpp()
	local Mesh1P = USkeletalMeshComponent.CreateDefaultSubobject(self, "WeaponMesh1P")
	Mesh1P.MeshComponentUpdateFlag = EMeshComponentUpdateFlag.OnlyTickPoseWhenRendered
	Mesh1P.bReceivesDecals = false
	Mesh1P.CastShadow = false
	Mesh1P:SetCollisionObjectType(ECollisionChannel.ECC_WorldDynamic)
	Mesh1P:SetCollisionEnabled(ECollisionEnabled.NoCollision)
	Mesh1P:SetCollisionResponseToAllChannels(ECollisionResponse.ECR_Ignore)
	self.RootComponent = Mesh1P
	self.Mesh1P = Mesh1P

	local Mesh3P = USkeletalMeshComponent.CreateDefaultSubobject(self, "WeaponMesh3P")
	Mesh3P.MeshComponentUpdateFlag = EMeshComponentUpdateFlag.OnlyTickPoseWhenRendered
	Mesh3P.bReceivesDecals = false
	Mesh3P.CastShadow = true
	Mesh3P:SetCollisionObjectType(ECollisionChannel.ECC_WorldDynamic)
	Mesh3P:SetCollisionEnabled(ECollisionEnabled.NoCollision)
	Mesh3P:SetCollisionResponseToAllChannels(ECollisionResponse.ECR_Ignore)
	Mesh3P:SetCollisionResponseToChannel(ECollisionChannel.ECC_GameTraceChannel1, ECollisionResponse.ECR_Block)
	Mesh3P:SetCollisionResponseToChannel(ECollisionChannel.ECC_Visibility, ECollisionResponse.ECR_Block)
	Mesh3P:SetCollisionResponseToChannel(ECollisionChannel.ECC_GameTraceChannel2, ECollisionResponse.ECR_Block)
	Mesh3P.AttachParent = Mesh1P
	self.Mesh3P = Mesh3P

	self.bLoopedMuzzleFX = false
	self.bLoopedFireAnim = false
	self.bPlayingFireAnim = false
	self.bIsEquipped = false
	self.bWantsToFire = false
	self.bPendingReload = false
	self.bPendingEquip = false
	self.CurrentState = EWeaponState.Idle

	self.CurrentAmmo = 1000
	self.CurrentAmmoInClip = 0
	self.BurstCounter = 0
	self.LastFireTime = 0

	self.PrimaryActorTick.bCanEverTick = true
	self.PrimaryActorTick.TickGroup = ETickingGroup.TG_PrePhysics

	self.bReplicates = true
	self.bNetUseOwnerRelevancy = true
end

function ShooterWeapon:OnEquip(LastWeapon)
	if RunCppCode then return false end
	self:AttachMeshToPawn()
	self.bPendingEquip = true
	self:DetermineWeaponState()
	if LastWeapon then
		local Duration = self:PlayWeaponAnimation(self.EquipAnim)
		if Duration < 0 then
			Duration = 0.5
		end
		self.EquipStartedTime = GetTimeSeconds(self)
		self.EquipDuration = Duration
		self.timerhandle_equipfinish = TimerMgr:Get():On(self.OnEquipFinished, self):Time(Duration*1000):Num(1)
	else
		self:OnEquipFinished()
	end
	local MyPawn = self.MyPawn
	if MyPawn and MyPawn:IsLocallyControlled() then
		self:PlayWeaponSound(self.EquipSound)
	end
end

function ShooterWeapon:AttachMeshToPawn()
	local MyPawn = self.MyPawn
	if MyPawn then
		self:DetachMeshFromPawn()
		local AttachPoint = MyPawn:GetWeaponAttachPoint()
		if MyPawn:IsLocallyControlled() then
			local PawnMesh1p = MyPawn:GetSpecifcPawnMesh(true)
			local PawnMesh3p = MyPawn:GetSpecifcPawnMesh(false)
			self.Mesh1P:SetHiddenInGame(false)
			self.Mesh3P:SetHiddenInGame(false)
			self.Mesh1P:K2_AttachToComponent(PawnMesh1p, AttachPoint, EAttachmentRule.KeepRelative,EAttachmentRule.KeepRelative,EAttachmentRule.KeepRelative,false)
			self.Mesh3P:K2_AttachToComponent(PawnMesh3p, AttachPoint, EAttachmentRule.KeepRelative,EAttachmentRule.KeepRelative,EAttachmentRule.KeepRelative,false)
		else
			local UseWeaponMesh = self:GetWeaponMesh()
			local UsePawnMesh = MyPawn:GetPawnMesh()
			UseWeaponMesh:K2_AttachToComponent(UsePawnMesh, AttachPoint, EAttachmentRule.KeepRelative,EAttachmentRule.KeepRelative,EAttachmentRule.KeepRelative,false)
			UseWeaponMesh:SetHiddenInGame(false)
		end
	end
end

function ShooterWeapon:OnEquipFinished()
	if RunCppCode then return false end
	self:AttachMeshToPawn()

	self.bIsEquipped = true
	self.bPendingEquip = false

	self:DetermineWeaponState()

	local MyPawn = self.MyPawn 
	if MyPawn then
		if MyPawn:IsLocallyControlled() and self.CurrentAmmoInClip <= 0 and self:CanReload() then
			self:StartReload(false)
		end
	end
end

function ShooterWeapon:OnUnEquip()
	if RunCppCode then return false end
	self:DetachMeshFromPawn()
	self.bIsEquipped = false
	self:StopFire()

	if self.bPendingReload then
		self:StopWeaponAnimation(self.ReloadAnim)
		bPendingReload = false
		if self.timerhandle_stoprelload	then
			self.timerhandle_stoprelload:Destroy()
		end
		if self.timerhandle_reloadweapon then
			self.timerhandle_reloadweapon:Destroy()
		end
	end

	if self.bPendingEquip then
		self:StopWeaponAnimation(self.EquipAnim)
		self.bPendingEquip = false
		
		if self.timerhandle_equipfinish then 
			self.timerhandle_equipfinish:Destroy() 
		end
	end

	self:DetermineWeaponState()
end

function ShooterWeapon:DetachMeshFromPawn()
	self.Mesh1P:K2_DetachFromComponent()
	self.Mesh1P:SetHiddenInGame(true)

	self.Mesh3P:K2_DetachFromComponent()
	self.Mesh3P:SetHiddenInGame(true)
end

function ShooterWeapon:StartReload(bFromReplication)
	if RunCppCode then return false end
	if not bFromReplication and self.Role < ENetRole.ROLE_Authority then
		self:ServerStartReload()
	end

	if bFromReplication or self:CanReload() then
		self.bPendingReload = true
		self:DetermineWeaponState()
		local AnimDuration = self:PlayWeaponAnimation(self.ReloadAnim)
		if AnimDuration < 0 then
			AnimDuration = self.WeaponConfig.NoAnimReloadDuration
		end
		self.timerhandle_stoprelload = TimerMgr:Get():On(self.StopReload, self):Time(AnimDuration*1000):Num(1)
		if self.Role == ENetRole.ROLE_Authority then
			self.timerhandle_reloadweapon = TimerMgr:Get():On(self.ReloadWeapon, self):Time(math.max(100, AnimDuration*1000-100)):Num(1)
		end

		local MyPawn = self.MyPawn
		if MyPawn and MyPawn:IsLocallyControlled() then
			self:PlayWeaponSound(self.ReloadSound)
		end
	end
	return true
end

function ShooterWeapon:GetLifetimeReplicatedProps()
	local t = {}
	table.insert(t, FReplifetimeCond.NewItem("MyPawn"))
	table.insert(t, FReplifetimeCond.NewItem("CurrentAmmo", ELifetimeCondition.COND_OwnerOnly))
	table.insert(t, FReplifetimeCond.NewItem("CurrentAmmoInClip", ELifetimeCondition.COND_OwnerOnly))
	table.insert(t, FReplifetimeCond.NewItem("BurstCounter", ELifetimeCondition.COND_SkipOwner))
	table.insert(t, FReplifetimeCond.NewItem("bPendingReload", ELifetimeCondition.COND_SkipOwner))
	return t
end

function ShooterWeapon:UseAmmo()
	if RunCppCode then return false end
	if not self:HasInfiniteAmmo() then
		self.CurrentAmmoInClip = self.CurrentAmmoInClip - 1
	end

	if not self:HasInfiniteAmmo() and not self:HasInfiniteClip() then
		self.CurrentAmmo = self.CurrentAmmo - 1
	end

	local MyPawn = self.MyPawn
	local BotAI = MyPawn and AShooterAIController.Cast(MyPawn:GetController())
	local PlayerController = MyPawn and AShooterPlayerController.Cast(MyPawn:GetController())

	if BotAI then
		BotAI:CheckAmmo(self)
	elseif PlayerController then
		local PlayerState = AShooterPlayerState.Cast(PlayerController.PlayerState)
		local AmmoType = self:GetAmmoType()
		if AmmoType == EAmmoType.ERocket then
			PlayerState:AddRocketsFired(1)
		elseif AmmoType == EAmmoType.EBullet then
			PlayerState:AddBulletsFired(1)
		else
			PlayerState:AddBulletsFired(1)
		end
	end
	return true
end

function ShooterWeapon:HandleFiring()
	-- do return false end
	if RunCppCode then return false end
	local MyPawn = self.MyPawn
	if (self.CurrentAmmoInClip > 0 or self:HasInfiniteClip() or self:HasInfiniteAmmo()) and self:CanFire() then
		if not UKismetSystemLibrary.IsDedicatedServer(self) then
			self:SimulateWeaponFire()
		end

		if MyPawn  and MyPawn:IsLocallyControlled() then
			self:FireWeapon()
			self:UseAmmo()
			self.BurstCounter = self.BurstCounter + 1
		end
	elseif self:CanReload() then
		self:StartReload()
	elseif MyPawn  and MyPawn:IsLocallyControlled() then
		if self:GetCurrentAmmo() == 0 and not self.bRefiring then
			self:PlayWeaponSound(self.OutOfAmmoSound)
			local MyPC = AShooterPlayerController.Cast(MyPawn:GetController())
			local MyHUD = MyPC and AShooterHUD.Cast(MyPC:GetHUD())
			if MyHUD then
				MyHUD:NotifyOutOfAmmo()
			end
		end

		if self.BurstCounter > 0 then
			self:OnBurstFinished()
		end
	end

	if MyPawn and MyPawn:IsLocallyControlled() then
		if self.Role < ENetRole.ROLE_Authority then
			self:ServerHandleFiring()
		end

		if self.CurrentAmmoInClip <= 0 and self:CanReload() then
			self:StartReload()
		end

		local bRefiring = (self.CurrentState == EWeaponState.Firing and self.WeaponConfig.TimeBetweenShots > 0)
		self.bRefiring = bRefiring
		if bRefiring then 
			self.timerhandle_handlefiring = TimerMgr:Get():On(self.HandleFiring, self):Time(self.WeaponConfig.TimeBetweenShots*1000):Num(1)
		end
	end
	self.LastFireTime = GetTimeSeconds(self)
	return true
end

function ShooterWeapon:OnBurstStarted()
	if RunCppCode then return false end
	local GameTime = GetTimeSeconds(self)
	if self.LastFireTime > 0 and self.WeaponConfig.TimeBetweenShots > 0 and self.LastFireTime+self.WeaponConfig.TimeBetweenShots > GameTime then
		self.timerhandle_handlefiring = TimerMgr:Get():On(self.HandleFiring, self):Time((self.LastFireTime + self.WeaponConfig.TimeBetweenShots - GameTime)*1000):Num(1)
	else
		self:HandleFiring()
	end
	return true
end

function ShooterWeapon:OnBurstFinished()
	if RunCppCode then return false end
	self.BurstCounter = 0
	if not UKismetSystemLibrary.IsDedicatedServer(self) then
		self:StopSimulatingWeaponFire()
	end
	if self.timerhandle_handlefiring then self.timerhandle_handlefiring:Destroy() end
	self.bRefiring = false
	return true
end

function ShooterWeapon:GetCameraAim()
	local PlayerController = self.Instigator and AShooterPlayerController.Cast(self.Instigator.Controller)
	local FinalAim = FVector.ZeroVector()

	if PlayerController then
		local CamLoc, CamRot = ULuautils.GetPlayerViewPoint(PlayerController, FVector.New(), FRotator.New())
		FinalAim = CamRot:Vector()
	elseif self.Instigator then
		FinalAim = self.Instigator:GetBaseAimRotation():Vector()
	end

	return FinalAim
end

function ShooterWeapon:GetAdjustedAim()
	local PlayerController = self.Instigator and AShooterPlayerController.Cast(self.Instigator.Controller)

	local FinalAim = FVector.ZeroVector()
	if PlayerController then
		local CamLoc, CamRot = ULuautils.GetPlayerViewPoint(PlayerController, FVector.New(), FRotator.New())
		FinalAim = CamRot:Vector()
	elseif self.Instigator then
		local MyPawn = self.MyPawn
		local AIController = MyPawn and AShooterAIController.Cast(MyPawn.Controller)
		if AIController then
			FinalAim = AIController:GetControlRotation():Vector()
		else
			FinalAim = self.Instigator:GetBaseAimRotation():Vector()
		end
	end

	return FinalAim
end

return ShooterWeapon