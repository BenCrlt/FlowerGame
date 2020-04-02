// Fill out your copyright notice in the Description page of Project Settings.


#include "FlowerGame/Public/Model/Cases/CaseDefault.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

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

	if (CaseAsset.Succeeded()) {
		CaseMesh->SetStaticMesh(CaseAsset.Object);
		FVector newRelativeScale = CaseMesh->GetRelativeScale3D();
		newRelativeScale.Y = 0.75;
		CaseMesh->SetRelativeScale3D(newRelativeScale);
	}
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
