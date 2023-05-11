// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuckleMyShoeGameMode.h"
#include "BuckleMyShoeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABuckleMyShoeGameMode::ABuckleMyShoeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
