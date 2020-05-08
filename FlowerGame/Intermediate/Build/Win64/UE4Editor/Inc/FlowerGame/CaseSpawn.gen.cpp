// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/Public/Model/Cases/CaseSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaseSpawn() {}
// Cross Module References
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseSpawn_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseSpawn();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
// End Cross Module References
	void ACaseSpawn::StaticRegisterNativesACaseSpawn()
	{
	}
	UClass* Z_Construct_UClass_ACaseSpawn_NoRegister()
	{
		return ACaseSpawn::StaticClass();
	}
	struct Z_Construct_UClass_ACaseSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaseSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACaseDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaseSpawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Model/Cases/CaseSpawn.h" },
		{ "ModuleRelativePath", "Public/Model/Cases/CaseSpawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaseSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaseSpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACaseSpawn_Statics::ClassParams = {
		&ACaseSpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACaseSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACaseSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaseSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACaseSpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACaseSpawn, 3174930499);
	template<> FLOWERGAME_API UClass* StaticClass<ACaseSpawn>()
	{
		return ACaseSpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACaseSpawn(Z_Construct_UClass_ACaseSpawn, &ACaseSpawn::StaticClass, TEXT("/Script/FlowerGame"), TEXT("ACaseSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaseSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
