local StateClass = Class(Object)
InputMgr = Class(Singleton)

function StateClass:Ctor()
	self.bIsPress = false
	self.fHoldTime = 0
	self.vLastPos = nil
end

function InputMgr:Ctor()
	local stateins = self:AddChild(StateClass:NewIns())
	self.States = {stateins}
end

function InputMgr:Update1(bIsPress, Pos, DeltaTime, bGamePaused)
	local State = self.States[1] 
	if not bIsPress and not State.bIsPress then return end

	State.fHoldTime = State.fHoldTime + DeltaTime
	if State.bIsPress then
		if bIsPress then
			if MathDis(Pos, State.vLastPos) >= 1 then
				GlobalEvent.Fire("InputTap_Move", Pos, State.fHoldTime)
			else
				GlobalEvent.Fire("InputTap_Hold", Pos, State.fHoldTime)
			end
		else
			GlobalEvent.Fire("InputTap_Release", Pos, State.fHoldTime)
			State.fHoldTime = 0
		end
	else		
		if bIsPress then
			GlobalEvent.Fire("InputTap_Press", Pos, State.fHoldTime)
		end
	end
	State.bIsPress = bIsPress
	State.vLastPos = Pos
end

function InputMgr:Update(InputState, DeltaTime, bGamePaused)
	-- if InputState[3] ~= 0 then
	-- 	A_(InputState[1], InputState[2])
	-- end
	self:Update1(InputState[3] ~= 0, {InputState[1], InputState[2]}, DeltaTime, bGamePaused)
end

return InputMgr