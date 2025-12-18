// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/Ability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DISHONORED_API UClass* Z_Construct_UClass_UAbility();
DISHONORED_API UClass* Z_Construct_UClass_UAbility_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UAbility
void UAbility::StaticRegisterNativesUAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbility);
UClass* Z_Construct_UClass_UAbility_NoRegister()
{
	return UAbility::StaticClass();
}
struct Z_Construct_UClass_UAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ability.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_abilityIcon_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_doAnimation_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cooldown_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_manaCost_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_abilityIcon;
	static void NewProp_doAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_doAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_cooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_manaCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_abilityIcon = { "abilityIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, abilityIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_abilityIcon_MetaData), NewProp_abilityIcon_MetaData) };
void Z_Construct_UClass_UAbility_Statics::NewProp_doAnimation_SetBit(void* Obj)
{
	((UAbility*)Obj)->doAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_doAnimation = { "doAnimation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbility), &Z_Construct_UClass_UAbility_Statics::NewProp_doAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_doAnimation_MetaData), NewProp_doAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_cooldown = { "cooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cooldown_MetaData), NewProp_cooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_manaCost = { "manaCost", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, manaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_manaCost_MetaData), NewProp_manaCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_abilityIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_doAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_manaCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbility_Statics::ClassParams = {
	&UAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbility()
{
	if (!Z_Registration_Info_UClass_UAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbility.OuterSingleton, Z_Construct_UClass_UAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbility.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UAbility>()
{
	return UAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbility);
UAbility::~UAbility() {}
// End Class UAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Ability_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbility, UAbility::StaticClass, TEXT("UAbility"), &Z_Registration_Info_UClass_UAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbility), 4131489871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Ability_h_2273111690(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Ability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
