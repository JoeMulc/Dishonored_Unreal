// Fill out your copyright notice in the Description page of Project Settings.


#include "DarkVisionHighlight_Component.h"

// Sets default values for this component's properties
UDarkVisionHighlight_Component::UDarkVisionHighlight_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDarkVisionHighlight_Component::BeginPlay()
{
	Super::BeginPlay();

	AActor* owningActor = GetOwner();
	if (owningActor)
	{
		UStaticMeshComponent* mesh = owningActor->FindComponentByClass<UStaticMeshComponent>();
		if (mesh)
		{
			mesh->SetRenderCustomDepth(true);
			mesh->SetCustomDepthStencilValue(static_cast<int32>(highlightType));
		}
	}
	
}


// Called every frame
void UDarkVisionHighlight_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

