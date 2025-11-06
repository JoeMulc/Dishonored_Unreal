// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DishonoredPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADishonoredCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DISHONORED_DishonoredPickUpComponent_generated_h
#error "DishonoredPickUpComponent.generated.h already included, missing '#pragma once' in DishonoredPickUpComponent.h"
#endif
#define DISHONORED_DishonoredPickUpComponent_generated_h

#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h_12_DELEGATE \
DISHONORED_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ADishonoredCharacter* PickUpCharacter);


#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDishonoredPickUpComponent(); \
	friend struct Z_Construct_UClass_UDishonoredPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UDishonoredPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dishonored"), NO_API) \
	DECLARE_SERIALIZER(UDishonoredPickUpComponent)


#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDishonoredPickUpComponent(UDishonoredPickUpComponent&&); \
	UDishonoredPickUpComponent(const UDishonoredPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDishonoredPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDishonoredPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDishonoredPickUpComponent) \
	NO_API virtual ~UDishonoredPickUpComponent();


#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h_14_PROLOG
#define FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISHONORED_API UClass* StaticClass<class UDishonoredPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Dishonored_Dishonored_Source_Dishonored_DishonoredPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
