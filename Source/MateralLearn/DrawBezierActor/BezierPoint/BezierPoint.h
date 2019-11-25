// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BezierPoint.generated.h"

class USphereComponent;


UCLASS()
class MATERALLEARN_API ABezierPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABezierPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = Sphere)
		USphereComponent* spherecmp;

	UPROPERTY(EditAnywhere, Category = Color)
		FColor PointColor;

};
