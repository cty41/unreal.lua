local ShooterCharacter = Inherit(AShooterCharacter)

function ShooterCharacter:OnStartFire()
	local Controller = AShooterPlayerController.Cast(self.Controller)
	if Controller and Controller:IsGameInputAllowed() then
		if self:IsRunning() then
			self:SetRunning(false, false)
		end
		self:StartWeaponFire()
	end
end

function ShooterCharacter:OnStopFire()
	self:StopWeaponFire()
end

function ShooterCharacter:MoveForward(val)
	-- local movement = self.CharacterMovement
	-- local bLimitRotation = movement:IsMovingOnGround() or  movement:IsFalling()
    self:AddMovementInput(self:GetActorForwardVector(), val)
end


function ShooterCharacter:MoveRight(val)
    self:AddMovementInput(self:GetActorRightVector(), val)
end

function ShooterCharacter:TurnAtRate( val )
	-- self:AddControllerYawInput(val*self.BaseTurnRate*GetDeltaSeconds())
end

function ShooterCharacter:LookUpAtRate( val )
	-- self:AddControllerPitchInput(val*self.BaseLookUpRate*GetDeltaSeconds())
end

function ShooterCharacter:SetRunning(bNewRunning, bToggle)
	self.bWantsToRun = bNewRunning;
	self.bWantsToRunToggled = bNewRunning and bToggle
	if self.Role < ENetRole.ROLE_Authority then
		self:ServerSetRunning(bNewRunning, bToggle)
	end
end

function ShooterCharacter:SetTargeting(bNewTargeting)
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

function ShooterCharacter:OnNextWeapon()
	local Controller = AShooterPlayerController.Cast(self.Controller)
	if Controller and Controller:IsGameInputAllowed() then
		local Inventory = self.Inventory
		local CurrentWeapon = self.CurrentWeapon
		if #Inventory >= 2 and (CurrentWeapon == nil or CurrentWeapon:GetCurrentState() ~= EWeaponState.Equipping) then
			local index = Get(Inventory, CurrentWeapon)
			local NextWeapon = Inventory[math.mod(index, #Inventory)+1]
			self:EquipWeapon(NextWeapon)
		end
	end	
end

function ShooterCharacter:StartWeaponFire()
	if not self.bWantsToFire then
		self.bWantsToFire = true
		if self.CurrentWeapon then
			self.CurrentWeapon:StartFire()
		end
	end
end

function ShooterCharacter:StopWeaponFire()
	if self.bWantsToFire then
		self.bWantsToFire = false
		if self.CurrentWeapon then
			self.CurrentWeapon:StopFire()
		end
	end
end

function ShooterCharacter:CanFire()
	
end

function ShooterCharacter:IsAlive()
	return self.Health > 0
end

function ShooterCharacter:IsRunning()
	if not self.CharacterMovement then
		return false
	end
	local v = self:GetVelocity()
	local f = self:GetActorForwardVector()
	return (self.bWantsToRun or self.bWantsToRunToggled) and not v:IsZero() and v:Normal2D():Dot(f) > -0.1
end

function ShooterCharacter:Tick(DeltaSeconds)
	if self.bWantsToRunToggled and not self:IsRunning() then
		self:SetRunning(false, false)
	end

	local MyPc = AShooterPlayerController.Cast(self.Controller)
	if MyPc and MyPc:HasHealthRegen() then
		if self.Health < self:GetMaxHealth() then
			self.Health = self.Health + 5 * DeltaSeconds
			if self.Health > self:GetMaxHealth() then
				self.Health = self:GetMaxHealth()
			end
		end
	end

	if ULuautils.UseSound() then
		if self.LowHealthSound then
			if self.Health > 0 and self.Health < self:GetMaxHealth() * self.LowHealthPercentage and 
				( not self.LowHealthWarningPlayer or not self.LowHealthWarningPlayer:IsPlaying()) then
				self.LowHealthWarningPlayer = UGameplayStatics.SpawnSoundAttached(self.LowHealthSound, self.RootComponent,
					"", FVector.New(), FRotator.New() ,EAttachLocation.KeepRelativeOffset, true, 1, 1, 0, nil, nil);
				self.LowHealthWarningPlayer:SetVolumeMultiplier(0)
			elseif (self.Health>self:GetMaxHealth()*self.LowHealthPercentage or self.Health <0) and self.LowHealthWarningPlayer and 
				self.LowHealthWarningPlayer:IsPlaying() then
				self.LowHealthWarningPlayer:Stop()
			end

			if self.LowHealthWarningPlayer and self.LowHealthWarningPlayer:IsPlaying() then
				MinVolume = 0.3
				VolumeMultiplier = (1 - (self.Health / (self:GetMaxHealth()*self.LowHealthPercentage)))
				self.LowHealthWarningPlayer:SetVolumeMultiplier(MinVolume + (1 - MinVolume) * VolumeMultiplier)
			end
		end
		self:UpdateRunSounds()
	end
end

return ShooterCharacter