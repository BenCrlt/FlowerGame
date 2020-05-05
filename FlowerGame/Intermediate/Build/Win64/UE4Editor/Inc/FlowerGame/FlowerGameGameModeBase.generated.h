// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOWERGAME_FlowerGameGameModeBase_generated_h
#error "FlowerGameGameModeBase.generated.h already included, missing '#pragma once' in FlowerGameGameModeBase.h"
#endif
#define FLOWERGAME_FlowerGameGameModeBase_generated_h

#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLines_Statics; \
	FLOWERGAME_API static class UScriptStruct* StaticStruct();


template<> FLOWERGAME_API UScriptStruct* StaticStruct<struct FLines>();

#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_SPARSE_DATA
#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunchDice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numDice); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchDice(Z_Param_numDice); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGamePlayState>*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchDice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numDice); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchDice(Z_Param_numDice); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGamePlayState>*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlowerGameGameModeBase(); \
	friend struct Z_Construct_UClass_AFlowerGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFlowerGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(AFlowerGameGameModeBase)


#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_INCLASS \
private: \
	static void StaticRegisterNativesAFlowerGameGameModeBase(); \
	friend struct Z_Construct_UClass_AFlowerGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFlowerGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(AFlowerGameGameModeBase)


#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlowerGameGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlowerGameGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowerGameGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowerGameGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowerGameGameModeBase(AFlowerGameGameModeBase&&); \
	NO_API AFlowerGameGameModeBase(const AFlowerGameGameModeBase&); \
public:


#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowerGameGameModeBase(AFlowerGameGameModeBase&&); \
	NO_API AFlowerGameGameModeBase(const AFlowerGameGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowerGameGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowerGameGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlowerGameGameModeBase)


#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_PRIVATE_PROPERTY_OFFSET
#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_36_PROLOG
#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_PRIVATE_PROPERTY_OFFSET \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_SPARSE_DATA \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_RPC_WRAPPERS \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_INCLASS \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_PRIVATE_PROPERTY_OFFSET \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_SPARSE_DATA \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_INCLASS_NO_PURE_DECLS \
	FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWERGAME_API UClass* StaticClass<class AFlowerGameGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlowerGame_Source_FlowerGame_FlowerGameGameModeBase_h


#define FOREACH_ENUM_EGAMEPLAYSTATE(op) \
	op(EBegin) \
	op(EPlaying) \
	op(EGameFinish) \
	op(EBeginMenu) \
	op(EUnknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
