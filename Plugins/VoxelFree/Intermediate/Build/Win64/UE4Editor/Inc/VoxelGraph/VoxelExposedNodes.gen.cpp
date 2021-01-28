// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelExposedNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExposedNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelExposedNode::StaticRegisterNativesUVoxelExposedNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelExposedNode_NoRegister()
	{
		return UVoxelExposedNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExposedNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeRenamed_MetaData[];
#endif
		static void NewProp_bCanBeRenamed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeRenamed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CustomMetaData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomMetaData_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomMetaData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UIMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UIMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExposedNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Parameters" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExposedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed_MetaData[] = {
		{ "Comment", "// Only allow renaming on creation, else the name is wrong (GetTitle never called)\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
		{ "ToolTip", "Only allow renaming on creation, else the name is wrong (GetTitle never called)" },
	};
#endif
	void Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed_SetBit(void* Obj)
	{
		((UVoxelExposedNode*)Obj)->bCanBeRenamed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed = { "bCanBeRenamed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelExposedNode), &Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData = { "CustomMetaData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExposedNode, CustomMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_Key_KeyProp = { "CustomMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_ValueProp = { "CustomMetaData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMax_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMax = { "UIMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExposedNode, UIMax), METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMin_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMin = { "UIMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExposedNode, UIMin), METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "Comment", "// Lowest values on top\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
		{ "ToolTip", "Lowest values on top" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExposedNode, Priority), METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExposedNode, Tooltip), METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExposedNode, Category), METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UniqueName_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExposedNode, UniqueName), METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UniqueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UniqueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExposedNode, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExposedNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Tooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_DisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExposedNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExposedNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExposedNode_Statics::ClassParams = {
		&UVoxelExposedNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExposedNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExposedNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExposedNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelExposedNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelExposedNode, 1994274625);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExposedNode>()
	{
		return UVoxelExposedNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelExposedNode(Z_Construct_UClass_UVoxelExposedNode, &UVoxelExposedNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelExposedNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExposedNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
