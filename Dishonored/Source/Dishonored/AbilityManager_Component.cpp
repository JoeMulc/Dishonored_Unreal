// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityManager_Component.h"
#include "Blink_Ability.h"
#include "DishonoredCharacter.h"

// Sets default values for this component's properties
UAbilityManager_Component::UAbilityManager_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	//startingAbilityArray.Add(UBlink_Ability::StaticClass());
}


// Called when the game starts
void UAbilityManager_Component::BeginPlay()
{
	Super::BeginPlay();
	InitializeAbilities();

	// ...
	
}

void UAbilityManager_Component::InitializeAbilities()
{
	UE_LOG(LogTemp, Warning, TEXT("Initializing abilities"))
	ADishonoredCharacter* ownerCharacter = Cast<ADishonoredCharacter>(GetOwner());

	if (!ownerCharacter) {UE_LOG(LogTemp, Error, TEXT("Owner character not found")); return;}

	for (TSubclassOf<UAbility> abilityClass : startingAbilityArray)
	{
		UE_LOG(LogTemp, Warning, TEXT("1"));
		if (abilityClass)
		{
			//Create instance of ability
			UAbility* newAbility = NewObject<UAbility>(this, abilityClass);
			UE_LOG(LogTemp, Warning, TEXT("2"));

			if (newAbility)
			{
				newAbility->characterRef = ownerCharacter;
				abilityArray.Add(newAbility);
				UE_LOG(LogTemp, Warning, TEXT("Initialized ability: %s"), *newAbility->GetName());
			}
		}
	}
}


// Called every frame
void UAbilityManager_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



