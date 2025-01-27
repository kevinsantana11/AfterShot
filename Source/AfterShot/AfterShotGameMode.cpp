// Copyright Epic Games, Inc. All Rights Reserved.

#include "AfterShotGameMode.h"
#include "AfterShotCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAfterShotGameMode::AAfterShotGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
