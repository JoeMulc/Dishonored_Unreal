// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotifyState_RagDoll.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"

void UAnimNotifyState_RagDoll::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    if (!MeshComp) return;

    ACharacter* character = Cast<ACharacter>(MeshComp->GetOwner());
    if (!character) return;

    MeshComp->SetSimulatePhysics(true);
    MeshComp->SetAllBodiesBelowSimulatePhysics(
        FName("pelvis"), 
        true,               
        true               
    );

  
    UCharacterMovementComponent* MovementComp = character->GetCharacterMovement();
    if (MovementComp)
    {
        MovementComp->DisableMovement();
        MovementComp->SetComponentTickEnabled(false);
    }
    

    UE_LOG(LogTemp, Log, TEXT("Ragdoll Started"));
}