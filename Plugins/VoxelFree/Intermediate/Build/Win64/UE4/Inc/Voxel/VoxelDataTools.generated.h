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
struct FVoxelFindClosestNonEmptyVoxelResult;
class AVoxelWorld;
struct FVector;
struct FVoxelIntBox;
class UVoxelHeightmapAsset;
struct FVoxelDataMemoryUsageInMB;
struct FVoxelValueMaterial;
struct FIntVector;
struct FVoxelCompressedWorldSave;
struct FVoxelUncompressedWorldSave;
struct FVoxelMaterial;
#ifdef VOXEL_VoxelDataTools_generated_h
#error "VoxelDataTools.generated.h already included, missing '#pragma once' in VoxelDataTools.h"
#endif
#define VOXEL_VoxelDataTools_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelFindClosestNonEmptyVoxelResult>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelDataMemoryUsageInMB>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelValueMaterial>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindClosestNonEmptyVoxelAsync); \
	DECLARE_FUNCTION(execFindClosestNonEmptyVoxel); \
	DECLARE_FUNCTION(execSetBoxAsDirtyAsync); \
	DECLARE_FUNCTION(execSetBoxAsDirty); \
	DECLARE_FUNCTION(execCheckIfSameAsGeneratorAsync); \
	DECLARE_FUNCTION(execCheckIfSameAsGenerator); \
	DECLARE_FUNCTION(execRoundToGeneratorAsync); \
	DECLARE_FUNCTION(execRoundToGenerator); \
	DECLARE_FUNCTION(execCompressIntoHeightmap); \
	DECLARE_FUNCTION(execCheckForSingleMaterialsAsync); \
	DECLARE_FUNCTION(execCheckForSingleMaterials); \
	DECLARE_FUNCTION(execCheckForSingleValuesAsync); \
	DECLARE_FUNCTION(execCheckForSingleValues); \
	DECLARE_FUNCTION(execClearCachedMaterialsAsync); \
	DECLARE_FUNCTION(execClearCachedMaterials); \
	DECLARE_FUNCTION(execClearCachedValuesAsync); \
	DECLARE_FUNCTION(execClearCachedValues); \
	DECLARE_FUNCTION(execGetDataMemoryUsageInMB); \
	DECLARE_FUNCTION(execGetVoxelsValueAndMaterialAsync); \
	DECLARE_FUNCTION(execGetVoxelsValueAndMaterial); \
	DECLARE_FUNCTION(execClearUnusedMaterialsAsync); \
	DECLARE_FUNCTION(execClearUnusedMaterials); \
	DECLARE_FUNCTION(execRoundVoxelsAsync); \
	DECLARE_FUNCTION(execRoundVoxels); \
	DECLARE_FUNCTION(execLoadFromCompressedSave); \
	DECLARE_FUNCTION(execLoadFromSave); \
	DECLARE_FUNCTION(execGetCompressedSaveAsync); \
	DECLARE_FUNCTION(execGetSaveAsync); \
	DECLARE_FUNCTION(execGetCompressedSave); \
	DECLARE_FUNCTION(execGetSave); \
	DECLARE_FUNCTION(execCacheMaterialsAsync); \
	DECLARE_FUNCTION(execCacheValuesAsync); \
	DECLARE_FUNCTION(execSetMaterialAsync); \
	DECLARE_FUNCTION(execGetMaterialAsync); \
	DECLARE_FUNCTION(execSetValueAsync); \
	DECLARE_FUNCTION(execGetValueAsync); \
	DECLARE_FUNCTION(execCacheMaterials); \
	DECLARE_FUNCTION(execCacheValues); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetInterpolatedValue); \
	DECLARE_FUNCTION(execGetValue);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindClosestNonEmptyVoxelAsync); \
	DECLARE_FUNCTION(execFindClosestNonEmptyVoxel); \
	DECLARE_FUNCTION(execSetBoxAsDirtyAsync); \
	DECLARE_FUNCTION(execSetBoxAsDirty); \
	DECLARE_FUNCTION(execCheckIfSameAsGeneratorAsync); \
	DECLARE_FUNCTION(execCheckIfSameAsGenerator); \
	DECLARE_FUNCTION(execRoundToGeneratorAsync); \
	DECLARE_FUNCTION(execRoundToGenerator); \
	DECLARE_FUNCTION(execCompressIntoHeightmap); \
	DECLARE_FUNCTION(execCheckForSingleMaterialsAsync); \
	DECLARE_FUNCTION(execCheckForSingleMaterials); \
	DECLARE_FUNCTION(execCheckForSingleValuesAsync); \
	DECLARE_FUNCTION(execCheckForSingleValues); \
	DECLARE_FUNCTION(execClearCachedMaterialsAsync); \
	DECLARE_FUNCTION(execClearCachedMaterials); \
	DECLARE_FUNCTION(execClearCachedValuesAsync); \
	DECLARE_FUNCTION(execClearCachedValues); \
	DECLARE_FUNCTION(execGetDataMemoryUsageInMB); \
	DECLARE_FUNCTION(execGetVoxelsValueAndMaterialAsync); \
	DECLARE_FUNCTION(execGetVoxelsValueAndMaterial); \
	DECLARE_FUNCTION(execClearUnusedMaterialsAsync); \
	DECLARE_FUNCTION(execClearUnusedMaterials); \
	DECLARE_FUNCTION(execRoundVoxelsAsync); \
	DECLARE_FUNCTION(execRoundVoxels); \
	DECLARE_FUNCTION(execLoadFromCompressedSave); \
	DECLARE_FUNCTION(execLoadFromSave); \
	DECLARE_FUNCTION(execGetCompressedSaveAsync); \
	DECLARE_FUNCTION(execGetSaveAsync); \
	DECLARE_FUNCTION(execGetCompressedSave); \
	DECLARE_FUNCTION(execGetSave); \
	DECLARE_FUNCTION(execCacheMaterialsAsync); \
	DECLARE_FUNCTION(execCacheValuesAsync); \
	DECLARE_FUNCTION(execSetMaterialAsync); \
	DECLARE_FUNCTION(execGetMaterialAsync); \
	DECLARE_FUNCTION(execSetValueAsync); \
	DECLARE_FUNCTION(execGetValueAsync); \
	DECLARE_FUNCTION(execCacheMaterials); \
	DECLARE_FUNCTION(execCacheValues); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetInterpolatedValue); \
	DECLARE_FUNCTION(execGetValue);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelDataTools(); \
	friend struct Z_Construct_UClass_UVoxelDataTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelDataTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelDataTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelDataTools(); \
	friend struct Z_Construct_UClass_UVoxelDataTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelDataTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelDataTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelDataTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelDataTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDataTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDataTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelDataTools(UVoxelDataTools&&); \
	NO_API UVoxelDataTools(const UVoxelDataTools&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelDataTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelDataTools(UVoxelDataTools&&); \
	NO_API UVoxelDataTools(const UVoxelDataTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDataTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDataTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelDataTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_71_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelDataTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelDataTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
