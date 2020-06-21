// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Weapon.generated.h"

UCLASS()
class FLOWERGAME_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent *MeshGun;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 MagSize;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 Mag;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<int32> Range;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 AmmoPerShot;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int32 Damage;

	UFUNCTION()
	int32 LoadWeapon(int32 Ammo);
	UFUNCTION()
	int32 GetAmmoPerShot();
	UFUNCTION()
	void Fire();
};
