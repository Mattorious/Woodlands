// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelFoliage/VoxelFoliageBiome.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFoliageBiome() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliage_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageBiomeType_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageBiomeType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageBiome_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageBiome();
// End Cross Module References
class UScriptStruct* FVoxelFoliageBiomeEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFoliageBiomeEntry"), sizeof(FVoxelFoliageBiomeEntry), Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFoliageBiomeEntry>()
{
	return FVoxelFoliageBiomeEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFoliageBiomeEntry(FVoxelFoliageBiomeEntry::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFoliageBiomeEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageBiomeEntry
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageBiomeEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFoliageBiomeEntry")),new UScriptStruct::TCppStructOps<FVoxelFoliageBiomeEntry>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageBiomeEntry;
	struct Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foliage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Foliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFoliageBiomeEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Foliage_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Foliage = { "Foliage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageBiomeEntry, Foliage), Z_Construct_UClass_UVoxelFoliage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Foliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Foliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageBiomeEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Foliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFoliageBiomeEntry",
		sizeof(FVoxelFoliageBiomeEntry),
		alignof(FVoxelFoliageBiomeEntry),
		Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFoliageBiomeEntry"), sizeof(FVoxelFoliageBiomeEntry), Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry_Hash() { return 463653025U; }
class UScriptStruct* FVoxelFoliageBiomeTypeEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFoliageBiomeTypeEntry"), sizeof(FVoxelFoliageBiomeTypeEntry), Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFoliageBiomeTypeEntry>()
{
	return FVoxelFoliageBiomeTypeEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFoliageBiomeTypeEntry(FVoxelFoliageBiomeTypeEntry::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFoliageBiomeTypeEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageBiomeTypeEntry
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageBiomeTypeEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFoliageBiomeTypeEntry")),new UScriptStruct::TCppStructOps<FVoxelFoliageBiomeTypeEntry>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageBiomeTypeEntry;
	struct Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFoliageBiomeTypeEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_SpawnSettings_MetaData[] = {
		{ "Category", "Biomes" },
		{ "Comment", "// The individual foliage asset settings will be ignored and these will be used instead\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
		{ "ToolTip", "The individual foliage asset settings will be ignored and these will be used instead" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_SpawnSettings = { "SpawnSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageBiomeTypeEntry, SpawnSettings), Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_SpawnSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_SpawnSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageBiomeTypeEntry, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageBiomeTypeEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_SpawnSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFoliageBiomeTypeEntry",
		sizeof(FVoxelFoliageBiomeTypeEntry),
		alignof(FVoxelFoliageBiomeTypeEntry),
		Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFoliageBiomeTypeEntry"), sizeof(FVoxelFoliageBiomeTypeEntry), Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry_Hash() { return 1397786310U; }
	void UVoxelFoliageBiomeType::StaticRegisterNativesUVoxelFoliageBiomeType()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFoliageBiomeType_NoRegister()
	{
		return UVoxelFoliageBiomeType::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFoliageBiomeType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BiomeOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BiomeOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPickerGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputPickerGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelFoliage/VoxelFoliageBiome.h" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliageBiomeType, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelFoliageBiomeTypeEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_BiomeOutput_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// The generator output used to select the biome\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
		{ "OutputType", "int" },
		{ "ToolTip", "The generator output used to select the biome" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_BiomeOutput = { "BiomeOutput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliageBiomeType, BiomeOutput), Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_BiomeOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_BiomeOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_OutputPickerGenerator_MetaData[] = {
		{ "Category", "Config" },
		{ "DisplayName", "Generator (for autocomplete only)" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_OutputPickerGenerator = { "OutputPickerGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliageBiomeType, OutputPickerGenerator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_OutputPickerGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_OutputPickerGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_BiomeOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::NewProp_OutputPickerGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFoliageBiomeType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::ClassParams = {
		&UVoxelFoliageBiomeType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFoliageBiomeType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFoliageBiomeType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFoliageBiomeType, 3118885206);
	template<> VOXEL_API UClass* StaticClass<UVoxelFoliageBiomeType>()
	{
		return UVoxelFoliageBiomeType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFoliageBiomeType(Z_Construct_UClass_UVoxelFoliageBiomeType, &UVoxelFoliageBiomeType::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelFoliageBiomeType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFoliageBiomeType);
	void UVoxelFoliageBiome::StaticRegisterNativesUVoxelFoliageBiome()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFoliageBiome_NoRegister()
	{
		return UVoxelFoliageBiome::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFoliageBiome_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFoliageBiome_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiome_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelFoliage/VoxelFoliageBiome.h" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliageBiome, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelFoliageBiomeEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageBiome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliageBiome, Type), Z_Construct_UClass_UVoxelFoliageBiomeType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFoliageBiome_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageBiome_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFoliageBiome_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFoliageBiome>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFoliageBiome_Statics::ClassParams = {
		&UVoxelFoliageBiome::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelFoliageBiome_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiome_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiome_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiome_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFoliageBiome()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFoliageBiome_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFoliageBiome, 2707520416);
	template<> VOXEL_API UClass* StaticClass<UVoxelFoliageBiome>()
	{
		return UVoxelFoliageBiome::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFoliageBiome(Z_Construct_UClass_UVoxelFoliageBiome, &UVoxelFoliageBiome::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelFoliageBiome"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFoliageBiome);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
