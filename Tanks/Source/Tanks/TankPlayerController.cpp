// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"


ATankPlayerController::ATankPlayerController()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetControlledTank()) 
	{
		UE_LOG(LogTemp, Display, TEXT("Null optr"));
	}
	UE_LOG(LogTemp, Display, TEXT("Name Tank %s"), *GetControlledTank()->GetName());
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
