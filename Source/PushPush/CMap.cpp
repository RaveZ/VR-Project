// Fill out your copyright notice in the Description page of Project Settings.


#include "CMap.h"

// Sets default values
ACMap::ACMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACMap::BeginPlay()
{
	AActor::BeginPlay();
	
	
}

// Called every frame
void ACMap::Tick(float DeltaTime)
{
    AActor::Tick(DeltaTime);

}

void ACMap::createMat3d(int row, int column, int height)
{
    Mat3d = new int** [height];
    for (int i = 0; i < height; i++) {
        Mat3d[i] = new int* [row];
        for (int j = 0; j < row; j++) {
            Mat3d[i][j] = new int[column];
        }
    }
    Mat3dFuture = new int** [height];
    for (int i = 0; i < height; i++) {
        Mat3dFuture[i] = new int* [row];
        for (int j = 0; j < row; j++) {
            Mat3dFuture[i][j] = new int[column];
        }
    }
}

int ACMap::getMat3d(int row, int column, int height,int index)
{
    if (index == 0) {
        return Mat3d[height][row][column];
    }

    return Mat3dFuture[height][row][column];

    
}

void ACMap::setMat3d(int row, int column, int height, int data,int index)
{
    if (index == 0) {
        Mat3d[height][row][column] = data;
    }
    else {
        Mat3dFuture[height][row][column] = data;
    }
}