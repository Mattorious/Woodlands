// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelHeightmapAsset_generated_h
#error "VoxelHeightmapAsset.generated.h already included, missing '#pragma once' in VoxelHeightmapAsset.h"
#endif
#define VOXEL_VoxelHeightmapAsset_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelHeightmapImporterWeightmapInfos>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelHeightmapAsset, NO_API)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAsset(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAsset_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAsset, UVoxelTransformableGeneratorWithBounds, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAsset) \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_ARCHIVESERIALIZER


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAsset(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAsset_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAsset, UVoxelTransformableGeneratorWithBounds, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAsset) \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_ARCHIVESERIALIZER


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelHeightmapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelHeightmapAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAsset(UVoxelHeightmapAsset&&); \
	NO_API UVoxelHeightmapAsset(const UVoxelHeightmapAsset&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelHeightmapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAsset(UVoxelHeightmapAsset&&); \
	NO_API UVoxelHeightmapAsset(const UVoxelHeightmapAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelHeightmapAsset)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Width() { return STRUCT_OFFSET(UVoxelHeightmapAsset, Width); } \
	FORCEINLINE static uint32 __PPO__Height() { return STRUCT_OFFSET(UVoxelHeightmapAsset, Height); } \
	FORCEINLINE static uint32 __PPO__VoxelCustomVersion() { return STRUCT_OFFSET(UVoxelHeightmapAsset, VoxelCustomVersion); } \
	FORCEINLINE static uint32 __PPO__MaterialConfigFlag() { return STRUCT_OFFSET(UVoxelHeightmapAsset, MaterialConfigFlag); }


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_31_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelHeightmapAsset>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAssetFloat(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAssetFloat, UVoxelHeightmapAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAssetFloat)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAssetFloat(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAssetFloat, UVoxelHeightmapAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAssetFloat)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelHeightmapAssetFloat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelHeightmapAssetFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAssetFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAssetFloat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAssetFloat(UVoxelHeightmapAssetFloat&&); \
	NO_API UVoxelHeightmapAssetFloat(const UVoxelHeightmapAssetFloat&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAssetFloat(UVoxelHeightmapAssetFloat&&); \
	NO_API UVoxelHeightmapAssetFloat(const UVoxelHeightmapAssetFloat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAssetFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAssetFloat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelHeightmapAssetFloat)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_126_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelHeightmapAssetFloat>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAssetUINT16(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAssetUINT16, UVoxelHeightmapAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAssetUINT16)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAssetUINT16(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAssetUINT16, UVoxelHeightmapAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAssetUINT16)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelHeightmapAssetUINT16(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelHeightmapAssetUINT16) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAssetUINT16); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAssetUINT16); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAssetUINT16(UVoxelHeightmapAssetUINT16&&); \
	NO_API UVoxelHeightmapAssetUINT16(const UVoxelHeightmapAssetUINT16&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAssetUINT16(UVoxelHeightmapAssetUINT16&&); \
	NO_API UVoxelHeightmapAssetUINT16(const UVoxelHeightmapAssetUINT16&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAssetUINT16); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAssetUINT16); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelHeightmapAssetUINT16)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_166_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelHeightmapAssetUINT16>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h


#define FOREACH_ENUM_EVOXELHEIGHTMAPIMPORTERMATERIALCONFIG(op) \
	op(EVoxelHeightmapImporterMaterialConfig::RGB) \
	op(EVoxelHeightmapImporterMaterialConfig::FourWayBlend) \
	op(EVoxelHeightmapImporterMaterialConfig::FiveWayBlend) \
	op(EVoxelHeightmapImporterMaterialConfig::SingleIndex) \
	op(EVoxelHeightmapImporterMaterialConfig::MultiIndex) 

enum class EVoxelHeightmapImporterMaterialConfig : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelHeightmapImporterMaterialConfig>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
