// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATankPlayerController();
private:
		ATank* GetControlledTank() const;

protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
