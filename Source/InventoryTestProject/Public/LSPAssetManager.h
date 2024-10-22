// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "LSPAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORYTESTPROJECT_API ULSPAssetManager : public UAssetManager
{
	GENERATED_BODY()
	static ULSPAssetManager& Get();

protected:
	virtual void StartInitialLoading() override;	
	
};
