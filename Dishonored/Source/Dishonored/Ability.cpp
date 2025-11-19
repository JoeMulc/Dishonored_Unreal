// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability.h"
#include "DishonoredCharacter.h"

UAbility::UAbility()
{

}

void UAbility::Initialize()
{

}

void UAbility::Activate()
{

}

void UAbility::Deactivate()
{

}

void UAbility::Tick(float DeltaTime)
{
    if (IsOnCooldown())
    {
        //UE_LOG(LogTemp, Warning, TEXT("Ability on cooldown! %.2f seconds remaining"), currentCooldown);
        currentCooldown = FMath::Max(0, currentCooldown - DeltaTime);
    }
}

TStatId UAbility::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UAbility, STATGROUP_Tickables);
}

bool UAbility::IsTickable() const
{
    return doTick && !IsTemplate();
}

ETickableTickType UAbility::GetTickableTickType() const
{
    return ETickableTickType::Always;
}

bool UAbility::IsOnCooldown()
{
    return currentCooldown > 0.f;
}