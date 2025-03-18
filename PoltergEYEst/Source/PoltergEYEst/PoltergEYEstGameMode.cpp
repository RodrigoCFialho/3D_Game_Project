// Copyright Epic Games, Inc. All Rights Reserved.

#include "PoltergEYEstGameMode.h"
#include "PoltergEYEstCharacter.h"
#include "UObject/ConstructorHelpers.h"

APoltergEYEstGameMode::APoltergEYEstGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
