// Fill out your copyright notice in the Description page of Project Settings.


#include "Model/DefensiveActions/TrivetAction.h"
#include "FlowerGame/FlowerGameGameModeBase.h"
#include "UObject/ConstructorHelpers.h"

UTrivetAction::UTrivetAction() {
	static ConstructorHelpers::FObjectFinder<UTexture2D> Texture(TEXT("/Game/MobileStarterContent/UI/Asset/TrivetAction"));
	Name = "Trivette";
	Description = TEXT("Trivette renvoie la balle. Merci Trivette notre héros à tous");
	if (Texture.Object != NULL) {
		Image = Texture.Object;
	}
}

void UTrivetAction::ActiveAction(AFlowerGameGameModeBase* FlowerGameMode, AFlowerGameCharacter* PlayerControlled, AFlowerGameCharacter* PlayerDamaged, int32 Damage) {
	Super::ActiveAction(FlowerGameMode, PlayerControlled, PlayerDamaged, Damage);
	FlowerGameMode->OnUpdateChoiceShoot.Broadcast(PlayerControlled, Damage);
	PlayerControlled->DefActionEquipped = nullptr;
}