// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelFoliage/VoxelFoliageInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFoliageInterface() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelFoliageInterfaceSubsystemProxy::StaticRegisterNativesUVoxelFoliageInterfaceSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_NoRegister()
	{
		return UVoxelFoliageInterfaceSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelStaticSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelFoliage/VoxelFoliageInterface.h" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFoliageInterfaceSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_Statics::ClassParams = {
		&UVoxelFoliageInterfaceSubsystemProxy::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFoliageInterfaceSubsystemProxy, 3636139899);
	template<> VOXEL_API UClass* StaticClass<UVoxelFoliageInterfaceSubsystemProxy>()
	{
		return UVoxelFoliageInterfaceSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFoliageInterfaceSubsystemProxy(Z_Construct_UClass_UVoxelFoliageInterfaceSubsystemProxy, &UVoxelFoliageInterfaceSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelFoliageInterfaceSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFoliageInterfaceSubsystemProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
