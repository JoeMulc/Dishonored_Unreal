// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_RagDoll.generated.h"

/**
 * 
 */
UCLASS()
class DISHONORED_API UAnimNotifyState_RagDoll : public UAnimNotifyState
{
	GENERATED_BODY()

public:

	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	
};
