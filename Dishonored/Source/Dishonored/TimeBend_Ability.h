// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability.h"
#include "TimeBend_Ability.generated.h"

/**
 * 
 */
UCLASS()
class DISHONORED_API UTimeBend_Ability : public UAbility
{
	GENERATED_BODY()

public:
	UTimeBend_Ability();

	virtual void Initialize();
	virtual void Activate();
	virtual void Deactivate();
	
};
