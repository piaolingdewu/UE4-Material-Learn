// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotateAngleAxis.generated.h"

UCLASS()
class MATERALLEARN_API ARotateAngleAxis : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotateAngleAxis();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, Category = Movement)
		float AngleAxis;

	UPROPERTY(EditAnywhere, Category = Movement)
		FVector Dimensions;
	
	UPROPERTY(EditAnywhere, Category = Movement)
		FVector AxisVector;

	UPROPERTY(EditAnywhere, Category = Movement)
		float Multiplier;

};
