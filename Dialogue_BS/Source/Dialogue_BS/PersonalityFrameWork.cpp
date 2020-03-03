
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

	stats = new StatsModifier();
	relationship = new Relationship();
	behaviour = new BehaviourModifier();
	if (ID)
	{
		//floats current ID and checks to see if it already stored in Table, if so removes then repopulates the ID sending it to the back of the stack of IDs
		IDStore::getInstance()->releaseID(*ID);
		IDStore::getInstance()->assignID(*this);
		//for future implementation uses.
		behaviour->AttachID(*ID);
	}
	else
	{
		//Populate the IDTable with generated ID
		IDStore::getInstance()->assignID(*this);
		behaviour->AttachID(*ID);
	}
	
}

UPersonalityFrameWork::~UPersonalityFrameWork()
{
	behaviour->~BehaviourModifier();
	delete stats;
	delete relationship;
	stats = nullptr;
	relationship = nullptr;
	
}

void UPersonalityFrameWork::AttachID(std::string & ID_)
{
	if (ID)
	{
		IDStore::getInstance()->releaseID(*ID);
	}
	//Adds ID_ to the back of floatingID's 
	IDStore::getInstance()->addfloatingID(ID_);
	*ID = ID_;
	behaviour->AttachID(*ID);
	//Assigns the back of floatingID's to this
	IDStore::getInstance()->assignID(*this);
}

void UPersonalityFrameWork::EstablishPersonality()
{
	//Establishes personlaity
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

void UPersonalityFrameWork::PrintBehaviour()
{
	for (int i = 0; i < 4; i++)
	{
		behaviour->PrintPersonalityInfo(i);
	}
}

void UPersonalityFrameWork::PrintRelationship(std::string nameOfRelationshipParameter)
{
	relationship->PrintRelationshipInfo(nameOfRelationshipParameter);
}


