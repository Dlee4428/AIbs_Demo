// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Class.h"

#include "StatsModifier.h"
#include "BehaviourModifier.h"
#include "Relationship.h"
#include "PersonalityFrameWork.generated.h"


/**
 *
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DIALOGUE_BS_API  UPersonalityFrameWork : public UObject
{
	GENERATED_BODY()
	friend class IDStore;
public:

private:

	std::string* ID;

	StatsModifier* stats;
	BehaviourModifier* behaviour;
	Relationship* relationship;
public:
	UPersonalityFrameWork();
	~UPersonalityFrameWork();
	//UFUNCTION(BlueprintCallable)
	void AttachID(std::string &ID);
	UFUNCTION(BlueprintCallable)
	void EstablishPersonality();


	// Create functions for altering subsystem variables \\
	//Stat accessors
	
	StatsModifier* GetStats();
	//Behaviour Accessors
	BehaviourModifier* GetBehaviour();
	//Realtionship accessors
	Relationship* GetRelationship();
	std::string *GetID();


	//Allows the user to manually set personality attributes
	//UFUNCTION(BlueprintCallable)
	void OverridePersonalityValue(int personalityType, double value);






	//Display subsystem info
	void PrintStats();
	void PrintBehaviour();
	void PrintRelationship(std::string nameOfRelationshipParameter);
};
