// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Player/UI_PlayingGame.h"
#include "Model/Cases/CaseDefault.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"
#include "Misc/DefaultValueHelper.h"
#include "Player/FlowerGameCharacter.h"
#include "GenericPlatform/GenericPlatform.h"
#include "FlowerGameGameModeBase.generated.h"

UENUM()
enum EGamePlayState {
	EBegin,
	EPlaying,
	EGameFinish,
	EBeginMenu,
	EUnknown
};

USTRUCT()
struct FLines {
	GENERATED_USTRUCT_BODY()
	public:
		TArray<ACaseDefault*> Rows; 
};

UCLASS()
class FLOWERGAME_API AFlowerGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AFlowerGameGameModeBase();

	virtual void BeginPlay() override;
	/** Returns the current playing state */
	UFUNCTION(Category = "State")
	EGamePlayState GetCurrentState() const;

	/** Sets a new playing state */
	void SetCurrentState(EGamePlayState NewState);

private: 
	/**Keeps track of the current playing state */
	EGamePlayState CurrentState;

	/**Handle any function calls that rely upon changing the playing state of our game */
	void HandleNewState(EGamePlayState NewState);

	void FillBoard();
	void InitBoard();
	void InitCase(ACaseDefault* caseSelected, int32 line, int32 row, int32 ID);

public:
	UPROPERTY()
	int32 BOARD_SIZE;
	UPROPERTY()
	TArray<FLines> Board;
	UPROPERTY()
	class AFlowerGameCharacter* Player1;

	UFUNCTION(BlueprintCallable)
	void LaunchDice(int32 numDice);
};
