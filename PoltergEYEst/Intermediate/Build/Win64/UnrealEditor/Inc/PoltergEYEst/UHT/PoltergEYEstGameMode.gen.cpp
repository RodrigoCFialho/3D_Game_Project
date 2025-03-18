// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoltergEYEst/PoltergEYEstGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoltergEYEstGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
POLTERGEYEST_API UClass* Z_Construct_UClass_APoltergEYEstGameMode();
POLTERGEYEST_API UClass* Z_Construct_UClass_APoltergEYEstGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PoltergEYEst();
// End Cross Module References

// Begin Class APoltergEYEstGameMode
void APoltergEYEstGameMode::StaticRegisterNativesAPoltergEYEstGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoltergEYEstGameMode);
UClass* Z_Construct_UClass_APoltergEYEstGameMode_NoRegister()
{
	return APoltergEYEstGameMode::StaticClass();
}
struct Z_Construct_UClass_APoltergEYEstGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PoltergEYEstGameMode.h" },
		{ "ModuleRelativePath", "PoltergEYEstGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoltergEYEstGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APoltergEYEstGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PoltergEYEst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoltergEYEstGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APoltergEYEstGameMode_Statics::ClassParams = {
	&APoltergEYEstGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoltergEYEstGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APoltergEYEstGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APoltergEYEstGameMode()
{
	if (!Z_Registration_Info_UClass_APoltergEYEstGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoltergEYEstGameMode.OuterSingleton, Z_Construct_UClass_APoltergEYEstGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APoltergEYEstGameMode.OuterSingleton;
}
template<> POLTERGEYEST_API UClass* StaticClass<APoltergEYEstGameMode>()
{
	return APoltergEYEstGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APoltergEYEstGameMode);
APoltergEYEstGameMode::~APoltergEYEstGameMode() {}
// End Class APoltergEYEstGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APoltergEYEstGameMode, APoltergEYEstGameMode::StaticClass, TEXT("APoltergEYEstGameMode"), &Z_Registration_Info_UClass_APoltergEYEstGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoltergEYEstGameMode), 44327611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstGameMode_h_683032502(TEXT("/Script/PoltergEYEst"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_3D_Game_Project_PoltergEYEst_Source_PoltergEYEst_PoltergEYEstGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
