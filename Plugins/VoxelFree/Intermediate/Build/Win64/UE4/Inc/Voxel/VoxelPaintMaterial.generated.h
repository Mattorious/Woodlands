// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelPaintMaterial_generated_h
#error "VoxelPaintMaterial.generated.h already included, missing '#pragma once' in VoxelPaintMaterial.h"
#endif
#define VOXEL_VoxelPaintMaterial_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPaintMaterial>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPaintMaterialUV>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPaintMaterialMultiIndexRaw>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPaintMaterialMultiIndexWetness>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPaintMaterialMultiIndex>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPaintMaterialSingleIndex>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPaintMaterialFiveWayBlend>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPaintMaterialColor>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPaintMaterial_MaterialCollectionChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h


#define FOREACH_ENUM_EVOXELPAINTMATERIALTYPE(op) \
	op(EVoxelPaintMaterialType::Color) \
	op(EVoxelPaintMaterialType::FiveWayBlend) \
	op(EVoxelPaintMaterialType::SingleIndex) \
	op(EVoxelPaintMaterialType::MultiIndex) \
	op(EVoxelPaintMaterialType::MultiIndexWetness) \
	op(EVoxelPaintMaterialType::MultiIndexRaw) \
	op(EVoxelPaintMaterialType::UV) 

enum class EVoxelPaintMaterialType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelPaintMaterialType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
