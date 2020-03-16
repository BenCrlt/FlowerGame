// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/TP_TopDown/TP_TopDownGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_TopDownGameMode() {}
// Cross Module References
	FLOWERGAME_API UClass* Z_Construct_UClass_ATP_TopDownGameMode_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_ATP_TopDownGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
// End Cross Module References
	void ATP_TopDownGameMode::StaticRegisterNativesATP_TopDownGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATP_TopDownGameMode_NoRegister()
	{
		return ATP_TopDownGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATP_TopDownGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_TopDownGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TopDownGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP_TopDown/TP_TopDownGameMode.h" },
		{ "ModuleRelativePath", "TP_TopDown/TP_TopDownGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_TopDownGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_TopDownGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_TopDownGameMode_Statics::ClassParams = {
		&ATP_TopDownGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATP_TopDownGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TopDownGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_TopDownGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_TopDownGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_TopDownGameMode, 1552867865);
	template<> FLOWERGAME_API UClass* StaticClass<ATP_TopDownGameMode>()
	{
		return ATP_TopDownGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_TopDownGameMode(Z_Construct_UClass_ATP_TopDownGameMode, &ATP_TopDownGameMode::StaticClass, TEXT("/Script/FlowerGame"), TEXT("ATP_TopDownGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_TopDownGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
