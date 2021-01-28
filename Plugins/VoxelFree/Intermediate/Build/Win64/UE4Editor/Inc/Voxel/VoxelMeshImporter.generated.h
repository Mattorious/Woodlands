// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UVoxelMeshImporterInputData;
struct FTransform;
struct FVoxelMeshImporterSettingsBase;
class UVoxelDataAsset;
struct FVoxelMeshImporterSettings;
struct FVoxelMeshImporterRenderTargetCache;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UStaticMesh;
#ifdef VOXEL_VoxelMeshImporter_generated_h
#error "VoxelMeshImporter.generated.h already included, missing '#pragma once' in VoxelMeshImporter.h"
#endif
#define VOXEL_VoxelMeshImporter_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FVoxelMeshImporterSettingsBase Super;


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelMeshImporterSettings>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelMeshImporterSettingsBase>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelMeshImporterRenderTargetCache>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterInputData(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterInputData_Statics; \
public: \
	DECLARE_CLASS(UVoxelMeshImporterInputData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMeshImporterInputData)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterInputData(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterInputData_Statics; \
public: \
	DECLARE_CLASS(UVoxelMeshImporterInputData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMeshImporterInputData)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterInputData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterInputData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterInputData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterInputData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMeshImporterInputData(UVoxelMeshImporterInputData&&); \
	NO_API UVoxelMeshImporterInputData(const UVoxelMeshImporterInputData&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterInputData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMeshImporterInputData(UVoxelMeshImporterInputData&&); \
	NO_API UVoxelMeshImporterInputData(const UVoxelMeshImporterInputData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterInputData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterInputData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterInputData)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_27_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelMeshImporterInputData>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertMeshToVoxels_NoMaterials); \
	DECLARE_FUNCTION(execConvertMeshToVoxels); \
	DECLARE_FUNCTION(execCreateTextureFromMaterial); \
	DECLARE_FUNCTION(execCreateMeshDataFromStaticMesh);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertMeshToVoxels_NoMaterials); \
	DECLARE_FUNCTION(execConvertMeshToVoxels); \
	DECLARE_FUNCTION(execCreateTextureFromMaterial); \
	DECLARE_FUNCTION(execCreateMeshDataFromStaticMesh);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterLibrary(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelMeshImporterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMeshImporterLibrary)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterLibrary(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelMeshImporterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMeshImporterLibrary)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMeshImporterLibrary(UVoxelMeshImporterLibrary&&); \
	NO_API UVoxelMeshImporterLibrary(const UVoxelMeshImporterLibrary&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMeshImporterLibrary(UVoxelMeshImporterLibrary&&); \
	NO_API UVoxelMeshImporterLibrary(const UVoxelMeshImporterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterLibrary)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_153_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelMeshImporterLibrary>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelMeshImporter(); \
	friend struct Z_Construct_UClass_AVoxelMeshImporter_Statics; \
public: \
	DECLARE_CLASS(AVoxelMeshImporter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelMeshImporter)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelMeshImporter(); \
	friend struct Z_Construct_UClass_AVoxelMeshImporter_Statics; \
public: \
	DECLARE_CLASS(AVoxelMeshImporter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelMeshImporter)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelMeshImporter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelMeshImporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshImporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshImporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelMeshImporter(AVoxelMeshImporter&&); \
	NO_API AVoxelMeshImporter(const AVoxelMeshImporter&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelMeshImporter(AVoxelMeshImporter&&); \
	NO_API AVoxelMeshImporter(const AVoxelMeshImporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshImporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshImporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelMeshImporter)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AVoxelMeshImporter, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__MaterialInstance() { return STRUCT_OFFSET(AVoxelMeshImporter, MaterialInstance); } \
	FORCEINLINE static uint32 __PPO__CachedBox() { return STRUCT_OFFSET(AVoxelMeshImporter, CachedBox); } \
	FORCEINLINE static uint32 __PPO__CachedStaticMesh() { return STRUCT_OFFSET(AVoxelMeshImporter, CachedStaticMesh); } \
	FORCEINLINE static uint32 __PPO__CachedVertices() { return STRUCT_OFFSET(AVoxelMeshImporter, CachedVertices); } \
	FORCEINLINE static uint32 __PPO__CachedTransform() { return STRUCT_OFFSET(AVoxelMeshImporter, CachedTransform); }


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_221_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_224_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelMeshImporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
