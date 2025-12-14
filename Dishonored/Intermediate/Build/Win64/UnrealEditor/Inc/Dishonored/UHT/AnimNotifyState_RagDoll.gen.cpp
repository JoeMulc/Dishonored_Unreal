// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/AnimNotifyState_RagDoll.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_RagDoll() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_UAnimNotifyState_RagDoll();
DISHONORED_API UClass* Z_Construct_UClass_UAnimNotifyState_RagDoll_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class UAnimNotifyState_RagDoll
void UAnimNotifyState_RagDoll::StaticRegisterNativesUAnimNotifyState_RagDoll()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_RagDoll);
UClass* Z_Construct_UClass_UAnimNotifyState_RagDoll_NoRegister()
{
	return UAnimNotifyState_RagDoll::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_RagDoll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_RagDoll.h" },
		{ "ModuleRelativePath", "AnimNotifyState_RagDoll.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_RagDoll>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_RagDoll_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_RagDoll_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_RagDoll_Statics::ClassParams = {
	&UAnimNotifyState_RagDoll::StaticClass,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_RagDoll_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_RagDoll_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_RagDoll()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_RagDoll.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_RagDoll.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_RagDoll_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_RagDoll.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<UAnimNotifyState_RagDoll>()
{
	return UAnimNotifyState_RagDoll::StaticClass();
}
UAnimNotifyState_RagDoll::UAnimNotifyState_RagDoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_RagDoll);
UAnimNotifyState_RagDoll::~UAnimNotifyState_RagDoll() {}
// End Class UAnimNotifyState_RagDoll

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AnimNotifyState_RagDoll_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_RagDoll, UAnimNotifyState_RagDoll::StaticClass, TEXT("UAnimNotifyState_RagDoll"), &Z_Registration_Info_UClass_UAnimNotifyState_RagDoll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_RagDoll), 1838443293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AnimNotifyState_RagDoll_h_2870134338(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AnimNotifyState_RagDoll_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_AnimNotifyState_RagDoll_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
