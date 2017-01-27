// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterGame.h"
#include "Luautils.h"
#include "TableUtil.h"



UWorld* ULuautils::GetWorld(AActor* obj)
{
	return obj->GetWorld();
}

bool ULuautils::UseSound()
{
	return GEngine->UseSound();
}

void ULuautils::SetupAttachment(USceneComponent* Child, USceneComponent* InParent, FName InSocketName)
{
	Child->SetupAttachment(InParent, InSocketName);
}

void ULuautils::GetPlayerViewPoint(APlayerController* controler, FVector& out_Location, FRotator& out_Rotation )
{
	if (controler)
		controler->GetPlayerViewPoint(out_Location, out_Rotation);
}

FRotator ULuautils::GetViewRotation(APawn* pawn)
{
	return pawn->GetViewRotation();
}
