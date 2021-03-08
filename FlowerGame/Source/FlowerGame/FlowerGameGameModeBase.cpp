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

	PlayerControllerClass = AFlowerGamePlayerController::StaticClass();
	classPlayer = PlayerPawnBPClass.Class;
	nbPlayers = 3;
	HUDClass = AUI_PlayingGame::StaticClass();

	PlayerSelected = nullptr;
	bShowDiceUI = false;
	bShowLaunchDiceUI = false;
	bShowTurnFinishedUI = false;

	BOARD_SIZE = 7;
	Ranges.Init(nullptr, 0);
	bEnableRange = false;
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
		PlayerSelected->LoadWeapon();
		OnUpdateMag.Broadcast();
		DisableRange();
	}
	break;
	case EGamePlayState::ETurnAction:
	{
		LaunchCaseEvent();
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
	TArray<FString> Names = { "Ben", "Bastos", "Deee", "Axoloto" };
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
			Players[i]->InitPlayer(ListSpawns[randInt], i, Names[i]);
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

void AFlowerGameGameModeBase::FindPlayersInRange(ACaseDefault *CaseSelected, TEnumAsByte<EDirection> DirectionMovement, TArray<int32> Range, int32 nbCase)
{
	bool bPlayerFind = false;
	for (int32 i = 0; i < Players.Num(); i++) {
		if (CaseSelected->ID_Case == Players[i]->Position->ID_Case && Range[nbCase] == 1)
		{
			bPlayerFind = true;
			ShowRange(CaseSelected, ETypeRange::IN_RANGE_PLAYER);
		}
	}

	if (!bPlayerFind) {
		if (Range[nbCase] == 0) {
			ShowRange(CaseSelected, ETypeRange::OUT_RANGE);
		}
		else
		{
			ShowRange(CaseSelected, ETypeRange::IN_RANGE_NO_PLAYER);
		}
	}
	TArray<TEnumAsByte<EDirection>> Ways = CaseSelected->CheckWaysAvailable(DirectionMovement);
	if (nbCase + 1 < Range.Num())
	{
		for (int32 i = 0; i < Ways.Num(); i++)
		{
			FindPlayersInRange(
				CaseSelected->GoToNextCase(Ways[i]),
				CaseSelected->getDirection(CaseSelected->GoToNextCase(Ways[i])),
				Range,
				nbCase + 1);
		}
	}
}

void AFlowerGameGameModeBase::CheckPlayersInRange()
{
	if (bEnableRange) {
		TArray<int32> rangePlayer = PlayerSelected->WeaponSelected->Range;
		FindPlayersInRange(PlayerSelected->Position, PlayerSelected->Direction, rangePlayer, 0);
	}
	else {
		DisableRange();
	}
}
void AFlowerGameGameModeBase::ShootPlayer(AFlowerGameCharacter *PlayerDamaged, int32 Damage)
{
	if (PlayerSelected->ShootPlayer(PlayerDamaged, Damage))
	{
		OnUpdateMag.Broadcast();
		if (!PlayerSelected->CheckIfCanShoot()) {
			bEnableRange = false;
			CheckPlayersInRange();
		}
	}
}

void AFlowerGameGameModeBase::ManageDefAction(AFlowerGameCharacter* PlayerDamaged) 
{

}

void AFlowerGameGameModeBase::ShowRange(ACaseDefault* caseSelected, TEnumAsByte<ETypeRange> TypeRange) {
	FVector Origin, BoundExtend;
	UWorld* world = GetWorld();
	caseSelected->GetActorBounds(false, Origin, BoundExtend);
	Origin.Z = 200;
	ARangeWeapon* RangeWeapon = world->SpawnActor<ARangeWeapon>(ARangeWeapon::StaticClass(), Origin, FRotator(0, 0, 0));
	RangeWeapon->InitRangeWeapon(TypeRange);
	Ranges.Add(RangeWeapon);
}

void AFlowerGameGameModeBase::DisableRange() {
	for (int32 i = 0; i < Ranges.Num(); i++)
	{
		if (Ranges[i] != nullptr) {
			Ranges[i]->Destroy();
		}
	}
	Ranges.Empty();
}

AFlowerGameCharacter* AFlowerGameGameModeBase::GetPlayerFromCase(ACaseDefault* CaseSelected) {
	AFlowerGameCharacter* PlayerFind = nullptr;
	for (int32 i = 0; i < Players.Num(); i++)
	{
		if (Players[i]->Position->ID_Case == CaseSelected->ID_Case) {
			PlayerFind = Players[i];
		}
	}
	return PlayerFind;
}