// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <map>
#include "PersonalityFrameWork.h"
#include "Modifier.h"
#include "Components/ActorComponent.h"
#include "PresetModifier.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DIALOGUE_BS_API UPresetModifier : public UActorComponent
{
	GENERATED_BODY()

private:
	FModifier base;
	UPersonalityFrameWork* personality;
	float IE, SN, TF, JP;

public:
	// Sets default values for this component's properties
	UPresetModifier();
	UPresetModifier(UPersonalityFrameWork &personality_);
	~UPresetModifier();

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
	void PreGenerateRelationship(UPersonalityFrameWork *otherPersonality);

};

