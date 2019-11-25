// Fill out your copyright notice in the Description page of Project Settings.


#include "BezierMoveActor.h"

// Sets default values
ABezierMoveActor::ABezierMoveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ABezierMoveActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABezierMoveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

