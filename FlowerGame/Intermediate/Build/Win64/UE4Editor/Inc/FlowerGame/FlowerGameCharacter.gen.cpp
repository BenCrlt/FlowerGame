// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/Public/Player/FlowerGameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowerGameCharacter() {}
// Cross Module References
	FLOWERGAME_API UEnum* Z_Construct_UEnum_FlowerGame_EDirection();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameCharacter_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault_NoRegister();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_getDirection();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static UEnum* EDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FlowerGame_EDirection, Z_Construct_UPackage__Script_FlowerGame(), TEXT("EDirection"));
		}
		return Singleton;
	}
	template<> FLOWERGAME_API UEnum* StaticEnum<EDirection>()
	{
		return EDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDirection(EDirection_StaticEnum, TEXT("/Script/FlowerGame"), TEXT("EDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FlowerGame_EDirection_Hash() { return 2601300412U; }
	UEnum* Z_Construct_UEnum_FlowerGame_EDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FlowerGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDirection"), 0, Get_Z_Construct_UEnum_FlowerGame_EDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DIRECTION_UNKNOWN", (int64)DIRECTION_UNKNOWN },
				{ "DIRECTION_UP", (int64)DIRECTION_UP },
				{ "DIRECTION_DOWN", (int64)DIRECTION_DOWN },
				{ "DIRECTION_RIGHT", (int64)DIRECTION_RIGHT },
				{ "DIRECTION_LEFT", (int64)DIRECTION_LEFT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DIRECTION_DOWN.DisplayName", "Down" },
				{ "DIRECTION_DOWN.Name", "DIRECTION_DOWN" },
				{ "DIRECTION_LEFT.DisplayName", "Left" },
				{ "DIRECTION_LEFT.Name", "DIRECTION_LEFT" },
				{ "DIRECTION_RIGHT.DisplayName", "Right" },
				{ "DIRECTION_RIGHT.Name", "DIRECTION_RIGHT" },
				{ "DIRECTION_UNKNOWN.DisplayName", "Unknown direction" },
				{ "DIRECTION_UNKNOWN.Name", "DIRECTION_UNKNOWN" },
				{ "DIRECTION_UP.DisplayName", "Up" },
				{ "DIRECTION_UP.Name", "DIRECTION_UP" },
				{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FlowerGame,
				nullptr,
				"EDirection",
				"EDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AFlowerGameCharacter::StaticRegisterNativesAFlowerGameCharacter()
	{
		UClass* Class = AFlowerGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckWaysAvailable", &AFlowerGameCharacter::execCheckWaysAvailable },
			{ "getDirection", &AFlowerGameCharacter::execgetDirection },
			{ "GoToNextCase", &AFlowerGameCharacter::execGoToNextCase },
			{ "InitPlayer", &AFlowerGameCharacter::execInitPlayer },
			{ "ManageCaseChoice", &AFlowerGameCharacter::execManageCaseChoice },
			{ "MoveWithDice", &AFlowerGameCharacter::execMoveWithDice },
			{ "OnOverlapBegin", &AFlowerGameCharacter::execOnOverlapBegin },
			{ "OnOverlapEnd", &AFlowerGameCharacter::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics
	{
		struct FlowerGameCharacter_eventCheckWaysAvailable_Parms
		{
			ACaseDefault* caseSelected;
			TArray<TEnumAsByte<EDirection> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventCheckWaysAvailable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::NewProp_caseSelected = { "caseSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventCheckWaysAvailable_Parms, caseSelected), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::NewProp_caseSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "CheckWaysAvailable", nullptr, nullptr, sizeof(FlowerGameCharacter_eventCheckWaysAvailable_Parms), Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics
	{
		struct FlowerGameCharacter_eventgetDirection_Parms
		{
			ACaseDefault* caseDestination;
			TEnumAsByte<EDirection> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseDestination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventgetDirection_Parms, ReturnValue), Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::NewProp_caseDestination = { "caseDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventgetDirection_Parms, caseDestination), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::NewProp_caseDestination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "getDirection", nullptr, nullptr, sizeof(FlowerGameCharacter_eventgetDirection_Parms), Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_getDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_getDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics
	{
		struct FlowerGameCharacter_eventGoToNextCase_Parms
		{
			ACaseDefault* caseSelected;
			TEnumAsByte<EDirection> DirectionSelected;
			bool bChangeDirection;
			ACaseDefault* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bChangeDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChangeDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DirectionSelected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventGoToNextCase_Parms, ReturnValue), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_bChangeDirection_SetBit(void* Obj)
	{
		((FlowerGameCharacter_eventGoToNextCase_Parms*)Obj)->bChangeDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_bChangeDirection = { "bChangeDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowerGameCharacter_eventGoToNextCase_Parms), &Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_bChangeDirection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_DirectionSelected = { "DirectionSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventGoToNextCase_Parms, DirectionSelected), Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_caseSelected = { "caseSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventGoToNextCase_Parms, caseSelected), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_bChangeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_DirectionSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::NewProp_caseSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "GoToNextCase", nullptr, nullptr, sizeof(FlowerGameCharacter_eventGoToNextCase_Parms), Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics
	{
		struct FlowerGameCharacter_eventInitPlayer_Parms
		{
			ACaseDefault* caseInit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseInit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::NewProp_caseInit = { "caseInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventInitPlayer_Parms, caseInit), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::NewProp_caseInit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "InitPlayer", nullptr, nullptr, sizeof(FlowerGameCharacter_eventInitPlayer_Parms), Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics
	{
		struct FlowerGameCharacter_eventManageCaseChoice_Parms
		{
			ACaseDefault* caseSelected;
			TArray<TEnumAsByte<EDirection> > waysAvailable;
			bool isEnable;
		};
		static void NewProp_isEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnable;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_waysAvailable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_waysAvailable_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_isEnable_SetBit(void* Obj)
	{
		((FlowerGameCharacter_eventManageCaseChoice_Parms*)Obj)->isEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_isEnable = { "isEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowerGameCharacter_eventManageCaseChoice_Parms), &Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_isEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_waysAvailable = { "waysAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventManageCaseChoice_Parms, waysAvailable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_waysAvailable_Inner = { "waysAvailable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_caseSelected = { "caseSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventManageCaseChoice_Parms, caseSelected), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_isEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_waysAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_waysAvailable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_caseSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "ManageCaseChoice", nullptr, nullptr, sizeof(FlowerGameCharacter_eventManageCaseChoice_Parms), Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "MoveWithDice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics
	{
		struct FlowerGameCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FlowerGameCharacter_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowerGameCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(FlowerGameCharacter_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics
	{
		struct FlowerGameCharacter_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// declare overlap end function\n" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
		{ "ToolTip", "declare overlap end function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(FlowerGameCharacter_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlowerGameCharacter_NoRegister()
	{
		return AFlowerGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFlowerGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTurnFinished_MetaData[];
#endif
		static void NewProp_bTurnFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTurnFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTouch_MetaData[];
#endif
		static void NewProp_isTouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tour_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitChoiceUser_MetaData[];
#endif
		static void NewProp_bWaitChoiceUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitChoiceUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovementPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlowerGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlowerGameCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlowerGameCharacter_CheckWaysAvailable, "CheckWaysAvailable" }, // 201375224
		{ &Z_Construct_UFunction_AFlowerGameCharacter_getDirection, "getDirection" }, // 4139781112
		{ &Z_Construct_UFunction_AFlowerGameCharacter_GoToNextCase, "GoToNextCase" }, // 554192241
		{ &Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer, "InitPlayer" }, // 968782617
		{ &Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice, "ManageCaseChoice" }, // 2337361785
		{ &Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice, "MoveWithDice" }, // 989706650
		{ &Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 2151840323
		{ &Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd, "OnOverlapEnd" }, // 4011483960
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FlowerGameCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bTurnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bTurnFinished_SetBit(void* Obj)
	{
		((AFlowerGameCharacter*)Obj)->bTurnFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bTurnFinished = { "bTurnFinished", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlowerGameCharacter), &Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bTurnFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bTurnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bTurnFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_isTouch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_isTouch_SetBit(void* Obj)
	{
		((AFlowerGameCharacter*)Obj)->isTouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_isTouch = { "isTouch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlowerGameCharacter), &Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_isTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_isTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_isTouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Tour_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Tour = { "Tour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, Tour), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Tour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Tour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_SetBit(void* Obj)
	{
		((AFlowerGameCharacter*)Obj)->bWaitChoiceUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser = { "bWaitChoiceUser", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlowerGameCharacter), &Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint = { "MovementPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, MovementPoint), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "FlowerGameCharacter" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, Direction), Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "FlowerGameCharacter" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, Position), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_TriggerCapsule_MetaData[] = {
		{ "Category", "FlowerGameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_TriggerCapsule = { "TriggerCapsule", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, TriggerCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_TriggerCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_TriggerCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_SpringArmPlayer_MetaData[] = {
		{ "Category", "FlowerGameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_SpringArmPlayer = { "SpringArmPlayer", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, SpringArmPlayer), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_SpringArmPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_SpringArmPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer_MetaData[] = {
		{ "Category", "FlowerGameCharacter" },
		{ "Comment", "// Called to bind functionality to input\n//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
		{ "ToolTip", "Called to bind functionality to input\nvirtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer = { "CameraPlayer", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, CameraPlayer), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlowerGameCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bTurnFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_isTouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Tour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_TriggerCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_SpringArmPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlowerGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlowerGameCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlowerGameCharacter_Statics::ClassParams = {
		&AFlowerGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlowerGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlowerGameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlowerGameCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlowerGameCharacter, 3703997639);
	template<> FLOWERGAME_API UClass* StaticClass<AFlowerGameCharacter>()
	{
		return AFlowerGameCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlowerGameCharacter(Z_Construct_UClass_AFlowerGameCharacter, &AFlowerGameCharacter::StaticClass, TEXT("/Script/FlowerGame"), TEXT("AFlowerGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlowerGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
