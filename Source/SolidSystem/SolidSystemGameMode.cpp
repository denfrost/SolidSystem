// Copyright Epic Games, Inc. All Rights Reserved.

#include "SolidSystemGameMode.h"
#include "SolidSystemHUD.h"
#include "SolidSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASolidSystemGameMode::ASolidSystemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASolidSystemHUD::StaticClass();
}
