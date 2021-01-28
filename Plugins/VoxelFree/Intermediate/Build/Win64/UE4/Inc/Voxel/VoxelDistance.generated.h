// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelDistance_generated_h
#error "VoxelDistance.generated.h already included, missing '#pragma once' in VoxelDistance.h"
#endif
#define VOXEL_VoxelDistance_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDistance_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelDistance_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelDistance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDistance_h


#define FOREACH_ENUM_EVOXELDISTANCETYPE(op) \
	op(EVoxelDistanceType::Voxels) \
	op(EVoxelDistanceType::Centimeters) 

enum class EVoxelDistanceType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelDistanceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
