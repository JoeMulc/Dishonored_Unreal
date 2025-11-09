// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/AbilityManager_Component.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityManager_Component() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DISHONORED_API UClass* Z_Construct_UClass_UAbility_NoRegister();
DISHONORED_API UClass* Z_Construct_UClass_UAbilityManager_Component();
DISHONORED_API UClass* Z_Construct_UClass_UAbilityManager_Component_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UAbilityManager_Component
void UAbilityManager_Component::StaticRegisterNativesUAbilityManager_Component()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityManager_Component);
UClass* Z_Construct_UClass_UAbilityManager_Component_NoRegister()
{
	return UAbilityManager_Component::StaticClass();
}
struct Z_Construct_UClass_UAbilityManager_Component_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbilityManager_Component.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AbilityManager_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startingAbilityArray_MetaData[] = {
		{ "Category", "AbilityManager_Component" },
		{ "ModuleRelativePath", "AbilityManager_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_abilityArray_MetaData[] = {
		{ "Category", "AbilityManager_Component" },
		{ "ModuleRelativePath", "AbilityManager_Component.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_startingAbilityArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_startingAbilityArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_abilityArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_abilityArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityManager_Component>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityManager_Component_Statics::NewProp_startingAbilityArray_Inner = { "startingAbilityArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityManager_Component_Statics::NewProp_startingAbilityArray = { "startingAbilityArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityManager_Component, startingAbilityArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startingAbilityArray_MetaData), NewProp_startingAbilityArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityManager_Component_Statics::NewProp_abilityArray_Inner = { "abilityArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityManager_Component_Statics::NewProp_abilityArray = { "abilityArray", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityManager_Component, abilityArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_abilityArray_MetaData), NewProp_abilityArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityManager_Component_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityManager_Component_Statics::NewProp_startingAbilityArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityManager_Component_Statics::NewProp_startingAbilityArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityManager_Component_Statics::NewProp_abilityArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityManager_Component_Statics::NewProp_abilityArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityManager_Component_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityManager_Component_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityManager_Component_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityManager_Component_Statics::ClassParams = {
	&UAbilityManager_Component::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityManager_Component_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityManager_Component_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityManager_Component_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityManager_Component_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityManager_Component()
{
	if (!Z_Registration_Info_UClass_UAbilityManager_Component.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityManager_Component.OuterSingleton, Z_Construct_UClass_UAbilityManager_Component_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityManager_Component.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UAbilityManager_Component>()
{
	return UAbilityManager_Component::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityManager_Component);
UAbilityManager_Component::~UAbilityManager_Component() {}
// End Class UAbilityManager_Component

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityManager_Component_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityManager_Component, UAbilityManager_Component::StaticClass, TEXT("UAbilityManager_Component"), &Z_Registration_Info_UClass_UAbilityManager_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityManager_Component), 4068697529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityManager_Component_h_1609934991(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityManager_Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityManager_Component_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
