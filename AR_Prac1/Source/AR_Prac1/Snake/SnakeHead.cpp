// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeHead.h"

// Sets default values
ASnakeHead::ASnakeHead()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASnakeHead::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnakeHead::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// AddActorLocalOffset(FVector::RightVector);
	// UE_LOG(LogTemp, Warning, TEXT("waring"));
}

void ASnakeHead::LeftAction()
{
	AddActorLocalOffset(FVector::LeftVector);
}

void ASnakeHead::RightAction()
{
	AddActorLocalOffset(FVector::RightVector);
}

void ASnakeHead::UpAction()
{
	AddActorLocalOffset(FVector::UpVector);
}

void ASnakeHead::DownAction()
{
	AddActorLocalOffset(FVector::RightVector);
}


