local ShooterCharacter = Inherit(AShooterCharacter)

function ShooterCharacter:LuaOnStartFire(a)
	A_(a)
	local Controller = AShooterPlayerController.Cast(self.Controller)
	if Controller and Controller:IsGameInputAllowed() then
		if self:IsRunning() then
			self:SetRunning(false, false)
		end
		self:StartWeaponFire()
	end
end

function ShooterCharacter:LuaStopWeaponFire()
	self:StopWeaponFire()
end

function ShooterCharacter:LuaMoveForward(val)
	-- local movement = self.CharacterMovement
	-- local bLimitRotation = movement:IsMovingOnGround() or  movement:IsFalling()
    self:AddMovementInput(self:GetActorForwardVector(), val)
end


function ShooterCharacter:LuaMoveRight(val)
    self:AddMovementInput(self:GetActorRightVector(), val)
end

function ShooterCharacter:LuaTurnAtRate( val )
	-- self:AddControllerYawInput(val*self.BaseTurnRate*GetDeltaSeconds())
end

function ShooterCharacter:LuaLookUpAtRate( val )
	-- self:AddControllerPitchInput(val*self.BaseLookUpRate*GetDeltaSeconds())
end

function ShooterCharacter:LuaSetRunning(bNewRunning, bToggle)
	self.bWantsToRun = bNewRunning;
	self.bWantsToRunToggled = bNewRunning and bToggle
	if self.Role < ENetRole.ROLE_Authority then
		self:ServerSetRunning(bNewRunning, bToggle)
	end
end

function ShooterCharacter:LuaSetTargeting(bNewTargeting)
	self.bIsTargeting = bNewTargeting
	if self.Role < ENetRole.ROLE_Authority then
		self:ServerSetTargeting(bNewTargeting)
	end
end

function ShooterCharacter:SpawnDefaultInventory()
	if self.Role < ENetRole.ROLE_Authority then
		return
	end
	local world = ULuautils.GetWorld(self)
	for i, v in ipairs(self.DefaultInventoryClasses) do
		local transfrom = FTransform.New()
		local spawnActor = UGameplayStatics.BeginDeferredActorSpawnFromClass(world, v, transfrom, ESpawnActorCollisionHandlingMethod.AlwaysSpawn)
		spawnActor = UGameplayStatics.FinishSpawningActor(spawnActor, transfrom)
		self:AddWeapon(spawnActor)
	end
	if #self.Inventory > 0 then
		self:EquipWeapon(self.Inventory[1])
	end
end

function ShooterCharacter:PostInitializeComponents()
	if self.Role == ENetRole.ROLE_Authority then
		self.Health = self:GetMaxHealth()
		self:SpawnDefaultInventory()
	end

	self:UpdatePawnMeshes()
	local MeshMIDs = {}
	for i = 1, self.Mesh:GetNumMaterials() do
		MeshMIDs[i] = self.Mesh:CreateAndSetMaterialInstanceDynamic(i-1)
	end
	self.MeshMIDs = MeshMIDs

	if not UKismetSystemLibrary.IsDedicatedServer(self) then
		if self.RespawnFX then
			UGameplayStatics.SpawnEmitterAtLocation(self, self.RespawnFX, self:K2_GetActorLocation(), self:K2_GetActorRotation())
		end
		if self.RespawnSound then
			UGameplayStatics.PlaySoundAtLocation(self, self.RespawnSound, self:K2_GetActorLocation(), self:K2_GetActorRotation())
		end
	end
end

function ShooterCharacter:UpdatePawnMeshes()
	local bIsFirstPerson = self:IsFirstPerson()
	self.Mesh1P.MeshComponentUpdateFlag = not bIsTargeting and EMeshComponentUpdateFlag.OnlyTickPoseWhenRendered or EMeshComponentUpdateFlag.AlwaysTickPoseAndRefreshBonesor
	self.Mesh1P:SetOwnerNoSee(not bIsFirstPerson)

	self.Mesh.MeshComponentUpdateFlag = bIsFirstPerson and EMeshComponentUpdateFlag.OnlyTickPoseWhenRendered or EMeshComponentUpdateFlag.AlwaysTickPoseAndRefreshBones
	self.Mesh:SetOwnerNoSee(bIsFirstPerson)
end

function ShooterCharacter:OnStartTargeting()
	local Controller = AShooterPlayerController.Cast(self.Controller)
	if Controller and Controller:IsGameInputAllowed() then
		if self:IsRunning() then
			self:SetRunning(false, false)
		end
		self:SetTargeting(true)
	end
end

return ShooterCharacter