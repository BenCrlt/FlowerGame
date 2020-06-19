// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/Public/Player/TouchInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchInput() {}
// Cross Module References
	FLOWERGAME_API UClass* Z_Construct_UClass_UTouchInput_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_UTouchInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
// End Cross Module References
	void UTouchInput::StaticRegisterNativesUTouchInput()
	{
	}
	UClass* Z_Construct_UClass_UTouchInput_NoRegister()
	{
		return UTouchInput::StaticClass();
	}
	struct Z_Construct_UClass_UTouchInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTouchInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/TouchInput.h" },
		{ "ModuleRelativePath", "Public/Player/TouchInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTouchInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTouchInput_Statics::ClassParams = {
		&UTouchInput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTouchInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTouchInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTouchInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTouchInput, 2422711482);
	template<> FLOWERGAME_API UClass* StaticClass<UTouchInput>()
	{
		return UTouchInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTouchInput(Z_Construct_UClass_UTouchInput, &UTouchInput::StaticClass, TEXT("/Script/FlowerGame"), TEXT("UTouchInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
