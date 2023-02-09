// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    AddActorLocalRotation(FRotator(0.0f,RotateSpeed * DeltaTime,0.0f));
    
    GEngine->AddOnScreenDebugMessage(-1,15.f,FColor::Yellow,TEXT("From Mac Logic"));
	GEngine->AddOnScreenDebugMessage(-1 , 15.f , FColor::Red , TEXT("From Widows Logic"));
}

