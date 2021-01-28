// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/K2Nodes/K2Node_AddDataItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AddDataItem() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UK2Node_AddDataItem_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UK2Node_AddDataItem();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister();
// End Cross Module References
	void UK2Node_AddDataItem::StaticRegisterNativesUK2Node_AddDataItem()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_AddDataItem_NoRegister()
	{
		return UK2Node_AddDataItem::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AddDataItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataItemConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataItemConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AddDataItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddDataItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Nodes/K2Node_AddDataItem.h" },
		{ "ModuleRelativePath", "Private/K2Nodes/K2Node_AddDataItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddDataItem_Statics::NewProp_DataItemConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/K2Nodes/K2Node_AddDataItem.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_AddDataItem_Statics::NewProp_DataItemConfig = { "DataItemConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_AddDataItem, DataItemConfig), Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddDataItem_Statics::NewProp_DataItemConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddDataItem_Statics::NewProp_DataItemConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_AddDataItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AddDataItem_Statics::NewProp_DataItemConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AddDataItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AddDataItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AddDataItem_Statics::ClassParams = {
		&UK2Node_AddDataItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_AddDataItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddDataItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddDataItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddDataItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AddDataItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_AddDataItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_AddDataItem, 952224418);
	template<> VOXELEDITOR_API UClass* StaticClass<UK2Node_AddDataItem>()
	{
		return UK2Node_AddDataItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_AddDataItem(Z_Construct_UClass_UK2Node_AddDataItem, &UK2Node_AddDataItem::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UK2Node_AddDataItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AddDataItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
