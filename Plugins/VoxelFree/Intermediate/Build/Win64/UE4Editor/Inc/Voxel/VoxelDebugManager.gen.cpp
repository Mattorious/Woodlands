// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelDebug/VoxelDebugManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDebugManager() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDebugSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDebugSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelDebugSubsystemProxy::StaticRegisterNativesUVoxelDebugSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDebugSubsystemProxy_NoRegister()
	{
		return UVoxelDebugSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDebugSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDebugSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelStaticSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebug/VoxelDebugManager.h" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelDebugManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDebugSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugSubsystemProxy_Statics::ClassParams = {
		&UVoxelDebugSubsystemProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDebugSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDebugSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDebugSubsystemProxy, 2284236229);
	template<> VOXEL_API UClass* StaticClass<UVoxelDebugSubsystemProxy>()
	{
		return UVoxelDebugSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDebugSubsystemProxy(Z_Construct_UClass_UVoxelDebugSubsystemProxy, &UVoxelDebugSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelDebugSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugSubsystemProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
