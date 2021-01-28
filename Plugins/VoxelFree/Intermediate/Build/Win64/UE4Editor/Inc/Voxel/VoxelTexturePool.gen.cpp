// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelTexturePool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTexturePool() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelTexturePoolSubsystemProxy::StaticRegisterNativesUVoxelTexturePoolSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_NoRegister()
	{
		return UVoxelTexturePoolSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelStaticSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/VoxelTexturePool.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelTexturePool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTexturePoolSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_Statics::ClassParams = {
		&UVoxelTexturePoolSubsystemProxy::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelTexturePoolSubsystemProxy, 1074256982);
	template<> VOXEL_API UClass* StaticClass<UVoxelTexturePoolSubsystemProxy>()
	{
		return UVoxelTexturePoolSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelTexturePoolSubsystemProxy(Z_Construct_UClass_UVoxelTexturePoolSubsystemProxy, &UVoxelTexturePoolSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelTexturePoolSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTexturePoolSubsystemProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
