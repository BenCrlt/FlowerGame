// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOWERGAME_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define FLOWERGAME_Weapon_generated_h

#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_SPARSE_DATA
#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execGetAmmoPerShot); \
	DECLARE_FUNCTION(execLoadWeapon);


#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execGetAmmoPerShot); \
	DECLARE_FUNCTION(execLoadWeapon);


#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_PRIVATE_PROPERTY_OFFSET
#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_11_PROLOG
#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_SPARSE_DATA \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_RPC_WRAPPERS \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_INCLASS \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_SPARSE_DATA \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_INCLASS_NO_PURE_DECLS \
	FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWERGAME_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlowerGame_4_26_Source_FlowerGame_Public_Model_Weapons_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
