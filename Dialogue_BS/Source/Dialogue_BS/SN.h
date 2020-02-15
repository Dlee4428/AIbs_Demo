// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Personality.h"

/**
 * 
 */
class DIALOGUE_BS_API  SN : public Personality
{

public:
	SN();
	void EstablishPersonality(bool);
	virtual ~SN();


	void adjustDistribution(double distributionMean_, double distributionOffset_);

};
