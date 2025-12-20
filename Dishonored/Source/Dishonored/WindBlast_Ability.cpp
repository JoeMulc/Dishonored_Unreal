// Fill out your copyright notice in the Description page of Project Settings.


#include "WindBlast_Ability.h"
#include "DishonoredCharacter.h"

UWindBlast_Ability::UWindBlast_Ability()
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> IconAsset(TEXT("/Script/Engine.Texture2D'/Game/FirstPerson/UI/WindBlastIcon.WindBlastIcon'"));
	if (IconAsset.Succeeded()) abilityIcon = IconAsset.Object;
    
    static ConstructorHelpers::FObjectFinder<UNiagaraSystem> windblastVFXAsset(TEXT("/Script/Niagara.NiagaraSystem'/Game/FirstPerson/Abilities/Windblast/WinblastVFX.WinblastVFX'"));
    if (windblastVFXAsset.Succeeded()) windblastVFX = windblastVFXAsset.Object;

    static ConstructorHelpers::FObjectFinder<UAnimMontage> AnimAsset(TEXT("/Script/Engine.AnimMontage'/Game/FirstPerson/HandPoses/Windblast_Anim_Montage.Windblast_Anim_Montage'"));

    static ConstructorHelpers::FObjectFinder<USoundBase> activateSoundAsset(TEXT("/Script/Engine.SoundWave'/Game/FirstPerson/Audio/WindblastAudio.WindblastAudio'"));
    if (IconAsset.Succeeded()) activateSound = activateSoundAsset.Object;

    if (AnimAsset.Succeeded())
    {
        activateAnimation = AnimAsset.Object;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Animation Failed to load"));
    }

	name = "WindBlast";
	cooldown = 1.5f;
	manaCost = 33.f;
}

void UWindBlast_Ability::Initialize()
{

}

void UWindBlast_Ability::Activate()
{
	UE_LOG(LogTemp, Warning, TEXT("---------------------WindBlast activated!---------------------"));

	if (IsOnCooldown() || characterRef->currentMana < manaCost) return;

    UGameplayStatics::PlaySound2D(GetWorld(), activateSound);

    characterRef->GetMesh1P()->GetAnimInstance()->Montage_Play(activateAnimation);
    SpawnVFX();

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
	UE_LOG(LogTemp, Warning, TEXT("---------------------WindBlast deactivated!---------------------"));


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
        ECC_PhysicsBody,
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

    //DrawDebugBox(GetWorld(), checkLocation, boxHalfExtents, boxRotation, FColor::Red, false, 0.1f, 0, 2.0f);

    return hitActors;
}

void UWindBlast_Ability::BlastObjects(TArray<AActor*> actors)
{
    UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
    FVector start = playerCamera->GetComponentLocation();

    for (AActor* actor : actors)
    {
        //Blast for characters as they need extra logic
        if (ACharacter* character = Cast<ACharacter>(actor))
        {
            BlastCharacter(character);
            continue;
        }

        //Blast objects
        UPrimitiveComponent* rootComp = Cast<UPrimitiveComponent>(actor->GetRootComponent());
        if (rootComp && rootComp->IsSimulatingPhysics())
        {
            FVector end = actor->GetActorLocation() + (playerCamera->GetUpVector() * windBlastForce / 10); // Adds more of an arc to the force - not sure if i like
            FVector force = (end - start).GetSafeNormal() * windBlastForce;
            rootComp->AddImpulse(force, NAME_None, true);
        }
    }
}

void UWindBlast_Ability::BlastCharacter(ACharacter* character)
{
    UE_LOG(LogTemp, Warning, TEXT("Ragdollin character!"));

    USkeletalMeshComponent* mesh = character->GetMesh();
    UCharacterMovementComponent* movement = character->GetCharacterMovement();
    UCapsuleComponent* capsule = character->GetCapsuleComponent();

    UCameraComponent* playerCamera = characterRef->GetFirstPersonCameraComponent();
    FVector start = playerCamera->GetComponentLocation();

    movement->DisableMovement();
    capsule->SetSimulatePhysics(true);
    mesh->SetAllBodiesBelowSimulatePhysics(FName("pelvis"), true, true);

    FVector end = character->GetActorLocation() + (playerCamera->GetUpVector() * windBlastForce / 10);              //reusing code but im too lazy to create the function rn this probs wont work anyway :(
    FVector force = (end - start).GetSafeNormal() * windBlastForce * 7;
    mesh->AddImpulse(force, NAME_None, true);
}

void UWindBlast_Ability::SpawnVFX()
{
    UCameraComponent* camera = characterRef->GetFirstPersonCameraComponent();
    FRotator playerRotation = camera->GetComponentRotation();
    FVector location = camera->GetComponentLocation() + (camera->GetForwardVector() * 600);

    UNiagaraFunctionLibrary::SpawnSystemAtLocation(
        GetWorld(),
        windblastVFX,
        location,
        playerRotation + FRotator(90.f, 0.f, 0.f), //Temp correction for downwards origniinal speleingm lol
        FVector(1.0f),
        true,
        true,
        ENCPoolMethod::None
    );

}