// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DarkVisionHighlight_Component.generated.h"

UENUM(BlueprintType)
enum class EHighlightTypes : uint8
{
	defaultHighlight = 0 UMETA(DisplayName = "Default"),
	collectibleHighlight = 1 UMETA(DisplayName = "Collectible"),
	enemyHighlight = 2 UMETA(DisplayName = "Enemy"),
	objectiveHighlight = 3 UMETA(DisplayName = "Objective"),
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DISHONORED_API UDarkVisionHighlight_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDarkVisionHighlight_Component();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere) EHighlightTypes highlightType = EHighlightTypes::defaultHighlight;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
