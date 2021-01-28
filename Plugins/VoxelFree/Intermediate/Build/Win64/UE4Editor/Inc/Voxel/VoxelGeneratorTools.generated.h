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
struct FVoxelColorTexture;
class UVoxelGeneratorInstanceWrapper;
struct FVoxelFloatTexture;
struct FVoxelTransformableGeneratorPicker;
struct FVoxelGeneratorPicker;
class UVoxelTransformableGenerator;
class UVoxelGenerator;
struct FVoxelGeneratorInit;
class UVoxelTransformableGeneratorInstanceWrapper;
#ifdef VOXEL_VoxelGeneratorTools_generated_h
#error "VoxelGeneratorTools.generated.h already included, missing '#pragma once' in VoxelGeneratorTools.h"
#endif
#define VOXEL_VoxelGeneratorTools_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateColorTextureFromGeneratorAsync); \
	DECLARE_FUNCTION(execCreateColorTextureFromGenerator); \
	DECLARE_FUNCTION(execCreateFloatTextureFromGeneratorAsync); \
	DECLARE_FUNCTION(execCreateFloatTextureFromGenerator); \
	DECLARE_FUNCTION(execIsValid_TransformableGeneratorPicker); \
	DECLARE_FUNCTION(execIsValid_GeneratorPicker); \
	DECLARE_FUNCTION(execMakeTransformableGeneratorPickerFromClass); \
	DECLARE_FUNCTION(execMakeGeneratorPickerFromClass); \
	DECLARE_FUNCTION(execMakeTransformableGeneratorPickerFromObject); \
	DECLARE_FUNCTION(execMakeGeneratorPickerFromObject); \
	DECLARE_FUNCTION(execMakeTransformableGeneratorInstance); \
	DECLARE_FUNCTION(execMakeGeneratorInstance);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateColorTextureFromGeneratorAsync); \
	DECLARE_FUNCTION(execCreateColorTextureFromGenerator); \
	DECLARE_FUNCTION(execCreateFloatTextureFromGeneratorAsync); \
	DECLARE_FUNCTION(execCreateFloatTextureFromGenerator); \
	DECLARE_FUNCTION(execIsValid_TransformableGeneratorPicker); \
	DECLARE_FUNCTION(execIsValid_GeneratorPicker); \
	DECLARE_FUNCTION(execMakeTransformableGeneratorPickerFromClass); \
	DECLARE_FUNCTION(execMakeGeneratorPickerFromClass); \
	DECLARE_FUNCTION(execMakeTransformableGeneratorPickerFromObject); \
	DECLARE_FUNCTION(execMakeGeneratorPickerFromObject); \
	DECLARE_FUNCTION(execMakeTransformableGeneratorInstance); \
	DECLARE_FUNCTION(execMakeGeneratorInstance);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGeneratorTools(); \
	friend struct Z_Construct_UClass_UVoxelGeneratorTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelGeneratorTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGeneratorTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelGeneratorTools(); \
	friend struct Z_Construct_UClass_UVoxelGeneratorTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelGeneratorTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGeneratorTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGeneratorTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGeneratorTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGeneratorTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGeneratorTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGeneratorTools(UVoxelGeneratorTools&&); \
	NO_API UVoxelGeneratorTools(const UVoxelGeneratorTools&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGeneratorTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGeneratorTools(UVoxelGeneratorTools&&); \
	NO_API UVoxelGeneratorTools(const UVoxelGeneratorTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGeneratorTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGeneratorTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGeneratorTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_19_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelGeneratorTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
