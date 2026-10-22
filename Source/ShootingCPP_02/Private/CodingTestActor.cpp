// Fill out your copyright notice in the Description page of Project Settings.


#include "CodingTestActor.h"

// Sets default values
ACodingTestActor::ACodingTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACodingTestActor::BeginPlay()
{
	Super::BeginPlay();
	
	for (int32 i = 0; i < 100; i++)
	{
		// i를 2로 나눈 나머지 값을 구한다.
		int32 result = i % 2;

		// result가 0이라면 짝수이므로 출력한다.
		if (result == 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d는 짝수입니다."), i);
		}
	}
}

// Called every frame
void ACodingTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ACodingTestActor::Add(int32 num1, int32 num2)
{
	int32 result = num1 + num2;
	return result;
}