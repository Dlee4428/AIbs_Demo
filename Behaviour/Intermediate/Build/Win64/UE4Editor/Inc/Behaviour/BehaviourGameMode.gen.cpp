// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/BehaviourGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviourGameMode() {}
// Cross Module References
	BEHAVIOUR_API UClass* Z_Construct_UClass_ABehaviourGameMode_NoRegister();
	BEHAVIOUR_API UClass* Z_Construct_UClass_ABehaviourGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Behaviour();
// End Cross Module References
	void ABehaviourGameMode::StaticRegisterNativesABehaviourGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABehaviourGameMode_NoRegister()
	{
		return ABehaviourGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABehaviourGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABehaviourGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Behaviour,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviourGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BehaviourGameMode.h" },
		{ "ModuleRelativePath", "BehaviourGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABehaviourGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABehaviourGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABehaviourGameMode_Statics::ClassParams = {
		&ABehaviourGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABehaviourGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviourGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABehaviourGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABehaviourGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABehaviourGameMode, 321359096);
	template<> BEHAVIOUR_API UClass* StaticClass<ABehaviourGameMode>()
	{
		return ABehaviourGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABehaviourGameMode(Z_Construct_UClass_ABehaviourGameMode, &ABehaviourGameMode::StaticClass, TEXT("/Script/Behaviour"), TEXT("ABehaviourGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABehaviourGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
