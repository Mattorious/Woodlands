// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
struct FVoxelSurfaceEditsProcessedVoxels;
struct FVector;
enum class EVoxelSDFMergeMode : uint8;
struct FVoxelSurfaceEditsStackElement;
struct FVoxelFloatTexture;
enum class EVoxelSamplerMode : uint8;
enum class EVoxelFalloff : uint8;
class UCurveFloat;
struct FVoxelIntBox;
class UObject;
struct FLatentActionInfo;
struct FVoxelSurfaceEditsVoxels;
struct FVoxelSurfaceEditsStack;
enum class EVoxelComputeDevice : uint8;
#ifdef VOXEL_VoxelSurfaceTools_generated_h
#error "VoxelSurfaceTools.generated.h already included, missing '#pragma once' in VoxelSurfaceTools.h"
#endif
#define VOXEL_VoxelSurfaceTools_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugSurfaceVoxels); \
	DECLARE_FUNCTION(execApplyFlatten); \
	DECLARE_FUNCTION(execApplyTerrace); \
	DECLARE_FUNCTION(execGetStrengthMaskScale); \
	DECLARE_FUNCTION(execApplyStrengthMask); \
	DECLARE_FUNCTION(execApplyFalloff); \
	DECLARE_FUNCTION(execApplyStrengthCurve); \
	DECLARE_FUNCTION(execApplyConstantStrength); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execApplyStackAsync); \
	DECLARE_FUNCTION(execApplyStack); \
	DECLARE_FUNCTION(execAddToStack); \
	DECLARE_FUNCTION(execFindSurfaceVoxels2DAsync); \
	DECLARE_FUNCTION(execFindSurfaceVoxels2D); \
	DECLARE_FUNCTION(execFindSurfaceVoxelsFromDistanceField); \
	DECLARE_FUNCTION(execFindSurfaceVoxelsAsync); \
	DECLARE_FUNCTION(execFindSurfaceVoxels);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugSurfaceVoxels); \
	DECLARE_FUNCTION(execApplyFlatten); \
	DECLARE_FUNCTION(execApplyTerrace); \
	DECLARE_FUNCTION(execGetStrengthMaskScale); \
	DECLARE_FUNCTION(execApplyStrengthMask); \
	DECLARE_FUNCTION(execApplyFalloff); \
	DECLARE_FUNCTION(execApplyStrengthCurve); \
	DECLARE_FUNCTION(execApplyConstantStrength); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execApplyStackAsync); \
	DECLARE_FUNCTION(execApplyStack); \
	DECLARE_FUNCTION(execAddToStack); \
	DECLARE_FUNCTION(execFindSurfaceVoxels2DAsync); \
	DECLARE_FUNCTION(execFindSurfaceVoxels2D); \
	DECLARE_FUNCTION(execFindSurfaceVoxelsFromDistanceField); \
	DECLARE_FUNCTION(execFindSurfaceVoxelsAsync); \
	DECLARE_FUNCTION(execFindSurfaceVoxels);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSurfaceTools(); \
	friend struct Z_Construct_UClass_UVoxelSurfaceTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelSurfaceTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSurfaceTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelSurfaceTools(); \
	friend struct Z_Construct_UClass_UVoxelSurfaceTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelSurfaceTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSurfaceTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSurfaceTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSurfaceTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSurfaceTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSurfaceTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSurfaceTools(UVoxelSurfaceTools&&); \
	NO_API UVoxelSurfaceTools(const UVoxelSurfaceTools&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSurfaceTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSurfaceTools(UVoxelSurfaceTools&&); \
	NO_API UVoxelSurfaceTools(const UVoxelSurfaceTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSurfaceTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSurfaceTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSurfaceTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_33_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelSurfaceTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h


#define FOREACH_ENUM_EVOXELSDFMERGEMODE(op) \
	op(EVoxelSDFMergeMode::Union) \
	op(EVoxelSDFMergeMode::Intersection) \
	op(EVoxelSDFMergeMode::Override) 

enum class EVoxelSDFMergeMode : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelSDFMergeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
