// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIOUR_BehaviourVar_generated_h
#error "BehaviourVar.generated.h already included, missing '#pragma once' in BehaviourVar.h"
#endif
#define BEHAVIOUR_BehaviourVar_generated_h

#define Behaviour_Source_Behaviour_BehaviourVar_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBehaviourStruct_Statics; \
	BEHAVIOUR_API static class UScriptStruct* StaticStruct();


template<> BEHAVIOUR_API UScriptStruct* StaticStruct<struct FBehaviourStruct>();

#define Behaviour_Source_Behaviour_BehaviourVar_h_64_SPARSE_DATA
#define Behaviour_Source_Behaviour_BehaviourVar_h_64_RPC_WRAPPERS
#define Behaviour_Source_Behaviour_BehaviourVar_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define Behaviour_Source_Behaviour_BehaviourVar_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABehaviourVar(); \
	friend struct Z_Construct_UClass_ABehaviourVar_Statics; \
public: \
	DECLARE_CLASS(ABehaviourVar, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Behaviour"), NO_API) \
	DECLARE_SERIALIZER(ABehaviourVar) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Behaviour_Source_Behaviour_BehaviourVar_h_64_INCLASS \
private: \
	static void StaticRegisterNativesABehaviourVar(); \
	friend struct Z_Construct_UClass_ABehaviourVar_Statics; \
public: \
	DECLARE_CLASS(ABehaviourVar, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Behaviour"), NO_API) \
	DECLARE_SERIALIZER(ABehaviourVar) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Behaviour_Source_Behaviour_BehaviourVar_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABehaviourVar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABehaviourVar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABehaviourVar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABehaviourVar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABehaviourVar(ABehaviourVar&&); \
	NO_API ABehaviourVar(const ABehaviourVar&); \
public:


#define Behaviour_Source_Behaviour_BehaviourVar_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABehaviourVar(ABehaviourVar&&); \
	NO_API ABehaviourVar(const ABehaviourVar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABehaviourVar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABehaviourVar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABehaviourVar)


#define Behaviour_Source_Behaviour_BehaviourVar_h_64_PRIVATE_PROPERTY_OFFSET
#define Behaviour_Source_Behaviour_BehaviourVar_h_61_PROLOG
#define Behaviour_Source_Behaviour_BehaviourVar_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_PRIVATE_PROPERTY_OFFSET \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_SPARSE_DATA \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_RPC_WRAPPERS \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_INCLASS \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Behaviour_Source_Behaviour_BehaviourVar_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_PRIVATE_PROPERTY_OFFSET \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_SPARSE_DATA \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_INCLASS_NO_PURE_DECLS \
	Behaviour_Source_Behaviour_BehaviourVar_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIOUR_API UClass* StaticClass<class ABehaviourVar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Behaviour_Source_Behaviour_BehaviourVar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
