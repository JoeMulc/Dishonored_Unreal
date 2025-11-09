// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/Blink_Ability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlink_Ability() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_UAbility();
DISHONORED_API UClass* Z_Construct_UClass_UBlink_Ability();
DISHONORED_API UClass* Z_Construct_UClass_UBlink_Ability_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UBlink_Ability
void UBlink_Ability::StaticRegisterNativesUBlink_Ability()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlink_Ability);
UClass* Z_Construct_UClass_UBlink_Ability_NoRegister()
{
	return UBlink_Ability::StaticClass();
}
struct Z_Construct_UClass_UBlink_Ability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Blink_Ability.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Blink_Ability.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlink_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlink_Ability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlink_Ability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlink_Ability_Statics::ClassParams = {
	&UBlink_Ability::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlink_Ability_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlink_Ability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlink_Ability()
{
	if (!Z_Registration_Info_UClass_UBlink_Ability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlink_Ability.OuterSingleton, Z_Construct_UClass_UBlink_Ability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlink_Ability.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UBlink_Ability>()
{
	return UBlink_Ability::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlink_Ability);
UBlink_Ability::~UBlink_Ability() {}
// End Class UBlink_Ability

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlink_Ability, UBlink_Ability::StaticClass, TEXT("UBlink_Ability"), &Z_Registration_Info_UClass_UBlink_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlink_Ability), 821685461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_823461556(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
