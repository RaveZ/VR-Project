// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "CMap.generated.h"

UCLASS()
class PUSHPUSH_API ACMap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACMap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Matrixs3d")
		virtual void setMat3d(int row, int column, int height, int data,int index);

	UFUNCTION(BlueprintCallable, Category = "Matrixs3d")
		virtual void createMat3d(int row, int column, int height);

	UFUNCTION(BlueprintCallable, Category = "Matrixs3d")
		virtual int getMat3d(int row, int column, int height,int index);


private:
	int*** Mat3d;
	int*** Mat3dFuture;
};
