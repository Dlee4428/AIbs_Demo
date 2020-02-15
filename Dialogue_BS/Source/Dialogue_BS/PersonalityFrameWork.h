// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "StatsModifier.h"
#include "BehaviourModifier.h"
#include "Relationship.h"

/**
 *
 */
class DIALOGUE_BS_API  PersonalityFrameWork
{
	friend class IDStore;
public:

private:

	std::string* ID;

	StatsModifier* stats;
	BehaviourModifier* behaviour;
	Relationship* relationship;
public:
	PersonalityFrameWork();
	~PersonalityFrameWork();

	void AttachID(std::string &ID);

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
	void OverridePersonalityValue(int personalityType, double value);






	//Display subsystem info
	void PrintStats();
	void PrintBehaviour();
	void PrintRelationship(std::string nameOfRelationshipParameter);
};
