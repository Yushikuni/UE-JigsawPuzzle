// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CustomPlayerController.h"

void ACPP_CustomPlayerController::SetOnBeginPlayer()
{

	if (MyCustomController)
	{
		// Show mouse cursor
		MyCustomController->bShowMouseCursor = true;

		// Set input mode UI only	
		FInputModeUIOnly InputMode;
		//InputMode.SetWidgetToFocus(/* Your UI Widget here */);
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		MyCustomController->SetInputMode(InputMode);
	}
}