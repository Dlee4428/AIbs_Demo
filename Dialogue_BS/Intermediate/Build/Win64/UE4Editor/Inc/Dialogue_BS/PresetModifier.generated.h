// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPersonalityFrameWork;
struct FModifier;
#ifdef DIALOGUE_BS_PresetModifier_generated_h
#error "PresetModifier.generated.h already included, missing '#pragma once' in PresetModifier.h"
#endif
#define DIALOGUE_BS_PresetModifier_generated_h

#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPersonality) \
	{ \
		P_GET_OBJECT(UPersonalityFrameWork,Z_Param_framework); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPersonality(Z_Param_framework); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetModifiers) \
	{ \
		P_GET_STRUCT(FModifier,Z_Param_modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetModifiers(Z_Param_modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LoadAll(); \
		P_NATIVE_END; \
	}


#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPersonality) \
	{ \
		P_GET_OBJECT(UPersonalityFrameWork,Z_Param_framework); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPersonality(Z_Param_framework); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetModifiers) \
	{ \
		P_GET_STRUCT(FModifier,Z_Param_modifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetModifiers(Z_Param_modifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LoadAll(); \
		P_NATIVE_END; \
	}


#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPresetModifier(); \
	friend DIALOGUE_BS_API class UClass* Z_Construct_UClass_UPresetModifier(); \
public: \
	DECLARE_CLASS(UPresetModifier, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Dialogue_BS"), NO_API) \
	DECLARE_SERIALIZER(UPresetModifier) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPresetModifier(); \
	friend DIALOGUE_BS_API class UClass* Z_Construct_UClass_UPresetModifier(); \
public: \
	DECLARE_CLASS(UPresetModifier, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Dialogue_BS"), NO_API) \
	DECLARE_SERIALIZER(UPresetModifier) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPresetModifier(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPresetModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPresetModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPresetModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPresetModifier(UPresetModifier&&); \
	NO_API UPresetModifier(const UPresetModifier&); \
public:


#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPresetModifier(UPresetModifier&&); \
	NO_API UPresetModifier(const UPresetModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPresetModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPresetModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPresetModifier)


#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_PRIVATE_PROPERTY_OFFSET
#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_13_PROLOG
#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_PRIVATE_PROPERTY_OFFSET \
	Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_RPC_WRAPPERS \
	Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_INCLASS \
	Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_PRIVATE_PROPERTY_OFFSET \
	Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_INCLASS_NO_PURE_DECLS \
	Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dialogue_BS_Source_Dialogue_BS_Public_PresetModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
