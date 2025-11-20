// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManaBarWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISHONORED_ManaBarWidget_generated_h
#error "ManaBarWidget.generated.h already included, missing '#pragma once' in ManaBarWidget.h"
#endif
#define DISHONORED_ManaBarWidget_generated_h

#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateManaBar);


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaBarWidget(); \
	friend struct Z_Construct_UClass_UManaBarWidget_Statics; \
public: \
	DECLARE_CLASS(UManaBarWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dishonored"), NO_API) \
	DECLARE_SERIALIZER(UManaBarWidget)


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaBarWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UManaBarWidget(UManaBarWidget&&); \
	UManaBarWidget(const UManaBarWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaBarWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaBarWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaBarWidget) \
	NO_API virtual ~UManaBarWidget();


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_14_PROLOG
#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISHONORED_API UClass* StaticClass<class UManaBarWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_ManaBarWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
