// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "UI_PlayingGame.generated.h"

/**
 * 
 */
UCLASS()
class FLOWERGAME_API AUI_PlayingGame : public AHUD
{
	GENERATED_BODY()

public:

	AUI_PlayingGame();

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, Category = "UI_Widget")
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY(EditAnywhere, Category = "UI_Widget")
	class UUserWidget* CurrentWidget;
};

