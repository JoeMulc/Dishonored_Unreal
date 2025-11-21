// Fill out your copyright notice in the Description page of Project Settings.
//TODO:
//stop player momentum when blinking - launch player after blinking based on blink ditance maybe im not sure how does dsihnored do it ong

#include "Blink_Ability.h"
#include "DishonoredCharacter.h"

UBlink_Ability::UBlink_Ability()
{
	static ConstructorHelpers::FObjectFinder<UCurveFloat> CurveAsset(TEXT("/Script/Engine.CurveFloat'/Game/FirstPerson/Abilities/Blink/BlinkCurve.BlinkCurve'")); 

	if (CurveAsset.Succeeded()) blinkCurve = CurveAsset.Object;

	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> BlinkVFXAsset(TEXT("/Script/Niagara.NiagaraSystem'/Game/FirstPerson/Abilities/Blink/BlinkVFX.BlinkVFX'") );

	if (BlinkVFXAsset.Succeeded()) blinkVFX = BlinkVFXAsset.Object;

	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> BlinkOnCooldownVFXAsset(TEXT("/Script/Niagara.NiagaraSystem'/Game/FirstPerson/Abilities/Blink/BlinkVFXOnCooldown.BlinkVFXOnCooldown'"));

	if (BlinkOnCooldownVFXAsset.Succeeded()) blinkOnCooldownVFX = BlinkOnCooldownVFXAsset.Object;
	
	name = "Blink";
	cooldown = 1.5f;
	manaCost = 33.f;
}

void UBlink_Ability::Initialize()
{
	blinkTimeline = NewObject<UTimelineComponent>(characterRef, UTimelineComponent::StaticClass());

	if (blinkTimeline)
	{
		blinkTimeline->RegisterComponent();

		blinkTimelineUpdateDelegate.BindUFunction(this, FName("BlinkTimelineUpdate"));
		blinkTimelineFinishedDelegate.BindUFunction(this, FName("BlinkTimelineFinished"));

		if (blinkCurve)
		{
			blinkTimeline->AddInterpFloat(blinkCurve, blinkTimelineUpdateDelegate);
			blinkTimeline->SetTimelineFinishedFunc(blinkTimelineFinishedDelegate);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("No blink curve assigned!"));
		}
	}
}

void UBlink_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("Ability activated!"));
	doTick = true;

	activeBlinkVFX = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(),
		IsOnCooldown() ? blinkOnCooldownVFX : blinkVFX,
		characterRef->GetActorLocation(),
		FRotator::ZeroRotator,
		FVector(1.0f),
		true,
		true,
		ENCPoolMethod::None
	);
}

void UBlink_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Ability deactivated!"));
	doTick = false;

	if (activeBlinkVFX)
	{
		activeBlinkVFX->Deactivate();
		activeBlinkVFX->DestroyComponent();
		activeBlinkVFX = nullptr;
	}

	if (!IsOnCooldown() && characterRef->currentMana > manaCost)
	{
		ExecuteBlink();
		currentCooldown = cooldown;
		characterRef->currentMana = characterRef->currentMana - manaCost;
		characterRef->manaBarWidget->UpdateManaBar(characterRef->currentMana, characterRef->maxMana);
		characterRef->currentManaRegenCooldown = characterRef->manaRegenCooldown;
	}
}

void UBlink_Ability::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!doTick || bIsBlinking) return;
	//UE_LOG(LogTemp, Warning, TEXT("Ticking!"));

	UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
	UCapsuleComponent* playerCapsule = characterRef->GetCapsuleComponent();
	float playerCapsuleHalfHeight = playerCapsule->GetScaledCapsuleHalfHeight();

	FHitResult hitResult;
	FVector start = playerCamera->GetComponentLocation() + (playerCamera->GetForwardVector() * playerCapsuleHalfHeight);
	FVector end = start + (playerCamera->GetForwardVector() * blinkDistance);
	FCollisionShape collisionSphere = FCollisionShape::MakeSphere(playerCapsuleHalfHeight / 2);

	if (!WallTooClose())
	{
		//Sweep for initial blinking
		bool hit = GetWorld()->SweepSingleByChannel(
			hitResult,
			start,
			end,
			FQuat::Identity,
			ECC_Visibility,
			collisionSphere
		);

		blinkLocation = hit ? (hitResult.Location) + (hitResult.ImpactNormal * playerCapsuleHalfHeight / 2) : end;
	}
	else
	{
		blinkLocation = characterRef->GetActorLocation();
	}

	//Ray trace for snapping to ground
	start = blinkLocation;
	end = blinkLocation + FVector(0.f, 0.f, -blinkSnapToGroundDistance);
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(characterRef);

	bool downHit = GetWorld()->LineTraceSingleByChannel(
		hitResult,
		start,
		end,
		ECC_Visibility,
		collisionParams
	);

	if (downHit) blinkLocation = hitResult.Location + FVector(0.f, 0.f, playerCapsuleHalfHeight + 2);

	//Update VFX
	if (activeBlinkVFX && activeBlinkVFX->IsActive())
	{
		activeBlinkVFX->SetWorldLocation(blinkLocation - FVector(0.f, 0.f, playerCapsuleHalfHeight - 4));
		activeBlinkVFX->SetAsset(IsOnCooldown() ? blinkOnCooldownVFX : blinkVFX);
	}


	//Debug
	//DrawDebugLine(
	//	GetWorld(),
	//	start,
	//	hit ? hitResult.Location : end,
	//	hit ? FColor::Green : FColor::Red,
	//	true,
	//	2.0f,
	//	0,
	//	3.0f
	//);

	//DrawDebugSphere(
	//	GetWorld(),
	//	hit ? hitResult.Location : end,
	//	collisionSphere.GetSphereRadius(),
	//	12,
	//	hit ? FColor::Green : FColor::Red,
	//	false,
	//	0.1f,
	//	0,
	//	2.0f
	//);

}

//Timeline stuff
void  UBlink_Ability::ExecuteBlink()
{
	if (!blinkTimeline || bIsBlinking || !blinkCurve) return;
	UE_LOG(LogTemp, Warning, TEXT("Blink Executed!"));

	startLocation = characterRef->GetActorLocation();

	UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
	originalFOV = playerCamera->FieldOfView;

	bIsBlinking = true;
	blinkTimeline->PlayFromStart();
}

void  UBlink_Ability::BlinkTimelineUpdate(float alpha)
{
	//Move Player
	FVector currentLocation = FMath::Lerp(startLocation, blinkLocation, alpha);
	characterRef->SetActorLocation(currentLocation);

	//CameraFOV
	float fovAlpha = FMath::Sin(alpha * PI);
	float targetFOV = FMath::Lerp(originalFOV, originalFOV * multiplierFOV, fovAlpha);

	UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
	playerCamera->SetFieldOfView(targetFOV);
}

void  UBlink_Ability::BlinkTimelineFinished()
{
	UE_LOG(LogTemp, Warning, TEXT("Blink Finished!"));
	bIsBlinking = false;

	characterRef->SetActorLocation(blinkLocation);

	UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
	playerCamera->SetFieldOfView(originalFOV);

	//Only conserve forward momentum
	UCharacterMovementComponent* moveComp = characterRef->GetCharacterMovement();

	FVector currentVelocity = moveComp->Velocity;
	FVector forwardVector = characterRef->GetActorForwardVector();
	float forwardSpeed = FVector::DotProduct(currentVelocity, forwardVector);
	FVector newVelocity = forwardVector * forwardSpeed; 

	moveComp->Velocity = newVelocity;

}

//INCREDIBLE FUNCTION JOE JUIST WOW LETS FIX THIS LATER - its real readable buddy for sure mmmhmmmm
bool UBlink_Ability::WallTooClose()
{
	UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
	UCapsuleComponent* playerCapsule = characterRef->GetCapsuleComponent();

	FCollisionQueryParams wallParams;
	wallParams.AddIgnoredActor(characterRef);
	FHitResult hitResult;

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(characterRef);

	FVector start = characterRef->GetActorLocation();
	FVector end = start + (playerCamera->GetForwardVector() * ((playerCapsule->GetScaledCapsuleHalfHeight() + (playerCapsule->GetScaledCapsuleHalfHeight() / 2))));
	bool bWallTooClose = GetWorld()->LineTraceSingleByChannel(
		hitResult,
		start,
		end,
		ECC_Visibility,
		collisionParams
	);

	return bWallTooClose;
}