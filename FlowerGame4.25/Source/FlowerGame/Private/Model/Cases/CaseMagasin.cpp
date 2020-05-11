// Fill out your copyright notice in the Description page of Project Settings.


#include "FlowerGame/Public/Model/Cases/CaseMagasin.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

// Sets default values
ACaseMagasin::ACaseMagasin()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	name_Case = ECases::CASE_STORE;
}

// Called when the game starts or when spawned
void ACaseMagasin::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACaseMagasin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
