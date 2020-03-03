
#include "BehaviourModifier.h"

BehaviourModifier::BehaviourModifier()
{
}

BehaviourModifier::~BehaviourModifier()
{
	//Do I still Delete ID? 
	//Or just set it to nullptr
	delete ID;
	ID = nullptr;
}

void BehaviourModifier::AttachID(std::string &ID_)
{
	*ID = ID_;
	
}

void BehaviourModifier::GenerateGenderTrait(bool autoGenerateGenders, int genderRatio)
{
	//Takes the string value of the ID and assigns 1/2 male and 1/2 female population
	if (autoGenerateGenders)
	{
		if (std::stoi(*ID) % genderRatio == 0)
		{
			genderTrait = true;
		}
		else
		{
			genderTrait = false;
		}
	}
	else
	{
		genderTrait = true;
	}
}

void BehaviourModifier::AdjustPersonality(int personalityType, double distributionMean, double distributionOffset)
{
	switch (personalityType)
	{
	case 0:
		personality00.adjustDistribution(distributionMean, distributionOffset);
		break;
	case 1:
		personality01.adjustDistribution(distributionMean, distributionOffset);
		break;
	case 2:
		personality02.adjustDistribution(distributionMean, distributionOffset);
		break;
	case 3:
		personality03.adjustDistribution(distributionMean, distributionOffset);
		break;
	default:
		personalityType = 0;
		break;
	}
}

void BehaviourModifier::ForcefullySetPersonalityValue(int personalityValue, double value)
{
	switch (personalityValue)
	{
	case 0:
		personality00.setValueForcefully(value);
		break;
	case 1:
		personality01.setValueForcefully(value);
		break;
	case 2:
		personality02.setValueForcefully(value);
		break;
	case 3:
		personality03.setValueForcefully(value);
		break;
	default: personalityValue = 0;
		break;
	}
}

void BehaviourModifier::EstablishPersonality()
{


	personality00.EstablishPersonality(genderTrait);

	personality01.EstablishPersonality(genderTrait);

	personality02.EstablishPersonality(genderTrait);

	personality03.EstablishPersonality(genderTrait);


}

void BehaviourModifier::PrintPersonalityInfo(int personalityType)
{
	switch (personalityType)
	{
	case 0:
		personality00.Print();
		break;
	case 1:
		personality01.Print();
		break;
	case 2:
		personality02.Print();
		break;
	case 3:
		personality03.Print();
		break;
	default:
		personalityType = 0;
		break;
	}
}

std::string BehaviourModifier::getPersonalityName(int personalityType)
{
	switch (personalityType)
	{
	case 0:
		return personality00.getPersonalityName();
		break;
	case 1:
		return personality01.getPersonalityName();
		break;
	case 2:
		return personality02.getPersonalityName();
		break;
	case 3:
		return personality03.getPersonalityName();
		break;
	default:
		return personality00.getPersonalityName();
		break;
	}
}

double BehaviourModifier::getPersonalityValue(int personalityType)
{
	switch (personalityType)
	{
	case 0:
		return personality00.getValue();
		break;
	case 1:
		return personality01.getValue();
		break;
	case 2:
		return personality02.getValue();
		break;
	case 3:
		return personality03.getValue();
		break;
	default:
		return personality00.getValue();
		break;
	}
}
