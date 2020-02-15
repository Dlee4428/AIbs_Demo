// Fill out your copyright notice in the Description page of Project Settings.

#include "IE.h"


IE::IE() : Personality()
{
}

void IE::EstablishPersonality(bool genderTrait_)
{


	if (distributionMean < 0.0 || distributionOffset < 0.0)
	{

		if (genderTrait_)
		{
			distributionMean = 46.0;
			distributionOffset = 50.0;
		}
		else
		{
			distributionMean = 52.2;
			distributionOffset = 50.0;

		}
	}

	personalityValue = generateRandomValue();

	if (personalityValue < 50)
	{
		personalityName = "Introvert";
	}
	else
	{
		personalityName = "Extrovert";
	}

}
IE::~IE()
{

}
void IE::adjustDistribution(double distributionMean_, double distributionOffset_)
{

	distributionMean = distributionMean_;
	distributionOffset = distributionOffset_;

}
