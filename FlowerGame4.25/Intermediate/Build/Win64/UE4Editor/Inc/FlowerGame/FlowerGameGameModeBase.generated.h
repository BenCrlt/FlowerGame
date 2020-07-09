// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFlowerGameCharacter;
class ACaseDefault;
#ifdef FLOWERGAME_FlowerGameGameModeBase_generated_h
#error "FlowerGameGameModeBase.generated.h already included, missing '#pragma once' in FlowerGameGameModeBase.h"
#endif
#define FLOWERGAME_FlowerGameGameModeBase_generated_h

#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLines_Statics; \
	FLOWERGAME_API static class UScriptStruct* StaticStruct();


template<> FLOWERGAME_API UScriptStruct* StaticStruct<struct FLines>();

#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_27_DELEGATE \
struct _Script_FlowerGame_eventUpdateChoiceDefActionDelegate_Parms \
{ \
	AFlowerGameCharacter* PlayerDamaged; \
	int32 Damage; \
}; \
static inline void FUpdateChoiceDefActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateChoiceDefActionDelegate, AFlowerGameCharacter* PlayerDamaged, int32 Damage) \
{ \
	_Script_FlowerGame_eventUpdateChoiceDefActionDelegate_Parms Parms; \
	Parms.PlayerDamaged=PlayerDamaged; \
	Parms.Damage=Damage; \
	UpdateChoiceDefActionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_26_DELEGATE \
struct _Script_FlowerGame_eventUpdateChoiceShootDelegate_Parms \
{ \
	AFlowerGameCharacter* PlayerDamaged; \
	int32 Damage; \
}; \
static inline void FUpdateChoiceShootDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateChoiceShootDelegate, AFlowerGameCharacter* PlayerDamaged, int32 Damage) \
{ \
	_Script_FlowerGame_eventUpdateChoiceShootDelegate_Parms Parms; \
	Parms.PlayerDamaged=PlayerDamaged; \
	Parms.Damage=Damage; \
	UpdateChoiceShootDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_25_DELEGATE \
static inline void FUpdateMagDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateMagDelegate) \
{ \
	UpdateMagDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_24_DELEGATE \
struct _Script_FlowerGame_eventUpdateDiceDelegate_Parms \
{ \
	int32 numDice; \
}; \
static inline void FUpdateDiceDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateDiceDelegate, int32 numDice) \
{ \
	_Script_FlowerGame_eventUpdateDiceDelegate_Parms Parms; \
	Parms.numDice=numDice; \
	UpdateDiceDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_23_DELEGATE \
static inline void FUpdateInfosPlayersDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateInfosPlayersDelegate) \
{ \
	UpdateInfosPlayersDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_SPARSE_DATA
#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execManageDefAction); \
	DECLARE_FUNCTION(execGetPlayerFromCase); \
	DECLARE_FUNCTION(execShootPlayer); \
	DECLARE_FUNCTION(execCheckPlayersInRange); \
	DECLARE_FUNCTION(execFindPlayersInRange); \
	DECLARE_FUNCTION(execTurnFinished); \
	DECLARE_FUNCTION(execLaunchCaseEvent); \
	DECLARE_FUNCTION(execChangePlayer); \
	DECLARE_FUNCTION(execLaunchDice); \
	DECLARE_FUNCTION(execInitPlayer); \
	DECLARE_FUNCTION(execLevelLoaded); \
	DECLARE_FUNCTION(execGetCurrentState);


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execManageDefAction); \
	DECLARE_FUNCTION(execGetPlayerFromCase); \
	DECLARE_FUNCTION(execShootPlayer); \
	DECLARE_FUNCTION(execCheckPlayersInRange); \
	DECLARE_FUNCTION(execFindPlayersInRange); \
	DECLARE_FUNCTION(execTurnFinished); \
	DECLARE_FUNCTION(execLaunchCaseEvent); \
	DECLARE_FUNCTION(execChangePlayer); \
	DECLARE_FUNCTION(execLaunchDice); \
	DECLARE_FUNCTION(execInitPlayer); \
	DECLARE_FUNCTION(execLevelLoaded); \
	DECLARE_FUNCTION(execGetCurrentState);


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlowerGameGameModeBase(); \
	friend struct Z_Construct_UClass_AFlowerGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFlowerGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(AFlowerGameGameModeBase)


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_INCLASS \
private: \
	static void StaticRegisterNativesAFlowerGameGameModeBase(); \
	friend struct Z_Construct_UClass_AFlowerGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFlowerGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlowerGame"), NO_API) \
	DECLARE_SERIALIZER(AFlowerGameGameModeBase)


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_STANDARD_CONSTRUCTORS \
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


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowerGameGameModeBase(AFlowerGameGameModeBase&&); \
	NO_API AFlowerGameGameModeBase(const AFlowerGameGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowerGameGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowerGameGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlowerGameGameModeBase)


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_PRIVATE_PROPERTY_OFFSET
#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_52_PROLOG
#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_PRIVATE_PROPERTY_OFFSET \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_SPARSE_DATA \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_RPC_WRAPPERS \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_INCLASS \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_PRIVATE_PROPERTY_OFFSET \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_SPARSE_DATA \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_INCLASS_NO_PURE_DECLS \
	FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOWERGAME_API UClass* StaticClass<class AFlowerGameGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlowerGame4_25_Source_FlowerGame_FlowerGameGameModeBase_h


#define FOREACH_ENUM_EGAMEPLAYSTATE(op) \
	op(ELoadingLevel) \
	op(EInitGame) \
	op(EPlaying) \
	op(ETurnBegin) \
	op(ETurnAction) \
	op(ECaseEvent) \
	op(ETurnFinish) \
	op(EGameFinish) \
	op(EBeginMenu) \
	op(EUnknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
