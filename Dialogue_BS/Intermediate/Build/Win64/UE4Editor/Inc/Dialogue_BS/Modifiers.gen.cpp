// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Modifiers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifiers() {}
// Cross Module References
	DIALOGUE_BS_API UScriptStruct* Z_Construct_UScriptStruct_FModifiers();
	UPackage* Z_Construct_UPackage__Script_Dialogue_BS();
// End Cross Module References
class UScriptStruct* FModifiers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIALOGUE_BS_API uint32 Get_Z_Construct_UScriptStruct_FModifiers_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifiers, Z_Construct_UPackage__Script_Dialogue_BS(), TEXT("Modifiers"), sizeof(FModifiers), Get_Z_Construct_UScriptStruct_FModifiers_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModifiers(FModifiers::StaticStruct, TEXT("/Script/Dialogue_BS"), TEXT("Modifiers"), false, nullptr, nullptr);
static struct FScriptStruct_Dialogue_BS_StaticRegisterNativesFModifiers
{
	FScriptStruct_Dialogue_BS_StaticRegisterNativesFModifiers()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Modifiers")),new UScriptStruct::TCppStructOps<FModifiers>);
	}
} ScriptStruct_Dialogue_BS_StaticRegisterNativesFModifiers;
	UScriptStruct* Z_Construct_UScriptStruct_FModifiers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModifiers_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Dialogue_BS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Modifiers"), sizeof(FModifiers), Get_Z_Construct_UScriptStruct_FModifiers_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifiers>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionDecisionDelay_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_actionDecisionDelay = { UE4CodeGen_Private::EPropertyClass::Float, "actionDecisionDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, actionDecisionDelay), METADATA_PARAMS(NewProp_actionDecisionDelay_MetaData, ARRAY_COUNT(NewProp_actionDecisionDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionCost_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_actionCost = { UE4CodeGen_Private::EPropertyClass::Float, "actionCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, actionCost), METADATA_PARAMS(NewProp_actionCost_MetaData, ARRAY_COUNT(NewProp_actionCost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionWeight_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
				{ "ToolTip", "TODO: Action Modifiers" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_actionWeight = { UE4CodeGen_Private::EPropertyClass::Float, "actionWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, actionWeight), METADATA_PARAMS(NewProp_actionWeight_MetaData, ARRAY_COUNT(NewProp_actionWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dialogueChoice_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
				{ "ToolTip", "Pointer for iterating through dialogue library" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_dialogueChoice = { UE4CodeGen_Private::EPropertyClass::Int, "dialogueChoice", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, dialogueChoice), METADATA_PARAMS(NewProp_dialogueChoice_MetaData, ARRAY_COUNT(NewProp_dialogueChoice_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentActionType_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentActionType = { UE4CodeGen_Private::EPropertyClass::Int, "currentActionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, currentActionType), METADATA_PARAMS(NewProp_currentActionType_MetaData, ARRAY_COUNT(NewProp_currentActionType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentDialogueStage_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentDialogueStage = { UE4CodeGen_Private::EPropertyClass::Int, "currentDialogueStage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, currentDialogueStage), METADATA_PARAMS(NewProp_currentDialogueStage_MetaData, ARRAY_COUNT(NewProp_currentDialogueStage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentDialogueWeight_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
				{ "ToolTip", "EnumPointers" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentDialogueWeight = { UE4CodeGen_Private::EPropertyClass::Int, "currentDialogueWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, currentDialogueWeight), METADATA_PARAMS(NewProp_currentDialogueWeight_MetaData, ARRAY_COUNT(NewProp_currentDialogueWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactVariances_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactVariances = { UE4CodeGen_Private::EPropertyClass::Float, "interactVariances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, interactVariances), METADATA_PARAMS(NewProp_interactVariances_MetaData, ARRAY_COUNT(NewProp_interactVariances_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interceptVariances_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interceptVariances = { UE4CodeGen_Private::EPropertyClass::Float, "interceptVariances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, interceptVariances), METADATA_PARAMS(NewProp_interceptVariances_MetaData, ARRAY_COUNT(NewProp_interceptVariances_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrolVariances_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_patrolVariances = { UE4CodeGen_Private::EPropertyClass::Float, "patrolVariances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, patrolVariances), METADATA_PARAMS(NewProp_patrolVariances_MetaData, ARRAY_COUNT(NewProp_patrolVariances_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchVariances_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_searchVariances = { UE4CodeGen_Private::EPropertyClass::Float, "searchVariances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, searchVariances), METADATA_PARAMS(NewProp_searchVariances_MetaData, ARRAY_COUNT(NewProp_searchVariances_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementVariances_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
				{ "ToolTip", "Variances" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementVariances = { UE4CodeGen_Private::EPropertyClass::Float, "movementVariances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, movementVariances), METADATA_PARAMS(NewProp_movementVariances_MetaData, ARRAY_COUNT(NewProp_movementVariances_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reactionDistance_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reactionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "reactionDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, reactionDistance), METADATA_PARAMS(NewProp_reactionDistance_MetaData, ARRAY_COUNT(NewProp_reactionDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interceptDistance_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interceptDistance = { UE4CodeGen_Private::EPropertyClass::Float, "interceptDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, interceptDistance), METADATA_PARAMS(NewProp_interceptDistance_MetaData, ARRAY_COUNT(NewProp_interceptDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrolDistance_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_patrolDistance = { UE4CodeGen_Private::EPropertyClass::Float, "patrolDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, patrolDistance), METADATA_PARAMS(NewProp_patrolDistance_MetaData, ARRAY_COUNT(NewProp_patrolDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchDistance_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_searchDistance = { UE4CodeGen_Private::EPropertyClass::Float, "searchDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, searchDistance), METADATA_PARAMS(NewProp_searchDistance_MetaData, ARRAY_COUNT(NewProp_searchDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementDistance_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
				{ "ToolTip", "Distances" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementDistance = { UE4CodeGen_Private::EPropertyClass::Float, "movementDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, movementDistance), METADATA_PARAMS(NewProp_movementDistance_MetaData, ARRAY_COUNT(NewProp_movementDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionFrequency_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_actionFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "actionFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, actionFrequency), METADATA_PARAMS(NewProp_actionFrequency_MetaData, ARRAY_COUNT(NewProp_actionFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reactionFrequency_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reactionFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "reactionFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, reactionFrequency), METADATA_PARAMS(NewProp_reactionFrequency_MetaData, ARRAY_COUNT(NewProp_reactionFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interceptFrequency_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interceptFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "interceptFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, interceptFrequency), METADATA_PARAMS(NewProp_interceptFrequency_MetaData, ARRAY_COUNT(NewProp_interceptFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrolFrequency_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
				{ "ToolTip", "Frequencies" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_patrolFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "patrolFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, patrolFrequency), METADATA_PARAMS(NewProp_patrolFrequency_MetaData, ARRAY_COUNT(NewProp_patrolFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reactionSpeed_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reactionSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "reactionSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, reactionSpeed), METADATA_PARAMS(NewProp_reactionSpeed_MetaData, ARRAY_COUNT(NewProp_reactionSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interceptSpeed_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interceptSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "interceptSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, interceptSpeed), METADATA_PARAMS(NewProp_interceptSpeed_MetaData, ARRAY_COUNT(NewProp_interceptSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrolSpeed_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_patrolSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "patrolSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, patrolSpeed), METADATA_PARAMS(NewProp_patrolSpeed_MetaData, ARRAY_COUNT(NewProp_patrolSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchSpeed_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_searchSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "searchSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, searchSpeed), METADATA_PARAMS(NewProp_searchSpeed_MetaData, ARRAY_COUNT(NewProp_searchSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[] = {
				{ "Category", "Modifiers" },
				{ "ModuleRelativePath", "Public/Modifiers.h" },
				{ "ToolTip", "Speeds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "movementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FModifiers, movementSpeed), METADATA_PARAMS(NewProp_movementSpeed_MetaData, ARRAY_COUNT(NewProp_movementSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_actionDecisionDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_actionCost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_actionWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dialogueChoice,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_currentActionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_currentDialogueStage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_currentDialogueWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interactVariances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interceptVariances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patrolVariances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_searchVariances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_movementVariances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_reactionDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interceptDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patrolDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_searchDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_movementDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_actionFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_reactionFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interceptFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patrolFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_reactionSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interceptSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patrolSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_searchSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_movementSpeed,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Dialogue_BS,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Modifiers",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FModifiers),
				alignof(FModifiers),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModifiers_CRC() { return 2752637531U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
