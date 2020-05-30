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
	nbPlayers = 3;
	HUDClass = AUI_PlayingGame::StaticClass();

	PlayerSelected = nullptr;
	bShowDiceUI = false;
	bShowLaunchDiceUI = false;
	bShowTurnFinishedUI = false;

	BOARD_SIZE = 7;
}

void AFlowerGameGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SetCurrentState(EGamePlayState::ELoadingLevel);
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
	case EGamePlayState::ELoadingLevel:
	{
	}
	break;
	case EGamePlayState::EInitGame:
	{
		InitBoard();
		InitPlayer();
		SetCurrentState(EGamePlayState::ETurnBegin);
	}
	break;
	case EGamePlayState::EPlaying:
	{
	}
	break;
	case EGamePlayState::ETurnBegin:
	{
		bShowLaunchDiceUI = true;
	}
	break;
	case EGamePlayState::ETurnAction:
	{
		LaunchCaseEvent();
		/*for (int32 i = 0; i < Players.Num(); i++)
		{
			if (PlayerSelected->ID_Player != Players[i]->ID_Player)
			{
				ACaseDefault *PlayerFind = FindPlayerInRange(PlayerSelected->Position, Players[i]->Position, Players[i]->Direction, Players[i]->WeaponSelected->Range, 0);
				if (PlayerFind)
				{
					print(FString::FromInt(PlayerFind->ID_Case));
					PlayerFind->CaseMesh->SetRenderCustomDepth(true);
				}
			}
		}*/
		bShowTurnFinishedUI = true;
	}
	break;
	case EGamePlayState::ETurnFinish:
	{
		bShowDiceUI = false;
		bShowTurnFinishedUI = false;
		ChangePlayer();
		SetCurrentState(EGamePlayState::ETurnBegin);
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

void AFlowerGameGameModeBase::LevelLoaded()
{
	//Call by the UI in blueprint
	SetCurrentState(EGamePlayState::EInitGame);
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

			if (ACaseSpawn *spawnFound = Cast<ACaseSpawn>(caseFound))
			{
				ListSpawns.Add(spawnFound);
			}
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
	if (nbPlayers >= 0 && ListSpawns.Num() > 0 && ListSpawns.Num() >= nbPlayers)
	{
		UWorld *world = GetWorld();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		int32 randInt;
		for (int32 i = 0; i < nbPlayers; i++)
		{
			randInt = FMath::RandRange(0, ListSpawns.Num() - 1);
			Players.Add(world->SpawnActor<AFlowerGameCharacter>(classPlayer, ListSpawns[randInt]->GetLocation(), FRotator(0, 0, 0), SpawnParams));
			Players[i]->InitPlayer(ListSpawns[randInt], i);
			AWeapon *WeaponCreated = world->SpawnActor<AWeapon>(ASniper::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));
			Players[i]->ChangeWeapon(WeaponCreated);
			world->GetFirstPlayerController()->Possess(Players[i]);
			ListSpawns.RemoveAt(randInt);
		}

		PlayerSelected = Players[0];
		world->GetFirstPlayerController()->Possess(PlayerSelected);
		OnUpdateInfosPlayers.Broadcast();
		SetCurrentState(EGamePlayState::EPlaying);
	}
	else
	{
		print("FATAL ERROR in INIT PLAYER");
	}
}

void AFlowerGameGameModeBase::LaunchDice()
{
	int32 MinDice = 1, MaxDice = 6;
	int32 numDice = FMath::RandRange(MinDice, MaxDice);
	bShowLaunchDiceUI = false;
	bShowDiceUI = true;
	OnUpdateDice.Broadcast(numDice);
	PlayerSelected->MovementPoint = numDice;
	PlayerSelected->MoveWithDice();
}

void AFlowerGameGameModeBase::ChangePlayer()
{
	UWorld *world = GetWorld();
	int32 indexPlayer = Players.Find(PlayerSelected);
	if (indexPlayer == Players.Num() - 1)
	{
		indexPlayer = 0;
		print("Tour suivant");
	}
	else
	{
		indexPlayer++;
	}
	PlayerSelected = Players[indexPlayer];
	PlayerSelected->bTurnFinished = false;
	world->GetFirstPlayerController()->Possess(PlayerSelected);
	OnUpdateInfosPlayers.Broadcast();
}

void AFlowerGameGameModeBase::TurnFinished()
{
	SetCurrentState(EGamePlayState::ETurnFinish);
}

void AFlowerGameGameModeBase::LaunchCaseEvent()
{
	switch (PlayerSelected->Position->name_Case)
	{
	case ECases::CASE_STORE:
	{
		//print("Store Case Event");
	}
	break;
	default:
		//print("NO EVENT");
		break;
	}
}

ACaseDefault *AFlowerGameGameModeBase::FindPlayerInRange(ACaseDefault *CaseSelected, ACaseDefault *PositionPlayer, TEnumAsByte<EDirection> DirectionMovement, TArray<int32> Range, int32 nbCase)
{
	if (CaseSelected->ID_Case == PositionPlayer->ID_Case)
	{
		return CaseSelected;
	}
	else
	{
		if (CaseSelected)
		{
			TArray<TEnumAsByte<EDirection>> Ways = CaseSelected->CheckWaysAvailable(DirectionMovement);
			if (nbCase < Range.Num())
			{
				print(FString::FromInt(nbCase));
				print("Aie");
				/*for (int32 i = 0; i < Ways.Num(); i++)
				{
					ACaseDefault *ResultCase = FindPlayerInRange(
						PlayerSelected->GoToNextCase(CaseSelected, Ways[i], false),
						PositionPlayer,
						PlayerSelected->getDirection(PlayerSelected->GoToNextCase(CaseSelected, Ways[i], false)),
						Range,
						nbCase++);
					if (ResultCase && Range[nbCase] != 0)
					{
						return ResultCase;
					}
				}*/
			}
		}
	}
	return nullptr;
}