// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ShooterWeapon_Projectile.h"

#include "ShooterProjectile.generated.h"

// 
UCLASS(Abstract, Blueprintable, minimalapi)
class AShooterProjectile : public AActor
{
	GENERATED_UCLASS_BODY()
public:
	/** initial setup */
	virtual void PostInitializeComponents() override;

	/** setup velocity */
	UFUNCTION()
	void InitVelocity(FVector& ShootDirection);

	/** handle hit */
	UFUNCTION()
	void OnImpact(const FHitResult& HitResult);

	/** movement component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	UProjectileMovementComponent* MovementComp;

	/** collisions */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	USphereComponent* CollisionComp;

	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	UParticleSystemComponent* ParticleComp;


	/** effects for explosion */
	UPROPERTY(EditDefaultsOnly, Category=Effects)
	TSubclassOf<class AShooterExplosionEffect> ExplosionTemplate;

	/** controller that fired me (cache for damage calculations) */
	UPROPERTY()
	TWeakObjectPtr<AController> MyController;

	/** projectile data */
	UPROPERTY()
	struct FProjectileWeaponData WeaponConfig;

	/** did it explode? */
	UPROPERTY(Transient, ReplicatedUsing=OnRep_Exploded)
	bool bExploded;

	/** [client] explosion happened */
	UFUNCTION()
	void OnRep_Exploded();

	/** trigger explosion */
	UFUNCTION()
	void Explode(const FHitResult& Impact);

	/** shutdown projectile and prepare for destruction */
	UFUNCTION()
	void DisableAndDestroy();

	/** update velocity on client */
	UFUNCTION()
	virtual void PostNetReceiveVelocity(const FVector& NewVelocity) override;


	/** Returns MovementComp subobject **/
	FORCEINLINE UProjectileMovementComponent* GetMovementComp() const { return MovementComp; }
	/** Returns CollisionComp subobject **/
	FORCEINLINE USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ParticleComp subobject **/
	FORCEINLINE UParticleSystemComponent* GetParticleComp() const { return ParticleComp; }
};
