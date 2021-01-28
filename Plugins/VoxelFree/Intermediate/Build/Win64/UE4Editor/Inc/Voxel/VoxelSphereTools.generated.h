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
struct FModifiedVoxelValue;
struct FVoxelIntBox;
class AVoxelWorld;
struct FVector;
struct FModifiedVoxelMaterial;
enum class EVoxelFalloff : uint8;
struct FVoxelPaintMaterial;
#ifdef VOXEL_VoxelSphereTools_generated_h
#error "VoxelSphereTools.generated.h already included, missing '#pragma once' in VoxelSphereTools.h"
#endif
#define VOXEL_VoxelSphereTools_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRevertSphereToGeneratorAsync); \
	DECLARE_FUNCTION(execRevertSphereToGenerator); \
	DECLARE_FUNCTION(execRevertSphereAsync); \
	DECLARE_FUNCTION(execRevertSphere); \
	DECLARE_FUNCTION(execTrimSphereAsync); \
	DECLARE_FUNCTION(execTrimSphere); \
	DECLARE_FUNCTION(execSmoothMaterialSphereAsync); \
	DECLARE_FUNCTION(execSmoothMaterialSphere); \
	DECLARE_FUNCTION(execSmoothSphereAsync); \
	DECLARE_FUNCTION(execSmoothSphere); \
	DECLARE_FUNCTION(execApplyMaterialKernelSphereAsync); \
	DECLARE_FUNCTION(execApplyMaterialKernelSphere); \
	DECLARE_FUNCTION(execApplyKernelSphereAsync); \
	DECLARE_FUNCTION(execApplyKernelSphere); \
	DECLARE_FUNCTION(execSetMaterialSphereAsync); \
	DECLARE_FUNCTION(execSetMaterialSphere); \
	DECLARE_FUNCTION(execAddSphereAsync); \
	DECLARE_FUNCTION(execAddSphere); \
	DECLARE_FUNCTION(execRemoveSphereAsync); \
	DECLARE_FUNCTION(execRemoveSphere); \
	DECLARE_FUNCTION(execSetValueSphereAsync); \
	DECLARE_FUNCTION(execSetValueSphere);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRevertSphereToGeneratorAsync); \
	DECLARE_FUNCTION(execRevertSphereToGenerator); \
	DECLARE_FUNCTION(execRevertSphereAsync); \
	DECLARE_FUNCTION(execRevertSphere); \
	DECLARE_FUNCTION(execTrimSphereAsync); \
	DECLARE_FUNCTION(execTrimSphere); \
	DECLARE_FUNCTION(execSmoothMaterialSphereAsync); \
	DECLARE_FUNCTION(execSmoothMaterialSphere); \
	DECLARE_FUNCTION(execSmoothSphereAsync); \
	DECLARE_FUNCTION(execSmoothSphere); \
	DECLARE_FUNCTION(execApplyMaterialKernelSphereAsync); \
	DECLARE_FUNCTION(execApplyMaterialKernelSphere); \
	DECLARE_FUNCTION(execApplyKernelSphereAsync); \
	DECLARE_FUNCTION(execApplyKernelSphere); \
	DECLARE_FUNCTION(execSetMaterialSphereAsync); \
	DECLARE_FUNCTION(execSetMaterialSphere); \
	DECLARE_FUNCTION(execAddSphereAsync); \
	DECLARE_FUNCTION(execAddSphere); \
	DECLARE_FUNCTION(execRemoveSphereAsync); \
	DECLARE_FUNCTION(execRemoveSphere); \
	DECLARE_FUNCTION(execSetValueSphereAsync); \
	DECLARE_FUNCTION(execSetValueSphere);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSphereTools(); \
	friend struct Z_Construct_UClass_UVoxelSphereTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelSphereTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSphereTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelSphereTools(); \
	friend struct Z_Construct_UClass_UVoxelSphereTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelSphereTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSphereTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSphereTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSphereTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSphereTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSphereTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSphereTools(UVoxelSphereTools&&); \
	NO_API UVoxelSphereTools(const UVoxelSphereTools&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSphereTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSphereTools(UVoxelSphereTools&&); \
	NO_API UVoxelSphereTools(const UVoxelSphereTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSphereTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSphereTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSphereTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_9_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelSphereTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
