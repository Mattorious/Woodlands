// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Private/VoxelRender/LODManager/VoxelFixedResolutionLODManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFixedResolutionLODManager() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLODSubsystemProxy();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelFixedResolutionLODSubsystemProxy::StaticRegisterNativesUVoxelFixedResolutionLODSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_NoRegister()
	{
		return UVoxelFixedResolutionLODSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelLODSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/LODManager/VoxelFixedResolutionLODManager.h" },
		{ "ModuleRelativePath", "Private/VoxelRender/LODManager/VoxelFixedResolutionLODManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFixedResolutionLODSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_Statics::ClassParams = {
		&UVoxelFixedResolutionLODSubsystemProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFixedResolutionLODSubsystemProxy, 997551612);
	template<> VOXEL_API UClass* StaticClass<UVoxelFixedResolutionLODSubsystemProxy>()
	{
		return UVoxelFixedResolutionLODSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFixedResolutionLODSubsystemProxy(Z_Construct_UClass_UVoxelFixedResolutionLODSubsystemProxy, &UVoxelFixedResolutionLODSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelFixedResolutionLODSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFixedResolutionLODSubsystemProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
