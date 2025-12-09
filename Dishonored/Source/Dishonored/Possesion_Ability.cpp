// Fill out your copyright notice in the Description page of Project Settings.


#include "Possesion_Ability.h"
#include "DishonoredCharacter.h"

UPossesion_Ability::UPossesion_Ability()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> IconAsset(TEXT("/Script/Engine.Texture2D'/Game/FirstPerson/UI/PossesionIcon.PossesionIcon'"));
	if (IconAsset.Succeeded()) abilityIcon = IconAsset.Object;

	name = "Possesion";
	cooldown = 2.f;
	manaCost = 75.f;
}

void UPossesion_Ability::Initialize()
{
	playerController = Cast<APlayerController>(characterRef->GetController());
}

void UPossesion_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("Possesion activated!"));

	doTick = true;

}

void UPossesion_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Possesion deactivated!"));

	doTick = false;

	if (pawnToPosses)
	{
		if (characterRef->currentMana > manaCost)
		{
			TakePlayerMana(manaCost);
			if (playerController) playerController->Possess(pawnToPosses);
		}
		
	}

}

void UPossesion_Ability::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);

	if (!doTick) return;

	UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();

	FVector start = playerCamera->GetComponentLocation();
	FVector end = start + (playerCamera->GetForwardVector() * possesionDistance);

	FHitResult hitResult;
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(characterRef);

	bool bHit = GetWorld()->LineTraceSingleByChannel(
		hitResult,
		start,
		end,
		ECC_Pawn,
		queryParams
	);

	if (bHit)
	{
		if (hitResult.GetActor()->ActorHasTag("Posses"))
		{
			AActor* hitActor = hitResult.GetActor();

			APawn* hitPawn = Cast<APawn>(hitActor);

			if (hitPawn)
			{
				pawnToPosses = hitPawn;
			}
		}
	}

}
