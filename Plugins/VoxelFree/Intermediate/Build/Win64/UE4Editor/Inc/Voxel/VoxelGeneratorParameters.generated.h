// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelGeneratorParameters_generated_h
#error "VoxelGeneratorParameters.generated.h already included, missing '#pragma once' in VoxelGeneratorParameters.h"
#endif
#define VOXEL_VoxelGeneratorParameters_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelGeneratorParameter>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FVoxelGeneratorParameterTerminalType Super;


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelGeneratorParameterType>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelGeneratorParameterTerminalType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h


#define FOREACH_ENUM_EVOXELGENERATORPARAMETERPROPERTYTYPE(op) \
	op(EVoxelGeneratorParameterPropertyType::Float) \
	op(EVoxelGeneratorParameterPropertyType::Int) \
	op(EVoxelGeneratorParameterPropertyType::Bool) \
	op(EVoxelGeneratorParameterPropertyType::Name) \
	op(EVoxelGeneratorParameterPropertyType::Object) \
	op(EVoxelGeneratorParameterPropertyType::Struct) 

enum class EVoxelGeneratorParameterPropertyType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterPropertyType>();

#define FOREACH_ENUM_EVOXELGENERATORPARAMETERCONTAINERTYPE(op) \
	op(EVoxelGeneratorParameterContainerType::None) \
	op(EVoxelGeneratorParameterContainerType::Array) \
	op(EVoxelGeneratorParameterContainerType::Set) \
	op(EVoxelGeneratorParameterContainerType::Map) 

enum class EVoxelGeneratorParameterContainerType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterContainerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
