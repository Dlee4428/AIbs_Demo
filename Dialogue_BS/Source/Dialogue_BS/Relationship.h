// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include <windows.h>
#include <string>
#include <map>
#include "Windows/HideWindowsPlatformTypes.h"

/**
 *
 */

struct DIALOGUE_BS_API  RelationshipParameters
{
	//Public by Default:
private:
	//To be Added
public:

	float intimacyValue = 0.0f;
	float affinityValue = 0.0f;
	//indicates if said person has a special bond with other
	bool isBonded = false;

};

class DIALOGUE_BS_API  Relationship
{
	//In the event we set any private parameters
	friend struct RelationshipParameters;
	//std::map<std::string ID, RelationshipParameters> parameters;
	std::map<std::string*, RelationshipParameters> parameters;

public:
	Relationship();
	~Relationship();

	void setRelationshipStatus(std::string &ID_, float intimacyValue = 0.0f);
	void setRelationshipAffinity(std::string ID_, float affinityValue = 0.0f);
	float getStatus(std::string ID_);
	float getAffinity(std::string ID_);
	void resetRelationships();

	void PrintRelationshipInfo(std::string nameOfRelationshipParameters);
};