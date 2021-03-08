// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/Public/Model/Cases/CaseDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaseDefault() {}
// Cross Module References
	FLOWERGAME_API UEnum* Z_Construct_UEnum_FlowerGame_ECases();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UEnum* Z_Construct_UEnum_FlowerGame_EDirection();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* ECases_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FlowerGame_ECases, Z_Construct_UPackage__Script_FlowerGame(), TEXT("ECases"));
		}
		return Singleton;
	}
	template<> FLOWERGAME_API UEnum* StaticEnum<ECases>()
	{
		return ECases_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECases(ECases_StaticEnum, TEXT("/Script/FlowerGame"), TEXT("ECases"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FlowerGame_ECases_Hash() { return 1149303350U; }
	UEnum* Z_Construct_UEnum_FlowerGame_ECases()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FlowerGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECases"), 0, Get_Z_Construct_UEnum_FlowerGame_ECases_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CASE_DEFAULT", (int64)CASE_DEFAULT },
				{ "CASE_STORE", (int64)CASE_STORE },
				{ "CASE_SPAWN", (int64)CASE_SPAWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CASE_DEFAULT.DisplayName", "Default" },
				{ "CASE_DEFAULT.Name", "CASE_DEFAULT" },
				{ "CASE_SPAWN.DisplayName", "Spawn" },
				{ "CASE_SPAWN.Name", "CASE_SPAWN" },
				{ "CASE_STORE.DisplayName", "Store" },
				{ "CASE_STORE.Name", "CASE_STORE" },
				{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FlowerGame,
				nullptr,
				"ECases",
				"ECases",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
	uint32 Get_Z_Construct_UEnum_FlowerGame_EDirection_Hash() { return 3228631522U; }
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
				{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
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
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ACaseDefault::execGoToNextCase)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_DirectionSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACaseDefault**)Z_Param__Result=P_THIS->GoToNextCase(EDirection(Z_Param_DirectionSelected));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaseDefault::execgetDirection)
	{
		P_GET_OBJECT(ACaseDefault,Z_Param_caseDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EDirection>*)Z_Param__Result=P_THIS->getDirection(Z_Param_caseDestination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaseDefault::execCheckWaysAvailable)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_DirectionPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TEnumAsByte<EDirection> >*)Z_Param__Result=P_THIS->CheckWaysAvailable(EDirection(Z_Param_DirectionPlayer));
		P_NATIVE_END;
	}
	void ACaseDefault::StaticRegisterNativesACaseDefault()
	{
		UClass* Class = ACaseDefault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckWaysAvailable", &ACaseDefault::execCheckWaysAvailable },
			{ "getDirection", &ACaseDefault::execgetDirection },
			{ "GoToNextCase", &ACaseDefault::execGoToNextCase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics
	{
		struct CaseDefault_eventCheckWaysAvailable_Parms
		{
			TEnumAsByte<EDirection> DirectionPlayer;
			TArray<TEnumAsByte<EDirection> > ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DirectionPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::NewProp_DirectionPlayer = { "DirectionPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaseDefault_eventCheckWaysAvailable_Parms, DirectionPlayer), Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaseDefault_eventCheckWaysAvailable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::NewProp_DirectionPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaseDefault, nullptr, "CheckWaysAvailable", nullptr, nullptr, sizeof(CaseDefault_eventCheckWaysAvailable_Parms), Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaseDefault_getDirection_Statics
	{
		struct CaseDefault_eventgetDirection_Parms
		{
			ACaseDefault* caseDestination;
			TEnumAsByte<EDirection> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseDestination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaseDefault_getDirection_Statics::NewProp_caseDestination = { "caseDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaseDefault_eventgetDirection_Parms, caseDestination), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaseDefault_getDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaseDefault_eventgetDirection_Parms, ReturnValue), Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaseDefault_getDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaseDefault_getDirection_Statics::NewProp_caseDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaseDefault_getDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaseDefault_getDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaseDefault_getDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaseDefault, nullptr, "getDirection", nullptr, nullptr, sizeof(CaseDefault_eventgetDirection_Parms), Z_Construct_UFunction_ACaseDefault_getDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaseDefault_getDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaseDefault_getDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaseDefault_getDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaseDefault_getDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaseDefault_getDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics
	{
		struct CaseDefault_eventGoToNextCase_Parms
		{
			TEnumAsByte<EDirection> DirectionSelected;
			ACaseDefault* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DirectionSelected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::NewProp_DirectionSelected = { "DirectionSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaseDefault_eventGoToNextCase_Parms, DirectionSelected), Z_Construct_UEnum_FlowerGame_EDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaseDefault_eventGoToNextCase_Parms, ReturnValue), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::NewProp_DirectionSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaseDefault, nullptr, "GoToNextCase", nullptr, nullptr, sizeof(CaseDefault_eventGoToNextCase_Parms), Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaseDefault_GoToNextCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaseDefault_GoToNextCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACaseDefault_NoRegister()
	{
		return ACaseDefault::StaticClass();
	}
	struct Z_Construct_UClass_ACaseDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_Case_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_name_Case;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_caseRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_caseLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_caseUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_caseDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caseDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bListenTouchEvent_MetaData[];
#endif
		static void NewProp_bListenTouchEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bListenTouchEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_Case_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID_Case;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Coordonnees_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordonnees_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Coordonnees;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaseDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaseDefault_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaseDefault_CheckWaysAvailable, "CheckWaysAvailable" }, // 3769266092
		{ &Z_Construct_UFunction_ACaseDefault_getDirection, "getDirection" }, // 3425775015
		{ &Z_Construct_UFunction_ACaseDefault_GoToNextCase, "GoToNextCase" }, // 3587617656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Model/Cases/CaseDefault.h" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CaseDefault" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh_MetaData[] = {
		{ "Category", "CaseDefault" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh = { "CaseMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, CaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case_MetaData[] = {
		{ "Category", "Info Case" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case = { "name_Case", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, name_Case), Z_Construct_UEnum_FlowerGame_ECases, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseRight_MetaData[] = {
		{ "Category", "Info Case" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseRight = { "caseRight", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, caseRight), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseLeft_MetaData[] = {
		{ "Category", "Info Case" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseLeft = { "caseLeft", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, caseLeft), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseUp_MetaData[] = {
		{ "Category", "Info Case" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseUp = { "caseUp", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, caseUp), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseDown_MetaData[] = {
		{ "Category", "Info Case" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseDown = { "caseDown", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, caseDown), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_bListenTouchEvent_MetaData[] = {
		{ "Category", "Info Case" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	void Z_Construct_UClass_ACaseDefault_Statics::NewProp_bListenTouchEvent_SetBit(void* Obj)
	{
		((ACaseDefault*)Obj)->bListenTouchEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_bListenTouchEvent = { "bListenTouchEvent", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACaseDefault), &Z_Construct_UClass_ACaseDefault_Statics::NewProp_bListenTouchEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_bListenTouchEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_bListenTouchEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case_MetaData[] = {
		{ "Category", "Info Case" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case = { "ID_Case", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, ID_Case), METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_Coordonnees_Inner = { "Coordonnees", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_Coordonnees_MetaData[] = {
		{ "Category", "Info Case" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_Coordonnees = { "Coordonnees", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, Coordonnees), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_Coordonnees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_Coordonnees_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaseDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_caseDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_bListenTouchEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_Coordonnees_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_Coordonnees,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaseDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaseDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACaseDefault_Statics::ClassParams = {
		&ACaseDefault::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACaseDefault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaseDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACaseDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACaseDefault, 1146663044);
	template<> FLOWERGAME_API UClass* StaticClass<ACaseDefault>()
	{
		return ACaseDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACaseDefault(Z_Construct_UClass_ACaseDefault, &ACaseDefault::StaticClass, TEXT("/Script/FlowerGame"), TEXT("ACaseDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaseDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
