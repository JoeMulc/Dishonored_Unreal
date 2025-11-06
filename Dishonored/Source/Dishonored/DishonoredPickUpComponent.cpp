// Copyright Epic Games, Inc. All Rights Reserved.

#include "DishonoredPickUpComponent.h"

UDishonoredPickUpComponent::UDishonoredPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UDishonoredPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UDishonoredPickUpComponent::OnSphereBeginOverlap);
}

void UDishonoredPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ADishonoredCharacter* Character = Cast<ADishonoredCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
