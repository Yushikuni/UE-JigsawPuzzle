// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPP_CustomPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class JIGSAWPUZZLE_API ACPP_CustomPlayerController : public APlayerController
{
	GENERATED_BODY()

	void SetOnBeginPlayer();
	
};
