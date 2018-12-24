// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MagicLeapEditorGameMode.h"
#include "MagicLeapEditorHUD.h"
#include "MagicLeapEditorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagicLeapEditorGameMode::AMagicLeapEditorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMagicLeapEditorHUD::StaticClass();
}
