// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/DarkVisionHighlight_Component.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkVisionHighlight_Component() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_UDarkVisionHighlight_Component();
DISHONORED_API UClass* Z_Construct_UClass_UDarkVisionHighlight_Component_NoRegister();
DISHONORED_API UEnum* Z_Construct_UEnum_Dishonored_EHighlightTypes();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Enum EHighlightTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHighlightTypes;
static UEnum* EHighlightTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHighlightTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHighlightTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Dishonored_EHighlightTypes, (UObject*)Z_Construct_UPackage__Script_Dishonored(), TEXT("EHighlightTypes"));
	}
	return Z_Registration_Info_UEnum_EHighlightTypes.OuterSingleton;
}
template<> DISHONORED_API UEnum* StaticEnum<EHighlightTypes>()
{
	return EHighlightTypes_StaticEnum();
}
struct Z_Construct_UEnum_Dishonored_EHighlightTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "collectibleHighlight.DisplayName", "Collectible" },
		{ "collectibleHighlight.Name", "EHighlightTypes::collectibleHighlight" },
		{ "defaultHighlight.DisplayName", "Default" },
		{ "defaultHighlight.Name", "EHighlightTypes::defaultHighlight" },
		{ "enemyHighlight.DisplayName", "Enemy" },
		{ "enemyHighlight.Name", "EHighlightTypes::enemyHighlight" },
		{ "ModuleRelativePath", "DarkVisionHighlight_Component.h" },
		{ "objectiveHighlight.DisplayName", "Objective" },
		{ "objectiveHighlight.Name", "EHighlightTypes::objectiveHighlight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHighlightTypes::defaultHighlight", (int64)EHighlightTypes::defaultHighlight },
		{ "EHighlightTypes::collectibleHighlight", (int64)EHighlightTypes::collectibleHighlight },
		{ "EHighlightTypes::enemyHighlight", (int64)EHighlightTypes::enemyHighlight },
		{ "EHighlightTypes::objectiveHighlight", (int64)EHighlightTypes::objectiveHighlight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Dishonored_EHighlightTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Dishonored,
	nullptr,
	"EHighlightTypes",
	"EHighlightTypes",
	Z_Construct_UEnum_Dishonored_EHighlightTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Dishonored_EHighlightTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Dishonored_EHighlightTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Dishonored_EHighlightTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Dishonored_EHighlightTypes()
{
	if (!Z_Registration_Info_UEnum_EHighlightTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHighlightTypes.InnerSingleton, Z_Construct_UEnum_Dishonored_EHighlightTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHighlightTypes.InnerSingleton;
}
// End Enum EHighlightTypes

// Begin Class UDarkVisionHighlight_Component
void UDarkVisionHighlight_Component::StaticRegisterNativesUDarkVisionHighlight_Component()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDarkVisionHighlight_Component);
UClass* Z_Construct_UClass_UDarkVisionHighlight_Component_NoRegister()
{
	return UDarkVisionHighlight_Component::StaticClass();
}
struct Z_Construct_UClass_UDarkVisionHighlight_Component_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DarkVisionHighlight_Component.h" },
		{ "ModuleRelativePath", "DarkVisionHighlight_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_highlightType_MetaData[] = {
		{ "Category", "DarkVisionHighlight_Component" },
		{ "ModuleRelativePath", "DarkVisionHighlight_Component.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_highlightType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_highlightType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDarkVisionHighlight_Component>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::NewProp_highlightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::NewProp_highlightType = { "highlightType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkVisionHighlight_Component, highlightType), Z_Construct_UEnum_Dishonored_EHighlightTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_highlightType_MetaData), NewProp_highlightType_MetaData) }; // 3573734279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::NewProp_highlightType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::NewProp_highlightType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::ClassParams = {
	&UDarkVisionHighlight_Component::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::Class_MetaDataParams), Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDarkVisionHighlight_Component()
{
	if (!Z_Registration_Info_UClass_UDarkVisionHighlight_Component.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDarkVisionHighlight_Component.OuterSingleton, Z_Construct_UClass_UDarkVisionHighlight_Component_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDarkVisionHighlight_Component.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UDarkVisionHighlight_Component>()
{
	return UDarkVisionHighlight_Component::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDarkVisionHighlight_Component);
UDarkVisionHighlight_Component::~UDarkVisionHighlight_Component() {}
// End Class UDarkVisionHighlight_Component

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHighlightTypes_StaticEnum, TEXT("EHighlightTypes"), &Z_Registration_Info_UEnum_EHighlightTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3573734279U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDarkVisionHighlight_Component, UDarkVisionHighlight_Component::StaticClass, TEXT("UDarkVisionHighlight_Component"), &Z_Registration_Info_UClass_UDarkVisionHighlight_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDarkVisionHighlight_Component), 418955729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_3402258041(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
