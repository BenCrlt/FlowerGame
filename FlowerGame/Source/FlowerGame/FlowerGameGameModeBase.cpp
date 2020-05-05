// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FlowerGameGameModeBase.h"

#define print(text) \
	if (GEngine)    \
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, text)
#define printFString(text, fstring) \
	if (GEngine)                    \
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

AFlowerGameGameModeBase::AFlowerGameGameModeBase()
{
	static ConstructorHelpers::FClassFinder<AFlowerGameCharacter> PlayerPawnBPClass(TEXT("/Game/MobileStarterContent/Blueprints/BP_FlowerGameCharacter"));

	classPlayer = PlayerPawnBPClass.Class;
	nbPlayers = 1;
	//DefaultPawnClass = PlayerPawnBPClass.Class;
	HUDClass = AUI_PlayingGame::StaticClass();

	BOARD_SIZE = 7;
}

void AFlowerGameGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SetCurrentState(EGamePlayState::EBegin);
}

EGamePlayState AFlowerGameGameModeBase::GetCurrentState() const
{
	return CurrentState;
}

void AFlowerGameGameModeBase::SetCurrentState(EGamePlayState NewState)
{
	CurrentState = NewState;
	HandleNewState(CurrentState);
}

void AFlowerGameGameModeBase::HandleNewState(EGamePlayState NewState)
{
	switch (NewState)
	{
	case EGamePlayState::EBegin:
	{
		print("BeginState");
		InitBoard();
		SetCurrentState(EGamePlayState::EPlaying);
	}
	break;
	case EGamePlayState::EPlaying:
	{
		print("PlayingState");
	}
	break;
	// Unknown/default state
	case EGamePlayState::EGameFinish:
	{
		//UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
	}
	break;
	// Unknown/default state
	default:
	case EGamePlayState::EUnknown:
	{
		// do nothing
	}
	break;
	}
}

void AFlowerGameGameModeBase::InitBoard()
{
	//Init Board 2D Array
	FLines emptyLine;
	emptyLine.Rows.Init(nullptr, BOARD_SIZE);
	Board.Init(emptyLine, BOARD_SIZE);
	FillBoard();
}

void AFlowerGameGameModeBase::FillBoard()
{
	//Récupère toutes les cases spawn dans le world
	TArray<AActor *> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACaseDefault::StaticClass(), FoundActors);

	for (int i = 0; i < FoundActors.Num(); i++)
	{
		if (ACaseDefault *caseFound = Cast<ACaseDefault>(FoundActors[i]))
		{
			Board[caseFound->Coordonnees[0] - 1].Rows[caseFound->Coordonnees[1] - 1] = caseFound;
		}
	}

	//Initialise chaque case du plateau
	FString boardString = "";
	int32 ID = 0;
	for (int line = 0; line < BOARD_SIZE; line++)
	{
		for (int row = 0; row < BOARD_SIZE; row++)
		{
			if (Board[line].Rows[row] != nullptr)
			{
				InitCase(Board[line].Rows[row], line, row, ID);
				ID++;
			}
		}
	}
}

void AFlowerGameGameModeBase::InitCase(ACaseDefault *caseSelected, int32 line, int32 row, int32 ID)
{
	caseSelected->ID_Case = ID;
	if (line != 0)
	{
		if (Board[line - 1].Rows[row] != nullptr)
		{
			caseSelected->caseUp = Board[line - 1].Rows[row];
		}
	}
	if (line != BOARD_SIZE - 1)
	{
		if (Board[line + 1].Rows[row] != nullptr)
		{
			caseSelected->caseDown = Board[line + 1].Rows[row];
		}
	}
	if (row != 0)
	{
		if (Board[line].Rows[row - 1] != nullptr)
		{
			caseSelected->caseLeft = Board[line].Rows[row - 1];
		}
	}
	if (row != BOARD_SIZE - 1)
	{
		if (Board[line].Rows[row + 1] != nullptr)
		{
			caseSelected->caseRight = Board[line].Rows[row + 1];
		}
	}
}

void AFlowerGameGameModeBase::InitPlayer()
{
	UWorld *world = GetWorld();
	FVector Origin;
	FVector BoundsExtend;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = Instigator;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	for (int32 i = 0; i < nbPlayers; i++)
	{
		Board[0].Rows[0]->GetActorBounds(false, Origin, BoundsExtend);
		Players[i] = world->SpawnActor<AFlowerGameCharacter>(classPlayer, Origin, FRotator(0, 0, 0), SpawnParams);
		Players[i]->Position = Board[0].Rows[0];
	}

	PlayerSelected = Players[0];
	world->GetFirstPlayerController()->Possess(PlayerSelected);
}

void AFlowerGameGameModeBase::LaunchDice(int32 numDice)
{
	PlayerSelected->MovementPoint = numDice;
	PlayerSelected->MoveWithDice();
}