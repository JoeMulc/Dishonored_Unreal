// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tickable.h"
#include "Ability.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DISHONORED_API UAbility : public UObject, public FTickableGameObject
{
	GENERATED_BODY()
	
public:
	UAbility();

	virtual void Activate();
	virtual void Deactivate();
	class ADishonoredCharacter* characterRef;

	//Tick
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual bool IsTickable() const override;
	virtual ETickableTickType GetTickableTickType() const override;

protected:
	bool doTick = false;
	
};
