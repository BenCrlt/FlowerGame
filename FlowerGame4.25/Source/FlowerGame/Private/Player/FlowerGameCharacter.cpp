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
	bMoveDiceFinish = false;
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
}

void AFlowerGameCharacter::InitPlayer(ACaseDefault *caseInit, int32 ID)
{
	Position = caseInit;
	ID_Player = ID;
	TArray<TEnumAsByte<EDirection>> ways = Position->CheckWaysAvailable(Direction);
	if (ways.Num() > 0)
	{
		Direction = Position->getDirection(Position->GoToNextCase(ways[0]));
	}
}

void AFlowerGameCharacter::MoveToTouchLocation(ACaseDefault* DestinationCase)
{
	if (DestinationCase->bListenTouchEvent)
	{
		bWaitChoiceUser = false;
		ManageCaseChoice(Position, Position->CheckWaysAvailable(Direction), false);
		Direction = Position->getDirection(DestinationCase);
		Position = Position->GoToNextCase(Direction);
		SetNewMoveDestination(Position);
		MovementPoint--;
		MoveWithDice();
	}
}

void AFlowerGameCharacter::SetNewMoveDestination(ACaseDefault *caseSelected)
{
	FVector Origin;
	FVector BoundsExtend;
	Position->GetActorBounds(false, Origin, BoundsExtend);

	float const Distance = FVector::Dist(Origin, GetActorLocation());
	// We need to issue move command only if far enough in order for walk animation to play correctly
	if (Distance > 120.0f)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(Controller, Origin);
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
					if (AFlowerGameGameModeBase *FlowerGameMode = Cast<AFlowerGameGameModeBase>(GetWorld()->GetAuthGameMode()))
					{
						FlowerGameMode->SetCurrentState(EGamePlayState::ETurnAction);
					}
					bMoveDiceFinish = true;
				}
				else
				{
					ManageCaseChoice(Position, Position->CheckWaysAvailable(Direction), true);
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
	bMoveDiceFinish = false;
	TArray<TEnumAsByte<EDirection>> waysAvailable;
	if (Position->CheckWaysAvailable(Direction).Num() > 1)
	{
		bWaitChoiceUser = true;
		ManageCaseChoice(Position, Position->CheckWaysAvailable(Direction), true);
	}

	while (MovementPoint != 0 && bWaitChoiceUser == false)
	{
		waysAvailable = Position->CheckWaysAvailable(Direction);
		if (waysAvailable.Num() == 1)
		{
			Position = Position->GoToNextCase(waysAvailable[0]);
			Direction = waysAvailable[0];
			MovementPoint--;
		}
		else
		{
			if (waysAvailable.Num() > 1)
			{
				bWaitChoiceUser = true;
				SetNewMoveDestination(Position);
			}
			else
			{
				print("Error");
				break;
			}
		}
	}

	if (MovementPoint == 0)
	{
		SetNewMoveDestination(Position);
	}
}

void AFlowerGameCharacter::ManageCaseChoice(ACaseDefault *caseSelected, TArray<TEnumAsByte<EDirection>> waysAvailable, bool isEnable)
{
	ACaseDefault *caseToChoice;
	for (int i = 0; i < waysAvailable.Num(); i++)
	{
		caseToChoice = caseSelected->GoToNextCase(waysAvailable[i]);
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

void AFlowerGameCharacter::ChangeWeapon(class AWeapon *WeaponChoosed)
{
	WeaponSelected = WeaponChoosed;
	Ammo = WeaponSelected->LoadWeapon(Ammo);
	WeaponSelected->MeshGun->AttachTo(GetMesh(), "SocketWeapon");
}

void AFlowerGameCharacter::LoadWeapon()
{
	Ammo = WeaponSelected->LoadWeapon(Ammo);
}

bool AFlowerGameCharacter::ShootPlayer(AFlowerGameCharacter *OtherPlayer, int32 Damage)
{
	bool isDamaged = false;
	if (WeaponSelected)
	{
		if (WeaponSelected->Mag >= WeaponSelected->GetAmmoPerShot())
		{
			OtherPlayer->Health -= Damage;
			WeaponSelected->Fire();
			isDamaged = true;
		}
	}
	return isDamaged;
}

bool AFlowerGameCharacter::CheckIfCanShoot() {
	bool bCanShoot = false;
	if (WeaponSelected) {
		if (WeaponSelected->Mag >= WeaponSelected->GetAmmoPerShot())
		{
			bCanShoot = true;
		}
	}
	return bCanShoot;
}