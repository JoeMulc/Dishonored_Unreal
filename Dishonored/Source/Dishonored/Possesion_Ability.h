// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"
#include "WorldCollision.h"  
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Components/TimelineComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
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

private:
	UPROPERTY(EditAnywhere) float possesionDistance = 600.f;

	APawn* pawnToPosses;

	APlayerController* playerController;

	UPROPERTY(EditAnywhere) UNiagaraSystem* possesionVFX;

	UPROPERTY() UNiagaraComponent* activePossesionVFX;


};
