// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BehaviourVar.generated.h"

USTRUCT(BlueprintType)
struct FBehaviourStruct 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	float Brightness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	float BrightnessGoal; //interping to

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	FVector LocationGoal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	float Alpha;

	void InterpInternal()
	{
		Location = FMath::Lerp<FVector>(Location, LocationGoal, Alpha);
		Brightness = FMath::Lerp<float>(Brightness, BrightnessGoal, Alpha);
	}

	//Brightness out is returned, FVector is returned by reference
	float Interp(const float& NewAlpha, FVector& Out)
	{
		//value received from rest of your game engine
		Alpha = NewAlpha;

		//Internal data structure management
		InterpInternal();

		//Return Values
		Out = Location;
		return Brightness;
	}
	FBehaviourStruct()
	{
		Brightness = 2;
		BrightnessGoal = 100;

		Alpha = 0;

		Location = FVector::ZeroVector;
		LocationGoal = FVector(0, 0, 200000);
	}
};

UCLASS(config = Game)
class BEHAVIOUR_API ABehaviourVar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABehaviourVar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
