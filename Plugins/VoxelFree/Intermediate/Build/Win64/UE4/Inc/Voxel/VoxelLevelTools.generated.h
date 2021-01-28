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
#ifdef VOXEL_VoxelLevelTools_generated_h
#error "VoxelLevelTools.generated.h already included, missing '#pragma once' in VoxelLevelTools.h"
#endif
#define VOXEL_VoxelLevelTools_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLevelAsync); \
	DECLARE_FUNCTION(execLevel);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLevelAsync); \
	DECLARE_FUNCTION(execLevel);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelLevelTools(); \
	friend struct Z_Construct_UClass_UVoxelLevelTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelLevelTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelLevelTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelLevelTools(); \
	friend struct Z_Construct_UClass_UVoxelLevelTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelLevelTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelLevelTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelLevelTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelLevelTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelLevelTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelLevelTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelLevelTools(UVoxelLevelTools&&); \
	NO_API UVoxelLevelTools(const UVoxelLevelTools&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelLevelTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelLevelTools(UVoxelLevelTools&&); \
	NO_API UVoxelLevelTools(const UVoxelLevelTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelLevelTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelLevelTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelLevelTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_9_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelLevelTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
