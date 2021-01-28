// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
struct FModifiedVoxelMaterial;
struct FVoxelIntBox;
class AVoxelWorld;
struct FVoxelSurfaceEditsProcessedVoxels;
struct FVoxelPaintMaterial;
struct FModifiedVoxelValue;
#ifdef VOXEL_VoxelSurfaceEditTools_generated_h
#error "VoxelSurfaceEditTools.generated.h already included, missing '#pragma once' in VoxelSurfaceEditTools.h"
#endif
#define VOXEL_VoxelSurfaceEditTools_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPropagateVoxelMaterialsAsync); \
	DECLARE_FUNCTION(execPropagateVoxelMaterials); \
	DECLARE_FUNCTION(execEditVoxelMaterialsAsync); \
	DECLARE_FUNCTION(execEditVoxelMaterials); \
	DECLARE_FUNCTION(execEditVoxelValuesAsync); \
	DECLARE_FUNCTION(execEditVoxelValues);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPropagateVoxelMaterialsAsync); \
	DECLARE_FUNCTION(execPropagateVoxelMaterials); \
	DECLARE_FUNCTION(execEditVoxelMaterialsAsync); \
	DECLARE_FUNCTION(execEditVoxelMaterials); \
	DECLARE_FUNCTION(execEditVoxelValuesAsync); \
	DECLARE_FUNCTION(execEditVoxelValues);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSurfaceEditTools(); \
	friend struct Z_Construct_UClass_UVoxelSurfaceEditTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelSurfaceEditTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSurfaceEditTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelSurfaceEditTools(); \
	friend struct Z_Construct_UClass_UVoxelSurfaceEditTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelSurfaceEditTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSurfaceEditTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSurfaceEditTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSurfaceEditTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSurfaceEditTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSurfaceEditTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSurfaceEditTools(UVoxelSurfaceEditTools&&); \
	NO_API UVoxelSurfaceEditTools(const UVoxelSurfaceEditTools&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSurfaceEditTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSurfaceEditTools(UVoxelSurfaceEditTools&&); \
	NO_API UVoxelSurfaceEditTools(const UVoxelSurfaceEditTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSurfaceEditTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSurfaceEditTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSurfaceEditTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_10_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelSurfaceEditTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
