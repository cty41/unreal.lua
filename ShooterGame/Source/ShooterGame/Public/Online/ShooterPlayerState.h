// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ShooterPlayerState.generated.h"

UCLASS(meta = (Lua=1))
class AShooterPlayerState : public APlayerState
{
	GENERATED_UCLASS_BODY()


	// Begin APlayerState interface
	/** clear scores */
	UFUNCTION()
	virtual void Reset() override;

	/**
	 * Set the team 
	 *
	 * @param	InController	The controller to initialize state with
	 */
	UFUNCTION()
	virtual void ClientInitialize(class AController* InController) override;

	UFUNCTION()
	virtual void UnregisterPlayerWithSession() override;

	// End APlayerState interface

	/**
	 * Set new team and update pawn. Also updates player character team colors.
	 *
	 * @param	NewTeamNumber	Team we want to be on.
	 */
	UFUNCTION()
	void SetTeamNum(int32 NewTeamNumber);

	/** player killed someone */
	UFUNCTION()
	void ScoreKill(AShooterPlayerState* Victim, int32 Points);

	/** player died */
	UFUNCTION()
	void ScoreDeath(AShooterPlayerState* KilledBy, int32 Points);

	/** get current team */
	UFUNCTION()
	int32 GetTeamNum() const;

	/** get number of kills */
	UFUNCTION()
	int32 GetKills() const;

	/** get number of deaths */
	UFUNCTION()
	int32 GetDeaths() const;

	/** get number of points */
	UFUNCTION()
	float GetScore() const;

	/** get number of bullets fired this match */
	UFUNCTION()
	int32 GetNumBulletsFired() const;

	/** get number of rockets fired this match */
	UFUNCTION()
	int32 GetNumRocketsFired() const;

	/** get whether the player quit the match */
	UFUNCTION()
	bool IsQuitter() const;

	/** gets truncated player name to fit in death log and scoreboards */
	UFUNCTION()
	FString GetShortPlayerName() const;

	/** Sends kill (excluding self) to clients */
	UFUNCTION(Reliable, Client)
	void InformAboutKill(class AShooterPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, class AShooterPlayerState* KilledPlayerState);

	/** broadcast death to local clients */
	UFUNCTION(Reliable, NetMulticast)
	void BroadcastDeath(class AShooterPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, class AShooterPlayerState* KilledPlayerState);

	/** replicate team colors. Updated the players mesh colors appropriately */
	UFUNCTION()
	void OnRep_TeamColor();

	//We don't need stats about amount of ammo fired to be server authenticated, so just 
	//increment these with local functions
	
	UFUNCTION()
	void AddBulletsFired(int32 NumBullets);

	UFUNCTION()
	void AddRocketsFired(int32 NumRockets);

	/** Set whether the player is a quitter */
	UFUNCTION()
	void SetQuitter(bool bInQuitter);

	UFUNCTION()
	virtual void CopyProperties(class APlayerState* PlayerState) override;

	/** Set the mesh colors based on the current teamnum variable */
	UFUNCTION()
	void UpdateTeamColors();

	/** team number */
	UPROPERTY(Transient, ReplicatedUsing=OnRep_TeamColor)
	int32 TeamNumber;

	/** number of kills */
	UPROPERTY(Transient, Replicated)
	int32 NumKills;

	/** number of deaths */
	UPROPERTY(Transient, Replicated)
	int32 NumDeaths;

	/** number of bullets fired this match */
	UPROPERTY()
	int32 NumBulletsFired;

	/** number of rockets fired this match */
	UPROPERTY()
	int32 NumRocketsFired;

	/** whether the user quit the match */
	UPROPERTY()
	uint8 bQuitter : 1;

	/** helper for scoring points */
	UFUNCTION()
	void ScorePoints(int32 Points);
};
