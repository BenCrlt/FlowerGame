// Fill out your copyright notice in the Description page of Project Settings.


#include "Model/DefensiveActions/DefensiveAction.h"
#include "FlowerGame/FlowerGameGameModeBase.h"
#include "UObject/ConstructorHelpers.h"

UDefensiveAction::UDefensiveAction() {
	Name = "ActionDef";
	Description = "Null";
	Image = nullptr;
}

void UDefensiveAction::ActiveAction(AFlowerGameGameModeBase* FlowerGameMode, AFlowerGameCharacter* PlayerControlled, AFlowerGameCharacter* PlayerDamaged, int32 Damage) {

}

void UDefensiveAction::CancelAction(AFlowerGameGameModeBase* FlowerGameMode, AFlowerGameCharacter* PlayerControlled, AFlowerGameCharacter* PlayerDamaged, int32 Damage) {
	FlowerGameMode->OnUpdateChoiceShoot.Broadcast(PlayerDamaged, Damage);
}