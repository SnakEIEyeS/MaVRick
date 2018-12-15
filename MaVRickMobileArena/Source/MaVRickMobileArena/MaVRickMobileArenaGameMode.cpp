// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MaVRickMobileArenaGameMode.h"
#include "MaVRickMobileArenaPlayerController.h"
#include "MaVRickMobileArenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMaVRickMobileArenaGameMode::AMaVRickMobileArenaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMaVRickMobileArenaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/_Characters/Player/PlayerCharacter/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}