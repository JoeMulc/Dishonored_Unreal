// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDishonored_init() {}
	DISHONORED_API UFunction* Z_Construct_UDelegateFunction_Dishonored_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Dishonored;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Dishonored()
	{
		if (!Z_Registration_Info_UPackage__Script_Dishonored.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Dishonored_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Dishonored",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2F6E567C,
				0xC489DA11,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Dishonored.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Dishonored.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Dishonored(Z_Construct_UPackage__Script_Dishonored, TEXT("/Script/Dishonored"), Z_Registration_Info_UPackage__Script_Dishonored, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2F6E567C, 0xC489DA11));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
