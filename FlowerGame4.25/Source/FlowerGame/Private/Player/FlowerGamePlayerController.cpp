// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/FlowerGamePlayerController.h"
#include "Player/FlowerGameCharacter.h"
#include "Player/TouchInput.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

AFlowerGamePlayerController::AFlowerGamePlayerController() {
	bShowMouseCursor = true;
	ZoomMin = 1200;
	ZoomMax = 10000;
	ZoomIntensity = 500;
}

void AFlowerGamePlayerController::SetupInputComponent() {
    Super::SetupInputComponent();

    InputHandler = NewObject<UTouchInput>(this);

    BIND_1P_ACTION(InputHandler, EGameKey::Tap, IE_Pressed, &AFlowerGamePlayerController::OnTapPressed);
    /*BIND_1P_ACTION(InputHandler, EGameKey::Hold, IE_Pressed, &AFlowerGamePlayerController::OnHoldPressed);
    BIND_1P_ACTION(InputHandler, EGameKey::Hold, IE_Released, &AFlowerGamePlayerController::OnHoldReleased);
    BIND_1P_ACTION(InputHandler, EGameKey::Swipe, IE_Pressed, &AFlowerGamePlayerController::OnSwipeStarted);
    BIND_1P_ACTION(InputHandler, EGameKey::Swipe, IE_Repeat, &AFlowerGamePlayerController::OnSwipeUpdate);
    BIND_1P_ACTION(InputHandler, EGameKey::Swipe, IE_Released, &AFlowerGamePlayerController::OnSwipeReleased);
    BIND_2P_ACTION(InputHandler, EGameKey::SwipeTwoPoints, IE_Pressed, &AFlowerGamePlayerController::OnSwipeTwoPointsStarted);
    BIND_2P_ACTION(InputHandler, EGameKey::SwipeTwoPoints, IE_Repeat, &AFlowerGamePlayerController::OnSwipeTwoPointsUpdate);*/
    BIND_2P_ACTION(InputHandler, EGameKey::Pinch, IE_Pressed, &AFlowerGamePlayerController::OnPinchStarted);
    BIND_2P_ACTION(InputHandler, EGameKey::Pinch, IE_Repeat, &AFlowerGamePlayerController::OnPinchUpdate);
}

void AFlowerGamePlayerController::PlayerTick(float DeltaTime) {
	Super::PlayerTick(DeltaTime);
}

void AFlowerGamePlayerController::ProcessPlayerInput(const float DeltaTime, const bool bGamePaused)
{
    if (!bGamePaused && PlayerInput && InputHandler)
    {
        InputHandler->UpdateDetection(DeltaTime);
    }

    Super::ProcessPlayerInput(DeltaTime, bGamePaused);
}

void AFlowerGamePlayerController::OnTapPressed(const FVector2D& ScreenPosition, float DownTime) {
	if (AFlowerGameCharacter* PlayerControlled = Cast<AFlowerGameCharacter>(this->GetPawn())) {
		ACaseDefault* caseSelected = GetCaseTouch(ScreenPosition);
		if (caseSelected) {
			if (PlayerControlled->bWaitChoiceUser)
			{
				PlayerControlled->MoveToTouchLocation(caseSelected);
			}
			if (PlayerControlled->bMoveDiceFinish)
			{
				if (AFlowerGameGameModeBase* FlowerGameMode = Cast<AFlowerGameGameModeBase>(GetWorld()->GetAuthGameMode()))
				{
					if (PlayerControlled->CheckIfCanShoot()) {
						if (caseSelected->ID_Case == PlayerControlled->Position->ID_Case) {
							FlowerGameMode->bEnableRange = !FlowerGameMode->bEnableRange;
							FlowerGameMode->CheckPlayersInRange();
						}
						else {
							if (FlowerGameMode->bEnableRange) {
								FlowerGameMode->ShootPlayer(caseSelected);
							}
						}
					}
				}
			}
		}
	}
}

void AFlowerGamePlayerController::OnPinchStarted(const FVector2D& AnchorPosition1, const FVector2D& AnchorPosition2, float DownTime) {
	PinchLenght = FVector2D::Distance(AnchorPosition1, AnchorPosition2);
}

void AFlowerGamePlayerController::OnPinchUpdate(const FVector2D& ScreenPosition1, const FVector2D& ScreenPosition2, float DownTime) {
	float newPinchLength = FVector2D::Distance(ScreenPosition1, ScreenPosition2);
	if (FMath::Abs(newPinchLength - PinchLenght) > 20) {
		if (newPinchLength > PinchLenght) {
			ZoomIn();
		}
		else {
			ZoomOut();
		}
		PinchLenght = FVector2D::Distance(ScreenPosition1, ScreenPosition2);
	}
}

ACaseDefault* AFlowerGamePlayerController::GetCaseTouch(FVector2D ScreenPosition)
{
	FHitResult HitResult;
	ACaseDefault* caseSelected = nullptr;
	GetWorld()
		->GetFirstPlayerController()
		->GetHitResultAtScreenPosition(ScreenPosition, ECC_Visibility, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move here
		caseSelected = Cast<ACaseDefault>(HitResult.GetActor());
	}

	return caseSelected;
}

void AFlowerGamePlayerController::ZoomIn() {
	if (AFlowerGameCharacter* PlayerControlled = Cast<AFlowerGameCharacter>(this->GetPawn())) {
		if (PlayerControlled->SpringArmPlayer->TargetArmLength > ZoomMin) {
			PlayerControlled->SpringArmPlayer->TargetArmLength -= ZoomIntensity;
		}
	}

}

void AFlowerGamePlayerController::ZoomOut() {
	if (AFlowerGameCharacter* PlayerControlled = Cast<AFlowerGameCharacter>(this->GetPawn())) {
		if (PlayerControlled->SpringArmPlayer->TargetArmLength < ZoomMax) {
			PlayerControlled->SpringArmPlayer->TargetArmLength += ZoomIntensity;
		}
	}
}