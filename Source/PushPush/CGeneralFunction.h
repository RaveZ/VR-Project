// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CGeneralFunction.generated.h"

/**
 * 
 */
UCLASS()
class PUSHPUSH_API UCGeneralFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable,Category="DateTimeFunction")
	static FTimespan SubtractDateTime(FDateTime Now,FDateTime Previous);
};
