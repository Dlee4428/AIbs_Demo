// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/BehaviourVar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviourVar() {}
// Cross Module References
	BEHAVIOUR_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviourStruct();
	UPackage* Z_Construct_UPackage__Script_Behaviour();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BEHAVIOUR_API UClass* Z_Construct_UClass_ABehaviourVar_NoRegister();
	BEHAVIOUR_API UClass* Z_Construct_UClass_ABehaviourVar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FBehaviourStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BEHAVIOUR_API uint32 Get_Z_Construct_UScriptStruct_FBehaviourStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviourStruct, Z_Construct_UPackage__Script_Behaviour(), TEXT("BehaviourStruct"), sizeof(FBehaviourStruct), Get_Z_Construct_UScriptStruct_FBehaviourStruct_Hash());
	}
	return Singleton;
}
template<> BEHAVIOUR_API UScriptStruct* StaticStruct<FBehaviourStruct>()
{
	return FBehaviourStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBehaviourStruct(FBehaviourStruct::StaticStruct, TEXT("/Script/Behaviour"), TEXT("BehaviourStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Behaviour_StaticRegisterNativesFBehaviourStruct
{
	FScriptStruct_Behaviour_StaticRegisterNativesFBehaviourStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BehaviourStruct")),new UScriptStruct::TCppStructOps<FBehaviourStruct>);
	}
} ScriptStruct_Behaviour_StaticRegisterNativesFBehaviourStruct;
	struct Z_Construct_UScriptStruct_FBehaviourStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrightnessGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrightnessGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviourStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BehaviourVar.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviourStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "BehaviourVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBehaviourStruct, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_LocationGoal_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "BehaviourVar.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_LocationGoal = { "LocationGoal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBehaviourStruct, LocationGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_LocationGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_LocationGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//interping to\n" },
		{ "ModuleRelativePath", "BehaviourVar.h" },
		{ "ToolTip", "interping to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBehaviourStruct, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_BrightnessGoal_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "BehaviourVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_BrightnessGoal = { "BrightnessGoal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBehaviourStruct, BrightnessGoal), METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_BrightnessGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_BrightnessGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "BehaviourVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBehaviourStruct, Brightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Brightness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBehaviourStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_LocationGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_BrightnessGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviourStruct_Statics::NewProp_Brightness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviourStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Behaviour,
		nullptr,
		&NewStructOps,
		"BehaviourStruct",
		sizeof(FBehaviourStruct),
		alignof(FBehaviourStruct),
		Z_Construct_UScriptStruct_FBehaviourStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviourStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBehaviourStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBehaviourStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Behaviour();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BehaviourStruct"), sizeof(FBehaviourStruct), Get_Z_Construct_UScriptStruct_FBehaviourStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBehaviourStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBehaviourStruct_Hash() { return 4043416970U; }
	void ABehaviourVar::StaticRegisterNativesABehaviourVar()
	{
	}
	UClass* Z_Construct_UClass_ABehaviourVar_NoRegister()
	{
		return ABehaviourVar::StaticClass();
	}
	struct Z_Construct_UClass_ABehaviourVar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABehaviourVar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Behaviour,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviourVar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviourVar.h" },
		{ "ModuleRelativePath", "BehaviourVar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABehaviourVar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABehaviourVar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABehaviourVar_Statics::ClassParams = {
		&ABehaviourVar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABehaviourVar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviourVar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABehaviourVar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABehaviourVar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABehaviourVar, 3471055001);
	template<> BEHAVIOUR_API UClass* StaticClass<ABehaviourVar>()
	{
		return ABehaviourVar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABehaviourVar(Z_Construct_UClass_ABehaviourVar, &ABehaviourVar::StaticClass, TEXT("/Script/Behaviour"), TEXT("ABehaviourVar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABehaviourVar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
