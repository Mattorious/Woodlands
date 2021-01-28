// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVoxelGeneratorCache;
struct FVector;
struct FLinearColor;
struct FVoxelDataItemConstructionInfo;
#ifdef VOXEL_VoxelPlaceableItemManager_generated_h
#error "VoxelPlaceableItemManager.generated.h already included, missing '#pragma once' in VoxelPlaceableItemManager.h"
#endif
#define VOXEL_VoxelPlaceableItemManager_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelDataItemConstructionInfo>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_RPC_WRAPPERS \
	virtual void OnClear_Implementation(); \
	virtual void OnGenerate_Implementation(); \
 \
	DECLARE_FUNCTION(execOnClear); \
	DECLARE_FUNCTION(execOnGenerate); \
	DECLARE_FUNCTION(execGetGeneratorCache); \
	DECLARE_FUNCTION(execDrawDebugPoint); \
	DECLARE_FUNCTION(execDrawDebugLine); \
	DECLARE_FUNCTION(execAddDataItem);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClear); \
	DECLARE_FUNCTION(execOnGenerate); \
	DECLARE_FUNCTION(execGetGeneratorCache); \
	DECLARE_FUNCTION(execDrawDebugPoint); \
	DECLARE_FUNCTION(execDrawDebugLine); \
	DECLARE_FUNCTION(execAddDataItem);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_EVENT_PARMS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_CALLBACK_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPlaceableItemManager(); \
	friend struct Z_Construct_UClass_UVoxelPlaceableItemManager_Statics; \
public: \
	DECLARE_CLASS(UVoxelPlaceableItemManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPlaceableItemManager)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelPlaceableItemManager(); \
	friend struct Z_Construct_UClass_UVoxelPlaceableItemManager_Statics; \
public: \
	DECLARE_CLASS(UVoxelPlaceableItemManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPlaceableItemManager)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPlaceableItemManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPlaceableItemManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPlaceableItemManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPlaceableItemManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPlaceableItemManager(UVoxelPlaceableItemManager&&); \
	NO_API UVoxelPlaceableItemManager(const UVoxelPlaceableItemManager&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPlaceableItemManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPlaceableItemManager(UVoxelPlaceableItemManager&&); \
	NO_API UVoxelPlaceableItemManager(const UVoxelPlaceableItemManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPlaceableItemManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPlaceableItemManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPlaceableItemManager)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DataItemInfos() { return STRUCT_OFFSET(UVoxelPlaceableItemManager, DataItemInfos); } \
	FORCEINLINE static uint32 __PPO__GeneratorCache() { return STRUCT_OFFSET(UVoxelPlaceableItemManager, GeneratorCache); }


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_60_PROLOG \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_EVENT_PARMS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelPlaceableItemManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
