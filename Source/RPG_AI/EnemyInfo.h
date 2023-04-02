// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyInfo.generated.h"

/**
 * 
 */
UCLASS()
class RPG_AI_API UEnemyInfo : public UDataAsset
{
	GENERATED_BODY()
	public:
	UPROPERTY(EditAnywhere, BlueprintReadonly)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadonly)
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadonly)
	class USkeletalMesh* SkeletalMesh;

	
};
