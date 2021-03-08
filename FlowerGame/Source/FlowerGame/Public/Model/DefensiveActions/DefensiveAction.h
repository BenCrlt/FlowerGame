// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "Engine.h"
#include "DefensiveAction.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FLOWERGAME_API UDefensiveAction : public UObject
{
	GENERATED_BODY()

public:
	UDefensiveAction();

protected:

public:
	
	UPROPERTY(BlueprintReadOnly)
		FString Name;
	UPROPERTY(BlueprintReadOnly, meta=(MultiLine=true))
		FString Description;
	UPROPERTY(BlueprintReadWrite)
		UTexture2D* Image;

	UFUNCTION(BlueprintCallable)
		virtual void ActiveAction(AFlowerGameGameModeBase* FlowerGameMode, AFlowerGameCharacter* PlayerControlled, AFlowerGameCharacter* PlayerDamaged, int32 Damage);
	UFUNCTION(BlueprintCallable)
		void CancelAction(AFlowerGameGameModeBase* FlowerGameMode, AFlowerGameCharacter* PlayerControlled, AFlowerGameCharacter* PlayerDamaged, int32 Damage);
};
