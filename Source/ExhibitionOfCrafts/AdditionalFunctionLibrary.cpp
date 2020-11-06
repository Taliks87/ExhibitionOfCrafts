// Fill out your copyright notice in the Description page of Project Settings.


#include "AdditionalFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/InputSettings.h"

void UAdditionalFunctionLibrary::RotateToPlayerCamera(USceneComponent* Component)
{
	APlayerCameraManager* PlayerCameraManager = UGameplayStatics::GetPlayerCameraManager(Component->GetWorld(), 0);
	if (PlayerCameraManager)
	{
		Component->SetWorldRotation(
			UKismetMathLibrary::FindLookAtRotation(Component->GetComponentLocation(), PlayerCameraManager->GetCameraLocation())
		);
	}
}

FText UAdditionalFunctionLibrary::GetActionPrimaryKeyName(FName ActionName)
{
	UInputSettings* InputSettings = UInputSettings::GetInputSettings();
	if (ensure(InputSettings))
	{
		TArray<FInputActionKeyMapping> ActionMappings;
		InputSettings->GetActionMappingByName(ActionName, ActionMappings);
		if (ActionMappings.IsValidIndex(0))
		{
			return ActionMappings[0].Key.GetDisplayName();
		}
	}
	return FText::FromString(TEXT("Not set"));
}
