// Fill out your copyright notice in the Description page of Project Settings.


#include "WorkTImerGameMode.h"

#include "Windows/AllowWindowsPlatformTypes.h"

void AWorkTImerGameMode::BeginPlay()
{
	Super::BeginPlay();
	SetWindowPos( GetActiveWindow(), HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE );
}