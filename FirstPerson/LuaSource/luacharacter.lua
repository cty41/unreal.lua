local Character_lua = Inherit(AFirstPersonCharacter)
function Character_lua:CtorCpp()
	local CapsuleComponent = self.CapsuleComponent
	CapsuleComponent.CapsuleRadius = 55
	CapsuleComponent.CapsuleHalfHeight = 96

	self.BaseTurnRate = 45
	self.BaseLookUpRate = 45
	local FirstPersonCameraComponent = UCameraComponent.CreateDefaultSubobject(self, "FirstPersonCamera")
	self.FirstPersonCameraComponent = FirstPersonCameraComponent
	FirstPersonCameraComponent.AttachParent = CapsuleComponent
	FirstPersonCameraComponent.RelativeLocation = FVector.New(-39.56, 1.75, 64)
	FirstPersonCameraComponent.bUsePawnControlRotation = true

	local Mesh1P = USkeletalMeshComponent.CreateDefaultSubobject(self, "CharacterMesh1P")
	self.Mesh1P = Mesh1P
	Mesh1P:SetOnlyOwnerSee(true)
	Mesh1P.AttachParent = FirstPersonCameraComponent
	Mesh1P.bCastDynamicShadow = false
	Mesh1P.CastShadow = false
	Mesh1P.RelativeLocation = FVector.New(-0.5, -4.4, -155.7)
	Mesh1P.RelativeRotation = FRotator.New(1.9, -19.19, 5.2)

	local FP_Gun = USkeletalMeshComponent.CreateDefaultSubobject(self, "FP_Gun")
	self.FP_Gun = FP_Gun
	FP_Gun:SetOnlyOwnerSee(true)
	FP_Gun.bCastDynamicShadow = false
	FP_Gun.CastShadow = false
	FP_Gun.AttachParent = self.RootComponent

	local FP_MuzzleLocation = USceneComponent.CreateDefaultSubobject(self, "MuzzleLocation")
	self.FP_MuzzleLocation = FP_MuzzleLocation
	FP_MuzzleLocation.AttachParent = FP_Gun
	FP_MuzzleLocation:K2_SetRelativeLocation(FVector.New(0.2, 48.4, -10.6), false, FHitResult.New(), false)

	self.GunOffset = FVector.New(100.0, 0.0, 10.0)
	Character_lua.exampleUMG = Character_lua.exampleUMG or UUserWidget.FClassFinder("/Game/FirstPerson/UMG_example")
end

function Character_lua:BeginPlayLua()
	-- test umg
	if Character_lua.exampleUMG then
		local exampleUMG = UWidgetBlueprintLibrary.Create(self, Character_lua.exampleUMG, nil)
		exampleUMG:AddToViewport()
		local names, widgets = ULuautils.GetAllWidgets(exampleUMG, {}, {})
		local name2widget = {}
		for i = 1, #names do
			name2widget[names[i]] = widgets[i]
		end
		self.txt_Count = UTextBlock.Cast(name2widget.Text_FireCount)
		self.Delegate_OnClicked = UButton.Cast(name2widget.Button_Reset).OnClicked
		self.Delegate_OnClicked:Add(MakeCallBack(self.OnClickedReset, self))
		self:OnClickedReset()
	end

	self.FP_Gun:K2_AttachToComponent(self.Mesh1P, "GripPoint", EAttachmentRule.SnapToTarget, EAttachmentRule.SnapToTarget, EAttachmentRule.SnapToTarget, true)
	if self.bUsingMotionControllers then
		self.VR_Gun:SetHiddenInGame(false, true)
		self.Mesh1P:SetHiddenInGame(true, true)
	else
		self.VR_Gun:SetHiddenInGame(true, true)
		self.Mesh1P:SetHiddenInGame(false, true)
	end
end

function Character_lua:OnClickedReset()
	self.firecount = 0
	self.txt_Count:SetText("0")
end

function Character_lua:OnFire()
	-- test interface
	local Interface = ITestInterface.Cast(self)
	if Interface then
		A_(Interface:TestInterface(self, 18888))
	end

	if self.txt_Count then
		self.firecount = self.firecount + 1
		self.txt_Count:SetText(tostring(self.firecount))
	end
	if self.ProjectileClass then
		local world = ULuautils.GetWorld(self)
		if world then
			local SpawnRotation = self:GetControlRotation()
			local vec_offset = UKismetMathLibrary.GreaterGreater_VectorRotator(self.GunOffset, SpawnRotation) 
			local MuzzleLocation = self.FP_MuzzleLocation:K2_GetComponentLocation()
			local SpawnLocation = MuzzleLocation + vec_offset
			local transfrom = UKismetMathLibrary.MakeTransform(SpawnLocation, SpawnRotation, FVector.New(1, 1, 1))
			local spawnActor = UGameplayStatics.BeginDeferredActorSpawnFromClass(world, self.ProjectileClass, transfrom, ESpawnActorCollisionHandlingMethod.AlwaysSpawn)
			spawnActor = UGameplayStatics.FinishSpawningActor(spawnActor, transfrom)
		end
	end

	if self.FireSound then
		UGameplayStatics.PlaySoundAtLocation(self, self.FireSound, self:K2_GetActorLocation(), self:K2_GetActorRotation())
	end

	if self.FireAnimation then
		local AnimInstance = self.Mesh1P:GetAnimInstance()
		if AnimInstance then
			AnimInstance:Montage_Play(self.FireAnimation, 1);
		end
	end
end

return Character_lua