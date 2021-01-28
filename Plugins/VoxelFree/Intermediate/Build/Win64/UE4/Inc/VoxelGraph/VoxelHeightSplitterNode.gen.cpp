// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelHeightSplitterNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHeightSplitterNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelNode_HeightSplitter::StaticRegisterNativesUVoxelNode_HeightSplitter()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter_NoRegister()
	{
		return UVoxelNode_HeightSplitter::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSplits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSplits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Comment", "// Splits a float input based on different layers, and outputs the strength of each layer\n// Input heights must be ordered! \n" },
		{ "DisplayName", "Height Splitter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelHeightSplitterNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightSplitterNode.h" },
		{ "ToolTip", "Splits a float input based on different layers, and outputs the strength of each layer\nInput heights must be ordered!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "30" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightSplitterNode.h" },
		{ "ReconstructNode", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits = { "NumSplits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_HeightSplitter, NumSplits), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_HeightSplitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::ClassParams = {
		&UVoxelNode_HeightSplitter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_HeightSplitter, 3552348924);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_HeightSplitter>()
	{
		return UVoxelNode_HeightSplitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_HeightSplitter(Z_Construct_UClass_UVoxelNode_HeightSplitter, &UVoxelNode_HeightSplitter::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_HeightSplitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_HeightSplitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
