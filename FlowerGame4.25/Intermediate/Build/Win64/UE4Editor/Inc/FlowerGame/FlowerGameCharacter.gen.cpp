// Copyright Epic Games, Inc. All Rights Reserved.
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
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameCharacter_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault_NoRegister();
	FLOWERGAME_API UEnum* Z_Construct_UEnum_FlowerGame_EDirection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFlowerGameCharacter::execCheckIfCanShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIfCanShoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGameCharacter::execShootPlayer)
	{
		P_GET_OBJECT(AFlowerGameCharacter,Z_Param_OtherPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShootPlayer(Z_Param_OtherPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGameCharacter::execLoadWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGameCharacter::execChangeWeapon)
	{
		P_GET_OBJECT(AWeapon,Z_Param_WeaponChoosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeWeapon(Z_Param_WeaponChoosed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGameCharacter::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGameCharacter::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGameCharacter::execManageCaseChoice)
	{
		P_GET_OBJECT(ACaseDefault,Z_Param_caseSelected);
		P_GET_TARRAY(TEnumAsByte<EDirection>,Z_Param_waysAvailable);
		P_GET_UBOOL(Z_Param_isEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManageCaseChoice(Z_Param_caseSelected,Z_Param_waysAvailable,Z_Param_isEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGameCharacter::execMoveWithDice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveWithDice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGameCharacter::execInitPlayer)
	{
		P_GET_OBJECT(ACaseDefault,Z_Param_caseInit);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitPlayer(Z_Param_caseInit,Z_Param_ID);
		P_NATIVE_END;
	}
	void AFlowerGameCharacter::StaticRegisterNativesAFlowerGameCharacter()
	{
		UClass* Class = AFlowerGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeWeapon", &AFlowerGameCharacter::execChangeWeapon },
			{ "CheckIfCanShoot", &AFlowerGameCharacter::execCheckIfCanShoot },
			{ "InitPlayer", &AFlowerGameCharacter::execInitPlayer },
			{ "LoadWeapon", &AFlowerGameCharacter::execLoadWeapon },
			{ "ManageCaseChoice", &AFlowerGameCharacter::execManageCaseChoice },
			{ "MoveWithDice", &AFlowerGameCharacter::execMoveWithDice },
			{ "OnOverlapBegin", &AFlowerGameCharacter::execOnOverlapBegin },
			{ "OnOverlapEnd", &AFlowerGameCharacter::execOnOverlapEnd },
			{ "ShootPlayer", &AFlowerGameCharacter::execShootPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics
	{
		struct FlowerGameCharacter_eventChangeWeapon_Parms
		{
			AWeapon* WeaponChoosed;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponChoosed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::NewProp_WeaponChoosed = { "WeaponChoosed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventChangeWeapon_Parms, WeaponChoosed), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::NewProp_WeaponChoosed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gameplay function\n" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
		{ "ToolTip", "Gameplay function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "ChangeWeapon", nullptr, nullptr, sizeof(FlowerGameCharacter_eventChangeWeapon_Parms), Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics
	{
		struct FlowerGameCharacter_eventCheckIfCanShoot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowerGameCharacter_eventCheckIfCanShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowerGameCharacter_eventCheckIfCanShoot_Parms), &Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "CheckIfCanShoot", nullptr, nullptr, sizeof(FlowerGameCharacter_eventCheckIfCanShoot_Parms), Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics
	{
		struct FlowerGameCharacter_eventInitPlayer_Parms
		{
			ACaseDefault* caseInit;
			int32 ID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseInit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventInitPlayer_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::NewProp_caseInit = { "caseInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventInitPlayer_Parms, caseInit), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer_Statics::NewProp_ID,
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
	struct Z_Construct_UFunction_AFlowerGameCharacter_LoadWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_LoadWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_LoadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "LoadWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_LoadWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_LoadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_LoadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_LoadWeapon_Statics::FuncParams);
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice_Statics::NewProp_waysAvailable = { "waysAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventManageCaseChoice_Parms, waysAvailable), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
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
	struct Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics
	{
		struct FlowerGameCharacter_eventShootPlayer_Parms
		{
			AFlowerGameCharacter* OtherPlayer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowerGameCharacter_eventShootPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowerGameCharacter_eventShootPlayer_Parms), &Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::NewProp_OtherPlayer = { "OtherPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameCharacter_eventShootPlayer_Parms, OtherPlayer), Z_Construct_UClass_AFlowerGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::NewProp_OtherPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameCharacter, nullptr, "ShootPlayer", nullptr, nullptr, sizeof(FlowerGameCharacter_eventShootPlayer_Parms), Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveDiceFinish_MetaData[];
#endif
		static void NewProp_bMoveDiceFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveDiceFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTouch_MetaData[];
#endif
		static void NewProp_isTouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitChoiceUser_MetaData[];
#endif
		static void NewProp_bWaitChoiceUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitChoiceUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponSelected;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NomPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NomPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID_Player;
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
		{ &Z_Construct_UFunction_AFlowerGameCharacter_ChangeWeapon, "ChangeWeapon" }, // 1683233277
		{ &Z_Construct_UFunction_AFlowerGameCharacter_CheckIfCanShoot, "CheckIfCanShoot" }, // 3504123859
		{ &Z_Construct_UFunction_AFlowerGameCharacter_InitPlayer, "InitPlayer" }, // 979292553
		{ &Z_Construct_UFunction_AFlowerGameCharacter_LoadWeapon, "LoadWeapon" }, // 3912698445
		{ &Z_Construct_UFunction_AFlowerGameCharacter_ManageCaseChoice, "ManageCaseChoice" }, // 910877629
		{ &Z_Construct_UFunction_AFlowerGameCharacter_MoveWithDice, "MoveWithDice" }, // 989706650
		{ &Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 2151840323
		{ &Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd, "OnOverlapEnd" }, // 4011483960
		{ &Z_Construct_UFunction_AFlowerGameCharacter_ShootPlayer, "ShootPlayer" }, // 4228068521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FlowerGameCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bMoveDiceFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bMoveDiceFinish_SetBit(void* Obj)
	{
		((AFlowerGameCharacter*)Obj)->bMoveDiceFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bMoveDiceFinish = { "bMoveDiceFinish", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlowerGameCharacter), &Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bMoveDiceFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bMoveDiceFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bMoveDiceFinish_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_MetaData[] = {
		{ "Comment", "//Boolean\n" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
		{ "ToolTip", "Boolean" },
	};
#endif
	void Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_SetBit(void* Obj)
	{
		((AFlowerGameCharacter*)Obj)->bWaitChoiceUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser = { "bWaitChoiceUser", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlowerGameCharacter), &Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_WeaponSelected_MetaData[] = {
		{ "Category", "Attributs" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_WeaponSelected = { "WeaponSelected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, WeaponSelected), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_WeaponSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_WeaponSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint_MetaData[] = {
		{ "Category", "Attributs" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint = { "MovementPoint", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, MovementPoint), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Attributs" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, Direction), Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Attributs" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, Position), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "Attributs" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, Ammo), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributs" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributs" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_NomPlayer_MetaData[] = {
		{ "Category", "Attributs" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_NomPlayer = { "NomPlayer", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, NomPlayer), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_NomPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_NomPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_ID_Player_MetaData[] = {
		{ "Category", "Attributs" },
		{ "Comment", "//Attributs personnage\n" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
		{ "ToolTip", "Attributs personnage" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_ID_Player = { "ID_Player", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, ID_Player), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_ID_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_ID_Player_MetaData)) };
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
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer = { "CameraPlayer", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, CameraPlayer), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlowerGameCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bMoveDiceFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_isTouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_bWaitChoiceUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_WeaponSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MovementPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_NomPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_ID_Player,
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
	IMPLEMENT_CLASS(AFlowerGameCharacter, 2467627034);
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
