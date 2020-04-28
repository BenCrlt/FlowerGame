// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/UI_PlayingGame.h"

AUI_PlayingGame::AUI_PlayingGame() {
	static ConstructorHelpers::FClassFinder<UUserWidget> PlayingUIObj(TEXT("/Game/MobileStarterContent/UI/UI_MainGame"));
	HUDWidgetClass = PlayingUIObj.Class;
}

void AUI_PlayingGame::BeginPlay()
{
	Super::BeginPlay();

	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);

		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}