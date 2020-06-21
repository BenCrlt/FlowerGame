// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "UObject/UObjectGlobals.h"
#include "Player/UI_PlayingGame.h"
#include "Model/Cases/CaseDefault.h"
#include "Model/Cases/CaseSpawn.h"
#include "Model/Cases/CaseMagasin.h"
#include "Model/RangeWeapon.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "Engine.h"
#include "Misc/DefaultValueHelper.h"
#include "Player/FlowerGameCharacter.h"
#include "Player/FlowerGamePlayerController.h"
#include "GenericPlatform/GenericPlatform.h"
#include "FlowerGameGameModeBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateInfosPlayersDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateDiceDelegate, int32, numDice);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateMagDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateChoiceShootDelegate, AFlowerGameCharacter*, PlayerDamaged);

UENUM()
enum EGamePlayState
{
	ELoadingLevel,
	EInitGame,
	EPlaying,
	ETurnBegin,
	ETurnAction,
	ECaseEvent,
	ETurnFinish,
	EGameFinish,
	EBeginMenu,
	EUnknown
};

USTRUCT()
struct FLines
{
	GENERATED_USTRUCT_BODY()
public:
	TArray<ACaseDefault *> Rows;
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
	void InitCase(ACaseDefault *caseSelected, int32 line, int32 row, int32 ID);
	void ShowRange(ACaseDefault* caseSelected, TEnumAsByte<ETypeRange> TypeRange);
	void DisableRange();

public:
	UPROPERTY()
	int32 BOARD_SIZE;
	UPROPERTY()
	TArray<FLines> Board;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class AFlowerGameCharacter *PlayerSelected;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AFlowerGameCharacter *> Players;
	UPROPERTY()
	int32 nbPlayers;
	UPROPERTY()
	TSubclassOf<class AFlowerGameCharacter> classPlayer;
	UPROPERTY()
	TArray<ACaseSpawn *> ListSpawns;
	UPROPERTY()
	TArray<ARangeWeapon*> Ranges;
	UPROPERTY()
	bool bEnableRange;

	//UI Property
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bShowLaunchDiceUI;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bShowDiceUI;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bShowTurnFinishedUI;
	UPROPERTY(BlueprintAssignable)
		FUpdateInfosPlayersDelegate OnUpdateInfosPlayers;
	UPROPERTY(BlueprintAssignable)
		FUpdateDiceDelegate OnUpdateDice;
	UPROPERTY(BlueprintAssignable)
		FUpdateMagDelegate OnUpdateMag;
	UPROPERTY(BlueprintAssignable)
		FUpdateChoiceShootDelegate OnUpdateChoiceShoot;

	UFUNCTION(BlueprintCallable)
	void LevelLoaded();
	UFUNCTION()
	void InitPlayer();
	UFUNCTION(BlueprintCallable)
	void LaunchDice();
	UFUNCTION()
	void ChangePlayer();
	UFUNCTION()
	void LaunchCaseEvent();
	UFUNCTION(BlueprintCallable)
	void TurnFinished();
	UFUNCTION()
	void FindPlayersInRange(ACaseDefault* CaseSelected, TEnumAsByte<EDirection> DirectionMovement, TArray<int32> Range, int32 nbCase);
	UFUNCTION()
	void CheckPlayersInRange();
	UFUNCTION(BlueprintCallable)
	void ShootPlayer(AFlowerGameCharacter *PlayerDamaged, int32 Damage);
	UFUNCTION()
	AFlowerGameCharacter* GetPlayerFromCase(ACaseDefault* CaseSelected);
};
