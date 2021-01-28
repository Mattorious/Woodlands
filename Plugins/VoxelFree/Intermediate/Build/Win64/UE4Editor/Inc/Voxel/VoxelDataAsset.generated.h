// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelIntBox;
struct FIntVector;
#ifdef VOXEL_VoxelDataAsset_generated_h
#error "VoxelDataAsset.generated.h already included, missing '#pragma once' in VoxelDataAsset.h"
#endif
#define VOXEL_VoxelDataAsset_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelDataAssetImportSettings_MagicaVox>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetSize);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetSize);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelDataAsset, NO_API)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelDataAsset(); \
	friend struct Z_Construct_UClass_UVoxelDataAsset_Statics; \
public: \
	DECLARE_CLASS(UVoxelDataAsset, UVoxelTransformableGeneratorWithBounds, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelDataAsset) \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_ARCHIVESERIALIZER


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelDataAsset(); \
	friend struct Z_Construct_UClass_UVoxelDataAsset_Statics; \
public: \
	DECLARE_CLASS(UVoxelDataAsset, UVoxelTransformableGeneratorWithBounds, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelDataAsset) \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_ARCHIVESERIALIZER


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelDataAsset(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelDataAsset(UVoxelDataAsset&&); \
	NO_API UVoxelDataAsset(const UVoxelDataAsset&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelDataAsset(UVoxelDataAsset&&); \
	NO_API UVoxelDataAsset(const UVoxelDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelDataAsset)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VoxelCustomVersion() { return STRUCT_OFFSET(UVoxelDataAsset, VoxelCustomVersion); } \
	FORCEINLINE static uint32 __PPO__ValueConfigFlag() { return STRUCT_OFFSET(UVoxelDataAsset, ValueConfigFlag); } \
	FORCEINLINE static uint32 __PPO__MaterialConfigFlag() { return STRUCT_OFFSET(UVoxelDataAsset, MaterialConfigFlag); }


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h


#define FOREACH_ENUM_EVOXELDATAASSETIMPORTSOURCE(op) \
	op(EVoxelDataAssetImportSource::None) \
	op(EVoxelDataAssetImportSource::MagicaVox) \
	op(EVoxelDataAssetImportSource::RawVox) \
	op(EVoxelDataAssetImportSource::Mesh) 

enum class EVoxelDataAssetImportSource;
template<> VOXEL_API UEnum* StaticEnum<EVoxelDataAssetImportSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
