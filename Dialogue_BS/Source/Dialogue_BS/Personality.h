// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include <windows.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <random>
#include <typeinfo>
#include <cstdio>
#include "Windows/HideWindowsPlatformTypes.h"
/**
 *
 */
class DIALOGUE_BS_API Personality
{
public:

	//One instance of pGenerator ever: instantiated in PersonalityFrameWork.cpp
	static std::default_random_engine pgenerator;

protected:

	std::string personalityName;
	std::string minValueName;
	std::string maxValueName;

	/************************************************************************************************************
				RandomStatGeneration
		------------------------------------------
		-1 is the default value, if any of these values are set to a negative value the default values
		will automatically be used when generating values

		Each value ranges from 0 - 100. Any other value will reset the value's to default upon generating
		values.

		Default values are set in each seperate Personality List.
			PersonalityValue(Range)			DistributionMean(Male/Female)		DistributionOffset(Male/Female)
	IE:  Introvert < 50 / Extrovert >=50      46.0 Male / 52.2 Female			  50.0 Male / 50.0 Female
	JP:  Judging < 50 / Percieving >=50       52.0 Male / 56.7 Female			  50.0 Male / 45.0 Female
	SN:  Sensing < 50 / Intuitive >=50        71.8 Male / 56.7 Female			  40.0 Male / 50.0 Female
	TF:  Thinking < 50 / Feeling >=50         43.5 Male / 76.2 Female			  45.0 Male / 20.0 Female

	**************************************************************************************************************/
	double personalityValue = -1.0;
	//Male
	double distributionMean = -1.0;
	double distributionOffset = -1.0;


public:

	/******************************************************
				Constructor  &  Deconstructor
	******************************************************/
	Personality() {};
	Personality(std::string minValueName_, std::string maxValueName_) { minValueName = minValueName_; maxValueName = maxValueName_; };
	//Virtual Destructor
	virtual ~Personality() {};


	/******************************************************
		"Local" Functions for all Personality Classes
	******************************************************/
	virtual void EstablishPersonality(bool genderTrait) = 0;

	virtual void adjustDistribution(double distributionMean_, double distributionOffset_) = 0;

	//Function to execute when personalityValue is on the lower half of the spectrum
	template <typename T>
	T LowValueAction(T(*functionToUse)())
	{
		if (!(typeid(void) == typeid(T)))return functionToUse();
		else functionToUse();
	};

	template <typename T>
	T HighValueAction(T(*functionToUse)())
	{
		if (!(typeid(void) == typeid(T)))return functionToUse();
		else functionToUse();
	};
	/******************************************************
	  End Of "Local" Functions for all Personality Classes
	******************************************************/

	/******************************************************
		"Global" Functions for all Personality Classes
	******************************************************/
	std::string getPersonalityName()
	{
		return personalityName;
	}

	void UpdateName()
	{
		if (personalityValue < 50)
		{
			personalityName = minValueName;
		}
		else
		{
			personalityName = maxValueName;
		}
	}

	double getValue()
	{
		return personalityValue;
	}

	//If value is invalid, value is randomly generated
	virtual void setValueForcefully(double Value)
	{
		if (Value < 100 && Value > 0) {
			personalityValue = Value;
		}
		else
		{
			printf("Invalid Personality Value\r\nGenerating Random Value");
			EstablishPersonality(true);
		}
		UpdateName();
	}

	void Print()
	{
		printf("%s: %f\r\n", personalityName.c_str(), personalityValue);
	}
	/******************************************************
	 End Of "Global" Functions for all Personality Classes
	******************************************************/

protected:

	/******************************************************
		 Helper  Functions for all Personality Classes
	******************************************************/

	double generateRandomValue()
	{
		//Set's default Distributions
		if (distributionMean < 0.0)
		{
			distributionMean = 50;
		}
		if (distributionOffset < 0.0)
		{
			distributionOffset = 25;
		}
		//Distributes Values
		std::normal_distribution<double> distribution(distributionMean, distributionOffset);
		double value = distribution(pgenerator);
		//Runs distribution until it gets a valid value
		while (value > 100 || value < 0)
		{
			value = distribution(pgenerator);
		};

		UpdateName();
		return value;
	}
	/******************************************************
	 End Of Helper  Functions for all Personality Classes
	******************************************************/
};
