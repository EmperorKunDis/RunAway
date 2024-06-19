// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnLevel.generated.h"

class ABaseLevel;	

UCLASS()
class RUNAWAYFROMHER_API ASpawnLevel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnLevel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UFUNCTION()
	void SpawnLevel(bool IsFirst);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:

	APawn* Player;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level01;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level02;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level03;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level04;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level05;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level06;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level07;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level08;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level09;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABaseLevel> Level10;

		TArray<ABaseLevel*> LevelList;

public:
	int RandomLevel;

	FVector SpawnLocation = FVector();
	FRotator SpawnRotation = FRotator();
	FActorSpawnParameters SpawnInfo = FActorSpawnParameters();
};
