// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/WindBlast_Ability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindBlast_Ability() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_UAbility();
DISHONORED_API UClass* Z_Construct_UClass_UWindBlast_Ability();
DISHONORED_API UClass* Z_Construct_UClass_UWindBlast_Ability_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UWindBlast_Ability
void UWindBlast_Ability::StaticRegisterNativesUWindBlast_Ability()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindBlast_Ability);
UClass* Z_Construct_UClass_UWindBlast_Ability_NoRegister()
{
	return UWindBlast_Ability::StaticClass();
}
struct Z_Construct_UClass_UWindBlast_Ability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WindBlast_Ability.h" },
		{ "ModuleRelativePath", "WindBlast_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_windBlastRadius_MetaData[] = {
		{ "Category", "WindBlast_Ability" },
		{ "ModuleRelativePath", "WindBlast_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_windBlastDistance_MetaData[] = {
		{ "Category", "WindBlast_Ability" },
		{ "ModuleRelativePath", "WindBlast_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_windBlastForce_MetaData[] = {
		{ "Category", "WindBlast_Ability" },
		{ "ModuleRelativePath", "WindBlast_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_windblastVFX_MetaData[] = {
		{ "Category", "WindBlast_Ability" },
		{ "ModuleRelativePath", "WindBlast_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_activeWindblastVFX_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WindBlast_Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_windBlastRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_windBlastDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_windBlastForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_windblastVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_activeWindblastVFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindBlast_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_windBlastRadius = { "windBlastRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWindBlast_Ability, windBlastRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_windBlastRadius_MetaData), NewProp_windBlastRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_windBlastDistance = { "windBlastDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWindBlast_Ability, windBlastDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_windBlastDistance_MetaData), NewProp_windBlastDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_windBlastForce = { "windBlastForce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWindBlast_Ability, windBlastForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_windBlastForce_MetaData), NewProp_windBlastForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_windblastVFX = { "windblastVFX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWindBlast_Ability, windblastVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_windblastVFX_MetaData), NewProp_windblastVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_activeWindblastVFX = { "activeWindblastVFX", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWindBlast_Ability, activeWindblastVFX), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_activeWindblastVFX_MetaData), NewProp_activeWindblastVFX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindBlast_Ability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_windBlastRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_windBlastDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_windBlastForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_windblastVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindBlast_Ability_Statics::NewProp_activeWindblastVFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindBlast_Ability_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWindBlast_Ability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindBlast_Ability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindBlast_Ability_Statics::ClassParams = {
	&UWindBlast_Ability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWindBlast_Ability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWindBlast_Ability_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindBlast_Ability_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindBlast_Ability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindBlast_Ability()
{
	if (!Z_Registration_Info_UClass_UWindBlast_Ability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindBlast_Ability.OuterSingleton, Z_Construct_UClass_UWindBlast_Ability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindBlast_Ability.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UWindBlast_Ability>()
{
	return UWindBlast_Ability::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindBlast_Ability);
UWindBlast_Ability::~UWindBlast_Ability() {}
// End Class UWindBlast_Ability

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_WindBlast_Ability_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindBlast_Ability, UWindBlast_Ability::StaticClass, TEXT("UWindBlast_Ability"), &Z_Registration_Info_UClass_UWindBlast_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindBlast_Ability), 3917027170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_WindBlast_Ability_h_375658810(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_WindBlast_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_WindBlast_Ability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
