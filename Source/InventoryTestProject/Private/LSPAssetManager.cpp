// Fill out your copyright notice in the Description page of Project Settings.


#include "LSPAssetManager.h"

#include "LSPGameplayTags.h"

ULSPAssetManager& ULSPAssetManager::Get()
{
	check(GEngine);
	ULSPAssetManager* AssetManager = Cast<ULSPAssetManager>(GEngine->AssetManager);
	return *AssetManager;
}

void ULSPAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	//load the tags
	FLSPGameplayTags::InitializeNativeTags();
}
