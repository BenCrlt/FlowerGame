// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "FlowerGameGameModeBase.h"


AFlowerGameGameModeBase::AFlowerGameGameModeBase() {
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MobileStarterContent/Blueprints/BP_FlowerGameCharacter"));
	DefaultPawnClass = PlayerPawnBPClass.Class;
}