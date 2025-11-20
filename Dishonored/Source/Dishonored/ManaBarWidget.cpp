// Fill out your copyright notice in the Description page of Project Settings.


#include "ManaBarWidget.h"

void UManaBarWidget::UpdateManaBar(float currentMana, float maxMana)
{
	if (manaProgressBar)
	{
		float percent = (100 / maxMana) * currentMana;
		manaProgressBar->SetPercent(percent/ 100);
		//UE_LOG(LogTemp, Warning, TEXT("Setting mana to : %f"), percent);
	}
}
