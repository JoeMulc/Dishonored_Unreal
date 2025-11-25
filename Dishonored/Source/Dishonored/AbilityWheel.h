// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Ability.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"    
#include "Components/ButtonSlot.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Blueprint/WidgetTree.h"
#include "AbilityWheel.generated.h"

/**
 * 
 */
UCLASS()
class DISHONORED_API UAbilityWheel : public UUserWidget
{
	GENERATED_BODY()

protected:

	UTexture2D* buttonIcon;
	UButton* button;
	UImage* buttonImage;

public:
	void InitButton(UTexture2D* icon);
};
