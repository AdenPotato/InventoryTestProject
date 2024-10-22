// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LSPInteraction.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYTESTPROJECT_API ULSPInteraction : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULSPInteraction();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
public:
	UFUNCTION(BlueprintImplementableEvent)
	void Interact(AActor* SourceActor);

		
};
