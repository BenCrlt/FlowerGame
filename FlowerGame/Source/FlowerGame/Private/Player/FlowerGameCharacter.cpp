// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FlowerGameCharacter.h"

// Sets default values
AFlowerGameCharacter::AFlowerGameCharacter()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshToUse(TEXT("/Game/PolygonWestern/Meshes/Characters/SK_Character_Sheriff_01"));
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate.Yaw = 640.f;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	SpringArmPlayer = CreateDefaultSubobject<USpringArmComponent>("SpringArmPlayer");
	SpringArmPlayer->SetupAttachment(RootComponent);
	SpringArmPlayer->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	SpringArmPlayer->TargetArmLength = 2000;
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

