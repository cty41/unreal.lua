local CMGameModeBase = Inherit(CppSingleton, ACMGameModeBase)

function CMGameModeBase:Ctor()
	G_GameStatics.GameMode = self
end

function CMGameModeBase:BeginPlay()
end

function CMGameModeBase:SetDefaultPawn(defaultPawn)
	self.defaultPawn = defaultPawn
end

return CMGameModeBase
