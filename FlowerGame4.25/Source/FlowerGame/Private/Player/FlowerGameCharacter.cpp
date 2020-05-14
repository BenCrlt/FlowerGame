// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/FlowerGameCharacter.h"

#define print(text) \
	if (GEngine)    \
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, text)
#define printFString(text, fstring) \
	if (GEngine)                    \
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

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
	SpringArmPlayer->TargetArmLength = 4800;
	SpringArmPlayer->SetRelativeRotation(FRotator(-50, 0, 0));
	SpringArmPlayer->bDoCollisionTest = false;

	CameraPlayer = CreateDefaultSubobject<UCameraComponent>("CameraPlayer");
	CameraPlayer->SetupAttachment(SpringArmPlayer);
	CameraPlayer->bUsePawnControlRotation = false;

	// declare trigger capsule
	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Trigger Capsule"));
	TriggerCapsule->InitCapsuleSize(55.f, 96.0f);
	TriggerCapsule->SetCollisionProfileName(TEXT("Trigger"));
	TriggerCapsule->SetupAttachment(RootComponent);

	TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &AFlowerGameCharacter::OnOverlapBegin);
	TriggerCapsule->OnComponentEndOverlap.AddDynamic(this, &AFlowerGameCharacter::OnOverlapEnd);

	//Init Attributs
	NomPlayer = TEXT("Benoit");
	MaxHealth = 30;
	Health = MaxHealth;
	Ammo = 10;
	Position = nullptr;
	Direction = EDirection::DIRECTION_UNKNOWN;

	bWaitChoiceUser = false;
	isTouch = false;
	bTurnFinished = false;
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

void AFlowerGameCharacter::SetupPlayerInputComponent(class UInputComponent *inputComponent)
{
	Super::SetupPlayerInputComponent(inputComponent);

	inputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AFlowerGameCharacter::OnPressed);
	inputComponent->BindTouch(EInputEvent::IE_Released, this, &AFlowerGameCharacter::OnReleased);
}

void AFlowerGameCharacter::InitPlayer(ACaseDefault *caseInit, int32 ID)
{
	Position = caseInit;
	ID_Player = ID;
	TArray<TEnumAsByte<EDirection>> ways = CheckWaysAvailable(Position);
	if (ways.Num() > 0)
	{
		Direction = getDirection(GoToNextCase(Position, ways[0], false));
	}
}

void AFlowerGameCharacter::OnPressed(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (!isTouch)
	{
		isTouch = true;
		if (bWaitChoiceUser)
		{
			MoveToTouchLocation(Location);
		}
	}
}

void AFlowerGameCharacter::OnReleased(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (isTouch)
	{
		isTouch = false;
	}
}

void AFlowerGameCharacter::MoveToTouchLocation(const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetWorld()->GetFirstPlayerController()->GetHitResultAtScreenPosition(ScreenSpaceLocation, ECC_Visibility, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move here
		ACaseDefault *caseSelected = Cast<ACaseDefault>(HitResult.GetActor());
		if (caseSelected != nullptr)
		{
			if (caseSelected->bListenTouchEvent)
			{
				bWaitChoiceUser = false;
				ManageCaseChoice(Position, CheckWaysAvailable(Position), false);
				Position = GoToNextCase(Position, getDirection(caseSelected), true);
				MovementPoint--;
				MoveWithDice();
			}
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

void AFlowerGameCharacter::OnOverlapBegin(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ACaseDefault *caseOverlaped = Cast<ACaseDefault>(OtherActor);
		if (caseOverlaped != nullptr)
		{
			if (Position->ID_Case == caseOverlaped->ID_Case)
			{
				if (MovementPoint == 0)
				{
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
					bTurnFinished = true;
				}
				else
				{
					ManageCaseChoice(Position, CheckWaysAvailable(Position), true);
				}
			}
		}
	}
}

void AFlowerGameCharacter::OnOverlapEnd(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex)
{
}

void AFlowerGameCharacter::MoveWithDice()
{
	TArray<TEnumAsByte<EDirection>> waysAvailable;
	if (CheckWaysAvailable(Position).Num() > 1)
	{
		bWaitChoiceUser = true;
		ManageCaseChoice(Position, CheckWaysAvailable(Position), true);
	}

	while (MovementPoint != 0 && bWaitChoiceUser == false) {
		waysAvailable = CheckWaysAvailable(Position);
		if (waysAvailable.Num() == 1)
		{
			Position = GoToNextCase(Position, waysAvailable[0], true);
			MovementPoint--;
		}
		else
		{
			if (waysAvailable.Num() > 1)
			{
				bWaitChoiceUser = true;
			}
			else
			{
				print("Error");
				break;
			}
		}
	}

	FVector Origin;
	FVector BoundsExtend;
	Position->GetActorBounds(false, Origin, BoundsExtend);
	SetNewMoveDestination(Origin);
}

TArray<TEnumAsByte<EDirection>> AFlowerGameCharacter::CheckWaysAvailable(ACaseDefault *caseSelected)
{
	TArray<TEnumAsByte<EDirection>> Ways;
	if (caseSelected->caseUp != nullptr && Direction != EDirection::DIRECTION_DOWN)
	{
		Ways.Add(EDirection::DIRECTION_UP);
	}
	if (caseSelected->caseDown != nullptr && Direction != EDirection::DIRECTION_UP)
	{
		Ways.Add(EDirection::DIRECTION_DOWN);
	}
	if (caseSelected->caseRight != nullptr && Direction != EDirection::DIRECTION_LEFT)
	{
		Ways.Add(EDirection::DIRECTION_RIGHT);
	}
	if (caseSelected->caseLeft != nullptr && Direction != EDirection::DIRECTION_RIGHT)
	{
		Ways.Add(EDirection::DIRECTION_LEFT);
	}
	return Ways;
}

ACaseDefault *AFlowerGameCharacter::GoToNextCase(ACaseDefault *caseSelected, TEnumAsByte<EDirection> DirectionSelected, bool bChangeDirection)
{
	ACaseDefault *nextCase = nullptr;
	switch (DirectionSelected)
	{
	case EDirection::DIRECTION_UP:
		nextCase = caseSelected->caseUp;
		break;
	case EDirection::DIRECTION_DOWN:
		nextCase = caseSelected->caseDown;
		break;
	case EDirection::DIRECTION_LEFT:
		nextCase = caseSelected->caseLeft;
		break;
	case EDirection::DIRECTION_RIGHT:
		nextCase = caseSelected->caseRight;
		break;
	case EDirection::DIRECTION_UNKNOWN:
		nextCase = Position;
		print("Unknown");
		break;
	default:
		print("Default");
		break;
	}

	if (bChangeDirection)
	{
		Direction = DirectionSelected;
	}

	if (nextCase == nullptr)
	{
		print("C'est un nullptr OMG");
		nextCase = Position;
	}
	return nextCase;
}

void AFlowerGameCharacter::ManageCaseChoice(ACaseDefault *caseSelected, TArray<TEnumAsByte<EDirection>> waysAvailable, bool isEnable)
{
	ACaseDefault *caseToChoice;
	for (int i = 0; i < waysAvailable.Num(); i++)
	{
		caseToChoice = GoToNextCase(caseSelected, waysAvailable[i], false);
		if (isEnable)
		{
			caseToChoice->bListenTouchEvent = true;
			caseToChoice->CaseMesh->SetRenderCustomDepth(true);
		}
		else
		{
			caseToChoice->bListenTouchEvent = false;
			caseToChoice->CaseMesh->SetRenderCustomDepth(false);
		}
	}
}

TEnumAsByte<EDirection> AFlowerGameCharacter::getDirection(ACaseDefault *caseDestination)
{
	TEnumAsByte<EDirection> DirectionDestination = EDirection::DIRECTION_UNKNOWN;
	TArray<TEnumAsByte<EDirection>> waysAvailable;
	waysAvailable = CheckWaysAvailable(Position);
	for (int32 i = 0; i < waysAvailable.Num(); i++)
	{
		if (GoToNextCase(Position, waysAvailable[i], false)->ID_Case == caseDestination->ID_Case)
		{
			DirectionDestination = waysAvailable[i];
		}
	}

	return DirectionDestination;
}

void AFlowerGameCharacter::DamagePlayer(AFlowerGameCharacter *PlayerSelected, int32 HealthDamage) {
	PlayerSelected->Health -= HealthDamage;
}