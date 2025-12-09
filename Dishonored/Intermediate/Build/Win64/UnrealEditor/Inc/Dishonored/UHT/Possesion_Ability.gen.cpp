// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/Possesion_Ability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePossesion_Ability() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_UAbility();
DISHONORED_API UClass* Z_Construct_UClass_UPossesion_Ability();
DISHONORED_API UClass* Z_Construct_UClass_UPossesion_Ability_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UPossesion_Ability
void UPossesion_Ability::StaticRegisterNativesUPossesion_Ability()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPossesion_Ability);
UClass* Z_Construct_UClass_UPossesion_Ability_NoRegister()
{
	return UPossesion_Ability::StaticClass();
}
struct Z_Construct_UClass_UPossesion_Ability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Possesion_Ability.h" },
		{ "ModuleRelativePath", "Possesion_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_possesionDistance_MetaData[] = {
		{ "Category", "Possesion_Ability" },
		{ "ModuleRelativePath", "Possesion_Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_possesionDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPossesion_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPossesion_Ability_Statics::NewProp_possesionDistance = { "possesionDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPossesion_Ability, possesionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_possesionDistance_MetaData), NewProp_possesionDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPossesion_Ability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPossesion_Ability_Statics::NewProp_possesionDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPossesion_Ability_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPossesion_Ability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPossesion_Ability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPossesion_Ability_Statics::ClassParams = {
	&UPossesion_Ability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPossesion_Ability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPossesion_Ability_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPossesion_Ability_Statics::Class_MetaDataParams), Z_Construct_UClass_UPossesion_Ability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPossesion_Ability()
{
	if (!Z_Registration_Info_UClass_UPossesion_Ability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPossesion_Ability.OuterSingleton, Z_Construct_UClass_UPossesion_Ability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPossesion_Ability.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UPossesion_Ability>()
{
	return UPossesion_Ability::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPossesion_Ability);
UPossesion_Ability::~UPossesion_Ability() {}
// End Class UPossesion_Ability

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Possesion_Ability_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPossesion_Ability, UPossesion_Ability::StaticClass, TEXT("UPossesion_Ability"), &Z_Registration_Info_UClass_UPossesion_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPossesion_Ability), 4028809217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Possesion_Ability_h_1718891759(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Possesion_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Possesion_Ability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
