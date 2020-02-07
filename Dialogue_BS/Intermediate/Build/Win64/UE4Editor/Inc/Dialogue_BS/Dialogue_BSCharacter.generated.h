// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGUE_BS_Dialogue_BSCharacter_generated_h
#error "Dialogue_BSCharacter.generated.h already included, missing '#pragma once' in Dialogue_BSCharacter.h"
#endif
#define DIALOGUE_BS_Dialogue_BSCharacter_generated_h

#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_RPC_WRAPPERS
#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADialogue_BSCharacter(); \
	friend DIALOGUE_BS_API class UClass* Z_Construct_UClass_ADialogue_BSCharacter(); \
public: \
	DECLARE_CLASS(ADialogue_BSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Dialogue_BS"), NO_API) \
	DECLARE_SERIALIZER(ADialogue_BSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADialogue_BSCharacter(); \
	friend DIALOGUE_BS_API class UClass* Z_Construct_UClass_ADialogue_BSCharacter(); \
public: \
	DECLARE_CLASS(ADialogue_BSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Dialogue_BS"), NO_API) \
	DECLARE_SERIALIZER(ADialogue_BSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADialogue_BSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADialogue_BSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogue_BSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogue_BSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogue_BSCharacter(ADialogue_BSCharacter&&); \
	NO_API ADialogue_BSCharacter(const ADialogue_BSCharacter&); \
public:


#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogue_BSCharacter(ADialogue_BSCharacter&&); \
	NO_API ADialogue_BSCharacter(const ADialogue_BSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogue_BSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogue_BSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADialogue_BSCharacter)


#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADialogue_BSCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADialogue_BSCharacter, FollowCamera); }


#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_9_PROLOG
#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_RPC_WRAPPERS \
	Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_INCLASS \
	Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dialogue_BS_Source_Dialogue_BS_Dialogue_BSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
