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
class IVoxelPhysicsPartSpawnerResult;
class AVoxelWorld;
struct FVoxelIntBox;
class IVoxelPhysicsPartSpawner;
#ifdef VOXEL_VoxelPhysics_generated_h
#error "VoxelPhysics.generated.h already included, missing '#pragma once' in VoxelPhysics.h"
#endif
#define VOXEL_VoxelPhysics_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyVoxelPhysics);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyVoxelPhysics);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsTools(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsTools(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsTools(UVoxelPhysicsTools&&); \
	NO_API UVoxelPhysicsTools(const UVoxelPhysicsTools&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsTools(UVoxelPhysicsTools&&); \
	NO_API UVoxelPhysicsTools(const UVoxelPhysicsTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_16_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelPhysicsTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
