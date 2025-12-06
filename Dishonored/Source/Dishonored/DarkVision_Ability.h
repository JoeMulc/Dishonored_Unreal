// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability.h"
#include "DarkVision_Ability.generated.h"

/**
 * 
 */
UCLASS()
class DISHONORED_API UDarkVision_Ability : public UAbility
{
	GENERATED_BODY()

public:
	UDarkVision_Ability();

	virtual void Initialize();
	virtual void Activate();
	virtual void Deactivate();

	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY() UMaterialInstance* darkVisionMat;

	UPROPERTY() UMaterialInstanceDynamic* darkVisionMatDynamic;

	UPROPERTY(EditAnywhere) float transitionLerpSpeed = 6.f;

	void SetDarkVision(bool bEnable);

	float targetIntensity = 0.f;
	float currentIntesnity = 0.f;
};
