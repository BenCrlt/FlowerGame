// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.h"
#include "Sniper.generated.h"

/**
 * 
 */
UCLASS()
class FLOWERGAME_API ASniper : public AWeapon
{
	GENERATED_BODY()

public:
	ASniper();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
