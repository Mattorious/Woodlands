// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorInit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorInit() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
// End Cross Module References
class UScriptStruct* FVoxelGeneratorInit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorInit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorInit, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorInit"), sizeof(FVoxelGeneratorInit), Get_Z_Construct_UScriptStruct_FVoxelGeneratorInit_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorInit>()
{
	return FVoxelGeneratorInit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGeneratorInit(FVoxelGeneratorInit::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelGeneratorInit"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorInit
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorInit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGeneratorInit")),new UScriptStruct::TCppStructOps<FVoxelGeneratorInit>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorInit;
	struct Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorldSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorInit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Init" },
		{ "Comment", "// Can be null. Needs to be a weak pointer, else the GC freaks out when exiting the map with an alive generator cache pointing to this \n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Can be null. Needs to be a weak pointer, else the GC freaks out when exiting the map with an alive generator cache pointing to this" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType = { "RenderType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, RenderType), Z_Construct_UEnum_Voxel_EVoxelRenderType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, WorldSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorInit, VoxelSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelGeneratorInit",
		sizeof(FVoxelGeneratorInit),
		alignof(FVoxelGeneratorInit),
		Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorInit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGeneratorInit"), sizeof(FVoxelGeneratorInit), Get_Z_Construct_UScriptStruct_FVoxelGeneratorInit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorInit_Hash() { return 2212448731U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
