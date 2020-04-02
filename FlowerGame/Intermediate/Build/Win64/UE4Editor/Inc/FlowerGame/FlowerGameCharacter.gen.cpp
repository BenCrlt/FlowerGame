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
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameCharacter_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameCharacter_OnOverlapEnd();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFlowerGameCharacter::StaticRegisterNativesAFlowerGameCharacter()
	{
		UClass* Class = AFlowerGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AFlowerGameCharacter::execOnOverlapBegin },
			{ "OnOverlapEnd", &AFlowerGameCharacter::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Position;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "FlowerGameCharacter" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, Position), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_Position_MetaData)) };
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
	IMPLEMENT_CLASS(AFlowerGameCharacter, 1446305383);
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
