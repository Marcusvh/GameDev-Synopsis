// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary::AmountOfPages()
{
	amountOfCollectedPaper++;
	FString text = FString::FromInt(amountOfCollectedPaper) + " / " + FString::FromInt(9);

	return text;
}

void UMyBlueprintFunctionLibrary::ResetPagesAmount()
{
	amountOfCollectedPaper = 0;
}