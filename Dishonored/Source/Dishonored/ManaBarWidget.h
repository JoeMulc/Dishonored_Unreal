// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "ManaBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class DISHONORED_API UManaBarWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable) void UpdateManaBar(float currentMana, float maxMana);

protected:
	UPROPERTY(meta = (BindWidget)) UProgressBar* manaProgressBar;
	
};
