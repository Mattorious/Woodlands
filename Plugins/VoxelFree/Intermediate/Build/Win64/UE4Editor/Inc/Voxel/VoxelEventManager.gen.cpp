// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelEvents/VoxelEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEventManager() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEventSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEventSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelEventSubsystemProxy::StaticRegisterNativesUVoxelEventSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelEventSubsystemProxy_NoRegister()
	{
		return UVoxelEventSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelEventSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelEventSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelStaticSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelEventSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelEvents/VoxelEventManager.h" },
		{ "ModuleRelativePath", "Public/VoxelEvents/VoxelEventManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelEventSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelEventSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEventSubsystemProxy_Statics::ClassParams = {
		&UVoxelEventSubsystemProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelEventSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEventSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelEventSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelEventSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelEventSubsystemProxy, 91001161);
	template<> VOXEL_API UClass* StaticClass<UVoxelEventSubsystemProxy>()
	{
		return UVoxelEventSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelEventSubsystemProxy(Z_Construct_UClass_UVoxelEventSubsystemProxy, &UVoxelEventSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelEventSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEventSubsystemProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
