// Fill out your copyright notice in the Description page of Project Settings.


#include "FlowerGame/Public/Pawn/MainViewPawn.h"

// Sets default values
AMainViewPawn::AMainViewPawn()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshToUse(TEXT("/Game/MobileStarterContent/Shapes/Shape_Sphere"));
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	RootComponent = Mesh;
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm);

	Mesh->SetStaticMesh(MeshToUse.Object);
}

// Called when the game starts or when spawned
void AMainViewPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainViewPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainViewPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

