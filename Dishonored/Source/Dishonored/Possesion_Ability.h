// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability.h"
#include "Possesion_Ability.generated.h"

/**
 * 
 */
UCLASS()
class DISHONORED_API UPossesion_Ability : public UAbility
{
	GENERATED_BODY()
	
public:
	UPossesion_Ability();

	virtual void Initialize();
	virtual void Activate();
	virtual void Deactivate();

	virtual void Tick(float DeltaTime) override;

};
