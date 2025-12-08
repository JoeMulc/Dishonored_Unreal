// Fill out your copyright notice in the Description page of Project Settings.


#include "Possesion_Ability.h"
#include "DishonoredCharacter.h"

UPossesion_Ability::UPossesion_Ability()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> IconAsset(TEXT("/Script/Engine.Texture2D'/Game/FirstPerson/UI/PossesionIcon.PossesionIcon'"));
	if (IconAsset.Succeeded()) abilityIcon = IconAsset.Object;

	name = "Possesion";
	cooldown = 2.f;
	manaCost = 25.f;
}

void UPossesion_Ability::Initialize()
{

}

void UPossesion_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("Possesion activated!"));

}

void UPossesion_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Possesion deactivated!"));

}

void UPossesion_Ability::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);

}
