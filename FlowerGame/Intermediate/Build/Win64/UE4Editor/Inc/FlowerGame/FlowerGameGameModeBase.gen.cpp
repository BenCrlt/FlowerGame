// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowerGame/FlowerGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowerGameGameModeBase() {}
// Cross Module References
	FLOWERGAME_API UEnum* Z_Construct_UEnum_FlowerGame_EGamePlayState();
	UPackage* Z_Construct_UPackage__Script_FlowerGame();
	FLOWERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLines();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameGameModeBase_NoRegister();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState();
	FLOWERGAME_API UFunction* Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FLOWERGAME_API UClass* Z_Construct_UClass_AFlowerGameCharacter_NoRegister();
// End Cross Module References
	static UEnum* EGamePlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FlowerGame_EGamePlayState, Z_Construct_UPackage__Script_FlowerGame(), TEXT("EGamePlayState"));
		}
		return Singleton;
	}
	template<> FLOWERGAME_API UEnum* StaticEnum<EGamePlayState>()
	{
		return EGamePlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGamePlayState(EGamePlayState_StaticEnum, TEXT("/Script/FlowerGame"), TEXT("EGamePlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FlowerGame_EGamePlayState_Hash() { return 1656586820U; }
	UEnum* Z_Construct_UEnum_FlowerGame_EGamePlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FlowerGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGamePlayState"), 0, Get_Z_Construct_UEnum_FlowerGame_EGamePlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBegin", (int64)EBegin },
				{ "EPlaying", (int64)EPlaying },
				{ "EGameFinish", (int64)EGameFinish },
				{ "EBeginMenu", (int64)EBeginMenu },
				{ "EUnknown", (int64)EUnknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EBegin.Name", "EBegin" },
				{ "EBeginMenu.Name", "EBeginMenu" },
				{ "EGameFinish.Name", "EGameFinish" },
				{ "EPlaying.Name", "EPlaying" },
				{ "EUnknown.Name", "EUnknown" },
				{ "ModuleRelativePath", "FlowerGameGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FlowerGame,
				nullptr,
				"EGamePlayState",
				"EGamePlayState",
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
class UScriptStruct* FLines::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOWERGAME_API uint32 Get_Z_Construct_UScriptStruct_FLines_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLines, Z_Construct_UPackage__Script_FlowerGame(), TEXT("Lines"), sizeof(FLines), Get_Z_Construct_UScriptStruct_FLines_Hash());
	}
	return Singleton;
}
template<> FLOWERGAME_API UScriptStruct* StaticStruct<FLines>()
{
	return FLines::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLines(FLines::StaticStruct, TEXT("/Script/FlowerGame"), TEXT("Lines"), false, nullptr, nullptr);
static struct FScriptStruct_FlowerGame_StaticRegisterNativesFLines
{
	FScriptStruct_FlowerGame_StaticRegisterNativesFLines()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Lines")),new UScriptStruct::TCppStructOps<FLines>);
	}
} ScriptStruct_FlowerGame_StaticRegisterNativesFLines;
	struct Z_Construct_UScriptStruct_FLines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLines_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlowerGameGameModeBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLines_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLines>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLines_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
		nullptr,
		&NewStructOps,
		"Lines",
		sizeof(FLines),
		alignof(FLines),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLines_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLines_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLines()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLines_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlowerGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Lines"), sizeof(FLines), Get_Z_Construct_UScriptStruct_FLines_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLines_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLines_Hash() { return 2336164234U; }
	void AFlowerGameGameModeBase::StaticRegisterNativesAFlowerGameGameModeBase()
	{
		UClass* Class = AFlowerGameGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &AFlowerGameGameModeBase::execGetCurrentState },
			{ "LaunchDice", &AFlowerGameGameModeBase::execLaunchDice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics
	{
		struct FlowerGameGameModeBase_eventGetCurrentState_Parms
		{
			TEnumAsByte<EGamePlayState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameGameModeBase_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_FlowerGame_EGamePlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "Comment", "/** Returns the current playing state */" },
		{ "ModuleRelativePath", "FlowerGameGameModeBase.h" },
		{ "ToolTip", "Returns the current playing state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameGameModeBase, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(FlowerGameGameModeBase_eventGetCurrentState_Parms), Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics
	{
		struct FlowerGameGameModeBase_eventLaunchDice_Parms
		{
			int32 numDice;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numDice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::NewProp_numDice = { "numDice", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowerGameGameModeBase_eventLaunchDice_Parms, numDice), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::NewProp_numDice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlowerGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowerGameGameModeBase, nullptr, "LaunchDice", nullptr, nullptr, sizeof(FlowerGameGameModeBase_eventLaunchDice_Parms), Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlowerGameGameModeBase_NoRegister()
	{
		return AFlowerGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFlowerGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_classPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_classPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Board_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Board;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Board_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BOARD_SIZE_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BOARD_SIZE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlowerGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlowerGameGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlowerGameGameModeBase_GetCurrentState, "GetCurrentState" }, // 665067870
		{ &Z_Construct_UFunction_AFlowerGameGameModeBase_LaunchDice, "LaunchDice" }, // 2993037148
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FlowerGameGameModeBase.h" },
		{ "ModuleRelativePath", "FlowerGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_classPlayer_MetaData[] = {
		{ "ModuleRelativePath", "FlowerGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_classPlayer = { "classPlayer", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameGameModeBase, classPlayer), Z_Construct_UClass_AFlowerGameCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_classPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_classPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_PlayerSelected_MetaData[] = {
		{ "ModuleRelativePath", "FlowerGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_PlayerSelected = { "PlayerSelected", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameGameModeBase, PlayerSelected), Z_Construct_UClass_AFlowerGameCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_PlayerSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_PlayerSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_Board_MetaData[] = {
		{ "ModuleRelativePath", "FlowerGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_Board = { "Board", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameGameModeBase, Board), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_Board_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_Board_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_Board_Inner = { "Board", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLines, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_BOARD_SIZE_MetaData[] = {
		{ "ModuleRelativePath", "FlowerGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_BOARD_SIZE = { "BOARD_SIZE", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowerGameGameModeBase, BOARD_SIZE), METADATA_PARAMS(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_BOARD_SIZE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_BOARD_SIZE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlowerGameGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_classPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_PlayerSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_Board,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_Board_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowerGameGameModeBase_Statics::NewProp_BOARD_SIZE,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlowerGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlowerGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlowerGameGameModeBase_Statics::ClassParams = {
		&AFlowerGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlowerGameGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowerGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlowerGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlowerGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlowerGameGameModeBase, 669729765);
	template<> FLOWERGAME_API UClass* StaticClass<AFlowerGameGameModeBase>()
	{
		return AFlowerGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlowerGameGameModeBase(Z_Construct_UClass_AFlowerGameGameModeBase, &AFlowerGameGameModeBase::StaticClass, TEXT("/Script/FlowerGame"), TEXT("AFlowerGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlowerGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
