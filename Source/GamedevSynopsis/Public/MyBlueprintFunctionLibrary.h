// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

static int amountOfCollectedPaper = 0;

/**
 * 
 */
UCLASS()
class GAMEDEVSYNOPSIS_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Collect")
			static FString AmountOfPages();
		UFUNCTION(BlueprintCallable, Category = "Collect")
			static void ResetPagesAmount();
	
};
