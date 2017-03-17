// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CPlusPlus.h"
#include "CPlusPlusGameMode.h"
#include "CPlusPlusHUD.h"
#include "CPlusPlusCharacter.h"

ACPlusPlusGameMode::ACPlusPlusGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACPlusPlusHUD::StaticClass();
}
