// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelGeneratorPicker_generated_h
#error "VoxelGeneratorPicker.generated.h already included, missing '#pragma once' in VoxelGeneratorPicker.h"
#endif
#define VOXEL_VoxelGeneratorPicker_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelTransformableGeneratorPicker>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelGeneratorPicker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h


#define FOREACH_ENUM_EVOXELGENERATORPICKERTYPE(op) \
	op(EVoxelGeneratorPickerType::Class) \
	op(EVoxelGeneratorPickerType::Object) 

enum class EVoxelGeneratorPickerType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorPickerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
