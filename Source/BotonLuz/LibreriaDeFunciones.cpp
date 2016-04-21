// Fill out your copyright notice in the Description page of Project Settings.

#include "BotonLuz.h"
#include "LibreriaDeFunciones.h"

float ULibreriaDeFunciones::obtenerIntensidadLuz(ALight* luz){
	return luz->GetBrightness();
}

