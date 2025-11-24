// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/AbilityWheel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityWheel() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_UAbilityWheel();
DISHONORED_API UClass* Z_Construct_UClass_UAbilityWheel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UAbilityWheel
void UAbilityWheel::StaticRegisterNativesUAbilityWheel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityWheel);
UClass* Z_Construct_UClass_UAbilityWheel_NoRegister()
{
	return UAbilityWheel::StaticClass();
}
struct Z_Construct_UClass_UAbilityWheel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilityWheel.h" },
		{ "ModuleRelativePath", "AbilityWheel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityWheel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityWheel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWheel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityWheel_Statics::ClassParams = {
	&UAbilityWheel::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWheel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityWheel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityWheel()
{
	if (!Z_Registration_Info_UClass_UAbilityWheel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityWheel.OuterSingleton, Z_Construct_UClass_UAbilityWheel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityWheel.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UAbilityWheel>()
{
	return UAbilityWheel::StaticClass();
}
UAbilityWheel::UAbilityWheel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityWheel);
UAbilityWheel::~UAbilityWheel() {}
// End Class UAbilityWheel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityWheel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityWheel, UAbilityWheel::StaticClass, TEXT("UAbilityWheel"), &Z_Registration_Info_UClass_UAbilityWheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityWheel), 2592965612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityWheel_h_3860048313(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityWheel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityWheel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
