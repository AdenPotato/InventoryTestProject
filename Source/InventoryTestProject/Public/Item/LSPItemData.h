// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LSPItemData.generated.h"

/*
 *		TODO: Completely Rewrite item system with fragments, Modularize the data
 */


USTRUCT()
struct FLSPAffixData : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleDefaultsOnly)
	FString Name;				//Name of stat

	UPROPERTY(VisibleDefaultsOnly)
	FString Description;		//Description of what stat Does

	UPROPERTY(VisibleDefaultsOnly)
	float Value;				//Actual Value of The stat

	UPROPERTY(VisibleDefaultsOnly)
	int32 Tier;					//Tier of Stat - Used for levels and weighted drops

	UPROPERTY(VisibleDefaultsOnly)
	FGameplayTag AffixSubType;	//Prefix or suffix

	UPROPERTY(VisibleDefaultsOnly)
	FGameplayTag AffixStatType; //This is the type of stat, like resistance, damage, or defense

	UPROPERTY(VisibleDefaultsOnly)
	FGameplayTag AffixStat;		// The actual stat it will modify

	UPROPERTY(VisibleDefaultsOnly)
	FGameplayTag ModiferType;	// The type of modifer, like additive, multiplicative, subtract, or override

	FGameplayTag GetStatType() const { return AffixStat; }
	FGameplayTag GetModiferType() const { return ModiferType; }
};


USTRUCT()
struct FBaseItemData
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly)
	FString Name;

	UPROPERTY(VisibleDefaultsOnly)
	FGameplayTagContainer ItemTags;
	
};

USTRUCT()
struct FLSPWeaponData : public FBaseItemData
{
	GENERATED_BODY()
	UPROPERTY(VisibleDefaultsOnly)
	float Damage;
	
	UPROPERTY(VisibleDefaultsOnly)
	int32 Magazine;

	UPROPERTY(VisibleDefaultsOnly)
	int32 RateOfFire;

	float Accuracy;

	TArray<FLSPAffixData> Prefix;
	
	TArray<FLSPAffixData> Suffix;
};

USTRUCT()
struct FLSPArmorData : public FBaseItemData
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly)
	float Armor;
	
	UPROPERTY(VisibleDefaultsOnly)
	float Evasion;
	
	TArray<FLSPAffixData> Prefix;
	
	TArray<FLSPAffixData> Suffix;
};

USTRUCT()
struct FLSPAccessoryData : public FBaseItemData
{
	GENERATED_BODY()

	FLSPAffixData ImplicitValue;

	TArray<FLSPAffixData> Prefix;
	
	TArray<FLSPAffixData> Suffix;
};

USTRUCT()
struct FLSPConsumableData : public FBaseItemData
{
	GENERATED_BODY()
	
	FLSPAffixData ImplicitValue;
};

USTRUCT()
struct FLSPCurrencyData : public FBaseItemData
{
	GENERATED_BODY()

	float Value;
};

USTRUCT()
struct FLSPSocketData : public FBaseItemData
{
	GENERATED_BODY()

	TArray<FLSPAffixData> SocketData;
};
