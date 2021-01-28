// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorOutputPicker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorOutputPicker() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
class UScriptStruct* FVoxelGeneratorOutputPicker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorOutputPicker"), sizeof(FVoxelGeneratorOutputPicker), Get_Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorOutputPicker>()
{
	return FVoxelGeneratorOutputPicker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGeneratorOutputPicker(FVoxelGeneratorOutputPicker::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelGeneratorOutputPicker"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorOutputPicker
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorOutputPicker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGeneratorOutputPicker")),new UScriptStruct::TCppStructOps<FVoxelGeneratorOutputPicker>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorOutputPicker;
	struct Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorOutputPicker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorOutputPicker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorOutputPicker.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorOutputPicker, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelGeneratorOutputPicker",
		sizeof(FVoxelGeneratorOutputPicker),
		alignof(FVoxelGeneratorOutputPicker),
		Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGeneratorOutputPicker"), sizeof(FVoxelGeneratorOutputPicker), Get_Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker_Hash() { return 1568587667U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
