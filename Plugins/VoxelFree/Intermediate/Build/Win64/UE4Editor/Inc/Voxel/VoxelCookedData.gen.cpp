// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelCooking/VoxelCookedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCookedData() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCookedData();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
class UScriptStruct* FVoxelCookedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelCookedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelCookedData, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelCookedData"), sizeof(FVoxelCookedData), Get_Z_Construct_UScriptStruct_FVoxelCookedData_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelCookedData>()
{
	return FVoxelCookedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelCookedData(FVoxelCookedData::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelCookedData"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelCookedData
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelCookedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelCookedData")),new UScriptStruct::TCppStructOps<FVoxelCookedData>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelCookedData;
	struct Z_Construct_UScriptStruct_FVoxelCookedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "Comment", "// Blueprint wrapper that's cheap to copy around\n" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookedData.h" },
		{ "ToolTip", "Blueprint wrapper that's cheap to copy around" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelCookedData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelCookedData",
		sizeof(FVoxelCookedData),
		alignof(FVoxelCookedData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelCookedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelCookedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelCookedData"), sizeof(FVoxelCookedData), Get_Z_Construct_UScriptStruct_FVoxelCookedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelCookedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelCookedData_Hash() { return 3688598051U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
