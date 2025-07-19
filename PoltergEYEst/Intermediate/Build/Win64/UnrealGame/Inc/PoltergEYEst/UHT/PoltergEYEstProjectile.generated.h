// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoltergEYEstProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef POLTERGEYEST_PoltergEYEstProjectile_generated_h
#error "PoltergEYEstProjectile.generated.h already included, missing '#pragma once' in PoltergEYEstProjectile.h"
#endif
#define POLTERGEYEST_PoltergEYEstProjectile_generated_h

#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPoltergEYEstProjectile(); \
	friend struct Z_Construct_UClass_APoltergEYEstProjectile_Statics; \
public: \
	DECLARE_CLASS(APoltergEYEstProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PoltergEYEst"), NO_API) \
	DECLARE_SERIALIZER(APoltergEYEstProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APoltergEYEstProjectile(APoltergEYEstProjectile&&); \
	APoltergEYEstProjectile(const APoltergEYEstProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoltergEYEstProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoltergEYEstProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APoltergEYEstProjectile) \
	NO_API virtual ~APoltergEYEstProjectile();


#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstProjectile_h_12_PROLOG
#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POLTERGEYEST_API UClass* StaticClass<class APoltergEYEstProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
