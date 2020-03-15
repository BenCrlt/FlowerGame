// Fill out your copyright notice in the Description page of Project Settings.


#include "FlowerGame/Public/Model/Cases/CaseDefault.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ACaseDefault::ACaseDefault()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CaseAsset(TEXT("/Game/MobileStarterContent/Meshes/SM_CaseDefault"));
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ID_Case = 8;
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

int ACaseDefault::getIDCase() {
	return ID_Case;
}

