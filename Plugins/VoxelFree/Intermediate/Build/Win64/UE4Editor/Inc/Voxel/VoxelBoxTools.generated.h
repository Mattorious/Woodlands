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
struct FVoxelPaintMaterial;
struct FModifiedVoxelValue;
#ifdef VOXEL_VoxelBoxTools_generated_h
#error "VoxelBoxTools.generated.h already included, missing '#pragma once' in VoxelBoxTools.h"
#endif
#define VOXEL_VoxelBoxTools_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaterialBoxAsync); \
	DECLARE_FUNCTION(execSetMaterialBox); \
	DECLARE_FUNCTION(execRemoveBoxAsync); \
	DECLARE_FUNCTION(execRemoveBox); \
	DECLARE_FUNCTION(execAddBoxAsync); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execSetValueBoxAsync); \
	DECLARE_FUNCTION(execSetValueBox);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterialBoxAsync); \
	DECLARE_FUNCTION(execSetMaterialBox); \
	DECLARE_FUNCTION(execRemoveBoxAsync); \
	DECLARE_FUNCTION(execRemoveBox); \
	DECLARE_FUNCTION(execAddBoxAsync); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execSetValueBoxAsync); \
	DECLARE_FUNCTION(execSetValueBox);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelBoxTools(); \
	friend struct Z_Construct_UClass_UVoxelBoxTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelBoxTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBoxTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelBoxTools(); \
	friend struct Z_Construct_UClass_UVoxelBoxTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelBoxTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBoxTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBoxTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBoxTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBoxTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBoxTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBoxTools(UVoxelBoxTools&&); \
	NO_API UVoxelBoxTools(const UVoxelBoxTools&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBoxTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBoxTools(UVoxelBoxTools&&); \
	NO_API UVoxelBoxTools(const UVoxelBoxTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBoxTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBoxTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBoxTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_9_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelBoxTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
