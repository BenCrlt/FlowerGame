// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/TP_TopDown/TP_TopDownPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_TopDownPlayerController() {}
// Cross Module References
	FLOWERGAME_API UClass* Z_Construct_UClass_ATP_TopDownPlayerController_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_ATP_TopDownPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
// End Cross Module References
	void ATP_TopDownPlayerController::StaticRegisterNativesATP_TopDownPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATP_TopDownPlayerController_NoRegister()
	{
		return ATP_TopDownPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATP_TopDownPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_TopDownPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TopDownPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP_TopDown/TP_TopDownPlayerController.h" },
		{ "ModuleRelativePath", "TP_TopDown/TP_TopDownPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_TopDownPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_TopDownPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::ClassParams = {
		&ATP_TopDownPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATP_TopDownPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TopDownPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_TopDownPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_TopDownPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_TopDownPlayerController, 2893999228);
	template<> FLOWERGAME_API UClass* StaticClass<ATP_TopDownPlayerController>()
	{
		return ATP_TopDownPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_TopDownPlayerController(Z_Construct_UClass_ATP_TopDownPlayerController, &ATP_TopDownPlayerController::StaticClass, TEXT("/Script/FlowerGame"), TEXT("ATP_TopDownPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_TopDownPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
