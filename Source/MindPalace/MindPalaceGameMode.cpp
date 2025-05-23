// Copyright Epic Games, Inc. All Rights Reserved.

#include "MindPalaceGameMode.h"
#include "MindPalaceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMindPalaceGameMode::AMindPalaceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
