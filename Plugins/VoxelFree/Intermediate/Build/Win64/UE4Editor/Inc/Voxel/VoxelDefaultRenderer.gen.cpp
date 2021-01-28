// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Private/VoxelRender/Renderers/VoxelDefaultRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDefaultRenderer() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelRendererSubsystemProxy();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelDefaultRendererSubsystemProxy::StaticRegisterNativesUVoxelDefaultRendererSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_NoRegister()
	{
		return UVoxelDefaultRendererSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelRendererSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/Renderers/VoxelDefaultRenderer.h" },
		{ "ModuleRelativePath", "Private/VoxelRender/Renderers/VoxelDefaultRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDefaultRendererSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_Statics::ClassParams = {
		&UVoxelDefaultRendererSubsystemProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDefaultRendererSubsystemProxy, 211143001);
	template<> VOXEL_API UClass* StaticClass<UVoxelDefaultRendererSubsystemProxy>()
	{
		return UVoxelDefaultRendererSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDefaultRendererSubsystemProxy(Z_Construct_UClass_UVoxelDefaultRendererSubsystemProxy, &UVoxelDefaultRendererSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelDefaultRendererSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDefaultRendererSubsystemProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
