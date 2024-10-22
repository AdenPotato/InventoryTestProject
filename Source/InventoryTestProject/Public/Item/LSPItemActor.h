// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LSPItemData.h"
#include "GameFramework/Actor.h"
#include "LSPItemActor.generated.h"



//Will never use but wanted to store just incase - Will remove later on
UCLASS()
class INVENTORYTESTPROJECT_API ALSPBaseLootActor : public AActor
{
	GENERATED_BODY()

private:
	FBaseItemData ItemData;
	
};

/*
 *		These are actors for object pooling. These actors are instances of loot that are reset upon pickup
 *		The goal is to have the loot spawn at a location and populate them with data, when that item is picked up we will reset each object and return
 *		them back to the object pool
 *
 *		Having Multiple actors for each type will allow for a larger pool and safer types
 */

UCLASS()
class INVENTORYTESTPROJECT_API ALSPWeaponLootActor : public AActor
{
	GENERATED_BODY()
	FLSPWeaponData ItemData;
	
	
};

UCLASS()
class INVENTORYTESTPROJECT_API ALSPArmorLootActor : public AActor
{
	GENERATED_BODY()
	FLSPArmorData ItemData;
	
	
};

UCLASS()
class INVENTORYTESTPROJECT_API ALSPAccessoryLootActor : public AActor
{
	GENERATED_BODY()
	FLSPAccessoryData ItemData;
	
	
};

UCLASS()
class INVENTORYTESTPROJECT_API ALSPConsumableLootActor : public AActor
{
	GENERATED_BODY()
	FLSPConsumableData ItemData;
	
	
};

UCLASS()
class INVENTORYTESTPROJECT_API ALSPCurrencyLootActor : public AActor
{
	GENERATED_BODY()
	FLSPCurrencyData ItemData;
	
};

UCLASS()
class INVENTORYTESTPROJECT_API ALSPSocketLootActor : public AActor
{
	GENERATED_BODY()
	FLSPSocketData ItemData;
	
	
};