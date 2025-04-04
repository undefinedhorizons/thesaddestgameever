// Copyright Epic Games, Inc. All Rights Reserved.

#include "thesaddestgameeverGameMode.h"
#include "thesaddestgameeverHUD.h"
#include "thesaddestgameeverCharacter.h"
#include "UObject/ConstructorHelpers.h"

AthesaddestgameeverGameMode::AthesaddestgameeverGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AthesaddestgameeverHUD::StaticClass();
}
