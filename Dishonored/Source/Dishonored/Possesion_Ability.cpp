// Fill out your copyright notice in the Description page of Project Settings.


#include "Possesion_Ability.h"
#include "DishonoredCharacter.h"

UPossesion_Ability::UPossesion_Ability()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> IconAsset(TEXT("/Script/Engine.Texture2D'/Game/FirstPerson/UI/PossesionIcon.PossesionIcon'"));
	if (IconAsset.Succeeded()) abilityIcon = IconAsset.Object;

	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> possesionVFXAsset(TEXT("/Script/Niagara.NiagaraSystem'/Game/FirstPerson/Abilities/Possesion/PossesionHighlight_VFX.PossesionHighlight_VFX'"));

	if (possesionVFXAsset.Succeeded()) possesionVFX = possesionVFXAsset.Object;

	name = "Possesion";
	cooldown = 2.f;
	manaCost = 75.f;
}

void UPossesion_Ability::Initialize()
{
	playerController = Cast<APlayerController>(characterRef->GetController());

	activePossesionVFX = UNiagaraFunctionLibrary::SpawnSystemAtLocation(				//activate and set visibility
		GetWorld(),
		possesionVFX,
		characterRef->GetActorLocation(),
		FRotator::ZeroRotator,
		FVector(1.0f),
		true,
		true,
		ENCPoolMethod::None
	);

	if (activePossesionVFX) activePossesionVFX->SetVisibility(false);

}

void UPossesion_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("Possesion activated!"));

	doTick = true;

	if (activePossesionVFX) activePossesionVFX->SetVisibility(true);
}

void UPossesion_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Possesion deactivated!"));

	doTick = false;
	if (activePossesionVFX) activePossesionVFX->SetVisibility(false);
	

	if (pawnToPosses && characterRef->currentMana > manaCost)
	{
		TakePlayerMana(manaCost);

		if (playerController)
		{
			UCameraComponent* targetCamera = pawnToPosses->FindComponentByClass<UCameraComponent>();
			FRotator targetRotation = targetCamera->GetComponentRotation();

			playerController->SetViewTargetWithBlend(
				pawnToPosses,
				0.5f,
				EViewTargetBlendFunction::VTBlend_Cubic
			);

			if (UCharacterMovementComponent* movementComp = characterRef->GetCharacterMovement())
			{
				movementComp->SetComponentTickEnabled(false);
				movementComp->StopMovementImmediately();
				movementComp->DisableMovement();
			}

			characterRef->SetActorTickEnabled(false);
			characterRef->SetActorHiddenInGame(true);
			characterRef->SetActorEnableCollision(false);
			characterRef->DisableInput(playerController);

			//Delay possesion
			FTimerHandle possessTimer;
			GetWorld()->GetTimerManager().SetTimer(
				possessTimer,
				[this, targetRotation]()
				{
					if (playerController && pawnToPosses)
					{
						playerController->Possess(pawnToPosses);
						playerController->SetControlRotation(targetRotation);
					}
				},
				0.5f,
				false
			);
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

				UCameraComponent* targetCamera = hitPawn->FindComponentByClass<UCameraComponent>();

				if (targetCamera && activePossesionVFX)
				{
					if (activePossesionVFX) activePossesionVFX->SetVisibility(true);
					activePossesionVFX->SetWorldLocation(targetCamera->GetComponentLocation() - (targetCamera->GetUpVector() * 50));
				}
			}	
		}
		else
		{
			if (activePossesionVFX) activePossesionVFX->SetVisibility(false);
			pawnToPosses = nullptr;
		}
	}
	else
	{
		if (activePossesionVFX) activePossesionVFX->SetVisibility(false);
		pawnToPosses = nullptr;
	}
}
