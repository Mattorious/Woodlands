// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelFoliageNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFoliageNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetBiomeIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetBiomeIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageBiome_NoRegister();
// End Cross Module References
	void UVoxelNode_SampleFoliageMaterialIndex::StaticRegisterNativesUVoxelNode_SampleFoliageMaterialIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_NoRegister()
	{
		return UVoxelNode_SampleFoliageMaterialIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_Statics::Class_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "Comment", "// Get the strength of a material index at the current position. Used for foliage\n" },
		{ "DisplayName", "Sample Foliage Material Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelFoliageNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelFoliageNodes.h" },
		{ "ToolTip", "Get the strength of a material index at the current position. Used for foliage" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SampleFoliageMaterialIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_Statics::ClassParams = {
		&UVoxelNode_SampleFoliageMaterialIndex::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SampleFoliageMaterialIndex, 3632508764);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SampleFoliageMaterialIndex>()
	{
		return UVoxelNode_SampleFoliageMaterialIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SampleFoliageMaterialIndex(Z_Construct_UClass_UVoxelNode_SampleFoliageMaterialIndex, &UVoxelNode_SampleFoliageMaterialIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SampleFoliageMaterialIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SampleFoliageMaterialIndex);
	void UVoxelNode_GetBiomeIndex::StaticRegisterNativesUVoxelNode_GetBiomeIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetBiomeIndex_NoRegister()
	{
		return UVoxelNode_GetBiomeIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Biome_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Biome;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::Class_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "Comment", "// Get the strength of a material index at the current position. Used for foliage\n" },
		{ "DisplayName", "Get Biome Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelFoliageNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelFoliageNodes.h" },
		{ "ToolTip", "Get the strength of a material index at the current position. Used for foliage" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::NewProp_Biome_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelFoliageNodes.h" },
		{ "NonNull", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::NewProp_Biome = { "Biome", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GetBiomeIndex, Biome), Z_Construct_UClass_UVoxelFoliageBiome_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::NewProp_Biome_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::NewProp_Biome_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::NewProp_Biome,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetBiomeIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::ClassParams = {
		&UVoxelNode_GetBiomeIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetBiomeIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetBiomeIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetBiomeIndex, 74975351);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetBiomeIndex>()
	{
		return UVoxelNode_GetBiomeIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetBiomeIndex(Z_Construct_UClass_UVoxelNode_GetBiomeIndex, &UVoxelNode_GetBiomeIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetBiomeIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetBiomeIndex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
