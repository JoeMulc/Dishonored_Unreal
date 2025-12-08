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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPossesion_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_UPossesion_Ability, UPossesion_Ability::StaticClass, TEXT("UPossesion_Ability"), &Z_Registration_Info_UClass_UPossesion_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPossesion_Ability), 2141050553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Possesion_Ability_h_3873929597(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Possesion_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Possesion_Ability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
