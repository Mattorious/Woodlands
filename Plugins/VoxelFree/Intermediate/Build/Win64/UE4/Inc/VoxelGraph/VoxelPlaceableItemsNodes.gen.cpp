// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelPlaceableItemsNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemsNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataItemSample_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataItemSample();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataItemParameters_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataItemParameters();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister();
// End Cross Module References
	void UVoxelNode_DataItemSample::StaticRegisterNativesUVoxelNode_DataItemSample()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_DataItemSample_NoRegister()
	{
		return UVoxelNode_DataItemSample::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_DataItemSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombineMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CombineMode;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CombineMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::Class_MetaDataParams[] = {
		{ "Category", "Placeable Items" },
		{ "DisplayName", "Data Item Sample" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode = { "CombineMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_DataItemSample, CombineMode), Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxel32BitMask" },
		{ "Category", "Config" },
		{ "Comment", "// Only items matching the channels ticked here will be sampled (only the items matching (Mask & Item.Mask) != 0)\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "ToolTip", "Only items matching the channels ticked here will be sampled (only the items matching (Mask & Item.Mask) != 0)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_DataItemSample, Mask), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_Mask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_DataItemSample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::ClassParams = {
		&UVoxelNode_DataItemSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_DataItemSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_DataItemSample, 3162344083);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_DataItemSample>()
	{
		return UVoxelNode_DataItemSample::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_DataItemSample(Z_Construct_UClass_UVoxelNode_DataItemSample, &UVoxelNode_DataItemSample::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_DataItemSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_DataItemSample);
	void UVoxelNode_DataItemParameters::StaticRegisterNativesUVoxelNode_DataItemParameters()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_DataItemParameters_NoRegister()
	{
		return UVoxelNode_DataItemParameters::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PreviewValues;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviewValues_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviewValues_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::Class_MetaDataParams[] = {
		{ "Category", "Placeable Items" },
		{ "DisplayName", "Data Item Parameters" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// If no parameters are provided these will be used\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "ToolTip", "If no parameters are provided these will be used" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues = { "PreviewValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_DataItemParameters, PreviewValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_Key_KeyProp = { "PreviewValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_ValueProp = { "PreviewValues", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "NonNull", "" },
		{ "ReconstructNode", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_DataItemParameters, Config), Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_Config_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_Config,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_DataItemParameters>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::ClassParams = {
		&UVoxelNode_DataItemParameters::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_DataItemParameters()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_DataItemParameters, 1325751148);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_DataItemParameters>()
	{
		return UVoxelNode_DataItemParameters::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_DataItemParameters(Z_Construct_UClass_UVoxelNode_DataItemParameters, &UVoxelNode_DataItemParameters::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_DataItemParameters"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_DataItemParameters);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
