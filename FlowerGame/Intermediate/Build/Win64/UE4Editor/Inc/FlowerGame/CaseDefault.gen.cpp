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
	FLOWERGAME_API UEnum* Z_Construct_UEnum_FlowerGame_ECases();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_FlowerGame_ECases_Hash() { return 1442163877U; }
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
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CASE_DEFAULT.DisplayName", "Default" },
				{ "CASE_DEFAULT.Name", "CASE_DEFAULT" },
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
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ACaseDefault::StaticRegisterNativesACaseDefault()
	{
	}
	UClass* Z_Construct_UClass_ACaseDefault_NoRegister()
	{
		return ACaseDefault::StaticClass();
	}
	struct Z_Construct_UClass_ACaseDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_Case_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_name_Case;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Model/Cases/CaseDefault.h" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case_MetaData[] = {
		{ "Category", "Info Case" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case = { "name_Case", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaseDefault, name_Case), Z_Construct_UEnum_FlowerGame_ECases, METADATA_PARAMS(Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaseDefault_Statics::NewProp_name_Case,
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
		nullptr,
		Z_Construct_UClass_ACaseDefault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ACaseDefault, 3600945298);
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
