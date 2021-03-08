// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Model/DefensiveActions/DefensiveAction.h"
#include "UObject/ConstructorHelpers.h"
#include "TrivetAction.generated.h"

/**
 * 
 */
UCLASS()
class FLOWERGAME_API UTrivetAction : public UDefensiveAction
{
	GENERATED_BODY()
	
public:
	UTrivetAction();

private:

public: 
	virtual void ActiveAction(AFlowerGameGameModeBase* FlowerGameMode, AFlowerGameCharacter* PlayerControlled, AFlowerGameCharacter* PlayerDamaged, int32 Damage) override;
};
