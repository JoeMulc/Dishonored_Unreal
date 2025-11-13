// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blink_Ability.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISHONORED_Blink_Ability_generated_h
#error "Blink_Ability.generated.h already included, missing '#pragma once' in Blink_Ability.h"
#endif
#define DISHONORED_Blink_Ability_generated_h

#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBlinkTimelineFinished); \
	DECLARE_FUNCTION(execBlinkTimelineUpdate);


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlink_Ability(); \
	friend struct Z_Construct_UClass_UBlink_Ability_Statics; \
public: \
	DECLARE_CLASS(UBlink_Ability, UAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dishonored"), NO_API) \
	DECLARE_SERIALIZER(UBlink_Ability)


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlink_Ability(UBlink_Ability&&); \
	UBlink_Ability(const UBlink_Ability&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlink_Ability); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlink_Ability); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlink_Ability) \
	NO_API virtual ~UBlink_Ability();


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_20_PROLOG
#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISHONORED_API UClass* StaticClass<class UBlink_Ability>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_Blink_Ability_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
