// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability.h"
#include "Blink_Ability.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DISHONORED_API UBlink_Ability : public UAbility
{
	GENERATED_BODY()
public:
	UBlink_Ability();

	virtual void Activate();
	virtual void Deactivate();

	virtual void Tick(float DeltaTime) override;
};
