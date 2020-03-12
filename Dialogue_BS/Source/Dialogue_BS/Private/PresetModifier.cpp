// Fill out your copyright notice in the Description page of Project Settings.

#include "PresetModifier.h"

#define IE_BASEVALUE personality->GetBehaviour()->getPersonalityValue(0)
#define SN_BASEVALUE personality->GetBehaviour()->getPersonalityValue(1)
#define TF_BASEVALUE personality->GetBehaviour()->getPersonalityValue(2)
#define JP_BASEVALUE personality->GetBehaviour()->getPersonalityValue(3)
#define IE_BASETYPE personality->GetBehaviour()->getPersonalityName(0)
#define SN_BASETYPE personality->GetBehaviour()->getPersonalityName(1)
#define TF_BASETYPE personality->GetBehaviour()->getPersonalityName(2)
#define JP_BASETYPE personality->GetBehaviour()->getPersonalityName(3)
//Modifiers are MODIFERVALUE / 100  
//.15x = 0.0015f
#define REACTIONMODIFIER 0.0015f
//0.25x = 0.0025f
#define ACTIONMODIFIER 0.0025f
//.4x = 0.004f
#define INTERCEPTMODIFIER 0.004f
//1x = 0.01f
#define MOVEMENTMODIFIER 0.01f
//1x = 0.01f
#define PATROLMODIFIER 0.01f
//0.5x = 0.005f
#define SEARCHMODIFIER 0.005f

// Sets default values for this component's properties
UPresetModifier::UPresetModifier()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	base = FModifier();
	// ...

}


UPresetModifier::UPresetModifier(UPersonalityFrameWork & personality_)
{
	personality = &personality_;

}

UPresetModifier::~UPresetModifier()
{
	/*//Clearing DialogueChoice Pointer
	if (base.dialogueChoice != nullptr)
	{
		delete(base.dialogueChoice);
		base.dialogueChoice = nullptr;
	}*/
}

// Called when the game starts
void UPresetModifier::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UPresetModifier::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPresetModifier::LoadAll()
{
	if (IE_BASETYPE == "Introvert")
	{
		IE = float(-(50 - IE_BASEVALUE));
	}
	else
	{
		IE = float(IE_BASEVALUE - 50); //IE_BASETYPE == EXTROVERT
	}
	if (SN_BASETYPE == "Sensing")
	{
		SN = float(-(50 - SN_BASEVALUE));
	}
	else
	{
		SN = float(SN_BASEVALUE - 50); //SN_BASETYPE == INTUITIVE
	}
	if (TF_BASETYPE == "Thinking")
	{
		TF = float(-(50 - TF_BASEVALUE));
	}
	else
	{
		TF = float(TF_BASEVALUE - 50); //SN_BASETYPE == INTUITIVE
	}
	if (JP_BASETYPE == "Judging")
	{
		JP = float(-(50 - JP_BASEVALUE));
	}
	else
	{
		JP = float(JP_BASEVALUE - 50); //SN_BASETYPE == INTUITIVE
	}
	LoadMovementPresetModules();
	LoadActionPresetModules();
	LoadFrequencies();
	LoadPropertiesPresetModules();
}

void UPresetModifier::LoadMovementPresetModules()
{
	base.movementSpeed = float(IE + JP + SN) * MOVEMENTMODIFIER;
	base.patrolSpeed = float(IE + JP * 0.5 + SN) * PATROLMODIFIER;
	base.searchSpeed = float(IE + JP * 1.5 + SN / 2) * SEARCHMODIFIER;
	base.interceptSpeed = float(IE + JP * 1.5 + SN) * INTERCEPTMODIFIER;

	base.movementDistance = float(SN * 2 + JP * 0.5 + TF * 2) * MOVEMENTMODIFIER;
	base.interceptDistance = float(SN + JP + TF) * INTERCEPTMODIFIER;
	base.patrolDistance = float(IE + TF) * PATROLMODIFIER;
	base.searchDistance = float(IE * 2 + SN) * SEARCHMODIFIER;
}

void UPresetModifier::LoadActionPresetModules()
{
	base.reactionSpeed = float(SN * 1.5 + JP + TF * 1.5) * REACTIONMODIFIER;
	base.reactionDistance = float(SN * 2) * REACTIONMODIFIER;
}

void UPresetModifier::LoadFrequencies()
{
	base.actionFrequency = float(SN + JP * 1.5 + TF * 1.5) * REACTIONMODIFIER;
	base.interceptFrequency = float(JP + TF + SN) * INTERCEPTMODIFIER;
	base.patrolFrequency = float(IE + TF) * PATROLMODIFIER;
	base.reactionFrequency = float(SN + TF * 2) * REACTIONMODIFIER;
}

void UPresetModifier::LoadPropertiesPresetModules()
{
	base.interactVariances = float(IE + TF * 2 + JP) * INTERCEPTMODIFIER;
	base.interceptVariances = float(IE / 1.5 + TF * 0.5 + SN / 1.5 + JP * 0.5)  * INTERCEPTMODIFIER;
	base.movementVariances = float(SN + TF * 1.5) * MOVEMENTMODIFIER;
	base.patrolVariances = float(SN + TF * 1.5) * PATROLMODIFIER;
	base.searchVariances = float(SN + TF * 1.5 + JP) *SEARCHMODIFIER;
}

void UPresetModifier::SetModifiers(FModifier modifier)
{
	base = modifier;
}

void UPresetModifier::SetPersonality(UPersonalityFrameWork* framework)
{
	personality = framework;
}


unsigned int UPresetModifier::GetDialogueCategoryWeight()
{
	dialogueCategoryWeights weight;
	if (IE_BASETYPE == "Introvert")
	{
		if (SN_BASETYPE == "Sensing")
		{
			if (TF_BASETYPE == "Thinking")
			{
				if (JP_BASETYPE == "Judging")
				{
					weight = ISTJ;
				}
				else
					weight = ISTP;
			}
			else
			{
				if (JP_BASETYPE == "Judging")
				{
					weight = ISFJ;
				}
				else
				{
					weight = ISFP;
				}
			}//end if(JP_BASETYPE)
		}
		else
		{
			if (TF_BASETYPE == "Thinking")
			{
				if (JP_BASETYPE == "Judging")
				{
					weight = INTJ;
				}
				else
					weight = INTP;
			}
			else
			{
				if (JP_BASETYPE == "Judging")
				{
					weight = INFJ;
				}
				else
				{
					weight = INFP;
				}
			}//end if(JP_BASETYPE)
		}
	}
	else //extrovert
	{
		if (SN_BASETYPE == "Sensing")
		{
			if (TF_BASETYPE == "Thinking")
			{
				if (JP_BASETYPE == "Judging")
				{
					weight = ESTJ;
				}
				else
					weight = ESTP;
			}
			else
			{
				if (JP_BASETYPE == "Judging")
				{
					weight = ESFJ;
				}
				else
				{
					weight = ESFP;
				}
			}//end if(JP_BASETYPE)
		}
		else
		{
			if (TF_BASETYPE == "Thinking")
			{
				if (JP_BASETYPE == "Judging")
				{
					weight = ENTJ;
				}
				else
					weight = ENTP;
			}
			else
			{
				if (JP_BASETYPE == "Judging")
				{
					weight = ENFJ;
				}
				else
				{
					weight = ENFP;
				}
			}//end if(JP_BASETYPE)
		}
	}
	return weight;
}

unsigned int UPresetModifier::GetDialogueTraitWeight(unsigned int type)
{
	//Preset
	if (type > 3)
	{
		type = type % 4;
	}
	dialogueTraitWeights weight;
	switch (type)
	{
	case 0:
		if (IE_BASETYPE == "Introvert")
		{
			if (IE_BASEVALUE > 40)
				weight = Introvert;
			else
				weight = Introvert_Extrovert;
		}
		else
		{
			if (IE_BASEVALUE < 60)
				weight = Extrovert_Introvert;
			else
				weight = Extrovert;
		}
		break;
	case 1:
		if (SN_BASETYPE == "Sensing")
		{
			if (SN_BASEVALUE > 40)
				weight = Sensing;
			else
				weight = Sensing_Intuitive;
		}
		else
		{
			if (SN_BASEVALUE < 60)
				weight = Intuitive_Sensing;
			else
				weight = Intuitive;
		}
		break;
	case 2:
		if (TF_BASETYPE == "Thinking")
		{
			if (TF_BASEVALUE > 40)
				weight = Thinking;
			else
				weight = Thinking_Feeling;
		}
		else
		{
			if (TF_BASEVALUE < 60)
				weight = Feeling_Thinking;
			else
				weight = Feeling;
		}
		break;
	case 3:
		if (JP_BASETYPE == "Judging")
		{
			if (JP_BASEVALUE > 40)
				weight = Judging;
			else
				weight = Judging_Perceiving;
		}
		else
		{
			if (JP_BASEVALUE < 60)
				weight = Perceiving_Judging;
			else
				weight = Perceiving;
		}
		break;
	default:
		weight = Introvert;
		break;
	}
	return weight;
}

void UPresetModifier::AddAction(float actionWeight_, unsigned int actionType_, unsigned int actionTarget_, float actionCost_, float actionTimeDelay_)
{
}

//TODO: Actions


//TODO: Relationships

void UPresetModifier::PreGenerateRelationship(UPersonalityFrameWork * otherPersonality)
{
	//if an ID has been found for the other personality
	if (otherPersonality->GetID())
	{
		//Default's to a 50 affinity rate
		personality->GetRelationship()->setRelationshipAffinity(*otherPersonality->GetID(), 50.0f);
	}
	else
	{
		return;
	}


}
//****************************************Releasing defined macros****************************/
#undef IE
#undef SN
#undef TF
#undef JP
#undef REACTIONMODIFIER 
#undef INTERCEPTMODIFIER 
#undef MOVEMENTMODIFIER
#undef PATROLMODIFIER 
#undef SEARCHMODIFIER 

