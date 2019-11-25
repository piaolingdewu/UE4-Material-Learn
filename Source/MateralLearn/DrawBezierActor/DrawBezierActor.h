// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BezierMoveActor/BezierMoveActor.h"
#include "DrawBezierActor.generated.h"

UCLASS()
class MATERALLEARN_API ADrawBezierActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADrawBezierActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, Category = Points)
		FVector Points[4];

	UPROPERTY(EditAnywhere, Category = Points)
		int32 OutPointNum;

	//靠近目标点的拒绝距离
	UPROPERTY(EditAnywhere, Category = Points)
		float Distance;


	UPROPERTY(VisibleAnywhere, Category = Points)
		TArray<FVector> OutPoints;

	ABezierMoveActor* moveac;
	int32 moveindex;

};
