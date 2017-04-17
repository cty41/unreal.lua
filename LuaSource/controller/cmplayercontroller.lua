local CMPlayerControllerBase = require "controller.cmplayercontrollerbase"
local CMPlayerController = Inherit(CMPlayerControllerBase, ACatchMePlayerController)

function CMPlayerController:Ctor( )
	self:On("InputTap_Press", self.HandleTap, self)
	self:On("InputTap_Hold", self.HandleTapHold, self)
	self:On("InputTap_Release", self.HandleTapRelease, self)
	self:On("InputTap_Move", self.HandleTapMove, self)
	self.SpawnActors = {}
	self.Count = 0
	self.TestUI = require "ui.test":Create(self)
	self.TestUI:Wnd("btn_clear"):Event("OnClicked", self.ClearAllCharacter, self)
end

function CMPlayerController:HandleTap(Pos)
	local HitResult = FHitResult.New()
	local isHit = self:GetHitResult(Pos[1], Pos[2], HitResult, ECollisionChannel.ECC_Pawn)
	if isHit then
		local hitactor = HitResult.Actor:Get()
		if type(hitactor) == "table" then
			if hitactor ~= G_GameStatics.GameMode.defaultPawn then
				self.SpawnActors[hitactor] = nil
				hitactor:Release()
				self.Count = self.Count - 1
				self:SetTxtCount()
			end
		else
			local HitLocation = HitResult.Location
			local SpawnLocation = FVector.New(HitLocation.X, HitLocation.Y, HitLocation.Z)
			local SpawnRotation = FRotator.New(0, 0, 0)
			local transfrom = UKismetMathLibrary.MakeTransform(SpawnLocation, SpawnRotation, FVector.New(1, 1, 1))
			local CharacterClass = ACatchMeCharacter.Class()
			local spawnActor = UGameplayStatics.BeginDeferredActorSpawnFromClass(self, CharacterClass, transfrom, ESpawnActorCollisionHandlingMethod.AlwaysSpawn)
			local mesh = USkeletalMesh.LoadObject(self, Cfg("meshs")[1].mesh)
			local anim = UAnimBlueprint.LoadObject(self, Cfg("meshs")[1].anim)
			spawnActor.Mesh:SetSkeletalMesh(mesh)
			spawnActor.Mesh:SetAnimInstanceClass(anim.GeneratedClass)
			spawnActor = UGameplayStatics.FinishSpawningActor(spawnActor, transfrom)
			self.SpawnActors[spawnActor] = true
			self.Count = self.Count + 1
			self:SetTxtCount()
		end
	end
end	

function CMPlayerController:SetTxtCount( )
	self.TestUI:Wnd("txt_count"):SetText(tostring(self.Count))		
end	

function CMPlayerController:ClearAllCharacter( )
	for actor in pairs(self.SpawnActors) do
		actor:Release()
	end
	self.SpawnActors = {}
	self.Count = 0
	self:SetTxtCount()
end

function CMPlayerController:HandleTapRelease(Pos, HoldTime)
	-- A_("release", Pos[1], Pos[2], HoldTime)
end		

function CMPlayerController:HandleTapHold(Pos, HoldTime)
	-- A_("Hold", Pos[1], Pos[2], HoldTime)
end		

function CMPlayerController:HandleTapMove(Pos, HoldTime)
	-- A_("Move", Pos[1], Pos[2], HoldTime)
end

return CMPlayerController