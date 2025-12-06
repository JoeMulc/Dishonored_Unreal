// Fill out your copyright notice in the Description page of Project Settings.


#include "WindBlast_Ability.h"
#include "DishonoredCharacter.h"

UWindBlast_Ability::UWindBlast_Ability()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> IconAsset(TEXT("/Script/Engine.Texture2D'/Game/FirstPerson/UI/WindBlastIcon.WindBlastIcon'"));
	if (IconAsset.Succeeded()) abilityIcon = IconAsset.Object;

	name = "WindBlast";
	cooldown = 1.5f;
	manaCost = 33.f;
}

void UWindBlast_Ability::Initialize()
{

}

void UWindBlast_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("WindBlast activated!"));

	if (IsOnCooldown()) return;

    currentCooldown = cooldown;
    TakePlayerMana(manaCost);

	TArray<AActor*> actorsToBlast =  TraceForMovable();

	for (AActor* hit : actorsToBlast)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit actor - '%s'"), *hit->GetName());
	}

    BlastObjects(actorsToBlast);

}

void UWindBlast_Ability::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("WindBlast deactivated!"));


}

TArray<AActor*> UWindBlast_Ability::TraceForMovable()
{
    TArray<AActor*> hitActors;
    TArray<FOverlapResult> overlapResults;
    FCollisionQueryParams queryParams;
    queryParams.AddIgnoredActor(characterRef);

    UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
    FVector start = playerCamera->GetComponentLocation();
    FVector checkLocation = start + (playerCamera->GetForwardVector() * windBlastDistance);

    FVector boxHalfExtents(windBlastRadius * 2, windBlastRadius, windBlastRadius);

    FQuat boxRotation = playerCamera->GetComponentQuat();

    bool bHit = GetWorld()->OverlapMultiByChannel(
        overlapResults,
        checkLocation,
        boxRotation,
        ECC_Visibility,
        FCollisionShape::MakeBox(boxHalfExtents),
        queryParams
    );

    if (bHit)
    {
        for (const FOverlapResult& overlapResult : overlapResults)
        {
            if (overlapResult.Component.IsValid() && overlapResult.Component->Mobility == EComponentMobility::Movable)
            {
                AActor* hitActor = overlapResult.GetActor();
                if (hitActor && !hitActors.Contains(hitActor))
                {
                    hitActors.Add(hitActor);
                }
            }
        }
    }

    DrawDebugBox(GetWorld(), checkLocation, boxHalfExtents, boxRotation, FColor::Red, false, 0.1f, 0, 2.0f);

    return hitActors;
}

void UWindBlast_Ability::BlastObjects(TArray<AActor*> actors)
{
    UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
    FVector start = playerCamera->GetComponentLocation();

    for (AActor* actor : actors)
    {
        UPrimitiveComponent* rootComp = Cast<UPrimitiveComponent>(actor->GetRootComponent());
        if (rootComp && rootComp->IsSimulatingPhysics())
        {
            FVector end = actor->GetActorLocation() + (playerCamera->GetUpVector() * windBlastForce / 10); // Adds more of an arc to the force - not sure if i like
            FVector force = (end - start).GetSafeNormal() * windBlastForce;
            rootComp->AddImpulse(force, NAME_None, true);
        }
    }
}