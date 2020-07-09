// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/Public/Model/DefensiveActions/DefensiveAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefensiveAction() {}
// Cross Module References
	FLOWERGAME_API UClass* Z_Construct_UClass_UDefensiveAction_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_UDefensiveAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameCharacter_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDefensiveAction::execCancelAction)
	{
		P_GET_OBJECT(AFlowerGameGameModeBase,Z_Param_FlowerGameMode);
		P_GET_OBJECT(AFlowerGameCharacter,Z_Param_PlayerControlled);
		P_GET_OBJECT(AFlowerGameCharacter,Z_Param_PlayerDamaged);
		P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAction(Z_Param_FlowerGameMode,Z_Param_PlayerControlled,Z_Param_PlayerDamaged,Z_Param_Damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDefensiveAction::execActiveAction)
	{
		P_GET_OBJECT(AFlowerGameGameModeBase,Z_Param_FlowerGameMode);
		P_GET_OBJECT(AFlowerGameCharacter,Z_Param_PlayerControlled);
		P_GET_OBJECT(AFlowerGameCharacter,Z_Param_PlayerDamaged);
		P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveAction(Z_Param_FlowerGameMode,Z_Param_PlayerControlled,Z_Param_PlayerDamaged,Z_Param_Damage);
		P_NATIVE_END;
	}
	void UDefensiveAction::StaticRegisterNativesUDefensiveAction()
	{
		UClass* Class = UDefensiveAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveAction", &UDefensiveAction::execActiveAction },
			{ "CancelAction", &UDefensiveAction::execCancelAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics
	{
		struct DefensiveAction_eventActiveAction_Parms
		{
			AFlowerGameGameModeBase* FlowerGameMode;
			AFlowerGameCharacter* PlayerControlled;
			AFlowerGameCharacter* PlayerDamaged;
			int32 Damage;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerDamaged;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerControlled;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowerGameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefensiveAction_eventActiveAction_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::NewProp_PlayerDamaged = { "PlayerDamaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefensiveAction_eventActiveAction_Parms, PlayerDamaged), Z_Construct_UClass_AFlowerGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::NewProp_PlayerControlled = { "PlayerControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefensiveAction_eventActiveAction_Parms, PlayerControlled), Z_Construct_UClass_AFlowerGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::NewProp_FlowerGameMode = { "FlowerGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefensiveAction_eventActiveAction_Parms, FlowerGameMode), Z_Construct_UClass_AFlowerGameGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::NewProp_PlayerDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::NewProp_PlayerControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::NewProp_FlowerGameMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Model/DefensiveActions/DefensiveAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDefensiveAction, nullptr, "ActiveAction", nullptr, nullptr, sizeof(DefensiveAction_eventActiveAction_Parms), Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDefensiveAction_ActiveAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDefensiveAction_ActiveAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics
	{
		struct DefensiveAction_eventCancelAction_Parms
		{
			AFlowerGameGameModeBase* FlowerGameMode;
			AFlowerGameCharacter* PlayerControlled;
			AFlowerGameCharacter* PlayerDamaged;
			int32 Damage;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerDamaged;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerControlled;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowerGameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefensiveAction_eventCancelAction_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::NewProp_PlayerDamaged = { "PlayerDamaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefensiveAction_eventCancelAction_Parms, PlayerDamaged), Z_Construct_UClass_AFlowerGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::NewProp_PlayerControlled = { "PlayerControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefensiveAction_eventCancelAction_Parms, PlayerControlled), Z_Construct_UClass_AFlowerGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::NewProp_FlowerGameMode = { "FlowerGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefensiveAction_eventCancelAction_Parms, FlowerGameMode), Z_Construct_UClass_AFlowerGameGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::NewProp_PlayerDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::NewProp_PlayerControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::NewProp_FlowerGameMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Model/DefensiveActions/DefensiveAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDefensiveAction, nullptr, "CancelAction", nullptr, nullptr, sizeof(DefensiveAction_eventCancelAction_Parms), Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDefensiveAction_CancelAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDefensiveAction_CancelAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDefensiveAction_NoRegister()
	{
		return UDefensiveAction::StaticClass();
	}
	struct Z_Construct_UClass_UDefensiveAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefensiveAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDefensiveAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDefensiveAction_ActiveAction, "ActiveAction" }, // 787641838
		{ &Z_Construct_UFunction_UDefensiveAction_CancelAction, "CancelAction" }, // 3698140684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefensiveAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Model/DefensiveActions/DefensiveAction.h" },
		{ "ModuleRelativePath", "Public/Model/DefensiveActions/DefensiveAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "DefensiveAction" },
		{ "ModuleRelativePath", "Public/Model/DefensiveActions/DefensiveAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefensiveAction, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "DefensiveAction" },
		{ "ModuleRelativePath", "Public/Model/DefensiveActions/DefensiveAction.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefensiveAction, Description), METADATA_PARAMS(Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DefensiveAction" },
		{ "ModuleRelativePath", "Public/Model/DefensiveActions/DefensiveAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefensiveAction, Name), METADATA_PARAMS(Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefensiveAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefensiveAction_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefensiveAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefensiveAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefensiveAction_Statics::ClassParams = {
		&UDefensiveAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDefensiveAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefensiveAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDefensiveAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefensiveAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefensiveAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefensiveAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefensiveAction, 3661235694);
	template<> FLOWERGAME_API UClass* StaticClass<UDefensiveAction>()
	{
		return UDefensiveAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefensiveAction(Z_Construct_UClass_UDefensiveAction, &UDefensiveAction::StaticClass, TEXT("/Script/FlowerGame"), TEXT("UDefensiveAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefensiveAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
