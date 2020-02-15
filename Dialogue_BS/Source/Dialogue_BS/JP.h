// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Personality.h"
/**
 * 
 */
class DIALOGUE_BS_API  JP : public Personality
{
public:
	JP();
	void EstablishPersonality(bool);
	virtual ~JP();

	void adjustDistribution(double distributionMean_, double distributionOffset_);

};

