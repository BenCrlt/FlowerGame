// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Model/Cases/CaseDefault.h"
#include "FlowerGamePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FLOWERGAME_API AFlowerGamePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AFlowerGamePlayerController();

protected:

	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	virtual void ProcessPlayerInput(const float DeltaTime, const bool bGamePaused) override;
	void OnTapPressed(const FVector2D& ScreenPosition, float DownTime);
	void OnPinchStarted(const FVector2D& AnchorPosition1, const FVector2D& AnchorPosition2, float DownTime);
	void OnPinchUpdate(const FVector2D& ScreenPosition1, const FVector2D& ScreenPosition2, float DownTime);
	//void OnHoldPressed(const FVector2D& ScreenPosition, float DownTime);
	//void OnHoldReleased(const FVector2D& ScreenPosition, float DownTime);
	//void OnSwipeStarted(const FVector2D& AnchorPosition, float DownTime);
	//void OnSwipeUpdate(const FVector2D& ScreenPosition, float DownTime);
	//void OnSwipeReleased(const FVector2D& ScreenPosition, float DownTime);
	//void OnSwipeTwoPointsStarted(const FVector2D& ScreenPosition1, const FVector2D& ScreenPosition2, float DownTime);
	//void OnSwipeTwoPointsUpdate(const FVector2D& ScreenPosition1, const FVector2D& ScreenPosition2, float DownTime);

public:
	UFUNCTION()
		ACaseDefault* GetCaseTouch(FVector2D ScreenPosition);
	UFUNCTION()
		void ZoomIn();
	UFUNCTION()
		void ZoomOut();

	UPROPERTY()
		class UTouchInput* InputHandler;
	UPROPERTY()
		float PinchLenght;
	UPROPERTY()
		int32 ZoomMax;
	UPROPERTY()
		int32 ZoomMin;
	UPROPERTY()
		int32 ZoomIntensity;
};