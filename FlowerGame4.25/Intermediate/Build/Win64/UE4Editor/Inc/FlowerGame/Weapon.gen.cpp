// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/Public/Model/Weapons/Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	FLOWERGAME_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_AWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeapon::execGetDamageWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDamageWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execLoadWeapon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LoadWeapon(Z_Param_Ammo);
		P_NATIVE_END;
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
		UClass* Class = AWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamageWeapon", &AWeapon::execGetDamageWeapon },
			{ "LoadWeapon", &AWeapon::execLoadWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics
	{
		struct Weapon_eventGetDamageWeapon_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventGetDamageWeapon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Model/Weapons/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetDamageWeapon", nullptr, nullptr, sizeof(Weapon_eventGetDamageWeapon_Parms), Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_GetDamageWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_GetDamageWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_LoadWeapon_Statics
	{
		struct Weapon_eventLoadWeapon_Parms
		{
			int32 Ammo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventLoadWeapon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_eventLoadWeapon_Parms, Ammo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::NewProp_Ammo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Model/Weapons/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "LoadWeapon", nullptr, nullptr, sizeof(Weapon_eventLoadWeapon_Parms), Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_LoadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_LoadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoPerShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Range_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MagSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshGun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_GetDamageWeapon, "GetDamageWeapon" }, // 568205750
		{ &Z_Construct_UFunction_AWeapon_LoadWeapon, "LoadWeapon" }, // 1071094388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Model/Weapons/Weapon.h" },
		{ "ModuleRelativePath", "Public/Model/Weapons/Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoPerShot_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Model/Weapons/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoPerShot = { "AmmoPerShot", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, AmmoPerShot), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoPerShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoPerShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Model/Weapons/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Range), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Range_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Range_Inner = { "Range", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Mag_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Model/Weapons/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Mag = { "Mag", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Mag), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Mag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Mag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MagSize_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Model/Weapons/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MagSize = { "MagSize", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MagSize), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MagSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MagSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MeshGun_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Model/Weapons/Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MeshGun = { "MeshGun", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MeshGun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MeshGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MeshGun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_AmmoPerShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Range_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Mag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MagSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MeshGun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon, 3360905419);
	template<> FLOWERGAME_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon(Z_Construct_UClass_AWeapon, &AWeapon::StaticClass, TEXT("/Script/FlowerGame"), TEXT("AWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
