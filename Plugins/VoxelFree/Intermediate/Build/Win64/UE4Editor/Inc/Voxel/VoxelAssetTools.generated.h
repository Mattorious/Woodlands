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
struct FVoxelDisableEditsBoxItemReference;
class AVoxelWorld;
struct FVoxelIntBox;
class UVoxelDataAsset;
struct FVoxelMaterial;
struct FVector;
enum class EVoxelAssetMergeMode : uint8;
class UVoxelTransformableGeneratorInstanceWrapper;
struct FTransform;
struct FVoxelAssetItemReference;
#ifdef VOXEL_VoxelAssetTools_generated_h
#error "VoxelAssetTools.generated.h already included, missing '#pragma once' in VoxelAssetTools.h"
#endif
#define VOXEL_VoxelAssetTools_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelDisableEditsBoxItemReference>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelAssetItemReference>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddDisableEditsBoxAsync); \
	DECLARE_FUNCTION(execAddDisableEditsBox); \
	DECLARE_FUNCTION(execCreateDataAssetFromWorldSection); \
	DECLARE_FUNCTION(execSetDataAssetMaterial); \
	DECLARE_FUNCTION(execInvertDataAsset); \
	DECLARE_FUNCTION(execImportDataAssetFastAsync); \
	DECLARE_FUNCTION(execImportDataAssetFast); \
	DECLARE_FUNCTION(execImportAssetAsync); \
	DECLARE_FUNCTION(execImportAsset); \
	DECLARE_FUNCTION(execImportModifierAssetAsync); \
	DECLARE_FUNCTION(execImportModifierAsset); \
	DECLARE_FUNCTION(execImportAssetAsReferenceAsync); \
	DECLARE_FUNCTION(execImportAssetAsReference);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddDisableEditsBoxAsync); \
	DECLARE_FUNCTION(execAddDisableEditsBox); \
	DECLARE_FUNCTION(execCreateDataAssetFromWorldSection); \
	DECLARE_FUNCTION(execSetDataAssetMaterial); \
	DECLARE_FUNCTION(execInvertDataAsset); \
	DECLARE_FUNCTION(execImportDataAssetFastAsync); \
	DECLARE_FUNCTION(execImportDataAssetFast); \
	DECLARE_FUNCTION(execImportAssetAsync); \
	DECLARE_FUNCTION(execImportAsset); \
	DECLARE_FUNCTION(execImportModifierAssetAsync); \
	DECLARE_FUNCTION(execImportModifierAsset); \
	DECLARE_FUNCTION(execImportAssetAsReferenceAsync); \
	DECLARE_FUNCTION(execImportAssetAsReference);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelAssetTools(); \
	friend struct Z_Construct_UClass_UVoxelAssetTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelAssetTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelAssetTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelAssetTools(); \
	friend struct Z_Construct_UClass_UVoxelAssetTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelAssetTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelAssetTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelAssetTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelAssetTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelAssetTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelAssetTools(UVoxelAssetTools&&); \
	NO_API UVoxelAssetTools(const UVoxelAssetTools&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelAssetTools(UVoxelAssetTools&&); \
	NO_API UVoxelAssetTools(const UVoxelAssetTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelAssetTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelAssetTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelAssetTools)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_57_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelAssetTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h


#define FOREACH_ENUM_EVOXELASSETMERGEMODE(op) \
	op(EVoxelAssetMergeMode::AllValues) \
	op(EVoxelAssetMergeMode::AllMaterials) \
	op(EVoxelAssetMergeMode::AllValuesAndAllMaterials) \
	op(EVoxelAssetMergeMode::InnerValues) \
	op(EVoxelAssetMergeMode::InnerMaterials) \
	op(EVoxelAssetMergeMode::InnerValuesAndInnerMaterials) 

enum class EVoxelAssetMergeMode : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelAssetMergeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
