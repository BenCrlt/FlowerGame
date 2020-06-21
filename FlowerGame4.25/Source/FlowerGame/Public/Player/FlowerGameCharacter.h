// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Model/Cases/CaseDefault.h"
#include "Model/Weapons/Weapon.h"
#include "Model/Weapons/Sniper.h"
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
#include "FlowerGame/FlowerGameGameModeBase.h"
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
	virtual void SetupPlayerInputComponent(class UInputComponent *inputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent *CameraPlayer;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent *SpringArmPlayer;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCapsuleComponent *TriggerCapsule;

	//Attributs personnage
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributs")
	int32 ID_Player;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributs")
	FString NomPlayer;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributs")
	int32 Health;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributs")
	int32 MaxHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributs")
	int32 Ammo;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributs")
	ACaseDefault *Position;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributs")
	TEnumAsByte<EDirection> Direction;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributs")
	int32 MovementPoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributs")
	class AWeapon *WeaponSelected;

	//Boolean
	UPROPERTY()
		bool bWaitChoiceUser;
	UPROPERTY()
		bool isTouch;
	UPROPERTY()
		bool bMoveDiceFinish;

	UFUNCTION()
	void InitPlayer(ACaseDefault *caseInit, int32 ID);
	UFUNCTION()
	void MoveWithDice();
	UFUNCTION()
	void ManageCaseChoice(ACaseDefault *caseSelected, TArray<TEnumAsByte<EDirection>> waysAvailable, bool isEnable);

	/** Navigate player to the current touch location. */
	void MoveToTouchLocation(ACaseDefault* DestinationCase);

	/** Navigate player to the given world location. */
	void SetNewMoveDestination(ACaseDefault *caseSelected);

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
	// declare overlap end function
	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex);

	//Gameplay function
	UFUNCTION()
	void ChangeWeapon(AWeapon *WeaponChoosed);
	UFUNCTION()
	void LoadWeapon();
	UFUNCTION()
	bool ShootPlayer(AFlowerGameCharacter *OtherPlayer, int32 Damage);
	UFUNCTION()
		bool CheckIfCanShoot();
};
