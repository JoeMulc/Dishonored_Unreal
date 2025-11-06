// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DishonoredWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADishonoredCharacter;
#ifdef DISHONORED_DishonoredWeaponComponent_generated_h
#error "DishonoredWeaponComponent.generated.h already included, missing '#pragma once' in DishonoredWeaponComponent.h"
#endif
#define DISHONORED_DishonoredWeaponComponent_generated_h

#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDishonoredWeaponComponent(); \
	friend struct Z_Construct_UClass_UDishonoredWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UDishonoredWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dishonored"), NO_API) \
	DECLARE_SERIALIZER(UDishonoredWeaponComponent)


#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDishonoredWeaponComponent(UDishonoredWeaponComponent&&); \
	UDishonoredWeaponComponent(const UDishonoredWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDishonoredWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDishonoredWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDishonoredWeaponComponent) \
	NO_API virtual ~UDishonoredWeaponComponent();


#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredWeaponComponent_h_11_PROLOG
#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISHONORED_API UClass* StaticClass<class UDishonoredWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
