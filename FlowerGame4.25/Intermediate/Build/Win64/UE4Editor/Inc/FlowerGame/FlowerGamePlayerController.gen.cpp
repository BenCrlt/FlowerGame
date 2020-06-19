// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/Public/Player/FlowerGamePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowerGamePlayerController() {}
// Cross Module References
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGamePlayerController_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UClass* Z_Construct_UClass_ACaseDefault_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FLOWERGAME_API UClass* Z_Construct_UClass_UTouchInput_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFlowerGamePlayerController::execZoomOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGamePlayerController::execZoomIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlowerGamePlayerController::execGetCaseTouch)
	{
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACaseDefault**)Z_Param__Result=P_THIS->GetCaseTouch(Z_Param_ScreenPosition);
		P_NATIVE_END;
	}
	void AFlowerGamePlayerController::StaticRegisterNativesAFlowerGamePlayerController()
	{
		UClass* Class = AFlowerGamePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCaseTouch", &AFlowerGamePlayerController::execGetCaseTouch },
			{ "ZoomIn", &AFlowerGamePlayerController::execZoomIn },
			{ "ZoomOut", &AFlowerGamePlayerController::execZoomOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics
	{
		struct FlowerGamePlayerController_eventGetCaseTouch_Parms
		{
			FVector2D ScreenPosition;
			ACaseDefault* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGamePlayerController_eventGetCaseTouch_Parms, ReturnValue), Z_Construct_UClass_ACaseDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGamePlayerController_eventGetCaseTouch_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::NewProp_ScreenPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGamePlayerController, nullptr, "GetCaseTouch", nullptr, nullptr, sizeof(FlowerGamePlayerController_eventGetCaseTouch_Parms), Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGamePlayerController_ZoomIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGamePlayerController_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGamePlayerController_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGamePlayerController, nullptr, "ZoomIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGamePlayerController_ZoomIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGamePlayerController_ZoomIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGamePlayerController_ZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGamePlayerController_ZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGamePlayerController_ZoomOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGamePlayerController_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGamePlayerController_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGamePlayerController, nullptr, "ZoomOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGamePlayerController_ZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGamePlayerController_ZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGamePlayerController_ZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGamePlayerController_ZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlowerGamePlayerController_NoRegister()
	{
		return AFlowerGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFlowerGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZoomIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZoomMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZoomMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinchLenght_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PinchLenght;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlowerGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlowerGamePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlowerGamePlayerController_GetCaseTouch, "GetCaseTouch" }, // 1700306933
		{ &Z_Construct_UFunction_AFlowerGamePlayerController_ZoomIn, "ZoomIn" }, // 966711547
		{ &Z_Construct_UFunction_AFlowerGamePlayerController_ZoomOut, "ZoomOut" }, // 3702129926
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/FlowerGamePlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/FlowerGamePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomIntensity = { "ZoomIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGamePlayerController, ZoomIntensity), METADATA_PARAMS(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMin = { "ZoomMin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGamePlayerController, ZoomMin), METADATA_PARAMS(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMax = { "ZoomMax", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGamePlayerController, ZoomMax), METADATA_PARAMS(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_PinchLenght_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_PinchLenght = { "PinchLenght", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGamePlayerController, PinchLenght), METADATA_PARAMS(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_PinchLenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_PinchLenght_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_InputHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/FlowerGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_InputHandler = { "InputHandler", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGamePlayerController, InputHandler), Z_Construct_UClass_UTouchInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_InputHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_InputHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlowerGamePlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_ZoomMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_PinchLenght,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGamePlayerController_Statics::NewProp_InputHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlowerGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlowerGamePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlowerGamePlayerController_Statics::ClassParams = {
		&AFlowerGamePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlowerGamePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGamePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlowerGamePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlowerGamePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlowerGamePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlowerGamePlayerController, 3879172491);
	template<> FLOWERGAME_API UClass* StaticClass<AFlowerGamePlayerController>()
	{
		return AFlowerGamePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlowerGamePlayerController(Z_Construct_UClass_AFlowerGamePlayerController, &AFlowerGamePlayerController::StaticClass, TEXT("/Script/FlowerGame"), TEXT("AFlowerGamePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlowerGamePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
