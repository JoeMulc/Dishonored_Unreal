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
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UBlink_Ability Function BlinkTimelineFinished
struct Z_Construct_UFunction_UBlink_Ability_BlinkTimelineFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Blink_Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlink_Ability_BlinkTimelineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlink_Ability, nullptr, "BlinkTimelineFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlink_Ability_BlinkTimelineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlink_Ability_BlinkTimelineFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlink_Ability_BlinkTimelineFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlink_Ability_BlinkTimelineFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlink_Ability::execBlinkTimelineFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BlinkTimelineFinished();
	P_NATIVE_END;
}
// End Class UBlink_Ability Function BlinkTimelineFinished

// Begin Class UBlink_Ability Function BlinkTimelineUpdate
struct Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics
{
	struct Blink_Ability_eventBlinkTimelineUpdate_Parms
	{
		float alpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Blink_Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Blink_Ability_eventBlinkTimelineUpdate_Parms, alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::NewProp_alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlink_Ability, nullptr, "BlinkTimelineUpdate", nullptr, nullptr, Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::Blink_Ability_eventBlinkTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::Blink_Ability_eventBlinkTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlink_Ability::execBlinkTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BlinkTimelineUpdate(Z_Param_alpha);
	P_NATIVE_END;
}
// End Class UBlink_Ability Function BlinkTimelineUpdate

// Begin Class UBlink_Ability
void UBlink_Ability::StaticRegisterNativesUBlink_Ability()
{
	UClass* Class = UBlink_Ability::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BlinkTimelineFinished", &UBlink_Ability::execBlinkTimelineFinished },
		{ "BlinkTimelineUpdate", &UBlink_Ability::execBlinkTimelineUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blinkVFX_MetaData[] = {
		{ "Category", "Blink_Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//VFX\n" },
#endif
		{ "ModuleRelativePath", "Blink_Ability.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VFX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_activeBlinkVFX_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Blink_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blinkTraceRadius_MetaData[] = {
		{ "Category", "Blink_Ability" },
		{ "ModuleRelativePath", "Blink_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blinkDistance_MetaData[] = {
		{ "Category", "Blink_Ability" },
		{ "ModuleRelativePath", "Blink_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blinkSnapToGroundDistance_MetaData[] = {
		{ "Category", "Blink_Ability" },
		{ "ModuleRelativePath", "Blink_Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blinkCurve_MetaData[] = {
		{ "Category", "Blink_Ability" },
		{ "ModuleRelativePath", "Blink_Ability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_blinkVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_activeBlinkVFX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_blinkTraceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_blinkDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_blinkSnapToGroundDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_blinkCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlink_Ability_BlinkTimelineFinished, "BlinkTimelineFinished" }, // 1762113849
		{ &Z_Construct_UFunction_UBlink_Ability_BlinkTimelineUpdate, "BlinkTimelineUpdate" }, // 2074118299
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlink_Ability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkVFX = { "blinkVFX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlink_Ability, blinkVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blinkVFX_MetaData), NewProp_blinkVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlink_Ability_Statics::NewProp_activeBlinkVFX = { "activeBlinkVFX", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlink_Ability, activeBlinkVFX), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_activeBlinkVFX_MetaData), NewProp_activeBlinkVFX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkTraceRadius = { "blinkTraceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlink_Ability, blinkTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blinkTraceRadius_MetaData), NewProp_blinkTraceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkDistance = { "blinkDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlink_Ability, blinkDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blinkDistance_MetaData), NewProp_blinkDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkSnapToGroundDistance = { "blinkSnapToGroundDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlink_Ability, blinkSnapToGroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blinkSnapToGroundDistance_MetaData), NewProp_blinkSnapToGroundDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkCurve = { "blinkCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlink_Ability, blinkCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blinkCurve_MetaData), NewProp_blinkCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlink_Ability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlink_Ability_Statics::NewProp_activeBlinkVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkSnapToGroundDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlink_Ability_Statics::NewProp_blinkCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlink_Ability_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UBlink_Ability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlink_Ability_Statics::PropPointers),
	0,
	0x009000A0u,
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
		{ Z_Construct_UClass_UBlink_Ability, UBlink_Ability::StaticClass, TEXT("UBlink_Ability"), &Z_Registration_Info_UClass_UBlink_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlink_Ability), 1998342353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_1867977636(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
