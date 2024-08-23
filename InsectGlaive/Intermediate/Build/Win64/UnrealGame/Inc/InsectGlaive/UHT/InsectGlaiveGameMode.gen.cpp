// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectGlaive/InsectGlaiveGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsectGlaiveGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INSECTGLAIVE_API UClass* Z_Construct_UClass_AInsectGlaiveGameMode();
INSECTGLAIVE_API UClass* Z_Construct_UClass_AInsectGlaiveGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InsectGlaive();
// End Cross Module References

// Begin Class AInsectGlaiveGameMode
void AInsectGlaiveGameMode::StaticRegisterNativesAInsectGlaiveGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInsectGlaiveGameMode);
UClass* Z_Construct_UClass_AInsectGlaiveGameMode_NoRegister()
{
	return AInsectGlaiveGameMode::StaticClass();
}
struct Z_Construct_UClass_AInsectGlaiveGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InsectGlaiveGameMode.h" },
		{ "ModuleRelativePath", "InsectGlaiveGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInsectGlaiveGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInsectGlaiveGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InsectGlaive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInsectGlaiveGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInsectGlaiveGameMode_Statics::ClassParams = {
	&AInsectGlaiveGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInsectGlaiveGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInsectGlaiveGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInsectGlaiveGameMode()
{
	if (!Z_Registration_Info_UClass_AInsectGlaiveGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInsectGlaiveGameMode.OuterSingleton, Z_Construct_UClass_AInsectGlaiveGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInsectGlaiveGameMode.OuterSingleton;
}
template<> INSECTGLAIVE_API UClass* StaticClass<AInsectGlaiveGameMode>()
{
	return AInsectGlaiveGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInsectGlaiveGameMode);
AInsectGlaiveGameMode::~AInsectGlaiveGameMode() {}
// End Class AInsectGlaiveGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_InsectGlaive_Source_InsectGlaive_InsectGlaiveGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInsectGlaiveGameMode, AInsectGlaiveGameMode::StaticClass, TEXT("AInsectGlaiveGameMode"), &Z_Registration_Info_UClass_AInsectGlaiveGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInsectGlaiveGameMode), 1421027444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InsectGlaive_Source_InsectGlaive_InsectGlaiveGameMode_h_2381733057(TEXT("/Script/InsectGlaive"),
	Z_CompiledInDeferFile_FID_InsectGlaive_Source_InsectGlaive_InsectGlaiveGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InsectGlaive_Source_InsectGlaive_InsectGlaiveGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
