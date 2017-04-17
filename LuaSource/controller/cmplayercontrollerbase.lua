local CMPlayerControllerBase = Inherit(CppSingleton, ACMPlayerControllerBase)

function CMPlayerControllerBase:BeginPlay()

end

function CMPlayerControllerBase:PlayerTick(DeltaTime)

end

function CMPlayerControllerBase:PreProcessInput(DeltaTime, bGamePaused)

end

function CMPlayerControllerBase:PostProcessInput(DeltaTime, bGamePaused)

end

function CMPlayerControllerBase:ProcessPlayerInput(DeltaTime, bGamePaused)
	InputMgr:Get():Update(self:GetInputState(), DeltaTime, bGamePaused)
end

return CMPlayerControllerBase