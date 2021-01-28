// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelLandscapeMaterialCollection() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelLandscapeMaterialCollectionPermutation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLandscapeMaterialCollectionPermutation"), sizeof(FVoxelLandscapeMaterialCollectionPermutation), Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLandscapeMaterialCollectionPermutation>()
{
	return FVoxelLandscapeMaterialCollectionPermutation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation(FVoxelLandscapeMaterialCollectionPermutation::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelLandscapeMaterialCollectionPermutation"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelLandscapeMaterialCollectionPermutation
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelLandscapeMaterialCollectionPermutation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelLandscapeMaterialCollectionPermutation")),new UScriptStruct::TCppStructOps<FVoxelLandscapeMaterialCollectionPermutation>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelLandscapeMaterialCollectionPermutation;
	struct Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLandscapeMaterialCollectionPermutation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Names, FVoxelLandscapeMaterialCollectionPermutation), STRUCT_OFFSET(FVoxelLandscapeMaterialCollectionPermutation, Names), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelLandscapeMaterialCollectionPermutation",
		sizeof(FVoxelLandscapeMaterialCollectionPermutation),
		alignof(FVoxelLandscapeMaterialCollectionPermutation),
		Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelLandscapeMaterialCollectionPermutation"), sizeof(FVoxelLandscapeMaterialCollectionPermutation), Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Hash() { return 3942488323U; }
class UScriptStruct* FVoxelLandscapeMaterialCollectionLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLandscapeMaterialCollectionLayer"), sizeof(FVoxelLandscapeMaterialCollectionLayer), Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLandscapeMaterialCollectionLayer>()
{
	return FVoxelLandscapeMaterialCollectionLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer(FVoxelLandscapeMaterialCollectionLayer::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelLandscapeMaterialCollectionLayer"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelLandscapeMaterialCollectionLayer
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelLandscapeMaterialCollectionLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelLandscapeMaterialCollectionLayer")),new UScriptStruct::TCppStructOps<FVoxelLandscapeMaterialCollectionLayer>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelLandscapeMaterialCollectionLayer;
	struct Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLandscapeMaterialCollectionLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLandscapeMaterialCollectionLayer, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLandscapeMaterialCollectionLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelLandscapeMaterialCollectionLayer",
		sizeof(FVoxelLandscapeMaterialCollectionLayer),
		alignof(FVoxelLandscapeMaterialCollectionLayer),
		Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelLandscapeMaterialCollectionLayer"), sizeof(FVoxelLandscapeMaterialCollectionLayer), Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Hash() { return 979562541U; }
	void UVoxelLandscapeMaterialCollection::StaticRegisterNativesUVoxelLandscapeMaterialCollection()
	{
	}
	UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection_NoRegister()
	{
		return UVoxelLandscapeMaterialCollection::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndicesToLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IndicesToLayers;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndicesToLayers_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndicesToLayers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialCache;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialCache_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialCache_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayersToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LayersToIgnore;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayersToIgnore_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LayersToIgnore_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMaterialsToBlendAtOnce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMaterialsToBlendAtOnce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialCollectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Material collection that does not generate any blending and is just a list of materials\n" },
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
		{ "ToolTip", "Material collection that does not generate any blending and is just a list of materials" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers = { "IndicesToLayers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, IndicesToLayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_Key_KeyProp = { "IndicesToLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_ValueProp = { "IndicesToLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache = { "MaterialCache", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, MaterialCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_Key_KeyProp = { "MaterialCache_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_ValueProp = { "MaterialCache", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_LayersToIgnore_MetaData[] = {
		{ "Category", "Layers" },
		{ "Comment", "// Add elements to this to reduce permutations\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
		{ "ToolTip", "Add elements to this to reduce permutations" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_LayersToIgnore = { "LayersToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, LayersToIgnore), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_LayersToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_LayersToIgnore_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_LayersToIgnore_Key_KeyProp = { "LayersToIgnore_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_LayersToIgnore_ValueProp = { "LayersToIgnore", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "6" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
		{ "UIMax", "6" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce = { "MaxMaterialsToBlendAtOnce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, MaxMaterialsToBlendAtOnce), METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_LayersToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_LayersToIgnore_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_LayersToIgnore_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLandscapeMaterialCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::ClassParams = {
		&UVoxelLandscapeMaterialCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelLandscapeMaterialCollection, 1299613684);
	template<> VOXEL_API UClass* StaticClass<UVoxelLandscapeMaterialCollection>()
	{
		return UVoxelLandscapeMaterialCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelLandscapeMaterialCollection(Z_Construct_UClass_UVoxelLandscapeMaterialCollection, &UVoxelLandscapeMaterialCollection::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelLandscapeMaterialCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLandscapeMaterialCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
