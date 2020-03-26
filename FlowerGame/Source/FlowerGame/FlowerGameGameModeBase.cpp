// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "FlowerGameGameModeBase.h"
#include "Player/FlowerGameCharacter.h"
#include "Player/FlowerGamePlayerController.h"


AFlowerGameGameModeBase::AFlowerGameGameModeBase() {
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MobileStarterContent/Blueprints/BP_FlowerGameCharacter"));

	PlayerControllerClass = AFlowerGamePlayerController::StaticClass();
	DefaultPawnClass = PlayerPawnBPClass.Class;
}