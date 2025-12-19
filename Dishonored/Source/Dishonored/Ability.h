// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tickable.h"
#include "Animation/AnimSequence.h"
#include "Components/Image.h"
#include "Animation/AnimMontage.h"
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

	virtual void Initialize();
	virtual void Activate();
	virtual void Deactivate();
	virtual void DestroyVFX();
	class ADishonoredCharacter* characterRef;

	//Tick
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual bool IsTickable() const override;
	virtual ETickableTickType GetTickableTickType() const override;

	//Cooldown
	bool IsOnCooldown();
	void TakePlayerMana(float cost);

	FName name;

	UPROPERTY(EditAnywhere) UTexture2D* abilityIcon;

	UPROPERTY(BlueprintReadWrite) bool doAnimation = false;

	bool bAbilityActive = false;

protected:
	bool doTick = false;

	UPROPERTY(EditAnywhere) float cooldown = 0.f;
	float currentCooldown = 0.0f;

	UPROPERTY(EditAnywhere) float manaCost = 0.f;

	UPROPERTY() UAnimMontage* activateAnimation;
};
