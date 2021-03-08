// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowerGame_init() {}
	FLOWERGAME_API UFunction* Z_Construct_UDelegateFunction_FlowerGame_UpdateInfosPlayersDelegate__DelegateSignature();
	FLOWERGAME_API UFunction* Z_Construct_UDelegateFunction_FlowerGame_UpdateDiceDelegate__DelegateSignature();
	FLOWERGAME_API UFunction* Z_Construct_UDelegateFunction_FlowerGame_UpdateMagDelegate__DelegateSignature();
	FLOWERGAME_API UFunction* Z_Construct_UDelegateFunction_FlowerGame_UpdateChoiceShootDelegate__DelegateSignature();
	FLOWERGAME_API UFunction* Z_Construct_UDelegateFunction_FlowerGame_UpdateChoiceDefActionDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FlowerGame()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FlowerGame_UpdateInfosPlayersDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FlowerGame_UpdateDiceDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FlowerGame_UpdateMagDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FlowerGame_UpdateChoiceShootDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FlowerGame_UpdateChoiceDefActionDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/FlowerGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF6362669,
				0x28CB3985,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
