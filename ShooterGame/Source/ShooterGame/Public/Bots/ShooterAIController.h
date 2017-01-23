// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "AIController.h"
#include "ShooterAIController.generated.h"

class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(config=Game, meta = (Lua=1), minimalapi)
class AShooterAIController : public AAIController
{
	GENERATED_UCLASS_BODY()

private:
	UPROPERTY(transient)
	UBlackboardComponent* BlackboardComp;

	/* Cached BT component */
	UPROPERTY(transient)
	UBehaviorTreeComponent* BehaviorComp;
public:

	// Begin AController interface
	UFUNCTION()
	virtual void GameHasEnded(class AActor* EndGameFocus = NULL, bool bIsWinner = false) override;
	UFUNCTION()
	virtual void Possess(class APawn* InPawn) override;
	UFUNCTION()
	virtual void UnPossess() override;
	UFUNCTION()
	virtual void BeginInactiveState() override;
	// End APlayerController interface
	UFUNCTION()
	void Respawn();
	UFUNCTION()
	void CheckAmmo(const class AShooterWeapon* CurrentWeapon);
	UFUNCTION()
	void SetEnemy(class APawn* InPawn);
	UFUNCTION()
	class AShooterCharacter* GetEnemy() const;

	/* If there is line of sight to current enemy, start firing at them */
	UFUNCTION(BlueprintCallable, Category=Behavior)
	void ShootEnemy();

	/* Finds the closest enemy and sets them as current target */
	UFUNCTION(BlueprintCallable, Category=Behavior)
	void FindClosestEnemy();

	UFUNCTION(BlueprintCallable, Category = Behavior)
	bool FindClosestEnemyWithLOS(AShooterCharacter* ExcludeEnemy);
		
	UFUNCTION()
	bool HasWeaponLOSToEnemy(AActor* InEnemyActor, const bool bAnyEnemy) const;

	// Begin AAIController interface
	/** Update direction AI is looking based on FocalPoint */
	UFUNCTION()
	virtual void UpdateControlRotation(float DeltaTime, bool bUpdatePawn = true) override;
	// End AAIController interface

	// Check of we have LOS to a character
	bool LOSTrace(AShooterCharacter* InEnemyChar) const;

	UPROPERTY()
	int32 EnemyKeyID;
	UPROPERTY()	
	int32 NeedAmmoKeyID;

	/** Handle for efficient managem
	ent of Respawn timer */
	UPROPERTY()	
	FTimerHandle TimerHandle_Respawn;

public:
	/** Returns BlackboardComp subobject **/
	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }
	/** Returns BehaviorComp subobject **/
	FORCEINLINE UBehaviorTreeComponent* GetBehaviorComp() const { return BehaviorComp; }
};
