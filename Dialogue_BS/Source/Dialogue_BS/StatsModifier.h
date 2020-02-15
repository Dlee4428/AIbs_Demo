// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#ifndef Stats_H
#define Stats_H

#include "CoreMinimal.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include <windows.h>
#include <random>
#include <stdio.h>
#include "Windows/HideWindowsPlatformTypes.h"


class DIALOGUE_BS_API  StatsModifier
{
public:
	static std::default_random_engine generator;
	bool isAlive;
	//Communication
	int skill_charisma;
	//Physical 
	int skill_strength;
	int skill_dexterity;
	//Mental 
	int skill_intelligence;
	int skill_wisdom;

	StatsModifier()
	{
		//Sequential Order of Stats
		skill_charisma = -1;
		skill_strength = -1;
		skill_dexterity = -1;
		skill_intelligence = -1;
		skill_wisdom = -1;
		//Generates Random stats
		std::normal_distribution<double> distribution(11.0, 7.0);
		//Distribute Stats Randomly Along a Bell Curve
		for (int i = 0; i < 6; i++)
		{
			double statValue = distribution(generator);
			while (statValue == 0)
			{
				distribution(generator);
			}

			if (statValue <= 40 && statValue >= 0)
			{
				//DistributesStats One By One in Sequential Order
				DistributeStats(statValue);
			}
		}
	}


private:
	/*Helper Functions*/
	void DistributeStats(double Value)
	{

		if (skill_charisma == -1)
		{
			skill_charisma = (int)Value;
		}
		else if (skill_strength == -1)
		{
			skill_strength = (int)Value;
		}
		else if (skill_dexterity == -1)
		{
			skill_dexterity = (int)Value;
		}
		else if (skill_intelligence == -1)
		{
			skill_intelligence = (int)Value;
		}
		else if (skill_wisdom == -1)
		{
			skill_wisdom = (int)Value;
		}
		else
		{
		}
	}

public:

	void Print()
	{
		printf("\r\nSkillCharisma: %d\r\nSkillStrength: %d\r\nSkillDexterity: %d\r\nSkillIntelligence: %d\r\nSkillWisdom: %d\r\n", skill_charisma, skill_strength, skill_dexterity, skill_intelligence, skill_wisdom);
	}

};



#endif // !Stats_H

