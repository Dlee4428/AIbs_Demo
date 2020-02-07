// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Dialogue_BSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue_BSGameMode() {}
// Cross Module References
	DIALOGUE_BS_API UClass* Z_Construct_UClass_ADialogue_BSGameMode_NoRegister();
	DIALOGUE_BS_API UClass* Z_Construct_UClass_ADialogue_BSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Dialogue_BS();
// End Cross Module References
	void ADialogue_BSGameMode::StaticRegisterNativesADialogue_BSGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADialogue_BSGameMode_NoRegister()
	{
		return ADialogue_BSGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ADialogue_BSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Dialogue_BS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Dialogue_BSGameMode.h" },
				{ "ModuleRelativePath", "Dialogue_BSGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADialogue_BSGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADialogue_BSGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADialogue_BSGameMode, 4060398221);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADialogue_BSGameMode(Z_Construct_UClass_ADialogue_BSGameMode, &ADialogue_BSGameMode::StaticClass, TEXT("/Script/Dialogue_BS"), TEXT("ADialogue_BSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADialogue_BSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
