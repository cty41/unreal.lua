local luaprojectile = Inherit(AFirstPersonProjectile)

function luaprojectile:CtorCpp()
	self = ActorMgr:Get():GetIns(self, "luaprojectile")
	local CollisionComp = USphereComponent.CreateDefaultSubobject(self, "SphereCompX")
	self.CollisionComp = CollisionComp
	CollisionComp.SphereRadius = 5.0
	CollisionComp.BodyInstance.CollisionProfileName = "Projectile"
	local WalkableSlopeOverride = FWalkableSlopeOverride.New()
	WalkableSlopeOverride.WalkableSlopeBehavior = EWalkableSlopeBehavior.WalkableSlope_Unwalkable
	WalkableSlopeOverride.WalkableSlopeAngle = 0
	CollisionComp:SetWalkableSlopeOverride(WalkableSlopeOverride)
	CollisionComp.CanCharacterStepUpOn = ECanBeCharacterBase.ECB_No
	self.RootComponent = CollisionComp

	local ProjectileMovement = UProjectileMovementComponent.CreateDefaultSubobject(self, "ProjectileComp")
	self.ProjectileMovement = ProjectileMovement
	ProjectileMovement.UpdatedComponent = self.CollisionComp
 	ProjectileMovement.InitialSpeed = 3000
 	ProjectileMovement.MaxSpeed = 3000
 	ProjectileMovement.bRotationFollowsVelocity = true
 	ProjectileMovement.bShouldBounce = true
 	
 	self.InitialLifeSpan = 3
end

function luaprojectile:BeginPlay( )
	self.OnComponentHit = self.CollisionComp.OnComponentHit
	self.OnComponentHit:Add(MakeCallBack(self.OnHit, self))		
end

function luaprojectile:OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit)
	if OtherActor and self._cppinstance_ ~= OtherActor and OtherComp and OtherComp:IsSimulatingPhysics() then
		OtherComp:AddImpulseAtLocation(UKismetMathLibrary.Multiply_VectorFloat(self:GetVelocity(), 100), self:K2_GetActorLocation())

		self:DestroyCpp()
	end
end

return luaprojectile