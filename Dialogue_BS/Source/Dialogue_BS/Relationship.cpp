#include "Relationship.h"

Relationship::Relationship()
{

}

Relationship::~Relationship()
{
	parameters.clear();
}

void Relationship::setRelationshipStatus(std::string &ID_, float intimacyValue)
{
	//searches to see if ID is in library of relationship parameters before adding values into library
	if (parameters.find(&ID_) == parameters.end())
	{
		RelationshipParameters parameter;
		parameter.intimacyValue = intimacyValue;
		parameters.insert_or_assign(&ID_, parameter);
	}
	else //if an ID is already associated
	{
		parameters[&ID_].intimacyValue = intimacyValue;
	}

}

void Relationship::setRelationshipAffinity(std::string ID_, float affinityValue)
{
	//searches to see if ID is in library of relationship parameters before adding values into library
	if (parameters.find(&ID_) == parameters.end())
	{
		RelationshipParameters parameter;
		parameter.affinityValue = affinityValue;
		parameters.insert_or_assign(&ID_, parameter);
	}
	else //if an ID is already associated
	{
		parameters[&ID_].affinityValue = affinityValue;
	}

}

float Relationship::getStatus(std::string ID_)
{
	return parameters[&ID_].intimacyValue;
}

float Relationship::getAffinity(std::string ID_)
{
	return parameters[&ID_].affinityValue;
}

void Relationship::resetRelationships()
{

}

void Relationship::PrintRelationshipInfo(std::string nameOfRelationshipParameter)
{
	printf("Relationship Status: %f \nRelationship Affinity: %f",
		parameters.at(&nameOfRelationshipParameter).intimacyValue,
		parameters.at(&nameOfRelationshipParameter).affinityValue);
}
