// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Modifier.generated.h"

//Switch Case Behaviour Tree for determining which actions to choose
//ToDo:: Implement Actions similar to dialogue system or have these actions types set for the set personality weight
enum actionType
{
	action00, action01, action02, action03, action04, action05, action06, action07, action08, action09, action10, action11, action12, action13, action14,
	action15, action16, action17, action18, action19, action20, action21, action22, action23, action24, action25, action28, action29, action30, action31,
	action32, action33, action34, action35, action36, action37, action38, action39, action40, action41, action42, action43, action44, action45, action46,
	action47, action48, action49
};
enum actionTarget
{
	None, Self, Ally, Neutral, Enemy, Object
};
//Potentially go to 128 for memory optimization
enum dialogueStage
{
	stage0, stage1, stage2, stage3, stage4, stage5, stage6, stage7, stage8, stage9, stage10, stage11, stage12
};
enum dialogueCategoryWeights
{
	//The 16 types of Personalities
	ISTJ, ISFJ, INFJ, INTJ,
	ISTP, ISFP, INFP, INTP,
	ESTP, ESFP, ENFP, ENTP,
	ESTJ, ESFJ, ENFJ, ENTJ
};
enum dialogueTraitWeights
{
	Introvert, Introvert_Extrovert, Extrovert_Introvert, Extrovert,
	Sensing, Sensing_Intuitive, Intuitive_Sensing, Intuitive,
	Thinking, Thinking_Feeling, Feeling_Thinking, Feeling,
	Judging, Judging_Perceiving, Perceiving_Judging, Perceiving
};
/**
 *
 */

USTRUCT(BlueprintType)
struct FModifier
{
	GENERATED_USTRUCT_BODY()

		//Speeds
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float movementSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float searchSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float patrolSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float interceptSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float reactionSpeed;
	//Frequencies
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float patrolFrequency;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float interceptFrequency;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float reactionFrequency;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float actionFrequency;
	//Distances
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float movementDistance;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float searchDistance;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float patrolDistance;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float interceptDistance;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float reactionDistance;
	//Variances
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float movementVariances;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float searchVariances;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float patrolVariances;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float interceptVariances;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float interactVariances;

	//EnumPointers
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		int currentDialogueWeight;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		int currentDialogueStage;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		int currentActionType;

	//Pointer for iterating through dialogue library
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		int dialogueChoice;

	//TODO: Action Modifiers
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float actionWeight;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float actionCost;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Modifiers")
		float actionDecisionDelay;

	//TODO: Relationship and Affinity -> Personalities

};

