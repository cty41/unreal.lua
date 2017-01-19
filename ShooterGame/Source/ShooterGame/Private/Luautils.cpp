// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterGame.h"
#include "Luautils.h"



UWorld* ULuautils::GetWorld(AActor* obj)
{
	return obj->GetWorld();
}

bool ULuautils::UseSound()
{
	return GEngine->UseSound();
}