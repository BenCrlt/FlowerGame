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
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFlowerGameCharacter::StaticRegisterNativesAFlowerGameCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFlowerGameCharacter_NoRegister()
	{
		return AFlowerGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFlowerGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FlowerGameCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
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
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FlowerGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer = { "CameraPlayer", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameCharacter, CameraPlayer), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameCharacter_Statics::NewProp_CameraPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlowerGameCharacter_Statics::PropPointers[] = {
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
		nullptr,
		Z_Construct_UClass_AFlowerGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AFlowerGameCharacter, 613720782);
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
