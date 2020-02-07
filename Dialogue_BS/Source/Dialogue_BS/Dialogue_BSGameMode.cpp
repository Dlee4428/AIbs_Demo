// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Dialogue_BSGameMode.h"
#include "Dialogue_BSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADialogue_BSGameMode::ADialogue_BSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
