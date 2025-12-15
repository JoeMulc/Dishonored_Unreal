// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability.h"
#include "CollisionQueryParams.h"
#include "WorldCollision.h"  
#include "DrawDebugHelpers.h"
#include "Engine/OverlapResult.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WindBlast_Ability.generated.h"

/**
 * 
 */
UCLASS()
class DISHONORED_API UWindBlast_Ability : public UAbility
{
	GENERATED_BODY()

public:
	UWindBlast_Ability();

	virtual void Initialize();
	virtual void Activate();
	virtual void Deactivate();

	TArray<AActor*> TraceForMovable();

private:

	UPROPERTY(EditAnywhere) float windBlastRadius = 175.f;
	UPROPERTY(EditAnywhere) float windBlastDistance = 500.f;
	UPROPERTY(EditAnywhere) float windBlastForce = 1500.f;

	void BlastObjects(TArray<AActor*> actors);

	void BlastCharacter(ACharacter* character);

	UPROPERTY(EditAnywhere) UNiagaraSystem* windblastVFX;

	UPROPERTY() UNiagaraComponent* activeWindblastVFX;

	void SpawnVFX();
};
