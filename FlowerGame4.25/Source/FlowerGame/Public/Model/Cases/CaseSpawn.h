// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Model/Cases/CaseDefault.h"
#include "CaseSpawn.generated.h"

/**
 * 
 */
UCLASS()
class FLOWERGAME_API ACaseSpawn : public ACaseDefault
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACaseSpawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FVector GetLocation();
};
