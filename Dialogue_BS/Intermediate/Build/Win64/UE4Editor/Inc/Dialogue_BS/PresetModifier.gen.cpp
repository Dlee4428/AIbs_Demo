// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PresetModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresetModifier() {}
// Cross Module References
	DIALOGUE_BS_API UClass* Z_Construct_UClass_UPresetModifier_NoRegister();
	DIALOGUE_BS_API UClass* Z_Construct_UClass_UPresetModifier();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Dialogue_BS();
	DIALOGUE_BS_API UFunction* Z_Construct_UFunction_UPresetModifier_LoadAll();
	DIALOGUE_BS_API UFunction* Z_Construct_UFunction_UPresetModifier_SetModifiers();
	DIALOGUE_BS_API UScriptStruct* Z_Construct_UScriptStruct_FModifier();
	DIALOGUE_BS_API UFunction* Z_Construct_UFunction_UPresetModifier_SetPersonality();
	DIALOGUE_BS_API UClass* Z_Construct_UClass_UPersonalityFrameWork_NoRegister();
// End Cross Module References
	void UPresetModifier::StaticRegisterNativesUPresetModifier()
	{
		UClass* Class = UPresetModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadAll", (Native)&UPresetModifier::execLoadAll },
			{ "SetModifiers", (Native)&UPresetModifier::execSetModifiers },
			{ "SetPersonality", (Native)&UPresetModifier::execSetPersonality },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPresetModifier_LoadAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PresetModifier.h" },
				{ "ToolTip", "*****************Structural Helper Functions********************\n               Acts as bulk template modifiers for base AI. In other words\n               is a preset modifier settings." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresetModifier, "LoadAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPresetModifier_SetModifiers()
	{
		struct PresetModifier_eventSetModifiers_Parms
		{
			FModifier modifier;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_modifier = { UE4CodeGen_Private::EPropertyClass::Struct, "modifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PresetModifier_eventSetModifiers_Parms, modifier), Z_Construct_UScriptStruct_FModifier, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_modifier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PresetModifier.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresetModifier, "SetModifiers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PresetModifier_eventSetModifiers_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPresetModifier_SetPersonality()
	{
		struct PresetModifier_eventSetPersonality_Parms
		{
			UPersonalityFrameWork* framework;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_framework_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_framework = { UE4CodeGen_Private::EPropertyClass::Object, "framework", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PresetModifier_eventSetPersonality_Parms, framework), Z_Construct_UClass_UPersonalityFrameWork_NoRegister, METADATA_PARAMS(NewProp_framework_MetaData, ARRAY_COUNT(NewProp_framework_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_framework,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PresetModifier.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPresetModifier, "SetPersonality", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PresetModifier_eventSetPersonality_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPresetModifier_NoRegister()
	{
		return UPresetModifier::StaticClass();
	}
	UClass* Z_Construct_UClass_UPresetModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Dialogue_BS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPresetModifier_LoadAll, "LoadAll" }, // 1179300551
				{ &Z_Construct_UFunction_UPresetModifier_SetModifiers, "SetModifiers" }, // 1968830920
				{ &Z_Construct_UFunction_UPresetModifier_SetPersonality, "SetPersonality" }, // 3074563758
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "PresetModifier.h" },
				{ "ModuleRelativePath", "Public/PresetModifier.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_personality_MetaData[] = {
				{ "Category", "PresetModifier" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PresetModifier.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_personality = { UE4CodeGen_Private::EPropertyClass::Object, "personality", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UPresetModifier, personality), Z_Construct_UClass_UPersonalityFrameWork_NoRegister, METADATA_PARAMS(NewProp_personality_MetaData, ARRAY_COUNT(NewProp_personality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_base_MetaData[] = {
				{ "Category", "PresetModifier" },
				{ "ModuleRelativePath", "Public/PresetModifier.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_base = { UE4CodeGen_Private::EPropertyClass::Struct, "base", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPresetModifier, base), Z_Construct_UScriptStruct_FModifier, METADATA_PARAMS(NewProp_base_MetaData, ARRAY_COUNT(NewProp_base_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_personality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_base,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPresetModifier>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPresetModifier::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresetModifier, 2758725967);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresetModifier(Z_Construct_UClass_UPresetModifier, &UPresetModifier::StaticClass, TEXT("/Script/Dialogue_BS"), TEXT("UPresetModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresetModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
