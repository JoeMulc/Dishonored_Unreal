// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dishonored/DishonoredGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDishonoredGameMode() {}

// Begin Cross Module References
DISHONORED_API UClass* Z_Construct_UClass_ADishonoredGameMode();
DISHONORED_API UClass* Z_Construct_UClass_ADishonoredGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Dishonored();
// End Cross Module References

// Begin Class ADishonoredGameMode
void ADishonoredGameMode::StaticRegisterNativesADishonoredGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADishonoredGameMode);
UClass* Z_Construct_UClass_ADishonoredGameMode_NoRegister()
{
	return ADishonoredGameMode::StaticClass();
}
struct Z_Construct_UClass_ADishonoredGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DishonoredGameMode.h" },
		{ "ModuleRelativePath", "DishonoredGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADishonoredGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADishonoredGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Dishonored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADishonoredGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADishonoredGameMode_Statics::ClassParams = {
	&ADishonoredGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADishonoredGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADishonoredGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADishonoredGameMode()
{
	if (!Z_Registration_Info_UClass_ADishonoredGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADishonoredGameMode.OuterSingleton, Z_Construct_UClass_ADishonoredGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADishonoredGameMode.OuterSingleton;
}
template<> DISHONORED_API UClass* StaticClass<ADishonoredGameMode>()
{
	return ADishonoredGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADishonoredGameMode);
ADishonoredGameMode::~ADishonoredGameMode() {}
// End Class ADishonoredGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADishonoredGameMode, ADishonoredGameMode::StaticClass, TEXT("ADishonoredGameMode"), &Z_Registration_Info_UClass_ADishonoredGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADishonoredGameMode), 2570176250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredGameMode_h_1906186393(TEXT("/Script/Dishonored"),
	Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
