// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Luautils.generated.h"

USTRUCT(meta=(Lua=1))
struct FReplifetimeCond {
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FString PropertyName;

	UPROPERTY()
	TEnumAsByte<ELifetimeCondition> Cond;
};

UCLASS(minimalapi)
class ULuautils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
	static UWorld* GetWorld(AActor *obj);
	
	UFUNCTION()
	static bool UseSound();

	UFUNCTION()
	static void SetupAttachment(USceneComponent* Child, USceneComponent* InParent, FName InSocketName = NAME_None);

	UFUNCTION()
	static void GetPlayerViewPoint(APlayerController* controler, FVector& out_Location, FRotator& out_Rotation);

};
