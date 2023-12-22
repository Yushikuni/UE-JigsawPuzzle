// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CustomPlayerController.h"


void ACPP_CustomPlayerController::SetOnBeginPlayer()
{

	if (MyCustomController)
	{
		bpMainWidget = CreateWidget<UUserWidget>(this, UUserWidget::StaticClass());

		if (bpMainWidget)
		{
			// Show mouse cursor
			MyCustomController->bShowMouseCursor = true;

			// Set input mode UI only	
			FInputModeUIOnly InputMode;
			InputMode.SetWidgetToFocus(bpMainWidget->TakeWidget());
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			MyCustomController->SetInputMode(InputMode);
		}		
	}
}