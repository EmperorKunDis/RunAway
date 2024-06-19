// Copyright Epic Games, Inc. All Rights Reserved.

#include "RunAwayFromHerGameMode.h"
#include "RunAwayFromHerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARunAwayFromHerGameMode::ARunAwayFromHerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
