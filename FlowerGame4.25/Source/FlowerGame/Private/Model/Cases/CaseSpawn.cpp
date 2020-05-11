// Fill out your copyright notice in the Description page of Project Settings.

#include "Model/Cases/CaseSpawn.h"

ACaseSpawn::ACaseSpawn()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    name_Case = ECases::CASE_SPAWN;
}

// Called when the game starts or when spawned
void ACaseSpawn::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ACaseSpawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

FVector ACaseSpawn::GetLocation()
{
    FVector Origin;
    FVector BoundsExtend;
    GetActorBounds(false, Origin, BoundsExtend);

    return Origin;
}