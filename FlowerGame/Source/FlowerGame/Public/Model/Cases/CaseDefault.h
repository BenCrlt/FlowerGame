// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "EngineUtils.h"
#include "CaseDefault.generated.h"

UENUM()
enum ECases
{
	CASE_DEFAULT UMETA(DisplayName = "Default"),
	CASE_STORE UMETA(DisplayName = "Store"),
	CASE_SPAWN UMETA(DisplayName = "Spawn")
};

UCLASS()
class FLOWERGAME_API ACaseDefault : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACaseDefault();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool equalsPosition(ACaseDefault *otherCase);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent *Root;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent *CaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Info Case")
	TEnumAsByte<ECases> name_Case;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Info Case")
	ACaseDefault *caseRight;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Info Case")
	ACaseDefault *caseLeft;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Info Case")
	ACaseDefault *caseUp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Info Case")
	ACaseDefault *caseDown;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Info Case")
	bool bListenTouchEvent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Info Case")
	int32 ID_Case;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Info Case")
	TArray<int32> Coordonnees;
};