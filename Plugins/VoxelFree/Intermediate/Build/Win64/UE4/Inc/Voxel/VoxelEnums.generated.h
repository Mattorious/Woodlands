// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelEnums_generated_h
#error "VoxelEnums.generated.h already included, missing '#pragma once' in VoxelEnums.h"
#endif
#define VOXEL_VoxelEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelEnums_h


#define FOREACH_ENUM_EVOXELCUBICFACE(op) \
	op(EVoxelCubicFace::Back) \
	op(EVoxelCubicFace::Front) \
	op(EVoxelCubicFace::Left) \
	op(EVoxelCubicFace::Right) \
	op(EVoxelCubicFace::Bottom) \
	op(EVoxelCubicFace::Top) 

enum class EVoxelCubicFace : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelCubicFace>();

#define FOREACH_ENUM_EVOXELFOLIAGEWORLDTYPE(op) \
	op(EVoxelFoliageWorldType::Flat) \
	op(EVoxelFoliageWorldType::Planet) 

enum class EVoxelFoliageWorldType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageWorldType>();

#define FOREACH_ENUM_EVOXELTASKTYPE(op) \
	op(EVoxelTaskType::ChunksMeshing) \
	op(EVoxelTaskType::CollisionsChunksMeshing) \
	op(EVoxelTaskType::VisibleChunksMeshing) \
	op(EVoxelTaskType::VisibleCollisionsChunksMeshing) \
	op(EVoxelTaskType::CollisionCooking) \
	op(EVoxelTaskType::FoliageBuild) \
	op(EVoxelTaskType::HISMBuild) \
	op(EVoxelTaskType::AsyncEditFunctions) \
	op(EVoxelTaskType::MeshMerge) \
	op(EVoxelTaskType::RenderOctree) \
	op(EVoxelTaskType::Max) 

enum class EVoxelTaskType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelTaskType>();

#define FOREACH_ENUM_EVOXELDATAITEMCOMBINEMODE(op) \
	op(EVoxelDataItemCombineMode::Min) \
	op(EVoxelDataItemCombineMode::Max) \
	op(EVoxelDataItemCombineMode::Sum) 

enum class EVoxelDataItemCombineMode;
template<> VOXEL_API UEnum* StaticEnum<EVoxelDataItemCombineMode>();

#define FOREACH_ENUM_EVOXEL32BITMASK(op) \
	op(EVoxel32BitMask::Channel0) \
	op(EVoxel32BitMask::Channel1) \
	op(EVoxel32BitMask::Channel2) \
	op(EVoxel32BitMask::Channel3) \
	op(EVoxel32BitMask::Channel4) \
	op(EVoxel32BitMask::Channel5) \
	op(EVoxel32BitMask::Channel6) \
	op(EVoxel32BitMask::Channel7) \
	op(EVoxel32BitMask::Channel8) \
	op(EVoxel32BitMask::Channel9) \
	op(EVoxel32BitMask::Channel10) \
	op(EVoxel32BitMask::Channel11) \
	op(EVoxel32BitMask::Channel12) \
	op(EVoxel32BitMask::Channel13) \
	op(EVoxel32BitMask::Channel14) \
	op(EVoxel32BitMask::Channel15) \
	op(EVoxel32BitMask::Channel16) \
	op(EVoxel32BitMask::Channel17) \
	op(EVoxel32BitMask::Channel18) \
	op(EVoxel32BitMask::Channel19) \
	op(EVoxel32BitMask::Channel20) \
	op(EVoxel32BitMask::Channel21) \
	op(EVoxel32BitMask::Channel22) \
	op(EVoxel32BitMask::Channel23) \
	op(EVoxel32BitMask::Channel24) \
	op(EVoxel32BitMask::Channel25) \
	op(EVoxel32BitMask::Channel26) \
	op(EVoxel32BitMask::Channel27) \
	op(EVoxel32BitMask::Channel28) \
	op(EVoxel32BitMask::Channel29) \
	op(EVoxel32BitMask::Channel30) \
	op(EVoxel32BitMask::Channel31) 

enum class EVoxel32BitMask : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxel32BitMask>();

#define FOREACH_ENUM_EVOXELAXIS(op) \
	op(EVoxelAxis::X) \
	op(EVoxelAxis::Y) \
	op(EVoxelAxis::Z) 

enum class EVoxelAxis : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelAxis>();

#define FOREACH_ENUM_EVOXELCOMPUTEDEVICE(op) \
	op(EVoxelComputeDevice::CPU) \
	op(EVoxelComputeDevice::GPU) 

enum class EVoxelComputeDevice : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelComputeDevice>();

#define FOREACH_ENUM_EVOXELFALLOFF(op) \
	op(EVoxelFalloff::Linear) \
	op(EVoxelFalloff::Smooth) \
	op(EVoxelFalloff::Spherical) \
	op(EVoxelFalloff::Tip) 

enum class EVoxelFalloff : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelFalloff>();

#define FOREACH_ENUM_EVOXELRGBHARDNESS(op) \
	op(EVoxelRGBHardness::FourWayBlend) \
	op(EVoxelRGBHardness::FiveWayBlend) \
	op(EVoxelRGBHardness::R) \
	op(EVoxelRGBHardness::G) \
	op(EVoxelRGBHardness::B) \
	op(EVoxelRGBHardness::A) \
	op(EVoxelRGBHardness::U0) \
	op(EVoxelRGBHardness::U1) \
	op(EVoxelRGBHardness::V0) \
	op(EVoxelRGBHardness::V1) 

enum class EVoxelRGBHardness : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBHardness>();

#define FOREACH_ENUM_EVOXELDATATYPE(op) \
	op(EVoxelDataType::Values) \
	op(EVoxelDataType::Materials) 

enum class EVoxelDataType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelDataType>();

#define FOREACH_ENUM_EVOXELSAMPLERMODE(op) \
	op(EVoxelSamplerMode::Clamp) \
	op(EVoxelSamplerMode::Tile) 

enum class EVoxelSamplerMode : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelSamplerMode>();

#define FOREACH_ENUM_EVOXELSPAWNERACTORSPAWNTYPE(op) \
	op(EVoxelSpawnerActorSpawnType::All) \
	op(EVoxelSpawnerActorSpawnType::OnlyFloating) 

enum class EVoxelSpawnerActorSpawnType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerActorSpawnType>();

#define FOREACH_ENUM_EVOXELRGBA(op) \
	op(EVoxelRGBA::R) \
	op(EVoxelRGBA::G) \
	op(EVoxelRGBA::B) \
	op(EVoxelRGBA::A) 

enum class EVoxelRGBA : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBA>();

#define FOREACH_ENUM_EVOXELUVCONFIG(op) \
	op(EVoxelUVConfig::GlobalUVs) \
	op(EVoxelUVConfig::PackWorldUpInUVs) \
	op(EVoxelUVConfig::PerVoxelUVs) \
	op(EVoxelUVConfig::Max) 

enum class EVoxelUVConfig : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelUVConfig>();

#define FOREACH_ENUM_EVOXELMATERIALCONFIG(op) \
	op(EVoxelMaterialConfig::RGB) \
	op(EVoxelMaterialConfig::SingleIndex) \
	op(EVoxelMaterialConfig::DoubleIndex_DEPRECATED) \
	op(EVoxelMaterialConfig::MultiIndex) 

enum class EVoxelMaterialConfig : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelMaterialConfig>();

#define FOREACH_ENUM_EVOXELNORMALCONFIG(op) \
	op(EVoxelNormalConfig::NoNormal) \
	op(EVoxelNormalConfig::GradientNormal) \
	op(EVoxelNormalConfig::FlatNormal) \
	op(EVoxelNormalConfig::MeshNormal) 

enum class EVoxelNormalConfig : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelNormalConfig>();

#define FOREACH_ENUM_EVOXELRENDERTYPE(op) \
	op(EVoxelRenderType::MarchingCubes) \
	op(EVoxelRenderType::Cubic) \
	op(EVoxelRenderType::SurfaceNets) 

enum class EVoxelRenderType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelRenderType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
