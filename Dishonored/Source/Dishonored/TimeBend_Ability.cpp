// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeBend_Ability.h"
#include "DishonoredCharacter.h"

UTimeBend_Ability::UTimeBend_Ability()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> IconAsset(TEXT("/Script/Engine.Texture2D'/Game/FirstPerson/UI/TimeBendIcon.TimeBendIcon'"));
	if (IconAsset.Succeeded()) abilityIcon = IconAsset.Object;

	name = "TimeBend";
	cooldown = 3.0f;
	manaCost = 66.f;
}

void UTimeBend_Ability::Initialize()
{

}

void UTimeBend_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("Timebend activated!"));

	if (!bAbilityActive && characterRef->currentMana > manaCost)
	{
		bAbilityActive = true;

		currentCooldown = cooldown;

		TakePlayerMana(manaCost);

		GetWorld()->GetWorldSettings()->SetTimeDilation(0.1f);
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
			{
				if (characterRef)
				{
					characterRef->CustomTimeDilation = 10.0f;
				}
			});


	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Timebend cancelled!"));
		bAbilityActive = false;
		currentCooldown = 0.f;

		GetWorld()->GetWorldSettings()->SetTimeDilation(1.f);
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
			{
				if (characterRef)
				{
					characterRef->CustomTimeDilation = 1.0f;
				}
			});
	}

}

void UTimeBend_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Timebend deactivated!"));
}

void UTimeBend_Ability::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsOnCooldown() && bAbilityActive)
	{
		UE_LOG(LogTemp, Warning, TEXT("Timebend finished!"));

		bAbilityActive = false;

		if (characterRef)
		{
			characterRef->CustomTimeDilation = 1.0f;
		}

		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
			{
				GetWorld()->GetWorldSettings()->SetTimeDilation(1.f);
			});
	}
}