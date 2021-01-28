// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelFoliageDensity_generated_h
#error "VoxelFoliageDensity.generated.h already included, missing '#pragma once' in VoxelFoliageDensity.h"
#endif
#define VOXEL_VoxelFoliageDensity_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelFoliage_VoxelFoliageDensity_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelFoliageDensity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelFoliage_VoxelFoliageDensity_h


#define FOREACH_ENUM_EVOXELFOLIAGEDENSITYUVAXIS(op) \
	op(EVoxelFoliageDensityUVAxis::U) \
	op(EVoxelFoliageDensityUVAxis::V) 

enum class EVoxelFoliageDensityUVAxis : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageDensityUVAxis>();

#define FOREACH_ENUM_EVOXELFOLIAGEDENSITYTYPE(op) \
	op(EVoxelFoliageDensityType::Constant) \
	op(EVoxelFoliageDensityType::GeneratorOutput) \
	op(EVoxelFoliageDensityType::MaterialRGBA) \
	op(EVoxelFoliageDensityType::MaterialUVs) \
	op(EVoxelFoliageDensityType::MaterialFiveWayBlend) \
	op(EVoxelFoliageDensityType::SingleIndex) \
	op(EVoxelFoliageDensityType::MultiIndex) 

enum class EVoxelFoliageDensityType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageDensityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
