// Fill out your copyright notice in the Description page of Project Settings.


#include "DrawBezierActor.h"
#include <DrawDebugHelpers.h>
#include "BezierPoint/BezierPoint.h"
#include <UObjectIterator.h>

// Sets default values
ADrawBezierActor::ADrawBezierActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Distance = 50;

	moveindex = 0;

}

// Called when the game starts or when spawned
void ADrawBezierActor::BeginPlay()
{
	Super::BeginPlay();
	
//	FVector::EvaluateBezier(Points, OutPointNum, OutPoints);


	TArray<FVector> BPs;
	for (TObjectIterator<ABezierPoint> It; It; ++It)
		BPs.Push((*It)->GetActorLocation());


	FVector St;
	
	St = BPs[0];


	for (int i = 0; i < BPs.Num() - 4; i = i + 3)
	{
		// var q is the change in t between successive evaluations.
		const float q = 1.f / (OutPointNum - 1); // q is dependent on the number of GAPS = POINTS-1

		// recreate the names used in the derivation
		const FVector & P0 = St;
		const FVector & P1 = BPs[i + 1];
		const FVector & P2 = BPs[i + 2];
		const FVector & P3 = BPs[i + 3];

		// coefficients of the cubic polynomial that we're FDing -
		const FVector a = P0;
		const FVector b = 3 * (P1 - P0);
		const FVector c = 3 * (P2 - 2 * P1 + P0);
		const FVector d = P3 - 3 * P2 + 3 * P1 - P0;

		// initial values of the poly and the 3 diffs -
		FVector S = a;						// the poly value
		FVector U = b * q + c * q * q + d * q * q * q;	// 1st order diff (quadratic)
		FVector V = 2 * c * q * q + 6 * d * q * q * q;	// 2nd order diff (linear)
		FVector W = 6 * d * q * q * q;				// 3rd order diff (constant)

		// Path length.
		float Length = 0.f;

		FVector OldPos = P0;
		OutPoints.Add(P0);	// first point on the curve is always P0.

		for (int32 i = 1; i < OutPointNum; ++i)
		{
			// calculate the next value and update the deltas
			S += U;			// update poly value
			U += V;			// update 1st order diff value
			V += W;			// update 2st order diff value
			// 3rd order diff is constant => no update needed.

			// Update Length.
			Length += FVector::Dist(S, OldPos);
			OldPos = S;

			if (FVector::Distance(P3, S) <= Distance)
			{
				St = S;
				break;
			}

			OutPoints.Add(S);
		}

		// Return path length as experienced in sequence (linear interpolation between points).



	}
	
	for (TObjectIterator<ABezierMoveActor> It; It; ++It)
		moveac = (*It);


}

// Called every frame
void ADrawBezierActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (FVector point : OutPoints)
		DrawDebugPoint(this->GetWorld(), point, 5, FColor::Blue);
	
	for (FVector point : Points)
		DrawDebugPoint(this->GetWorld(), point, 5, FColor::Red);


	check(moveac);
	if (moveindex == OutPoints.Num())
		moveindex = 0;
	else
		moveac->SetActorLocation(OutPoints[moveindex++]);



}

