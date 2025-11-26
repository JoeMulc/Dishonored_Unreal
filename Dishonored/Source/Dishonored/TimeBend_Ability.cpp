// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeBend_Ability.h"

UTimeBend_Ability::UTimeBend_Ability()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> IconAsset(TEXT("/Script/Engine.Texture2D'/Game/FirstPerson/UI/TimeBendIcon.TimeBendIcon'"));
	if (IconAsset.Succeeded()) abilityIcon = IconAsset.Object;

	name = "TimeBend";
	//cooldown = 1.5f;
	manaCost = 66.f;
}

void UTimeBend_Ability::Initialize()
{

}

void UTimeBend_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("Timebend activated!"));
}

void UTimeBend_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Timebend deactivated!"));
}