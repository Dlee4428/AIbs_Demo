// Fill out your copyright notice in the Description page of Project Settings.


#include "JP.h"


JP::JP() : Personality()
{
}

void JP::EstablishPersonality(bool genderTrait)
{

	if (distributionMean < 0.0 || distributionOffset < 0.0)
	{
		if (genderTrait)
		{
			distributionMean = 52.0;
			distributionOffset = 50.0;
		}
		else
		{
			distributionMean = 56.7;
			distributionOffset = 45.0;

		}
	}

	personalityValue = generateRandomValue();

	if (personalityValue < 50)
	{
		personalityName = "Judging";
	}
	else
	{
		personalityName = "Perceiving";
	}
}
JP::~JP()
{
}
void JP::adjustDistribution(double distributionMean_, double distributionOffset_)
{

	distributionMean = distributionMean_;
	distributionOffset = distributionOffset_;

}
