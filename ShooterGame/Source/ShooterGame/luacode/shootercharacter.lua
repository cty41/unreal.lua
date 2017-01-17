local ShooterCharacter = Inherit(AShooterCharacter)

function ShooterCharacter:LuaOnStartFire()
	if self.Controller then
		AShooterPlayerController:cast(self.Controller)
		if self.Controller:IsGameInputAllowed() then
			if self:IsRunning() then
				self:SetRunning(false, false)
			end
			self:StartWeaponFire()
		end	
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

return ShooterCharacter