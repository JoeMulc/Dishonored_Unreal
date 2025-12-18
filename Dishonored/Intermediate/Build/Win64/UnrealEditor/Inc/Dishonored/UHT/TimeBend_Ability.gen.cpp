// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/TimeBend_Ability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeBend_Ability() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_UAbility();
DISHONORED_API UClass* Z_Construct_UClass_UTimeBend_Ability();
DISHONORED_API UClass* Z_Construct_UClass_UTimeBend_Ability_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UTimeBend_Ability
void UTimeBend_Ability::StaticRegisterNativesUTimeBend_Ability()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimeBend_Ability);
UClass* Z_Construct_UClass_UTimeBend_Ability_NoRegister()
{
	return UTimeBend_Ability::StaticClass();
}
struct Z_Construct_UClass_UTimeBend_Ability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TimeBend_Ability.h" },
		{ "ModuleRelativePath", "TimeBend_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeSlowPercentage_MetaData[] = {
		{ "Category", "TimeBend_Ability" },
		{ "ModuleRelativePath", "TimeBend_Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_timeSlowPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeBend_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimeBend_Ability_Statics::NewProp_timeSlowPercentage = { "timeSlowPercentage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimeBend_Ability, timeSlowPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timeSlowPercentage_MetaData), NewProp_timeSlowPercentage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeBend_Ability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeBend_Ability_Statics::NewProp_timeSlowPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeBend_Ability_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimeBend_Ability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeBend_Ability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeBend_Ability_Statics::ClassParams = {
	&UTimeBend_Ability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTimeBend_Ability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimeBend_Ability_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeBend_Ability_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimeBend_Ability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimeBend_Ability()
{
	if (!Z_Registration_Info_UClass_UTimeBend_Ability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeBend_Ability.OuterSingleton, Z_Construct_UClass_UTimeBend_Ability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimeBend_Ability.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UTimeBend_Ability>()
{
	return UTimeBend_Ability::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeBend_Ability);
UTimeBend_Ability::~UTimeBend_Ability() {}
// End Class UTimeBend_Ability

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_TimeBend_Ability_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimeBend_Ability, UTimeBend_Ability::StaticClass, TEXT("UTimeBend_Ability"), &Z_Registration_Info_UClass_UTimeBend_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeBend_Ability), 4052204623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_TimeBend_Ability_h_3426874492(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_TimeBend_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_TimeBend_Ability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
