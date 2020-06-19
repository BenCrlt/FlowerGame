// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOWERGAME_RangeWeapon_generated_h
#error "RangeWeapon.generated.h already included, missing '#pragma once' in RangeWeapon.h"
#endif
#define FLOWERGAME_RangeWeapon_generated_h

#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_SPARSE_DATA
#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitRangeWeapon);


#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitRangeWeapon);


#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARangeWeapon(); \
	friend struct Z_Construct_UClass_ARangeWeapon_Statics; \
public: \
	DECLARE_CLASS(ARangeWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(ARangeWeapon)


#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_INCLASS \
private: \
	static void StaticRegisterNativesARangeWeapon(); \
	friend struct Z_Construct_UClass_ARangeWeapon_Statics; \
public: \
	DECLARE_CLASS(ARangeWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(ARangeWeapon)


#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARangeWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARangeWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangeWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangeWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangeWeapon(ARangeWeapon&&); \
	NO_API ARangeWeapon(const ARangeWeapon&); \
public:


#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangeWeapon(ARangeWeapon&&); \
	NO_API ARangeWeapon(const ARangeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangeWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangeWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARangeWeapon)


#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_PRIVATE_PROPERTY_OFFSET
#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_19_PROLOG
#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_SPARSE_DATA \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_RPC_WRAPPERS \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_INCLASS \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_SPARSE_DATA \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_INCLASS_NO_PURE_DECLS \
	FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWERGAME_API UClass* StaticClass<class ARangeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlowerGame4_25_Source_FlowerGame_Public_Model_RangeWeapon_h


#define FOREACH_ENUM_ETYPERANGE(op) \
	op(OUT_RANGE) \
	op(IN_RANGE_NO_PLAYER) \
	op(IN_RANGE_PLAYER) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
