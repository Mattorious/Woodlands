// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelFoliage/VoxelFoliageSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFoliageSave() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageSave();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
class UScriptStruct* FVoxelFoliageSave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageSave_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFoliageSave, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFoliageSave"), sizeof(FVoxelFoliageSave), Get_Z_Construct_UScriptStruct_FVoxelFoliageSave_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFoliageSave>()
{
	return FVoxelFoliageSave::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFoliageSave(FVoxelFoliageSave::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFoliageSave"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageSave
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageSave()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFoliageSave")),new UScriptStruct::TCppStructOps<FVoxelFoliageSave>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageSave;
	struct Z_Construct_UScriptStruct_FVoxelFoliageSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSave.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFoliageSave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFoliageSave>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFoliageSave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFoliageSave",
		sizeof(FVoxelFoliageSave),
		alignof(FVoxelFoliageSave),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageSave()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageSave_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFoliageSave"), sizeof(FVoxelFoliageSave), Get_Z_Construct_UScriptStruct_FVoxelFoliageSave_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFoliageSave_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageSave_Hash() { return 3730076299U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
