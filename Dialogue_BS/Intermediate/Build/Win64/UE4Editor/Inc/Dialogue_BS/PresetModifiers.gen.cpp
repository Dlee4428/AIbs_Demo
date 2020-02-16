// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PresetModifiers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresetModifiers() {}
// Cross Module References
	DIALOGUE_BS_API UClass* Z_Construct_UClass_UPresetModifiers_NoRegister();
	DIALOGUE_BS_API UClass* Z_Construct_UClass_UPresetModifiers();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Dialogue_BS();
// End Cross Module References
	void UPresetModifiers::StaticRegisterNativesUPresetModifiers()
	{
	}
	UClass* Z_Construct_UClass_UPresetModifiers_NoRegister()
	{
		return UPresetModifiers::StaticClass();
	}
	UClass* Z_Construct_UClass_UPresetModifiers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Dialogue_BS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "PresetModifiers.h" },
				{ "ModuleRelativePath", "Public/PresetModifiers.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPresetModifiers>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPresetModifiers::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UPresetModifiers, 3871611567);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresetModifiers(Z_Construct_UClass_UPresetModifiers, &UPresetModifiers::StaticClass, TEXT("/Script/Dialogue_BS"), TEXT("UPresetModifiers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresetModifiers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
