// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FlowerGamePlayerController.h"
#include "Player/FlowerGameCharacter.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

AFlowerGamePlayerController::AFlowerGamePlayerController() {
	bShowMouseCursor = true;
}

void AFlowerGamePlayerController::SetupInputComponent() {
	Super::SetupInputComponent();

	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AFlowerGamePlayerController::MoveToTouchLocation);
	InputComponent->BindTouch(EInputEvent::IE_Released, this, &AFlowerGamePlayerController::MoveToTouchLocation);
}

void AFlowerGamePlayerController::PlayerTick(float DeltaTime) {
	Super::PlayerTick(DeltaTime);
}

void AFlowerGamePlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	static ConstructorHelpers::FObjectFinder<APawn> PlayerPawnBP(TEXT("/Game/MobileStarterContent/Blueprints/BP_FlowerGameCharacter"));
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenSpaceLocation, ECC_Visibility, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move here
		AActor* caseSelected = HitResult.GetActor();
;		FVector Origin;
		FVector BoundsExtend;
		//Go to the center of the actor
		caseSelected->GetActorBounds(false, Origin, BoundsExtend);
		SetNewMoveDestination(Origin);
	}
}

void AFlowerGamePlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	APawn* const MyPawn = this->GetPawn();
	if (MyPawn)
	{
		float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());
		// We need to issue move command only if far enough in order for walk animation to play correctly
		if (Distance > 120.0f)
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
		}
	}
}