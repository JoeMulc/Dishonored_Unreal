// Fill out your copyright notice in the Description page of Project Settings.


#include "Blink_Ability.h"
#include "DishonoredCharacter.h"

UBlink_Ability::UBlink_Ability()
{

}

void UBlink_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("Ability activated!"));
	
	doTick = true;
}

void UBlink_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Ability deactivated!"));

	doTick = false;
}

void UBlink_Ability::Tick(float DeltaTime)
{
	if (!doTick) return;
	UE_LOG(LogTemp, Warning, TEXT("Ticking!"));
}
