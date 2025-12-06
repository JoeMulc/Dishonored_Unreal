// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/DarkVision_Ability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkVision_Ability() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_UAbility();
DISHONORED_API UClass* Z_Construct_UClass_UDarkVision_Ability();
DISHONORED_API UClass* Z_Construct_UClass_UDarkVision_Ability_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UDarkVision_Ability
void UDarkVision_Ability::StaticRegisterNativesUDarkVision_Ability()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDarkVision_Ability);
UClass* Z_Construct_UClass_UDarkVision_Ability_NoRegister()
{
	return UDarkVision_Ability::StaticClass();
}
struct Z_Construct_UClass_UDarkVision_Ability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DarkVision_Ability.h" },
		{ "ModuleRelativePath", "DarkVision_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_darkVisionMat_MetaData[] = {
		{ "ModuleRelativePath", "DarkVision_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_darkVisionMatDynamic_MetaData[] = {
		{ "ModuleRelativePath", "DarkVision_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_transitionLerpSpeed_MetaData[] = {
		{ "Category", "DarkVision_Ability" },
		{ "ModuleRelativePath", "DarkVision_Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_darkVisionMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_darkVisionMatDynamic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_transitionLerpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDarkVision_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDarkVision_Ability_Statics::NewProp_darkVisionMat = { "darkVisionMat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkVision_Ability, darkVisionMat), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_darkVisionMat_MetaData), NewProp_darkVisionMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDarkVision_Ability_Statics::NewProp_darkVisionMatDynamic = { "darkVisionMatDynamic", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkVision_Ability, darkVisionMatDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_darkVisionMatDynamic_MetaData), NewProp_darkVisionMatDynamic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkVision_Ability_Statics::NewProp_transitionLerpSpeed = { "transitionLerpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkVision_Ability, transitionLerpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_transitionLerpSpeed_MetaData), NewProp_transitionLerpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDarkVision_Ability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkVision_Ability_Statics::NewProp_darkVisionMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkVision_Ability_Statics::NewProp_darkVisionMatDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkVision_Ability_Statics::NewProp_transitionLerpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkVision_Ability_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDarkVision_Ability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkVision_Ability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDarkVision_Ability_Statics::ClassParams = {
	&UDarkVision_Ability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDarkVision_Ability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDarkVision_Ability_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkVision_Ability_Statics::Class_MetaDataParams), Z_Construct_UClass_UDarkVision_Ability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDarkVision_Ability()
{
	if (!Z_Registration_Info_UClass_UDarkVision_Ability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDarkVision_Ability.OuterSingleton, Z_Construct_UClass_UDarkVision_Ability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDarkVision_Ability.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UDarkVision_Ability>()
{
	return UDarkVision_Ability::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDarkVision_Ability);
UDarkVision_Ability::~UDarkVision_Ability() {}
// End Class UDarkVision_Ability

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVision_Ability_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDarkVision_Ability, UDarkVision_Ability::StaticClass, TEXT("UDarkVision_Ability"), &Z_Registration_Info_UClass_UDarkVision_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDarkVision_Ability), 762850452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVision_Ability_h_579593625(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVision_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVision_Ability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
