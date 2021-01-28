// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelCoordinatesProvider_generated_h
#error "VoxelCoordinatesProvider.generated.h already included, missing '#pragma once' in VoxelCoordinatesProvider.h"
#endif
#define VOXEL_VoxelCoordinatesProvider_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelCoordinatesProvider_h


#define FOREACH_ENUM_EVOXELWORLDCOORDINATESROUNDING(op) \
	op(EVoxelWorldCoordinatesRounding::RoundToNearest) \
	op(EVoxelWorldCoordinatesRounding::RoundUp) \
	op(EVoxelWorldCoordinatesRounding::RoundDown) 

enum class EVoxelWorldCoordinatesRounding : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelWorldCoordinatesRounding>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
