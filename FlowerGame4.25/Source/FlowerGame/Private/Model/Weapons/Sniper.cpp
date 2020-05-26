// Fill out your copyright notice in the Description page of Project Settings.


#include "Model/Weapons/Sniper.h"

ASniper::ASniper() {
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshToUse(TEXT("/Game/PolygonWestern/Meshes/Weapons/SK_Wep_Rifle_01"));

	MeshGun = CreateDefaultSubobject<USkeletalMeshComponent>("CaseMesh");
	if (MeshToUse.Succeeded())
	{
		MeshGun->SetSkeletalMesh(MeshToUse.Object);
	}

	MagSize = 5;
	Range = 4;
	AmmoPerShot = 5;
	Mag = 0;
}

void ASniper::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASniper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

