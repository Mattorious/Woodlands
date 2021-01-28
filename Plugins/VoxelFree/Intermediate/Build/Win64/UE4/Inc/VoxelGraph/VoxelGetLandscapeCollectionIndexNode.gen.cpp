// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGetLandscapeCollectionIndexNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGetLandscapeCollectionIndexNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelNode_GetLandscapeCollectionIndex::StaticRegisterNativesUVoxelNode_GetLandscapeCollectionIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_NoRegister()
	{
		return UVoxelNode_GetLandscapeCollectionIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::Class_MetaDataParams[] = {
		{ "Category", "Material" },
		{ "Comment", "// Retrieve the index of a material function or a material instance in the voxel world material collection\n" },
		{ "DisplayName", "Get Landscape Collection Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGetLandscapeCollectionIndexNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGetLandscapeCollectionIndexNode.h" },
		{ "ToolTip", "Retrieve the index of a material function or a material instance in the voxel world material collection" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGetLandscapeCollectionIndexNode.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GetLandscapeCollectionIndex, LayerName), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::NewProp_LayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::NewProp_LayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetLandscapeCollectionIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::ClassParams = {
		&UVoxelNode_GetLandscapeCollectionIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetLandscapeCollectionIndex, 1169278579);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetLandscapeCollectionIndex>()
	{
		return UVoxelNode_GetLandscapeCollectionIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetLandscapeCollectionIndex(Z_Construct_UClass_UVoxelNode_GetLandscapeCollectionIndex, &UVoxelNode_GetLandscapeCollectionIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetLandscapeCollectionIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetLandscapeCollectionIndex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
