// Fill out your copyright notice in the Description page of Project Settings.


#include "E2LevelManager.h"

void UE2LevelManager::Activate()
{
	FLatentActionInfo LatentInfo;
	LatentInfo.CallbackTarget = this;
	LatentInfo.ExecutionFunction = FName("OnLevelOperationCompleted");
	LatentInfo.Linkage = 0;
	LatentInfo.UUID = FMath::Rand();

	if (bIsLoading)
	{
		UGameplayStatics::LoadStreamLevel(_WorldReference, _SublevelToUse, bShouldBeVisible, true, LatentInfo);
	}

	else
	{
		UGameplayStatics::UnloadStreamLevel(_WorldReference, _SublevelToUse, LatentInfo, true);
	}

}

UE2LevelManager* UE2LevelManager::LoadSublevel(const UObject* WorldContextObject, const FName SublevelToLoad, bool bVisibleAfterLoad)
{
	UE2LevelManager* StreamSublevels = NewObject<UE2LevelManager>();

	StreamSublevels->_WorldReference = WorldContextObject;
	StreamSublevels->_SublevelToUse = SublevelToLoad;
	StreamSublevels->bShouldBeVisible = bVisibleAfterLoad;
	StreamSublevels->bIsLoading = true;

	return StreamSublevels;
}

UE2LevelManager* UE2LevelManager::UnloadSublevel(const UObject* WorldContextObject, const FName SublevelToUnload)
{
	UE2LevelManager* StreamSublevels = NewObject<UE2LevelManager>();

	StreamSublevels->_WorldReference = WorldContextObject;
	StreamSublevels->_SublevelToUse = SublevelToUnload;
	StreamSublevels->bIsLoading = false;

	return StreamSublevels;
}

void UE2LevelManager::OnLevelOperationCompleted()
{
	OnOperationCompleted.Broadcast();
}
