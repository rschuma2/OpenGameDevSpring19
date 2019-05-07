// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Spring2019GameDevGameMode.h"
#include "Spring2019GameDevCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpring2019GameDevGameMode::ASpring2019GameDevGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
