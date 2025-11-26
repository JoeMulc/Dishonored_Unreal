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

// Begin Class UAbilityWheel Function OnButtonHovered
struct Z_Construct_UFunction_UAbilityWheel_OnButtonHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilityWheel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityWheel_OnButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityWheel, nullptr, "OnButtonHovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityWheel_OnButtonHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityWheel_OnButtonHovered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityWheel_OnButtonHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityWheel_OnButtonHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityWheel::execOnButtonHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonHovered();
	P_NATIVE_END;
}
// End Class UAbilityWheel Function OnButtonHovered

// Begin Class UAbilityWheel Function OnButtonUnhovered
struct Z_Construct_UFunction_UAbilityWheel_OnButtonUnhovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilityWheel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityWheel_OnButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityWheel, nullptr, "OnButtonUnhovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityWheel_OnButtonUnhovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityWheel_OnButtonUnhovered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityWheel_OnButtonUnhovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityWheel_OnButtonUnhovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityWheel::execOnButtonUnhovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonUnhovered();
	P_NATIVE_END;
}
// End Class UAbilityWheel Function OnButtonUnhovered

// Begin Class UAbilityWheel
void UAbilityWheel::StaticRegisterNativesUAbilityWheel()
{
	UClass* Class = UAbilityWheel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnButtonHovered", &UAbilityWheel::execOnButtonHovered },
		{ "OnButtonUnhovered", &UAbilityWheel::execOnButtonUnhovered },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[] = {
		{ "Category", "AbilityWheel" },
		{ "ModuleRelativePath", "AbilityWheel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_buttonSize_MetaData[] = {
		{ "Category", "AbilityWheel" },
		{ "ModuleRelativePath", "AbilityWheel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_buttonSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityWheel_OnButtonHovered, "OnButtonHovered" }, // 2496103157
		{ &Z_Construct_UFunction_UAbilityWheel_OnButtonUnhovered, "OnButtonUnhovered" }, // 3153111781
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityWheel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityWheel_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityWheel, radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_radius_MetaData), NewProp_radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityWheel_Statics::NewProp_buttonSize = { "buttonSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityWheel, buttonSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_buttonSize_MetaData), NewProp_buttonSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityWheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWheel_Statics::NewProp_radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityWheel_Statics::NewProp_buttonSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWheel_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UAbilityWheel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityWheel_Statics::PropPointers),
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
		{ Z_Construct_UClass_UAbilityWheel, UAbilityWheel::StaticClass, TEXT("UAbilityWheel"), &Z_Registration_Info_UClass_UAbilityWheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityWheel), 829723219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityWheel_h_2642073187(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityWheel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AbilityWheel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
