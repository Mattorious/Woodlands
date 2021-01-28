// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelToolRendering.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelToolRendering() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelToolRenderingSubsystemProxy::StaticRegisterNativesUVoxelToolRenderingSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_NoRegister()
	{
		return UVoxelToolRenderingSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelStaticSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/VoxelToolRendering.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelToolRendering.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolRenderingSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_Statics::ClassParams = {
		&UVoxelToolRenderingSubsystemProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelToolRenderingSubsystemProxy, 771641386);
	template<> VOXEL_API UClass* StaticClass<UVoxelToolRenderingSubsystemProxy>()
	{
		return UVoxelToolRenderingSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelToolRenderingSubsystemProxy(Z_Construct_UClass_UVoxelToolRenderingSubsystemProxy, &UVoxelToolRenderingSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelToolRenderingSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolRenderingSubsystemProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
