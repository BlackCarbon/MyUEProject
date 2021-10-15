// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyUEGameMode.h"
#include "MyUECharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyUEGameMode::AMyUEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
