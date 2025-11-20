// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/ManaBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaBarWidget() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_UManaBarWidget();
DISHONORED_API UClass* Z_Construct_UClass_UManaBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UManaBarWidget Function UpdateManaBar
struct Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics
{
	struct ManaBarWidget_eventUpdateManaBar_Parms
	{
		float currentMana;
		float maxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ManaBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::NewProp_currentMana = { "currentMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaBarWidget_eventUpdateManaBar_Parms, currentMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::NewProp_maxMana = { "maxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaBarWidget_eventUpdateManaBar_Parms, maxMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::NewProp_currentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::NewProp_maxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaBarWidget, nullptr, "UpdateManaBar", nullptr, nullptr, Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::ManaBarWidget_eventUpdateManaBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::ManaBarWidget_eventUpdateManaBar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaBarWidget_UpdateManaBar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaBarWidget_UpdateManaBar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaBarWidget::execUpdateManaBar)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_currentMana);
	P_GET_PROPERTY(FFloatProperty,Z_Param_maxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateManaBar(Z_Param_currentMana,Z_Param_maxMana);
	P_NATIVE_END;
}
// End Class UManaBarWidget Function UpdateManaBar

// Begin Class UManaBarWidget
void UManaBarWidget::StaticRegisterNativesUManaBarWidget()
{
	UClass* Class = UManaBarWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateManaBar", &UManaBarWidget::execUpdateManaBar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaBarWidget);
UClass* Z_Construct_UClass_UManaBarWidget_NoRegister()
{
	return UManaBarWidget::StaticClass();
}
struct Z_Construct_UClass_UManaBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ManaBarWidget.h" },
		{ "ModuleRelativePath", "ManaBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_manaProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManaBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_manaProgressBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaBarWidget_UpdateManaBar, "UpdateManaBar" }, // 3898485385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaBarWidget_Statics::NewProp_manaProgressBar = { "manaProgressBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaBarWidget, manaProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_manaProgressBar_MetaData), NewProp_manaProgressBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaBarWidget_Statics::NewProp_manaProgressBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UManaBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaBarWidget_Statics::ClassParams = {
	&UManaBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UManaBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UManaBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManaBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UManaBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManaBarWidget()
{
	if (!Z_Registration_Info_UClass_UManaBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaBarWidget.OuterSingleton, Z_Construct_UClass_UManaBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManaBarWidget.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UManaBarWidget>()
{
	return UManaBarWidget::StaticClass();
}
UManaBarWidget::UManaBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManaBarWidget);
UManaBarWidget::~UManaBarWidget() {}
// End Class UManaBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManaBarWidget, UManaBarWidget::StaticClass, TEXT("UManaBarWidget"), &Z_Registration_Info_UClass_UManaBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaBarWidget), 2252079053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_1632034503(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
