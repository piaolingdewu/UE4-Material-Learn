// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateAngleAxis.h"

// Sets default values
ARotateAngleAxis::ARotateAngleAxis()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Dimensions = FVector(300, 0, 0);

	AxisVector = FVector(0, 0, 1);

	Multiplier = 50.f;

}

// Called when the game starts or when spawned
void ARotateAngleAxis::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotateAngleAxis::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = FVector(0, 0, 800);

	AngleAxis += DeltaTime * Multiplier;

// 	if (AngleAxis >= 360.0f)
// 	{
// 		AngleAxis = 0;
// 	}


	FVector myCharacter = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	FVector RotateValue = Dimensions.RotateAngleAxis(AngleAxis, AxisVector);

	GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Red, FString::Printf(TEXT("RotateValue: %s"), *RotateValue.ToString()));
	GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Green, FString::Printf(TEXT("AngleAxis: %f"), AngleAxis));

	NewLocation.X += RotateValue.X;
	NewLocation.Y += RotateValue.Y;
	NewLocation.Z += RotateValue.Z;

	SetActorLocation(NewLocation, false, 0, ETeleportType::None);
}

