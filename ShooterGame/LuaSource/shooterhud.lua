local ShooterHUD = Inherit(AShooterHUD)

function ShooterHUD:CtorCpp()
	self.NoAmmoFadeOutTime =  1.0
	self.HitNotifyDisplayTime = 0.75
	self.KillFadeOutTime = 2.0
	self.LastEnemyHitDisplayTime = 0.2
	self.NoAmmoNotifyTime = -self.NoAmmoFadeOutTime
	self.LastKillTime = -self. KillFadeOutTime
	self.LastEnemyHitTime = -self.LastEnemyHitDisplayTime
	ShooterHUD.HitTextureOb = ShooterHUD.HitTextureOb or UTexture2D.FObjectFinder("/Game/UI/HUD/HitIndicator")
	ShooterHUD.HUDMainTextureOb = ShooterHUD.HUDMainTextureOb or UTexture2D.FObjectFinder("/Game/UI/HUD/HUDMain")
	ShooterHUD.HUDAssets02TextureOb = ShooterHUD.HUDAssets02TextureOb or UTexture2D.FObjectFinder("/Game/UI/HUD/HUDAssets02")
	ShooterHUD.LowHealthOverlayTextureOb = ShooterHUD.LowHealthOverlayTextureOb or UTexture2D.FObjectFinder("/Game/UI/HUD/LowHealthOverlay")

	self.HitNotifyTexture = ShooterHUD.HitTextureOb
	self.HUDMainTexture = ShooterHUD.HUDMainTextureOb
	self.HUDAssets02Texture = ShooterHUD.HUDAssets02TextureOb
	self.LowHealthOverlayTexture = ShooterHUD.LowHealthOverlayTextureOb

	local HitNotifyIcon = {} 
	HitNotifyIcon[EShooterHudPosition.Left+1] = UCanvas.MakeIcon(self.HitNotifyTexture,  158, 831, 585, 392)	
	HitNotifyIcon[EShooterHudPosition.FrontLeft+1] = UCanvas.MakeIcon(self.HitNotifyTexture, 369, 434, 460, 378)	
	HitNotifyIcon[EShooterHudPosition.Front+1] = UCanvas.MakeIcon(self.HitNotifyTexture,  848, 284, 361, 395)	
	HitNotifyIcon[EShooterHudPosition.FrontRight+1] = UCanvas.MakeIcon(self.HitNotifyTexture,  1212, 397, 427, 394)	
	HitNotifyIcon[EShooterHudPosition.Right+1] = UCanvas.MakeIcon(self.HitNotifyTexture, 1350, 844, 547, 321)	
	HitNotifyIcon[EShooterHudPosition.BackRight+1] = UCanvas.MakeIcon(self.HitNotifyTexture, 1232, 1241, 458, 341)	
	HitNotifyIcon[EShooterHudPosition.Back+1] = UCanvas.MakeIcon(self.HitNotifyTexture,  862, 1384, 353, 408)	
	HitNotifyIcon[EShooterHudPosition.BackLeft+1] = UCanvas.MakeIcon(self.HitNotifyTexture, 454, 1251, 371, 410)	
	self.HitNotifyIcon = HitNotifyIcon

	self.KillsBg = UCanvas.MakeIcon(self.HUDMainTexture, 15, 16, 235, 62)
	self.TimePlaceBg  = UCanvas.MakeIcon(self.HUDMainTexture, 262, 16, 255, 62)
	self.PrimaryWeapBg = UCanvas.MakeIcon(self.HUDMainTexture, 543, 17, 441, 81)
	self.SecondaryWeapBg = UCanvas.MakeIcon(self.HUDMainTexture, 676, 111, 293, 50)

	self.DeathMessagesBg = UCanvas.MakeIcon(self.HUDMainTexture, 502, 177, 342, 187)
	self.HealthBar = UCanvas.MakeIcon(self.HUDAssets02Texture, 67, 212, 372, 50)
	self.HealthBarBg = UCanvas.MakeIcon(self.HUDAssets02Texture, 67, 162, 372, 50)

	self.HealthIcon = UCanvas.MakeIcon(self.HUDAssets02Texture, 78, 262, 28, 28)
	self.KillsIcon = UCanvas.MakeIcon(self.HUDMainTexture, 318, 93, 24, 24)
	self.TimerIcon = UCanvas.MakeIcon(self.HUDMainTexture, 381, 93, 24, 24)
	self.KilledIcon = UCanvas.MakeIcon(self.HUDMainTexture, 425, 92, 38, 36)
	self.PlaceIcon = UCanvas.MakeIcon(self.HUDMainTexture, 250, 468, 21, 28)

	local Crosshair = {}
	Crosshair[EShooterCrosshairDirection.Left+1] = UCanvas.MakeIcon(self.HUDMainTexture, 43, 402, 25, 9) 
	Crosshair[EShooterCrosshairDirection.Right+1] = UCanvas.MakeIcon(self.HUDMainTexture, 88, 402, 25, 9) 
	Crosshair[EShooterCrosshairDirection.Top+1] = UCanvas.MakeIcon(self.HUDMainTexture, 74, 371, 9, 25) 
	Crosshair[EShooterCrosshairDirection.Bottom+1] = UCanvas.MakeIcon(self.HUDMainTexture, 74, 415, 9, 25) 
	Crosshair[EShooterCrosshairDirection.Center+1] = UCanvas.MakeIcon(self.HUDMainTexture, 75, 403, 7, 7) 
	self.Crosshair = Crosshair

	local Offsets = {}
	Offsets[EShooterHudPosition.Left+1] = FVector2D.New(173,0)	
	Offsets[EShooterHudPosition.FrontLeft+1] = FVector2D.New(120,125)	
	Offsets[EShooterHudPosition.Front+1] = FVector2D.New(0,173)	
	Offsets[EShooterHudPosition.FrontRight+1] = FVector2D.New(-120,125)
	Offsets[EShooterHudPosition.Right+1] = FVector2D.New(-173,0)	
	Offsets[EShooterHudPosition.BackRight+1] = FVector2D.New(-120,-125)
	Offsets[EShooterHudPosition.Back+1] = FVector2D.New(0,-173)
	Offsets[EShooterHudPosition.BackLeft+1] = FVector2D.New(120,-125)

	self.HitNotifyCrosshair = UCanvas.MakeIcon(self.HUDMainTexture, 54, 453, 50, 50)

	self.Offset = 20.0
	self.HUDLight = FColor.New(175,202,213,255)
	self.HUDDark = FColor.New(110,124,131,255)
	self.ShadowedFont.bEnableShadow = true

end

return ShooterHUD