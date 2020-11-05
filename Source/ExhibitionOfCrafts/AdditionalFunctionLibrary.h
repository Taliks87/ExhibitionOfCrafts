// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AdditionalFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class EXHIBITIONOFCRAFTS_API UAdditionalFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (UnsafeDuringActorConstruction = "true"))
	static void RotateToPlayerCamera(USceneComponent* Component);

	UFUNCTION(BlueprintCallable)
	static FText GetActionPrimaryKeyName(FName ActionName);
};
