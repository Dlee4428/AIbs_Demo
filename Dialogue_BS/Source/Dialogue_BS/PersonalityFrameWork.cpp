
#include "PersonalityFrameWork.h"

/*Since Personality and Stats are pure header files declaring there static variables here*/
#ifndef GENERATORS
#define GENERATORS

std::default_random_engine Personality::pgenerator;
std::default_random_engine StatsModifier::generator;
#endif // !GENERATORS


#define AUTOGENERATEGENDERS true
//GenderRatio 1/GENDERRATIO = male
//default 2 (meaning that for every 2 people one will be a male) or 1 in 2 people
#define GENDERRATIO 2

PersonalityFrameWork::PersonalityFrameWork()
{
	behaviour = new BehaviourModifier();
	if (ID)
		behaviour->AttachID(*ID);
	behaviour->EstablishPersonality();
	stats = new StatsModifier();
	relationship = new Relationship();
}

PersonalityFrameWork::~PersonalityFrameWork()
{
	behaviour->~BehaviourModifier();
	delete stats;
	delete relationship;
	stats = nullptr;
	relationship = nullptr;
	
}

void PersonalityFrameWork::AttachID(std::string & ID_)
{
	*ID = ID_;
	behaviour->AttachID(*ID);
}

void PersonalityFrameWork::EstablishPersonality()
{
	//Re-establishes personlaity
	behaviour->EstablishPersonality();

}

StatsModifier* PersonalityFrameWork::GetStats()
{
	return stats;
}

BehaviourModifier* PersonalityFrameWork::GetBehaviour()
{
	return behaviour;
}

Relationship* PersonalityFrameWork::GetRelationship()
{
	return relationship;
}

std::string  *PersonalityFrameWork::GetID()
{
	return ID;
}

void PersonalityFrameWork::OverridePersonalityValue(int personalityType, double value)
{
	behaviour->ForcefullySetPersonalityValue(personalityType, value);
}



void PersonalityFrameWork::PrintStats()
{
	stats->Print();
}

void PersonalityFrameWork::PrintBehaviour()
{
	for (int i = 0; i < 4; i++)
	{
		behaviour->PrintPersonalityInfo(i);
	}
}

void PersonalityFrameWork::PrintRelationship(std::string nameOfRelationshipParameter)
{
	relationship->PrintRelationshipInfo(nameOfRelationshipParameter);
}


