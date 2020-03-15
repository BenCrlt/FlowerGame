// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_ACaseDefault_getIDCase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ACaseDefault::StaticRegisterNativesACaseDefault()
	{
		UClass* Class = ACaseDefault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getIDCase", &ACaseDefault::execgetIDCase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACaseDefault_getIDCase_Statics
	{
		struct CaseDefault_eventgetIDCase_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaseDefault_eventgetIDCase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaseDefault, nullptr, "getIDCase", nullptr, nullptr, sizeof(CaseDefault_eventgetIDCase_Parms), Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaseDefault_getIDCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaseDefault_getIDCase_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_Case_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID_Case;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaseDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaseDefault_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaseDefault_getIDCase, "getIDCase" }, // 1727600896
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Model/Cases/CaseDefault.h" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case_MetaData[] = {
		{ "Category", "CaseDefault" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case = { "ID_Case", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, ID_Case), METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh_MetaData[] = {
		{ "Category", "CaseDefault" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh = { "CaseMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, CaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CaseDefault" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaseDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_ID_Case,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_CaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_Root,
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
	IMPLEMENT_CLASS(ACaseDefault, 1333316550);
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
