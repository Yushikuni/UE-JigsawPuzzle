// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPP_CustomPlayerController.h"
#include "JigSawPuzzleGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class JIGSAWPUZZLE_API AJigSawPuzzleGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	//TODO Add "ACPP_CustomPlayerController" as a player controller in default
public:

	AJigSawPuzzleGameModeBase()
	{
		PlayerControllerClass = ACPP_CustomPlayerController::StaticClass();
	}

};
