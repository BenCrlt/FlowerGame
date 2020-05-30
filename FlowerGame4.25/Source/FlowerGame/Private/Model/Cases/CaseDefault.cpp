// Fill out your copyright notice in the Description page of Project Settings.

#include "Model/Cases/CaseDefault.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"

#define print(text) \
	if (GEngine)    \
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green, text)
#define printFString(text, fstring) \
	if (GEngine)                    \
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

// Sets default values
ACaseDefault::ACaseDefault()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CaseAsset(TEXT("/Game/MobileStarterContent/Meshes/SM_CaseDefault"));
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	name_Case = ECases::CASE_DEFAULT;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;
	CaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("CaseMesh");
	CaseMesh->SetupAttachment(Root);

	if (CaseAsset.Succeeded())
	{
		CaseMesh->SetStaticMesh(CaseAsset.Object);
	}

	caseUp = nullptr;
	caseDown = nullptr;
	caseRight = nullptr;
	caseLeft = nullptr;

	bListenTouchEvent = false;

	ID_Case = -1;
	Coordonnees.Init(0, 2);
}

// Called when the game starts or when spawned
void ACaseDefault::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACaseDefault::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ACaseDefault::equalsPosition(ACaseDefault *otherCase)
{
	if (Coordonnees[0] == otherCase->Coordonnees[0] && Coordonnees[1] == otherCase->Coordonnees[1])
	{
		return true;
	}
	else
	{
		return false;
	}
}

TArray<TEnumAsByte<EDirection>> ACaseDefault::CheckWaysAvailable(TEnumAsByte<EDirection> DirectionPlayer)
{
	TArray<TEnumAsByte<EDirection>> Ways;
	if (caseUp != nullptr && DirectionPlayer != EDirection::DIRECTION_DOWN)
	{
		Ways.Add(EDirection::DIRECTION_UP);
	}
	if (caseDown != nullptr && DirectionPlayer != EDirection::DIRECTION_UP)
	{
		Ways.Add(EDirection::DIRECTION_DOWN);
	}
	if (caseRight != nullptr && DirectionPlayer != EDirection::DIRECTION_LEFT)
	{
		Ways.Add(EDirection::DIRECTION_RIGHT);
	}
	if (caseLeft != nullptr && DirectionPlayer != EDirection::DIRECTION_RIGHT)
	{
		Ways.Add(EDirection::DIRECTION_LEFT);
	}
	return Ways;
}