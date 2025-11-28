// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability.h"
#include "GameFramework/WorldSettings.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
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

	virtual void Tick(float DeltaTime) override;

protected:

	void SetGrayscale(bool bEnable);
	float currentSaturation = 1.f;
	float targetSaturation = 1.f;

	UPROPERTY(EditAnywhere) float timeSlowPercentage = 10.f;

};
