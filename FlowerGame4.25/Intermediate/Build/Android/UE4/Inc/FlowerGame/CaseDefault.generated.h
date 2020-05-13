// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOWERGAME_CaseDefault_generated_h
#error "CaseDefault.generated.h already included, missing '#pragma once' in CaseDefault.h"
#endif
#define FLOWERGAME_CaseDefault_generated_h

#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_SPARSE_DATA
#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_RPC_WRAPPERS
#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaseDefault(); \
	friend struct Z_Construct_UClass_ACaseDefault_Statics; \
public: \
	DECLARE_CLASS(ACaseDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(ACaseDefault)


#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_INCLASS \
private: \
	static void StaticRegisterNativesACaseDefault(); \
	friend struct Z_Construct_UClass_ACaseDefault_Statics; \
public: \
	DECLARE_CLASS(ACaseDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(ACaseDefault)


#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACaseDefault(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACaseDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaseDefault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaseDefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaseDefault(ACaseDefault&&); \
	NO_API ACaseDefault(const ACaseDefault&); \
public:


#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaseDefault(ACaseDefault&&); \
	NO_API ACaseDefault(const ACaseDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaseDefault); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaseDefault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaseDefault)


#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_PRIVATE_PROPERTY_OFFSET
#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_19_PROLOG
#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_PRIVATE_PROPERTY_OFFSET \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_SPARSE_DATA \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_RPC_WRAPPERS \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_INCLASS \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_PRIVATE_PROPERTY_OFFSET \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_SPARSE_DATA \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_INCLASS_NO_PURE_DECLS \
	FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWERGAME_API UClass* StaticClass<class ACaseDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlowerGame4_25_Source_FlowerGame_Public_Model_Cases_CaseDefault_h


#define FOREACH_ENUM_ECASES(op) \
	op(CASE_DEFAULT) \
	op(CASE_STORE) \
	op(CASE_SPAWN) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
