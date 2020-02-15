// Fill out your copyright notice in the Description page of Project Settings.


#include "TF.h"


TF::TF() : Personality()
{
}

void TF::EstablishPersonality(bool genderTrait)
{

	if (distributionMean < 0.0 || distributionOffset < 0.0)
	{
		if (genderTrait)
		{
			distributionMean = 43.5;
			distributionOffset = 45.0;
		}
		else
		{
			distributionMean = 76.2;
			distributionOffset = 20.0;

		}
	}


	personalityValue = generateRandomValue();
	if (personalityValue < 50)
	{
		personalityName = "Thinking";
	}
	else
	{
		personalityName = "Feeling";
	}
}

TF::~TF()
{
}

void TF::adjustDistribution(double distributionMean_, double distributionOffset_)
{

	distributionMean = distributionMean_;
	distributionOffset = distributionOffset_;

}

