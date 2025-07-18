// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoltergEYEstPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APoltergEYEstCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef POLTERGEYEST_PoltergEYEstPickUpComponent_generated_h
#error "PoltergEYEstPickUpComponent.generated.h already included, missing '#pragma once' in PoltergEYEstPickUpComponent.h"
#endif
#define POLTERGEYEST_PoltergEYEstPickUpComponent_generated_h

#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h_12_DELEGATE \
POLTERGEYEST_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, APoltergEYEstCharacter* PickUpCharacter);


#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoltergEYEstPickUpComponent(); \
	friend struct Z_Construct_UClass_UPoltergEYEstPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UPoltergEYEstPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PoltergEYEst"), NO_API) \
	DECLARE_SERIALIZER(UPoltergEYEstPickUpComponent)


#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoltergEYEstPickUpComponent(UPoltergEYEstPickUpComponent&&); \
	UPoltergEYEstPickUpComponent(const UPoltergEYEstPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoltergEYEstPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoltergEYEstPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoltergEYEstPickUpComponent) \
	NO_API virtual ~UPoltergEYEstPickUpComponent();


#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h_14_PROLOG
#define FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POLTERGEYEST_API UClass* StaticClass<class UPoltergEYEstPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
