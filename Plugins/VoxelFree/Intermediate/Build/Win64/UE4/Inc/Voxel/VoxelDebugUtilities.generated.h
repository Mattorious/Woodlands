// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
enum class EVoxelDataType : uint8;
struct FColor;
struct FVoxelIntBox;
struct FLinearColor;
struct FTransform;
#ifdef VOXEL_VoxelDebugUtilities_generated_h
#error "VoxelDebugUtilities.generated.h already included, missing '#pragma once' in VoxelDebugUtilities.h"
#endif
#define VOXEL_VoxelDebugUtilities_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawDataOctree); \
	DECLARE_FUNCTION(execDebugVoxelsInsideBounds); \
	DECLARE_FUNCTION(execDrawDebugIntBox);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawDataOctree); \
	DECLARE_FUNCTION(execDebugVoxelsInsideBounds); \
	DECLARE_FUNCTION(execDrawDebugIntBox);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelDebugUtilities(); \
	friend struct Z_Construct_UClass_UVoxelDebugUtilities_Statics; \
public: \
	DECLARE_CLASS(UVoxelDebugUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelDebugUtilities)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelDebugUtilities(); \
	friend struct Z_Construct_UClass_UVoxelDebugUtilities_Statics; \
public: \
	DECLARE_CLASS(UVoxelDebugUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelDebugUtilities)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelDebugUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelDebugUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDebugUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDebugUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelDebugUtilities(UVoxelDebugUtilities&&); \
	NO_API UVoxelDebugUtilities(const UVoxelDebugUtilities&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelDebugUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelDebugUtilities(UVoxelDebugUtilities&&); \
	NO_API UVoxelDebugUtilities(const UVoxelDebugUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDebugUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDebugUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelDebugUtilities)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_16_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelDebugUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
