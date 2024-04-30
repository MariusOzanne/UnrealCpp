// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCppGameMode.h"
#include "UnrealCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCppGameMode::AUnrealCppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
