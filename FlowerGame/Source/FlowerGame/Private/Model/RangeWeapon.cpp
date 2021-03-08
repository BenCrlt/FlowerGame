// Fill out your copyright notice in the Description page of Project Settings.


#include "Model/RangeWeapon.h"

// Sets default values
ARangeWeapon::ARangeWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshOutRangeAsset(TEXT("/Game/MobileStarterContent/Meshes/RangeEmpty"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshInRangeNPAsset(TEXT("/Game/MobileStarterContent/Meshes/RangeNoPlayer"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshOutRangePAsset(TEXT("/Game/MobileStarterContent/Meshes/RangePlayer"));
	Mesh_OutRange = MeshOutRangeAsset.Object;
	Mesh_InRangeNP = MeshInRangeNPAsset.Object;
	Mesh_InRangeP = MeshOutRangePAsset.Object;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
}

// Called when the game starts or when spawned
void ARangeWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARangeWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARangeWeapon::InitRangeWeapon(TEnumAsByte<ETypeRange> TypeRange) {
	switch (TypeRange) {
		case ETypeRange::OUT_RANGE:
			MeshComponent->SetStaticMesh(Mesh_OutRange);
			break;
		case ETypeRange::IN_RANGE_NO_PLAYER:
			MeshComponent->SetStaticMesh(Mesh_InRangeNP);
			break;
		case ETypeRange::IN_RANGE_PLAYER:
			MeshComponent->SetStaticMesh(Mesh_InRangeP);
			break;
		default:
			break;
	}
	MeshComponent->SetCollisionProfileName("NoCollision");
}