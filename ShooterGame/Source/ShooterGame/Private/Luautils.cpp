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

// void ULuautils::Doreplifetime_condition(AActor* actor, FString PropertyName, ELifetimeCondition cond)
// {
// 	UClass *Class = actor::StaticClass();
// 	FString namecpp = FString::Printf(TEXT("%s%s"), Class->GetPrefixCPP(), *Class->GetName());
// 	UTableUtil::GetPropertyByName(namecpp, PropertyName);
// 	for ( int32 i = 0; i < sp##v->ArrayDim; i++ )										\
// 	{																					\
// 		OutLifetimeProps.AddUnique( FLifetimeProperty( sp##v->RepIndex + i, cond ) );	\
// 	}	
// }
