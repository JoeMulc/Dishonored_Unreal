// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Ability.h"
#include "AbilityManager_Component.generated.h"

//Forward declaration
class ADishonoredCharacter;

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DISHONORED_API UAbilityManager_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilityManager_Component();
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSubclassOf<UAbility>> startingAbilityArray;
	UPROPERTY(BlueprintReadOnly) TArray<UAbility*> abilityArray;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void InitializeAbilities();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
