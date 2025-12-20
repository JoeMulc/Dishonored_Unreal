// Fill out your copyright notice in the Description page of Project Settings.


#include "DarkVision_Ability.h"
#include "DishonoredCharacter.h"
#include "EngineUtils.h"  
#include "Engine/PostProcessVolume.h"

UDarkVision_Ability::UDarkVision_Ability()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> IconAsset(TEXT("/ Script / Engine.Texture2D'/Game/FirstPerson/UI/DarkVisionIcon.DarkVisionIcon'"));
	if (IconAsset.Succeeded()) abilityIcon = IconAsset.Object;

	static ConstructorHelpers::FObjectFinder<USoundBase> activateSoundAsset(TEXT("/Script/Engine.SoundWave'/Game/FirstPerson/Audio/DarkVisionAudio.DarkVisionAudio'"));
	if (IconAsset.Succeeded()) activateSound = activateSoundAsset.Object;

	darkVisionMat = LoadObject<UMaterialInstance>(nullptr, TEXT("/Script/Engine.MaterialInstanceConstant'/Game/FirstPerson/Abilities/DarkVision/Mat_DarkVisialHighlight_Inst.Mat_DarkVisialHighlight_Inst'"));

	name = "DarkVision";
	cooldown = 10.f;
	manaCost = 25.f;
}

void UDarkVision_Ability::Initialize()
{
	if (darkVisionMat)
	{
		darkVisionMatDynamic = UMaterialInstanceDynamic::Create(darkVisionMat, this);

		APostProcessVolume* pPVolume = nullptr;
		for (TActorIterator<APostProcessVolume> it(GetWorld()); it; ++it)
		{
			pPVolume = *it;
			break;
		}

		if (pPVolume && pPVolume->Settings.WeightedBlendables.Array.Num() > 0)
		{
			pPVolume->Settings.WeightedBlendables.Array[0].Object = darkVisionMatDynamic;
		}
	}
}

void UDarkVision_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("DarkVision activated!"));

	if (!bAbilityActive && characterRef->currentMana > manaCost)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), activateSound);
		bAbilityActive = true;
		currentCooldown = cooldown;
		TakePlayerMana(manaCost);
		SetDarkVision(true);
	}
	else
	{
		currentCooldown = 0.f;
		SetDarkVision(false);
		bAbilityActive = false;
	}
}

void UDarkVision_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("DarkVision deactivate!"));

}

void UDarkVision_Ability::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (!IsOnCooldown() && bAbilityActive)
	{
		SetDarkVision(false);
		bAbilityActive = false;
	}

	if (currentIntesnity != targetIntensity)
	{
		currentIntesnity = FMath::FInterpTo(currentIntesnity, targetIntensity, deltaTime, transitionLerpSpeed);

		darkVisionMatDynamic->SetScalarParameterValue(FName("Intensity"), currentIntesnity);
	}
}

void UDarkVision_Ability::SetDarkVision(bool bEnable)
{
	targetIntensity = bEnable ? 1.f : 0.f;
}