require "luaclass"
CppObjectBase = Class(ObjectBase)
CppSingleton = Class(CppObjectBase)
addfunc(CppSingleton, Singleton)

function CppObjectBase:Destroy()
	if self.K2_DestroyActor then
		self:K2_DestroyActor()
	end
end

function CppObjectBase:GetName()
	return ULuautils.GetName(self)		 
end

function CppObjectBase:NewOn(inscpp, ...)
	local ins = self:Ins()
	ins._cppinstance_ = inscpp
	_objectins2luatable[inscpp] = ins
	ins:Initialize(...)
	return ins
end

function CppSingleton:NewOn(...)
	if self:GetRaw() then
		error("CppSingleton NewOn error")
	else
		local ins =  CppObjectBase.NewOn(self, ...)
		self._meta_._ins = ins
	end
end

return CppObjectBase