// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVoxelCubicFace : uint8;
class UMaterialInterface;
struct FVoxelMaterialCollectionMaterialInfo;
#ifdef VOXEL_VoxelBlueprintMaterialCollection_generated_h
#error "VoxelBlueprintMaterialCollection.generated.h already included, missing '#pragma once' in VoxelBlueprintMaterialCollection.h"
#endif
#define VOXEL_VoxelBlueprintMaterialCollection_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_EVENT_PARMS \
	struct VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndex_Parms \
	{ \
		int32 Index; \
		EVoxelCubicFace Face; \
		UMaterialInterface* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndex_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndices_Parms \
	{ \
		TArray<uint8> Indices; \
		UMaterialInterface* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndices_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct VoxelBlueprintMaterialCollectionInterface_eventGetMaterials_Parms \
	{ \
		TArray<FVoxelMaterialCollectionMaterialInfo> ReturnValue; \
	};


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_CALLBACK_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelBlueprintMaterialCollectionInterface(); \
	friend struct Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics; \
public: \
	DECLARE_CLASS(UVoxelBlueprintMaterialCollectionInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBlueprintMaterialCollectionInterface)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelBlueprintMaterialCollectionInterface(); \
	friend struct Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics; \
public: \
	DECLARE_CLASS(UVoxelBlueprintMaterialCollectionInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBlueprintMaterialCollectionInterface)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBlueprintMaterialCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBlueprintMaterialCollectionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBlueprintMaterialCollectionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBlueprintMaterialCollectionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBlueprintMaterialCollectionInterface(UVoxelBlueprintMaterialCollectionInterface&&); \
	NO_API UVoxelBlueprintMaterialCollectionInterface(const UVoxelBlueprintMaterialCollectionInterface&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBlueprintMaterialCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBlueprintMaterialCollectionInterface(UVoxelBlueprintMaterialCollectionInterface&&); \
	NO_API UVoxelBlueprintMaterialCollectionInterface(const UVoxelBlueprintMaterialCollectionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBlueprintMaterialCollectionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBlueprintMaterialCollectionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBlueprintMaterialCollectionInterface)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_10_PROLOG \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_EVENT_PARMS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelBlueprintMaterialCollectionInterface>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelBlueprintMaterialCollection(); \
	friend struct Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics; \
public: \
	DECLARE_CLASS(UVoxelBlueprintMaterialCollection, UVoxelCachedMaterialCollection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBlueprintMaterialCollection)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelBlueprintMaterialCollection(); \
	friend struct Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics; \
public: \
	DECLARE_CLASS(UVoxelBlueprintMaterialCollection, UVoxelCachedMaterialCollection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBlueprintMaterialCollection)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBlueprintMaterialCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBlueprintMaterialCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBlueprintMaterialCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBlueprintMaterialCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBlueprintMaterialCollection(UVoxelBlueprintMaterialCollection&&); \
	NO_API UVoxelBlueprintMaterialCollection(const UVoxelBlueprintMaterialCollection&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBlueprintMaterialCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBlueprintMaterialCollection(UVoxelBlueprintMaterialCollection&&); \
	NO_API UVoxelBlueprintMaterialCollection(const UVoxelBlueprintMaterialCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBlueprintMaterialCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBlueprintMaterialCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBlueprintMaterialCollection)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_39_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelBlueprintMaterialCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBlueprintMaterialCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
