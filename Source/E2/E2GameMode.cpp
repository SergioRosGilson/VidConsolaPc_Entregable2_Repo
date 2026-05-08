// Copyright Epic Games, Inc. All Rights Reserved.

#include "E2GameMode.h"
#include "E2Character.h"
#include "UObject/ConstructorHelpers.h"

AE2GameMode::AE2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
