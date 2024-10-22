// Fill out your copyright notice in the Description page of Project Settings.


#include "LSPGameplayTags.h"
#include "GameplayTagsManager.h"
#include "Engine/EngineTypes.h"

FLSPGameplayTags FLSPGameplayTags::GameplayTags;

void FLSPGameplayTags::InitializeNativeTags()
{
	UGameplayTagsManager& GameplayTagsManager = UGameplayTagsManager::Get();
	 
	GameplayTags.AddAllTags(GameplayTagsManager);
	 
	GameplayTagsManager.DoneAddingNativeTags();
}

void FLSPGameplayTags::AddAllTags(UGameplayTagsManager& Manager)
{
	AddTag(Item_Type_None, "Item.Type.None", "Default Item Type");
	AddTag(Item_Type_Weapon, "Item.Type.Weapon", "Weapon Item Type");
	AddTag(Item_Type_Armor, "Item.Type.Armor", "Armor Item Type");
	AddTag(Item_Type_Consumable, "Item.Type.Consumable", "Consumable Item Type");
	AddTag(Item_Type_Currency, "Item.Type.Currency", "Currency Item Type");
	AddTag(Item_Type_Socket, "Item.Type.Socket", "Socket Item Type");
	
	AddTag(Item_Behavior_None, "Item.Behavior.None", "Default Item Behavior");
	AddTag(Item_Behavior_Equipment, "Item.Behavior.Equipment", "Equipment Item Behavior");
	AddTag(Item_Behavior_SingleUse, "Item.Behavior.SingleUse", "Single Use Item Behavior");
	AddTag(Item_Behavior_MultipleUse, "Item.Behavior.MultipleUse", "Multiple Use Item Behavior");
	AddTag(Item_Behavior_Socket, "Item.Behavior.Socket", "Socket Item Behavior");
	AddTag(Item_Behavior_Stackable, "Item.Behavior.Stackable", "Stackable Item Behavior");

	AddTag(Item_Rarity_None, "Item.Rarity.None", "Default Item Rarity");
	AddTag(Item_Rarity_Common, "Item.Rarity.Common", "Common Item Rarity");
	AddTag(Item_Rarity_Rare, "Item.Rarity.Rare", "Rare Item Rarity");
	AddTag(Item_Rarity_Epic, "Item.Rarity.Epic", "Epic Item Rarity");
	AddTag(Item_Rarity_Legendary, "Item.Rarity.Legendary", "Legendary Item Rarity");

	AddTag(Item_Affix_Type_None, "Item.Affix.Type.None", "Default Item affix");
	AddTag(Item_Affix_Type_Prefix, "Item.Affix.Type.Prefix", "Subtype of a Item Affix");
	AddTag(Item_Affix_Type_Suffix, "Item.Affix.Type.Suffix", "Subtype of a Item Affix");
	
}

void FLSPGameplayTags::AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment)
{
	OutTag = UGameplayTagsManager::Get().AddNativeGameplayTag(FName(TagName), FString(TagComment));
}
