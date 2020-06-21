// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/Public/Model/RangeWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeWeapon() {}
// Cross Module References
	FLOWERGAME_API UEnum* Z_Construct_UEnum_FlowerGame_ETypeRange();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UClass* Z_Construct_UClass_ARangeWeapon_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_ARangeWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* ETypeRange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FlowerGame_ETypeRange, Z_Construct_UPackage__Script_FlowerGame(), TEXT("ETypeRange"));
		}
		return Singleton;
	}
	template<> FLOWERGAME_API UEnum* StaticEnum<ETypeRange>()
	{
		return ETypeRange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETypeRange(ETypeRange_StaticEnum, TEXT("/Script/FlowerGame"), TEXT("ETypeRange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FlowerGame_ETypeRange_Hash() { return 309888392U; }
	UEnum* Z_Construct_UEnum_FlowerGame_ETypeRange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FlowerGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETypeRange"), 0, Get_Z_Construct_UEnum_FlowerGame_ETypeRange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OUT_RANGE", (int64)OUT_RANGE },
				{ "IN_RANGE_NO_PLAYER", (int64)IN_RANGE_NO_PLAYER },
				{ "IN_RANGE_PLAYER", (int64)IN_RANGE_PLAYER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IN_RANGE_NO_PLAYER.DisplayName", "In Range No Player" },
				{ "IN_RANGE_NO_PLAYER.Name", "IN_RANGE_NO_PLAYER" },
				{ "IN_RANGE_PLAYER.DisplayName", "In Range Player" },
				{ "IN_RANGE_PLAYER.Name", "IN_RANGE_PLAYER" },
				{ "ModuleRelativePath", "Public/Model/RangeWeapon.h" },
				{ "OUT_RANGE.DisplayName", "Out Range" },
				{ "OUT_RANGE.Name", "OUT_RANGE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FlowerGame,
				nullptr,
				"ETypeRange",
				"ETypeRange",
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
	DEFINE_FUNCTION(ARangeWeapon::execInitRangeWeapon)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TypeRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitRangeWeapon(ETypeRange(Z_Param_TypeRange));
		P_NATIVE_END;
	}
	void ARangeWeapon::StaticRegisterNativesARangeWeapon()
	{
		UClass* Class = ARangeWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitRangeWeapon", &ARangeWeapon::execInitRangeWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics
	{
		struct RangeWeapon_eventInitRangeWeapon_Parms
		{
			TEnumAsByte<ETypeRange> TypeRange;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TypeRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::NewProp_TypeRange = { "TypeRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RangeWeapon_eventInitRangeWeapon_Parms, TypeRange), Z_Construct_UEnum_FlowerGame_ETypeRange, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::NewProp_TypeRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Model/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARangeWeapon, nullptr, "InitRangeWeapon", nullptr, nullptr, sizeof(RangeWeapon_eventInitRangeWeapon_Parms), Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARangeWeapon_NoRegister()
	{
		return ARangeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ARangeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_InRangeP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_InRangeP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_InRangeNP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_InRangeNP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_OutRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_OutRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARangeWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARangeWeapon_InitRangeWeapon, "InitRangeWeapon" }, // 2659024905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Model/RangeWeapon.h" },
		{ "ModuleRelativePath", "Public/Model/RangeWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeP_MetaData[] = {
		{ "ModuleRelativePath", "Public/Model/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeP = { "Mesh_InRangeP", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, Mesh_InRangeP), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeNP_MetaData[] = {
		{ "ModuleRelativePath", "Public/Model/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeNP = { "Mesh_InRangeNP", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, Mesh_InRangeNP), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeNP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeNP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_OutRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Model/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_OutRange = { "Mesh_OutRange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, Mesh_OutRange), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_OutRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_OutRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeapon_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "RangeWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Model/RangeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeapon_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeapon, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARangeWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_InRangeNP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_Mesh_OutRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeapon_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangeWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARangeWeapon_Statics::ClassParams = {
		&ARangeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARangeWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARangeWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARangeWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARangeWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARangeWeapon, 592724814);
	template<> FLOWERGAME_API UClass* StaticClass<ARangeWeapon>()
	{
		return ARangeWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARangeWeapon(Z_Construct_UClass_ARangeWeapon, &ARangeWeapon::StaticClass, TEXT("/Script/FlowerGame"), TEXT("ARangeWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARangeWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
