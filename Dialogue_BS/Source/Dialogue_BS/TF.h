// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Personality.h"

/**
 * 
 */
class DIALOGUE_BS_API TF : public Personality
{
public:
	TF();
	void EstablishPersonality(bool);
	virtual ~TF();


	void adjustDistribution(double distributionMean_, double distributionOffset_);

};
