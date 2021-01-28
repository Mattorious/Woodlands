// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelFoliage/VoxelFoliageSpawnSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFoliageSpawnSettings() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageRandomGenerator();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageSpawnType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelDistance();
// End Cross Module References
	static UEnum* EVoxelFoliageRandomGenerator_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelFoliageRandomGenerator, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelFoliageRandomGenerator"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageRandomGenerator>()
	{
		return EVoxelFoliageRandomGenerator_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelFoliageRandomGenerator(EVoxelFoliageRandomGenerator_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelFoliageRandomGenerator"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelFoliageRandomGenerator_Hash() { return 2146284653U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageRandomGenerator()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelFoliageRandomGenerator"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelFoliageRandomGenerator_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelFoliageRandomGenerator::Sobol", (int64)EVoxelFoliageRandomGenerator::Sobol },
				{ "EVoxelFoliageRandomGenerator::Halton", (int64)EVoxelFoliageRandomGenerator::Halton },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Halton.Comment", "// More uneven points than Sobol. Unreal uses Halton to spawn grass in the default Landscape system\n" },
				{ "Halton.Name", "EVoxelFoliageRandomGenerator::Halton" },
				{ "Halton.ToolTip", "More uneven points than Sobol. Unreal uses Halton to spawn grass in the default Landscape system" },
				{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
				{ "Sobol.Comment", "// Evenly distributed points\n" },
				{ "Sobol.Name", "EVoxelFoliageRandomGenerator::Sobol" },
				{ "Sobol.ToolTip", "Evenly distributed points" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelFoliageRandomGenerator",
				"EVoxelFoliageRandomGenerator",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVoxelFoliageSpawnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelFoliageSpawnType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelFoliageSpawnType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageSpawnType>()
	{
		return EVoxelFoliageSpawnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelFoliageSpawnType(EVoxelFoliageSpawnType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelFoliageSpawnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelFoliageSpawnType_Hash() { return 2206445493U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageSpawnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelFoliageSpawnType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelFoliageSpawnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelFoliageSpawnType::Ray", (int64)EVoxelFoliageSpawnType::Ray },
				{ "EVoxelFoliageSpawnType::Height", (int64)EVoxelFoliageSpawnType::Height },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Height.Comment", "// This uses a height output from the generator to spawn, allowing for large spawn distance.\n" },
				{ "Height.Name", "EVoxelFoliageSpawnType::Height" },
				{ "Height.ToolTip", "This uses a height output from the generator to spawn, allowing for large spawn distance." },
				{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
				{ "Ray.Comment", "// Will line trace the voxel geometry to find spawning locations. Works with any kind of world/shapes\n" },
				{ "Ray.Name", "EVoxelFoliageSpawnType::Ray" },
				{ "Ray.ToolTip", "Will line trace the voxel geometry to find spawning locations. Works with any kind of world/shapes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelFoliageSpawnType",
				"EVoxelFoliageSpawnType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVoxelFoliageSpawnSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFoliageSpawnSettings"), sizeof(FVoxelFoliageSpawnSettings), Get_Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFoliageSpawnSettings>()
{
	return FVoxelFoliageSpawnSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFoliageSpawnSettings(FVoxelFoliageSpawnSettings::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFoliageSpawnSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageSpawnSettings
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageSpawnSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFoliageSpawnSettings")),new UScriptStruct::TCppStructOps<FVoxelFoliageSpawnSettings>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageSpawnSettings;
	struct Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckIfCovered_HeightOnly_MetaData[];
#endif
		static void NewProp_bCheckIfCovered_HeightOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckIfCovered_HeightOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckIfFloating_HeightOnly_MetaData[];
#endif
		static void NewProp_bCheckIfFloating_HeightOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckIfFloating_HeightOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightGraphOutputName_HeightOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightGraphOutputName_HeightOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfiniteGenerationDistance_MetaData[];
#endif
		static void NewProp_bInfiniteGenerationDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfiniteGenerationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RandomGenerator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RandomGenerator_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenerationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceBetweenInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFoliageSpawnSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfCovered_HeightOnly_MetaData[] = {
		{ "Category", "Spawn|Height" },
		{ "Comment", "// If true, will not spawn height instances if they are now covered due to user edits or additional 3D noise in the generator\n" },
		{ "DisplayName", "Check If Covered (height only)" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
		{ "ToolTip", "If true, will not spawn height instances if they are now covered due to user edits or additional 3D noise in the generator" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfCovered_HeightOnly_SetBit(void* Obj)
	{
		((FVoxelFoliageSpawnSettings*)Obj)->bCheckIfCovered_HeightOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfCovered_HeightOnly = { "bCheckIfCovered_HeightOnly", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelFoliageSpawnSettings), &Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfCovered_HeightOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfCovered_HeightOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfCovered_HeightOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfFloating_HeightOnly_MetaData[] = {
		{ "Category", "Spawn|Height" },
		{ "Comment", "// If true, will not spawn height instances if they are now floating due to user edits or additional 3D noise in the generator\n" },
		{ "DisplayName", "Check If Floating (height only)" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
		{ "ToolTip", "If true, will not spawn height instances if they are now floating due to user edits or additional 3D noise in the generator" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfFloating_HeightOnly_SetBit(void* Obj)
	{
		((FVoxelFoliageSpawnSettings*)Obj)->bCheckIfFloating_HeightOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfFloating_HeightOnly = { "bCheckIfFloating_HeightOnly", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelFoliageSpawnSettings), &Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfFloating_HeightOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfFloating_HeightOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfFloating_HeightOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_HeightGraphOutputName_HeightOnly_MetaData[] = {
		{ "Category", "Spawn|Height" },
		{ "Comment", "// The name of the custom graph output used to determine the height\n" },
		{ "DisplayName", "Height Graph Output Name (height only)" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
		{ "ToolTip", "The name of the custom graph output used to determine the height" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_HeightGraphOutputName_HeightOnly = { "HeightGraphOutputName_HeightOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageSpawnSettings, HeightGraphOutputName_HeightOnly), Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_HeightGraphOutputName_HeightOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_HeightGraphOutputName_HeightOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bInfiniteGenerationDistance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "// Will spawn foliage on the entire map, with no distance limit\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
		{ "ToolTip", "Will spawn foliage on the entire map, with no distance limit" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bInfiniteGenerationDistance_SetBit(void* Obj)
	{
		((FVoxelFoliageSpawnSettings*)Obj)->bInfiniteGenerationDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bInfiniteGenerationDistance = { "bInfiniteGenerationDistance", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelFoliageSpawnSettings), &Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bInfiniteGenerationDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bInfiniteGenerationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bInfiniteGenerationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_RandomGenerator_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "// Controls the spawning pattern\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
		{ "ToolTip", "Controls the spawning pattern" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_RandomGenerator = { "RandomGenerator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageSpawnSettings, RandomGenerator), Z_Construct_UEnum_Voxel_EVoxelFoliageRandomGenerator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_RandomGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_RandomGenerator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_RandomGenerator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_GenerationDistance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "// Generation distance\n" },
		{ "DisplayName", "Generation Distance" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
		{ "ToolTip", "Generation distance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_GenerationDistance = { "GenerationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageSpawnSettings, GenerationDistance), Z_Construct_UScriptStruct_FVoxelDistance, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_GenerationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_GenerationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_ChunkSize_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "32" },
		{ "Comment", "// Chunk size\n// SpawnType = Height: make that as big as possible\n// SpawnType = Ray: bigger values will improve performance at the cost of accuracy, as a lower resolution mesh will be used\n" },
		{ "DisplayName", "Chunk Size" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
		{ "ToolTip", "Chunk size\nSpawnType = Height: make that as big as possible\nSpawnType = Ray: bigger values will improve performance at the cost of accuracy, as a lower resolution mesh will be used" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageSpawnSettings, ChunkSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_ChunkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_ChunkSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_DistanceBetweenInstances_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "// Average distance between the instances\n// Num Instances = Area in voxels / Square(DistanceBetweenInstancesInVoxel)\n// Not a density because the values would be too small to store in a float\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
		{ "ToolTip", "Average distance between the instances\nNum Instances = Area in voxels / Square(DistanceBetweenInstancesInVoxel)\nNot a density because the values would be too small to store in a float" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_DistanceBetweenInstances = { "DistanceBetweenInstances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageSpawnSettings, DistanceBetweenInstances), Z_Construct_UScriptStruct_FVoxelDistance, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_DistanceBetweenInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_DistanceBetweenInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_SpawnType_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageSpawnSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_SpawnType = { "SpawnType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageSpawnSettings, SpawnType), Z_Construct_UEnum_Voxel_EVoxelFoliageSpawnType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_SpawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_SpawnType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_SpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfCovered_HeightOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bCheckIfFloating_HeightOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_HeightGraphOutputName_HeightOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_bInfiniteGenerationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_RandomGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_RandomGenerator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_GenerationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_ChunkSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_DistanceBetweenInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_SpawnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::NewProp_SpawnType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFoliageSpawnSettings",
		sizeof(FVoxelFoliageSpawnSettings),
		alignof(FVoxelFoliageSpawnSettings),
		Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFoliageSpawnSettings"), sizeof(FVoxelFoliageSpawnSettings), Get_Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Hash() { return 1945101764U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
