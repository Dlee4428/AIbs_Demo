// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#ifndef BEHAVIOUR_H
#define BEHAVIOUR_H

#include "IE.h"
#include "JP.h"
#include "SN.h"
#include "TF.h"
#include "CoreMinimal.h"

/**
 *
 */
class DIALOGUE_BS_API  BehaviourModifier
{
private:
	std::string *ID;

	bool genderTrait;

	/******************************************************
				Personality List
		----------------------------------------------
		Refer to Personality.h for more information

	******************************************************/
	IE personality00;
	SN personality01;
	TF personality02;
	JP personality03;
public:
	/******************************************************
				Constructor  &  Deconstructor
	******************************************************/
	BehaviourModifier();
	~BehaviourModifier();

	void AttachID(std::string &ID_);
	//personalityType : 0-3 , distributionMean : +/-20 , distributionOffset +/- 20
	/******************************************************************************************************************
	GenerateGenderTrait() enables autogeneration of genderTrait. autoGenerateGenders if false sets genderTrait to male
	if true gender is decided on ID value and the ratio

		if((*ID) % genderRatio == 0) genderTrait = true;

	******************************************************************************************************************/
	void GenerateGenderTrait(bool autoGenerateGenders, int genderRatio);

	/******************************************************
		AdjustPersonality() removes genderTrait from
		calculations when creating personalityValue

	******************************************************/
	void AdjustPersonality(int personalityType, double distributionMean, double distributionOffset);

	/**********************************************************
		ForcefullySetPersonalityValue() removes all variables
		from calculations when creating personalityValue
		IE = 0
		SN = 1
		TF = 2
		JP = 3
	***********************************************************/
	void ForcefullySetPersonalityValue(int personalityType, double value);

	/*********************************************************************
		EstablishPersonality() is used after setting/adjusting variables

	**********************************************************************/
	void EstablishPersonality();

	void PrintPersonalityInfo(int personalityType);

	std::string getPersonalityName(int personalityType);
	double getPersonalityValue(int personalityType);
};
#endif