// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <map>
#include "PersonalityFrameWork.h"
#include "Modifiers.h"
#include "Components/ActorComponent.h"
#include "PresetModifiers.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DIALOGUE_BS_API UPresetModifiers : public UActorComponent
{
	GENERATED_BODY()

private:
	//Modifiers base;
	PersonalityFrameWork* personality;
	float IE, SN, TF, JP;

public:
	// Sets default values for this component's properties
	UPresetModifiers();
	UPresetModifiers(PersonalityFrameWork &personality_);
	~UPresetModifiers();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	/****************************************************************
		******************Structural Helper Functions********************
		Acts as bulk template modifiers for base AI. In other words
		is a preset modifier settings.
		*/
	void LoadAll();
	void LoadMovementPresetModules();
	void LoadActionPresetModules();
	void LoadFrequencies();
	void LoadPropertiesPresetModules();

	//Dialogue
	unsigned int GetDialogueCategoryWeight();
	unsigned int GetDialogueTraitWeight(unsigned int type);

	//Actions 
	void AddAction(float actionWeight_, unsigned int actionType_, unsigned int actionTarget_ = NULL, float actionCost_ = 0.0f, float actionTimeDelay_ = 0.0f);

	//Relations
	void PreGenerateRelationship(PersonalityFrameWork *otherPersonality);

};
