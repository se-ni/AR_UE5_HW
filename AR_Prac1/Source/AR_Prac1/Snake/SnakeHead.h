// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnakeHead.generated.h"

UCLASS()
class AR_PRAC1_API ASnakeHead : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakeHead();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(CPF_BlueprintCallable)
	void LeftAction();

	UFUNCTION(CPF_BlueprintCallable)
	void RightAction();

	UFUNCTION(CPF_BlueprintCallable)
	void UpAction();

	UFUNCTION(CPF_BlueprintCallable)
	void DownAction();
};
