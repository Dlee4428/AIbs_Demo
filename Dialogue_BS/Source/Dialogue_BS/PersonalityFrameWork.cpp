
#include "PersonalityFrameWork.h"
#include "IDStore.h"

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

UPersonalityFrameWork::UPersonalityFrameWork()
{
	
	behaviour = new BehaviourModifier();
	if (ID)
		behaviour->AttachID(*ID);
	else
	{
		IDStore::getInstance()->assignID(*this);
	}
	behaviour->EstablishPersonality();
	stats = new StatsModifier();
	relationship = new Relationship();
}
//
//UPersonalityFrameWork::~UPersonalityFrameWork()
//{
//	if(behaviour)
//	behaviour->~BehaviourModifier();
//	if(stats)
//	delete stats;
//	if(relationship)
//	delete relationship;
//	stats = nullptr;
//	relationship = nullptr;
//	
//}

void UPersonalityFrameWork::AttachID(std::string & ID_)
{
	*ID = ID_;
	behaviour->AttachID(*ID);
}

void UPersonalityFrameWork::EstablishPersonality()
{
	//Re-establishes personlaity
	behaviour->EstablishPersonality();

}

StatsModifier* UPersonalityFrameWork::GetStats()
{
	return stats;
}

BehaviourModifier* UPersonalityFrameWork::GetBehaviour()
{
	return behaviour;
}

Relationship* UPersonalityFrameWork::GetRelationship()
{
	return relationship;
}

std::string  *UPersonalityFrameWork::GetID()
{
	return ID;
}

void UPersonalityFrameWork::OverridePersonalityValue(int personalityType, double value)
{
	behaviour->ForcefullySetPersonalityValue(personalityType, value);
}



void UPersonalityFrameWork::PrintStats()
{
	stats->Print();
}
//
//void UPersonalityFrameWork::PrintBehaviour()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		behaviour->PrintPersonalityInfo(i);
//	}
//}

void UPersonalityFrameWork::PrintRelationship(std::string nameOfRelationshipParameter)
{
	relationship->PrintRelationshipInfo(nameOfRelationshipParameter);
}


