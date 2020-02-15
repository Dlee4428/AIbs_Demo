// Fill out your copyright notice in the Description page of Project Settings.


#include "SN.h"



SN::SN() : Personality()
{
}

void SN::EstablishPersonality(bool genderTrait)
{

	if (distributionMean < 0.0 || distributionOffset < 0.0)
	{

		if (genderTrait)
		{
			distributionMean = 71.8;
			distributionOffset = 40;
		}
		else
		{
			distributionMean = 56.7;
			distributionOffset = 50;

		}
	}


	personalityValue = generateRandomValue();

	if (personalityValue < 50)
	{
		personalityName = "Sensing";
	}
	else
	{
		personalityName = "Intuitive";
	}
}

SN::~SN()
{
}

void SN::adjustDistribution(double distributionMean_, double distributionOffset_)
{

	distributionMean = distributionMean_;
	distributionOffset = distributionOffset_;


}


