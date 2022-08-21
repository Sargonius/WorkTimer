// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WorkTImerGameMode.generated.h"

/**
 * 
 */
UCLASS()
class WORKTIMER_API AWorkTImerGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;	
};
