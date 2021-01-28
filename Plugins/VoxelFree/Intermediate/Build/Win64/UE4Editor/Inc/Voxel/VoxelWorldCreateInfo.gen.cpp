// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelWorldCreateInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldCreateInfo() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldCreateInfo();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
// End Cross Module References
class UScriptStruct* FVoxelWorldCreateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelWorldCreateInfo"), sizeof(FVoxelWorldCreateInfo), Get_Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelWorldCreateInfo>()
{
	return FVoxelWorldCreateInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelWorldCreateInfo(FVoxelWorldCreateInfo::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelWorldCreateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelWorldCreateInfo
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelWorldCreateInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelWorldCreateInfo")),new UScriptStruct::TCppStructOps<FVoxelWorldCreateInfo>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelWorldCreateInfo;
	struct Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideData_MetaData[];
#endif
		static void NewProp_bOverrideData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSave_MetaData[];
#endif
		static void NewProp_bOverrideSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelWorldCreateInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride = { "DataOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelWorldCreateInfo, DataOverride), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If bOverrideData is true, will use DataSource data instead of creating a new data\n" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
		{ "ToolTip", "If bOverrideData is true, will use DataSource data instead of creating a new data" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_SetBit(void* Obj)
	{
		((FVoxelWorldCreateInfo*)Obj)->bOverrideData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData = { "bOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelWorldCreateInfo), &Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If OverrideSave is true, the world will load SaveOverride instead of the save object\n" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
		{ "ToolTip", "If OverrideSave is true, the world will load SaveOverride instead of the save object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride = { "SaveOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelWorldCreateInfo, SaveOverride), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If OverrideSave is true, the world will load SaveOverride instead of the save object\n" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
		{ "ToolTip", "If OverrideSave is true, the world will load SaveOverride instead of the save object" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_SetBit(void* Obj)
	{
		((FVoxelWorldCreateInfo*)Obj)->bOverrideSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave = { "bOverrideSave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelWorldCreateInfo), &Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelWorldCreateInfo",
		sizeof(FVoxelWorldCreateInfo),
		alignof(FVoxelWorldCreateInfo),
		Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldCreateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelWorldCreateInfo"), sizeof(FVoxelWorldCreateInfo), Get_Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Hash() { return 4243293198U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
