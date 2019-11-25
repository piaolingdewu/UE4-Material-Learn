// Fill out your copyright notice in the Description page of Project Settings.


#include "BezierPoint.h"
#include <Components/SphereComponent.h>
#include <DrawDebugHelpers.h>

// Sets default values
ABezierPoint::ABezierPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	spherecmp = CreateDefaultSubobject<USphereComponent>(TEXT("spherecmp"));

	spherecmp->SetupAttachment(RootComponent);
	spherecmp->SetSphereRadius(7);

	spherecmp->bHiddenInGame = false;


}

// Called when the game starts or when spawned
void ABezierPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABezierPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugPoint(this->GetWorld(), this->GetActorLocation(), 7,PointColor);

}

