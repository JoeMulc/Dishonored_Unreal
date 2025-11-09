// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Ability.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DISHONORED_API UAbility : public UObject
{
	GENERATED_BODY()
	
public:
	UAbility();

	virtual void Test();
	class ADishonoredCharacter* characterRef;
private:

	
};
