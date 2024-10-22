// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

class UGameplayTagsManager;

struct FLSPGameplayTags
{
public:
	static const FLSPGameplayTags& Get() { return GameplayTags; }

	static void InitializeNativeTags();

	//Tags for Game
	FGameplayTag Item_Type_None;
	FGameplayTag Item_Type_Weapon;
	FGameplayTag Item_Type_Armor;
	FGameplayTag Item_Type_Accessory;
	FGameplayTag Item_Type_Consumable;
	FGameplayTag Item_Type_Currency;
	FGameplayTag Item_Type_Socket;

	FGameplayTag Item_Behavior_None;
	FGameplayTag Item_Behavior_Equipment;
	FGameplayTag Item_Behavior_SingleUse;
	FGameplayTag Item_Behavior_MultipleUse;
	FGameplayTag Item_Behavior_Socket;
	FGameplayTag Item_Behavior_Stackable;

	FGameplayTag Item_Rarity_None;
	FGameplayTag Item_Rarity_Common;
	FGameplayTag Item_Rarity_Rare;
	FGameplayTag Item_Rarity_Epic;
	FGameplayTag Item_Rarity_Legendary;

	FGameplayTag Item_Affix_Type_None;
	FGameplayTag Item_Affix_Type_Prefix;
	FGameplayTag Item_Affix_Type_Suffix;
	
protected:
	void AddAllTags(UGameplayTagsManager& Manager);

	void AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment);
	
private:
	static FLSPGameplayTags GameplayTags;
};
