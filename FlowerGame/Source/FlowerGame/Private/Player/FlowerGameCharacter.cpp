// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FlowerGameCharacter.h"

// Sets default values
AFlowerGameCharacter::AFlowerGameCharacter()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshToUse(TEXT("/Game/PolygonWestern/Meshes/Characters/SK_Character_Sheriff_01"));
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	SpringArmPlayer = CreateDefaultSubobject<USpringArmComponent>("SpringArmPlayer");
	SpringArmPlayer->SetupAttachment(RootComponent);
	SpringArmPlayer->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	SpringArmPlayer->TargetArmLength = 1000;
	SpringArmPlayer->RelativeRotation.Pitch = -50;
	SpringArmPlayer->bDoCollisionTest = false;

	CameraPlayer = CreateDefaultSubobject<UCameraComponent>("CameraPlayer");
	CameraPlayer->SetupAttachment(SpringArmPlayer);
	CameraPlayer->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void AFlowerGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlowerGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFlowerGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

