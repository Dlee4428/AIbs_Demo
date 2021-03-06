// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Dialogue_BSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue_BSCharacter() {}
// Cross Module References
	DIALOGUE_BS_API UClass* Z_Construct_UClass_ADialogue_BSCharacter_NoRegister();
	DIALOGUE_BS_API UClass* Z_Construct_UClass_ADialogue_BSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Dialogue_BS();
	DIALOGUE_BS_API UClass* Z_Construct_UClass_UPresetModifier_NoRegister();
	DIALOGUE_BS_API UClass* Z_Construct_UClass_UPersonalityFrameWork_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ADialogue_BSCharacter::StaticRegisterNativesADialogue_BSCharacter()
	{
	}
	UClass* Z_Construct_UClass_ADialogue_BSCharacter_NoRegister()
	{
		return ADialogue_BSCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ADialogue_BSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Dialogue_BS,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Dialogue_BSCharacter.h" },
				{ "ModuleRelativePath", "Dialogue_BSCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_modifiers_MetaData[] = {
				{ "Category", "BS" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Dialogue_BSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_modifiers = { UE4CodeGen_Private::EPropertyClass::Object, "modifiers", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ADialogue_BSCharacter, modifiers), Z_Construct_UClass_UPresetModifier_NoRegister, METADATA_PARAMS(NewProp_modifiers_MetaData, ARRAY_COUNT(NewProp_modifiers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Dialogue_BSCharacter.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ADialogue_BSCharacter, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Dialogue_BSCharacter.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ADialogue_BSCharacter, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_personalityFrameWork_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "BS" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Dialogue_BSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_personalityFrameWork = { UE4CodeGen_Private::EPropertyClass::Object, "personalityFrameWork", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ADialogue_BSCharacter, personalityFrameWork), Z_Construct_UClass_UPersonalityFrameWork_NoRegister, METADATA_PARAMS(NewProp_personalityFrameWork_MetaData, ARRAY_COUNT(NewProp_personalityFrameWork_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Dialogue_BSCharacter.h" },
				{ "ToolTip", "Follow camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FollowCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ADialogue_BSCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FollowCamera_MetaData, ARRAY_COUNT(NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Dialogue_BSCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera behind the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ADialogue_BSCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_modifiers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_personalityFrameWork,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FollowCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADialogue_BSCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADialogue_BSCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADialogue_BSCharacter, 3611065969);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADialogue_BSCharacter(Z_Construct_UClass_ADialogue_BSCharacter, &ADialogue_BSCharacter::StaticClass, TEXT("/Script/Dialogue_BS"), TEXT("ADialogue_BSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADialogue_BSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
