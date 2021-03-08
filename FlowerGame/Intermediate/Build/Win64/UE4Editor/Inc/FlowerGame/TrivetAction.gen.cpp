// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/Public/Model/DefensiveActions/TrivetAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrivetAction() {}
// Cross Module References
	FLOWERGAME_API UClass* Z_Construct_UClass_UTrivetAction_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_UTrivetAction();
	FLOWERGAME_API UClass* Z_Construct_UClass_UDefensiveAction();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
// End Cross Module References
	void UTrivetAction::StaticRegisterNativesUTrivetAction()
	{
	}
	UClass* Z_Construct_UClass_UTrivetAction_NoRegister()
	{
		return UTrivetAction::StaticClass();
	}
	struct Z_Construct_UClass_UTrivetAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrivetAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefensiveAction,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrivetAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Model/DefensiveActions/TrivetAction.h" },
		{ "ModuleRelativePath", "Public/Model/DefensiveActions/TrivetAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrivetAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrivetAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrivetAction_Statics::ClassParams = {
		&UTrivetAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTrivetAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrivetAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrivetAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrivetAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrivetAction, 2242305425);
	template<> FLOWERGAME_API UClass* StaticClass<UTrivetAction>()
	{
		return UTrivetAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrivetAction(Z_Construct_UClass_UTrivetAction, &UTrivetAction::StaticClass, TEXT("/Script/FlowerGame"), TEXT("UTrivetAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrivetAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
