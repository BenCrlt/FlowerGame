// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Model/Cases/CaseDefault.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Engine.h"
#include "FlowerGameCharacter.generated.h"

UCLASS()
class FLOWERGAME_API AFlowerGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFlowerGameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* inputComponent) override;
	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UCameraComponent* CameraPlayer;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USpringArmComponent* SpringArmPlayer;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UCapsuleComponent* TriggerCapsule;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FString Position;
	
	/** Navigate player to the current touch location. */
	void MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Navigate player to the given world location. */
	void SetNewMoveDestination(const FVector DestLocation);

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// declare overlap end function
	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
