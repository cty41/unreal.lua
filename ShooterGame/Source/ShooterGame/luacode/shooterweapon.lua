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

return ShooterWeapon