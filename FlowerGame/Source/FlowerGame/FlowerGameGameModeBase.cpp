// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "FlowerGameGameModeBase.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

AFlowerGameGameModeBase::AFlowerGameGameModeBase() {
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MobileStarterContent/Blueprints/BP_FlowerGameCharacter"));

	DefaultPawnClass = PlayerPawnBPClass.Class;
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

void AFlowerGameGameModeBase::InitBoard() {
	//Init Board 2D Array
	FLines emptyLine;
	emptyLine.Rows.Init(nullptr, BOARD_SIZE);
	Board.Init(emptyLine, BOARD_SIZE);
	FillBoard();
}

void AFlowerGameGameModeBase::FillBoard() {
	//Récupère toutes les cases spawn dans le world
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACaseDefault::StaticClass(), FoundActors);

	FString linePositionString, rowPositionString;
	int32 linePosition, rowPosition;
	for (int i = 0; i < FoundActors.Num(); i++)
	{
		if(ACaseDefault* caseFound = Cast<ACaseDefault>(FoundActors[i])) {
			caseFound->GetActorLabel().Split(";", &linePositionString, &rowPositionString);
			FDefaultValueHelper::ParseInt(linePositionString, linePosition);
			FDefaultValueHelper::ParseInt(rowPositionString, rowPosition);
			Board[linePosition-1].Rows[rowPosition-1] = caseFound;
		}
	}

	//Initialise chaque case du plateau
	FString boardString = "";
	int32 ID = 0;
	for (int line = 0; line < BOARD_SIZE; line++)
	{
		for (int row = 0; row < BOARD_SIZE; row++)
		{
			if (Board[line].Rows[row] != nullptr) {
				InitCase(Board[line].Rows[row], line, row, ID);
				ID++;
			}
		}
	}

	for (int line = 0; line < BOARD_SIZE; line++)
	{
		for (int row = 0; row < BOARD_SIZE; row++)
		{
			if (Board[line].Rows[row] != nullptr) {
				FString nameCase = Board[line].Rows[row]->GetName();
				UE_LOG(LogTemp, Warning, TEXT("%s"), *nameCase);
				if (Board[line].Rows[row]->caseDown != nullptr) {
					UE_LOG(LogTemp, Warning, TEXT("Case Down"));
				}
				if (Board[line].Rows[row]->caseUp != nullptr) {
					UE_LOG(LogTemp, Warning, TEXT("Case Up"));
				}
				if (Board[line].Rows[row]->caseRight != nullptr) {
					UE_LOG(LogTemp, Warning, TEXT("Case Right"));
				}
				if (Board[line].Rows[row]->caseLeft != nullptr) {
					UE_LOG(LogTemp, Warning, TEXT("Case Left"));
				}
			}
		}
	}

	Player1 = Cast<AFlowerGameCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	Player1->Position = Board[0].Rows[0];
}

void AFlowerGameGameModeBase::InitCase(ACaseDefault* caseSelected, int32 line, int32 row, int32 ID) {
	caseSelected->ID_Case = ID;
	if (line != 0) {
		if (Board[line-1].Rows[row] != nullptr) {
			caseSelected->caseUp = Board[line-1].Rows[row];
		}
	}
	if (line != BOARD_SIZE-1) {
		if (Board[line+1].Rows[row] != nullptr) {
			caseSelected->caseDown = Board[line+1].Rows[row];
		}
	}
	if (row != 0) {
		if (Board[line].Rows[row-1] != nullptr) {
			caseSelected->caseLeft = Board[line].Rows[row-1];
		}
	}
	if (row != BOARD_SIZE-1) {
		if (Board[line].Rows[row+1] != nullptr) {
			caseSelected->caseRight = Board[line].Rows[row+1];
		}
	}
}

void AFlowerGameGameModeBase::LaunchDice(int32 numDice) {
	Player1->MovementPoint = numDice;
	Player1->MoveWithDice();
}