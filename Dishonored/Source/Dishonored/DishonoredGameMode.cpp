// Copyright Epic Games, Inc. All Rights Reserved.

#include "DishonoredGameMode.h"
#include "DishonoredCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADishonoredGameMode::ADishonoredGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
