// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class ACaseDefault;
#ifdef FLOWERGAME_FlowerGameCharacter_generated_h
#error "FlowerGameCharacter.generated.h already included, missing '#pragma once' in FlowerGameCharacter.h"
#endif
#define FLOWERGAME_FlowerGameCharacter_generated_h

#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_SPARSE_DATA
#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execgetDirection); \
	DECLARE_FUNCTION(execManageCaseChoice); \
	DECLARE_FUNCTION(execCheckWaysAvailable); \
	DECLARE_FUNCTION(execGoToNextCase); \
	DECLARE_FUNCTION(execMoveWithDice); \
	DECLARE_FUNCTION(execInitPlayer);


#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execgetDirection); \
	DECLARE_FUNCTION(execManageCaseChoice); \
	DECLARE_FUNCTION(execCheckWaysAvailable); \
	DECLARE_FUNCTION(execGoToNextCase); \
	DECLARE_FUNCTION(execMoveWithDice); \
	DECLARE_FUNCTION(execInitPlayer);


#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlowerGameCharacter(); \
	friend struct Z_Construct_UClass_AFlowerGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFlowerGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(AFlowerGameCharacter)


#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAFlowerGameCharacter(); \
	friend struct Z_Construct_UClass_AFlowerGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFlowerGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(AFlowerGameCharacter)


#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlowerGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlowerGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowerGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowerGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowerGameCharacter(AFlowerGameCharacter&&); \
	NO_API AFlowerGameCharacter(const AFlowerGameCharacter&); \
public:


#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowerGameCharacter(AFlowerGameCharacter&&); \
	NO_API AFlowerGameCharacter(const AFlowerGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowerGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowerGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlowerGameCharacter)


#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_PRIVATE_PROPERTY_OFFSET
#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_31_PROLOG
#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_PRIVATE_PROPERTY_OFFSET \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_SPARSE_DATA \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_RPC_WRAPPERS \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_INCLASS \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_PRIVATE_PROPERTY_OFFSET \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_SPARSE_DATA \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_INCLASS_NO_PURE_DECLS \
	FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWERGAME_API UClass* StaticClass<class AFlowerGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlowerGame_4_25___2_Source_FlowerGame_Public_Player_FlowerGameCharacter_h


#define FOREACH_ENUM_EDIRECTION(op) \
	op(DIRECTION_UNKNOWN) \
	op(DIRECTION_UP) \
	op(DIRECTION_DOWN) \
	op(DIRECTION_RIGHT) \
	op(DIRECTION_LEFT) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
