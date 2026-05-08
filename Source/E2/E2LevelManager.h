// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "E2LevelManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFROnOperationCompletedDelegate);

UCLASS()
class E2_API UE2LevelManager : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	//Variables

	UPROPERTY(BlueprintAssignable)
	FFROnOperationCompletedDelegate OnOperationCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	const UObject* _WorldReference;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName _SublevelToUse;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bShouldBeVisible;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsLoading;

	//Funciones

	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", AutoCreateRefTerm = "SubLevelToLoad"))
	static UE2LevelManager* LoadSublevel(const UObject* WorldContextObject, const FName SublevelToLoad, bool bVisibleAfterLoad);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", AutoCreateRefTerm = "SubLevelToUnload"))
	static UE2LevelManager* UnloadSublevel(const UObject* WorldContextObject, const FName SublevelToUnload);

private:

	const UObject* WorldContext;

	UFUNCTION()
	void OnLevelOperationCompleted();
};
