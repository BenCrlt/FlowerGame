// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CaseDefault.h"
#include "CaseMagasin.generated.h"

UCLASS()
class FLOWERGAME_API ACaseMagasin : public ACaseDefault
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACaseMagasin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
