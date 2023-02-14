// Fill out your copyright notice in the Description page of Project Settings.


#include "CGeneralFunction.h"

FTimespan UCGeneralFunction::SubtractDateTime(FDateTime Now, FDateTime Previous)
{
	return Now - Previous;
}
