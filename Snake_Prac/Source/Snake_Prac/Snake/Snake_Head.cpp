// Fill out your copyright notice in the Description page of Project Settings.


#include "Snake_Head.h"

// Sets default values
ASnake_Head::ASnake_Head()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASnake_Head::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnake_Head::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASnake_Head::Action_Left()
{
	AddActorLocalOffset(FVector::LeftVector * 200);
}

void ASnake_Head::Action_Right()
{
	AddActorLocalOffset(FVector::RightVector * 200);
}

void ASnake_Head::Action_Up()
{
	AddActorLocalOffset(FVector::UpVector * 200);
}

void ASnake_Head::Action_Down()
{
	AddActorLocalOffset(FVector::DownVector * 200);
}
