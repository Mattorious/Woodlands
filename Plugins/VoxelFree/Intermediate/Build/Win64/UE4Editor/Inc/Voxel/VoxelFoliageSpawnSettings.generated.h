// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelFoliageSpawnSettings_generated_h
#error "VoxelFoliageSpawnSettings.generated.h already included, missing '#pragma once' in VoxelFoliageSpawnSettings.h"
#endif
#define VOXEL_VoxelFoliageSpawnSettings_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelFoliage_VoxelFoliageSpawnSettings_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelFoliageSpawnSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelFoliage_VoxelFoliageSpawnSettings_h


#define FOREACH_ENUM_EVOXELFOLIAGERANDOMGENERATOR(op) \
	op(EVoxelFoliageRandomGenerator::Sobol) \
	op(EVoxelFoliageRandomGenerator::Halton) 

enum class EVoxelFoliageRandomGenerator : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageRandomGenerator>();

#define FOREACH_ENUM_EVOXELFOLIAGESPAWNTYPE(op) \
	op(EVoxelFoliageSpawnType::Ray) \
	op(EVoxelFoliageSpawnType::Height) 

enum class EVoxelFoliageSpawnType;
template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageSpawnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
