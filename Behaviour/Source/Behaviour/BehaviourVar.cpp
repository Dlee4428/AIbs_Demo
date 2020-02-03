// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviourVar.h"

// Sets default values
ABehaviourVar::ABehaviourVar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABehaviourVar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABehaviourVar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

