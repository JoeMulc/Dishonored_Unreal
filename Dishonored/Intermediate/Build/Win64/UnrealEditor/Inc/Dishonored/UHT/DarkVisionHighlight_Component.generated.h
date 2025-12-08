// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DarkVisionHighlight_Component.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISHONORED_DarkVisionHighlight_Component_generated_h
#error "DarkVisionHighlight_Component.generated.h already included, missing '#pragma once' in DarkVisionHighlight_Component.h"
#endif
#define DISHONORED_DarkVisionHighlight_Component_generated_h

#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDarkVisionHighlight_Component(); \
	friend struct Z_Construct_UClass_UDarkVisionHighlight_Component_Statics; \
public: \
	DECLARE_CLASS(UDarkVisionHighlight_Component, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dishonored"), NO_API) \
	DECLARE_SERIALIZER(UDarkVisionHighlight_Component)


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDarkVisionHighlight_Component(UDarkVisionHighlight_Component&&); \
	UDarkVisionHighlight_Component(const UDarkVisionHighlight_Component&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDarkVisionHighlight_Component); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDarkVisionHighlight_Component); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDarkVisionHighlight_Component) \
	NO_API virtual ~UDarkVisionHighlight_Component();


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_19_PROLOG
#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISHONORED_API UClass* StaticClass<class UDarkVisionHighlight_Component>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DarkVisionHighlight_Component_h


#define FOREACH_ENUM_EHIGHLIGHTTYPES(op) \
	op(EHighlightTypes::defaultHighlight) \
	op(EHighlightTypes::collectibleHighlight) \
	op(EHighlightTypes::enemyHighlight) \
	op(EHighlightTypes::objectiveHighlight) 

enum class EHighlightTypes : uint8;
template<> struct TIsUEnumClass<EHighlightTypes> { enum { Value = true }; };
template<> DISHONORED_API UEnum* StaticEnum<EHighlightTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
