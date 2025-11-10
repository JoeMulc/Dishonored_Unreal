// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability.h"
#include "DishonoredCharacter.h"

UAbility::UAbility()
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
    if (!doTick) return;
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