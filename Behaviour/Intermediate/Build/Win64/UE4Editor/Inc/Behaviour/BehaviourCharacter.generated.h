// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIOUR_BehaviourCharacter_generated_h
#error "BehaviourCharacter.generated.h already included, missing '#pragma once' in BehaviourCharacter.h"
#endif
#define BEHAVIOUR_BehaviourCharacter_generated_h

#define Behaviour_Source_Behaviour_BehaviourCharacter_h_12_RPC_WRAPPERS
#define Behaviour_Source_Behaviour_BehaviourCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Behaviour_Source_Behaviour_BehaviourCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABehaviourCharacter(); \
	friend BEHAVIOUR_API class UClass* Z_Construct_UClass_ABehaviourCharacter(); \
public: \
	DECLARE_CLASS(ABehaviourCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Behaviour"), NO_API) \
	DECLARE_SERIALIZER(ABehaviourCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Behaviour_Source_Behaviour_BehaviourCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABehaviourCharacter(); \
	friend BEHAVIOUR_API class UClass* Z_Construct_UClass_ABehaviourCharacter(); \
public: \
	DECLARE_CLASS(ABehaviourCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Behaviour"), NO_API) \
	DECLARE_SERIALIZER(ABehaviourCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Behaviour_Source_Behaviour_BehaviourCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABehaviourCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABehaviourCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABehaviourCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABehaviourCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABehaviourCharacter(ABehaviourCharacter&&); \
	NO_API ABehaviourCharacter(const ABehaviourCharacter&); \
public:


#define Behaviour_Source_Behaviour_BehaviourCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABehaviourCharacter(ABehaviourCharacter&&); \
	NO_API ABehaviourCharacter(const ABehaviourCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABehaviourCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABehaviourCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABehaviourCharacter)


#define Behaviour_Source_Behaviour_BehaviourCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABehaviourCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABehaviourCharacter, FollowCamera); }


#define Behaviour_Source_Behaviour_BehaviourCharacter_h_9_PROLOG
#define Behaviour_Source_Behaviour_BehaviourCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Behaviour_Source_Behaviour_BehaviourCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Behaviour_Source_Behaviour_BehaviourCharacter_h_12_RPC_WRAPPERS \
	Behaviour_Source_Behaviour_BehaviourCharacter_h_12_INCLASS \
	Behaviour_Source_Behaviour_BehaviourCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Behaviour_Source_Behaviour_BehaviourCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Behaviour_Source_Behaviour_BehaviourCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Behaviour_Source_Behaviour_BehaviourCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Behaviour_Source_Behaviour_BehaviourCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Behaviour_Source_Behaviour_BehaviourCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Behaviour_Source_Behaviour_BehaviourCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
