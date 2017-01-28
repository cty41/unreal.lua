local ShooterHUD = Inherit(AShooterHUD)

function ShooterHUD:CtorCpp()
	ShooterHUD.HitTextureOb = ShooterHUD.HitTextureOb or UTexture2D.FObjectFinder("/Game/UI/HUD/HitIndicator")
	ShooterHUD.HUDMainTextureOb = ShooterHUD.HUDMainTextureOb or UTexture2D.FObjectFinder("/Game/UI/HUD/HUDMain")
	ShooterHUD.HUDAssets02TextureOb = ShooterHUD.HUDAssets02TextureOb or UTexture2D.FObjectFinder("/Game/UI/HUD/HUDAssets02")
	ShooterHUD.LowHealthOverlayTextureOb = ShooterHUD.LowHealthOverlayTextureOb or UTexture2D.FObjectFinder("/Game/UI/HUD/LowHealthOverlay")

	self.HitNotifyTexture = ShooterHUD.HitTextureOb
	self.HUDMainTexture = ShooterHUD.HUDMainTextureOb
	self.HUDAssets02Texture = ShooterHUD.HUDAssets02TextureOb
	self.LowHealthOverlayTexture = ShooterHUD.LowHealthOverlayTextureOb
end

return ShooterHUD