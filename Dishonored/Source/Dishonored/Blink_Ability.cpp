// Fill out your copyright notice in the Description page of Project Settings.


#include "Blink_Ability.h"
#include "DishonoredCharacter.h"

UBlink_Ability::UBlink_Ability()
{
	static ConstructorHelpers::FObjectFinder<UCurveFloat> CurveAsset(TEXT("/Script/Engine.CurveFloat'/Game/FirstPerson/Abilities/Blink/BlinkCurve.BlinkCurve'")); 

	if (CurveAsset.Succeeded()) blinkCurve = CurveAsset.Object;
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

}

void UBlink_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Ability deactivated!"));
	doTick = false;

	//characterRef->SetActorLocation(blinkLocation);
	ExecuteBlink();
}

void UBlink_Ability::Tick(float DeltaTime)
{
	if (!doTick || bIsBlinking) return;
	//UE_LOG(LogTemp, Warning, TEXT("Ticking!"));

	FHitResult hitResult;
	UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
	FVector start = playerCamera->GetComponentLocation() + (playerCamera->GetForwardVector() * blinkTraceRadius);
	FVector end = start + (playerCamera->GetForwardVector() * blinkDistance);
	FCollisionShape collisionSphere = FCollisionShape::MakeSphere(blinkTraceRadius);

	bool hit = GetWorld()->SweepSingleByChannel(
		hitResult,
		start,
		end,
		FQuat::Identity,
		ECC_Visibility,
		collisionSphere
	);

	blinkLocation = hit ? hitResult.Location : end;




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
	//
	//DrawDebugSphere(
	//	GetWorld(),
	//	hit ? hitResult.Location : end,
	//	collisionSphere.GetSphereRadius(),
	//	12,
	//	hit ? FColor::Green : FColor::Red,
	//	true,
	//	2.0f,
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

	bIsBlinking = true;
	blinkTimeline->PlayFromStart();
}

void  UBlink_Ability::BlinkTimelineUpdate(float alpha)
{
	FVector currentLocation = FMath::Lerp(startLocation, blinkLocation, alpha);
	characterRef->SetActorLocation(currentLocation);
}

void  UBlink_Ability::BlinkTimelineFinished()
{
	UE_LOG(LogTemp, Warning, TEXT("Blink Finished!"));
	bIsBlinking = false;

	characterRef->SetActorLocation(blinkLocation);
}