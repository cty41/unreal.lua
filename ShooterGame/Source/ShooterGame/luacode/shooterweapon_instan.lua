local ShooterWeapon_Instan = Inherit(AShooterWeapon_Instant)
local RunCppCode = false
function ShooterWeapon_Instan:FireWeapon()
	if RunCppCode then return false end
	
	local RandomSeed = math.random()
	local WeaponRandomStream = FRandomStream.New()
	UKismetMathLibrary.SetRandomStreamSeed(WeaponRandomStream, RandomSeed)

	local CurrentSpread = self:GetCurrentSpread()
	local ConeHalfAngle = UKismetMathLibrary.DegreesToRadians(CurrentSpread*0.5)

	local AimDir = self:GetAdjustedAim()
	local StartTrace = self:GetCameraDamageStartLocation(AimDir)
	local ShootDir = UKismetMathLibrary.RandomUnitVectorInCone(AimDir, ConeHalfAngle)
	local EndTrace = StartTrace + UKismetMathLibrary.Multiply_VectorFloat(ShootDir, self.InstantConfig.WeaponRange)

	local Impack = self:WeaponTrace(StartTrace, EndTrace)
	self:ProcessInstantHit(Impack, StartTrace, ShootDir, RandomSeed, CurrentSpread)

	self.CurrentFiringSpread = math.min(self.InstantConfig.FiringSpreadMax, self.CurrentFiringSpread + self.InstantConfig.FiringSpreadIncrement)

	return true
end

return ShooterWeapon_Instan