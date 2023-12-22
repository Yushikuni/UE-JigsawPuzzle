// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "CPP_CustomPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class JIGSAWPUZZLE_API ACPP_CustomPlayerController : public APlayerController
{	
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		ACPP_CustomPlayerController* MyCustomController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI/UX", meta = (AllowPrivateAccess = "true"))
		UUserWidget* bpMainWidget;

public:
	void SetOnBeginPlayer();
	
};
