// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Private/VoxelRender/LODManager/VoxelDefaultLODManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDefaultLODManager() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLODSubsystemProxy();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelDefaultLODSubsystemProxy::StaticRegisterNativesUVoxelDefaultLODSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_NoRegister()
	{
		return UVoxelDefaultLODSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelLODSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/LODManager/VoxelDefaultLODManager.h" },
		{ "ModuleRelativePath", "Private/VoxelRender/LODManager/VoxelDefaultLODManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDefaultLODSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_Statics::ClassParams = {
		&UVoxelDefaultLODSubsystemProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDefaultLODSubsystemProxy, 2290591520);
	template<> VOXEL_API UClass* StaticClass<UVoxelDefaultLODSubsystemProxy>()
	{
		return UVoxelDefaultLODSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDefaultLODSubsystemProxy(Z_Construct_UClass_UVoxelDefaultLODSubsystemProxy, &UVoxelDefaultLODSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelDefaultLODSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDefaultLODSubsystemProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
