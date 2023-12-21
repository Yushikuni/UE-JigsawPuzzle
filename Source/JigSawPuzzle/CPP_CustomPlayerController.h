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

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI/UX", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> bpMainWidget;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	ACPP_CustomPlayerController* MyCustomController;

public:
	void SetOnBeginPlayer();
	
};
