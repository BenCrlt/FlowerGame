// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FlowerGameCharacter.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

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

	// declare trigger capsule
	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Trigger Capsule"));
	TriggerCapsule->InitCapsuleSize(55.f, 96.0f);
	TriggerCapsule->SetupAttachment(RootComponent);

	TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &AFlowerGameCharacter::OnOverlapBegin);
	TriggerCapsule->OnComponentEndOverlap.AddDynamic(this, &AFlowerGameCharacter::OnOverlapEnd);

	Position = "None";
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

void AFlowerGameCharacter::SetupPlayerInputComponent(class UInputComponent* inputComponent) {
	Super::SetupPlayerInputComponent(inputComponent);

	inputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AFlowerGameCharacter::MoveToTouchLocation);
	inputComponent->BindTouch(EInputEvent::IE_Released, this, &AFlowerGameCharacter::MoveToTouchLocation);
}

void AFlowerGameCharacter::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetWorld()->GetFirstPlayerController()->GetHitResultAtScreenPosition(ScreenSpaceLocation, ECC_Visibility, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move here
		ACaseDefault* caseSelected = Cast<ACaseDefault>(HitResult.GetActor());
		FVector Origin;
		FVector BoundsExtend;
		//Go to the center of the actor
		if (caseSelected != nullptr) {
			Position = caseSelected->GetName();
			caseSelected->GetActorBounds(false, Origin, BoundsExtend);
			GEngine->AddOnScreenDebugMessage(-1,1.5, FColor::Red, TEXT("Salut"));
			SetNewMoveDestination(Origin);
		}
	}
}

void AFlowerGameCharacter::SetNewMoveDestination(const FVector DestLocation)
{
	float const Distance = FVector::Dist(DestLocation, GetActorLocation());
	// We need to issue move command only if far enough in order for walk animation to play correctly
	if (Distance > 120.0f)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(Controller, DestLocation);
	}
}

void AFlowerGameCharacter::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ACaseDefault* caseOverlaped = Cast<ACaseDefault>(OtherActor);
		if (caseOverlaped != nullptr) {
			if (caseOverlaped->GetName().Equals(Position)) {
				switch (caseOverlaped->name_Case)
				{
				case ECases::CASE_DEFAULT:
					print("It's a default case !");
					break;
				case ECases::CASE_STORE:
					print("It's a store case !");
					break;
				default:
					break;
				}
			}
		}
	}
}

void AFlowerGameCharacter::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//print("OverlapEnd");
	}
}