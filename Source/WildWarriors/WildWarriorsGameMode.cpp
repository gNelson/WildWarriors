// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "WildWarriors.h"
#include "WildWarriorsGameMode.h"
#include "WildWarriorsCharacter.h"

AWildWarriorsGameMode::AWildWarriorsGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/WildWarriors/Characters/WWCat1"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
