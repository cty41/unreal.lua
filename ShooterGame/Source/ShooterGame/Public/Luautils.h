// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Luautils.generated.h"

/**
 * 
 */
UCLASS(minimalapi)
class ULuautils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
	static UWorld* GetWorld(AActor *obj);
	
	
};
