// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"
#include "WorldCollision.h"  
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/TimelineComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
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

	virtual void Initialize();
	virtual void Activate();
	virtual void Deactivate();

	void ExecuteBlink();
	

	virtual void Tick(float DeltaTime) override;
private:

	UPROPERTY(EditAnywhere) float blinkTraceRadius = 80.f; 
	UPROPERTY(EditAnywhere) float blinkDistance = 800.f;
	UPROPERTY(EditAnywhere) float blinkSnapToGroundDistance = 150.f;

	FVector blinkLocation;
	bool bIsBlinking = false;

	bool WallTooClose();

	//Timeline
	FVector startLocation;

	UTimelineComponent* blinkTimeline;
	UPROPERTY(EditAnywhere) UCurveFloat* blinkCurve;

	FOnTimelineFloat blinkTimelineUpdateDelegate;
	FOnTimelineEvent blinkTimelineFinishedDelegate;

	UFUNCTION() void BlinkTimelineUpdate(float alpha);
	UFUNCTION() void BlinkTimelineFinished();
};
