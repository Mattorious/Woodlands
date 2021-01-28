// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelObjectArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelObjectArchive() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelObjectArchiveEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelObjectArchiveEntry"), sizeof(FVoxelObjectArchiveEntry), Get_Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelObjectArchiveEntry>()
{
	return FVoxelObjectArchiveEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelObjectArchiveEntry(FVoxelObjectArchiveEntry::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelObjectArchiveEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelObjectArchiveEntry
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelObjectArchiveEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelObjectArchiveEntry")),new UScriptStruct::TCppStructOps<FVoxelObjectArchiveEntry>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelObjectArchiveEntry;
	struct Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelObjectArchive.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelObjectArchiveEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Entry" },
		{ "Comment", "// Zero is reserved for nullptr\n" },
		{ "ModuleRelativePath", "Public/VoxelObjectArchive.h" },
		{ "ToolTip", "Zero is reserved for nullptr" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelObjectArchiveEntry, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Entry" },
		{ "ModuleRelativePath", "Public/VoxelObjectArchive.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelObjectArchiveEntry, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelObjectArchiveEntry",
		sizeof(FVoxelObjectArchiveEntry),
		alignof(FVoxelObjectArchiveEntry),
		Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelObjectArchiveEntry"), sizeof(FVoxelObjectArchiveEntry), Get_Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Hash() { return 1290638370U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
