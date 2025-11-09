// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DishonoredProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DISHONORED_DishonoredProjectile_generated_h
#error "DishonoredProjectile.generated.h already included, missing '#pragma once' in DishonoredProjectile.h"
#endif
#define DISHONORED_DishonoredProjectile_generated_h

#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADishonoredProjectile(); \
	friend struct Z_Construct_UClass_ADishonoredProjectile_Statics; \
public: \
	DECLARE_CLASS(ADishonoredProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dishonored"), NO_API) \
	DECLARE_SERIALIZER(ADishonoredProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADishonoredProjectile(ADishonoredProjectile&&); \
	ADishonoredProjectile(const ADishonoredProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADishonoredProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADishonoredProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADishonoredProjectile) \
	NO_API virtual ~ADishonoredProjectile();


#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredProjectile_h_12_PROLOG
#define FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISHONORED_API UClass* StaticClass<class ADishonoredProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Dishonored_Dishonored_Unreal_Dishonored_Source_Dishonored_DishonoredProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
