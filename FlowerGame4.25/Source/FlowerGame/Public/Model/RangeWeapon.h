// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "RangeWeapon.generated.h"

UENUM()
enum ETypeRange
{
	OUT_RANGE UMETA(DisplayName = "Out Range"),
	IN_RANGE_NO_PLAYER UMETA(DisplayName = "In Range No Player"),
	IN_RANGE_PLAYER UMETA(DisplayName = "In Range Player")
};

UCLASS()
class FLOWERGAME_API ARangeWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARangeWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY()
		UStaticMesh* Mesh_OutRange;
	UPROPERTY()
		UStaticMesh* Mesh_InRangeNP;
	UPROPERTY()
		UStaticMesh* Mesh_InRangeP;

	UFUNCTION()
	void InitRangeWeapon(TEnumAsByte<ETypeRange> TypeRange);

};
