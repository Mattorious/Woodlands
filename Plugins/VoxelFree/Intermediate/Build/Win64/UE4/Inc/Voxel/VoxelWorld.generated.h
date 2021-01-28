// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVoxelMultiplayerInterface;
struct FVoxelGeneratorInit;
class UVoxelGeneratorCache;
struct FVector;
struct FIntVector;
struct FBox;
struct FVoxelIntBox;
enum class EVoxelWorldCoordinatesRounding : uint8;
class UVoxelGenerator;
struct FVoxelWorldCreateInfo;
#ifdef VOXEL_VoxelWorld_generated_h
#error "VoxelWorld.generated.h already included, missing '#pragma once' in VoxelWorld.h"
#endif
#define VOXEL_VoxelWorld_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_51_DELEGATE \
static inline void FOnMaxFoliageInstancesReached_DelegateWrapper(const FMulticastScriptDelegate& OnMaxFoliageInstancesReached) \
{ \
	OnMaxFoliageInstancesReached.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_50_DELEGATE \
static inline void FOnWorldDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnWorldDestroyed) \
{ \
	OnWorldDestroyed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_49_DELEGATE \
static inline void FOnWorldLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnWorldLoaded) \
{ \
	OnWorldLoaded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_48_DELEGATE \
static inline void FOnGenerateWorld_DelegateWrapper(const FMulticastScriptDelegate& OnGenerateWorld) \
{ \
	OnGenerateWorld.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execGetMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execCreateMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execGetGeneratorInit); \
	DECLARE_FUNCTION(execGetGeneratorCache); \
	DECLARE_FUNCTION(execGetNeighboringPositions); \
	DECLARE_FUNCTION(execK2_GlobalToLocalBounds); \
	DECLARE_FUNCTION(execK2_LocalToGlobalBounds); \
	DECLARE_FUNCTION(execK2_LocalToGlobalFloat); \
	DECLARE_FUNCTION(execK2_LocalToGlobal); \
	DECLARE_FUNCTION(execK2_GlobalToLocalFloat); \
	DECLARE_FUNCTION(execK2_GlobalToLocal); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execIsCreated); \
	DECLARE_FUNCTION(execSetWorldSize); \
	DECLARE_FUNCTION(execSetRenderOctreeDepth); \
	DECLARE_FUNCTION(execSetGeneratorClass); \
	DECLARE_FUNCTION(execSetGeneratorObject); \
	DECLARE_FUNCTION(execDestroyWorld); \
	DECLARE_FUNCTION(execCreateWorld);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execGetMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execCreateMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execGetGeneratorInit); \
	DECLARE_FUNCTION(execGetGeneratorCache); \
	DECLARE_FUNCTION(execGetNeighboringPositions); \
	DECLARE_FUNCTION(execK2_GlobalToLocalBounds); \
	DECLARE_FUNCTION(execK2_LocalToGlobalBounds); \
	DECLARE_FUNCTION(execK2_LocalToGlobalFloat); \
	DECLARE_FUNCTION(execK2_LocalToGlobal); \
	DECLARE_FUNCTION(execK2_GlobalToLocalFloat); \
	DECLARE_FUNCTION(execK2_GlobalToLocal); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execIsCreated); \
	DECLARE_FUNCTION(execSetWorldSize); \
	DECLARE_FUNCTION(execSetRenderOctreeDepth); \
	DECLARE_FUNCTION(execSetGeneratorClass); \
	DECLARE_FUNCTION(execSetGeneratorObject); \
	DECLARE_FUNCTION(execDestroyWorld); \
	DECLARE_FUNCTION(execCreateWorld);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AVoxelWorld, NO_API)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelWorld(); \
	friend struct Z_Construct_UClass_AVoxelWorld_Statics; \
public: \
	DECLARE_CLASS(AVoxelWorld, AVoxelRuntimeActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelWorld) \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_ARCHIVESERIALIZER


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelWorld(); \
	friend struct Z_Construct_UClass_AVoxelWorld_Statics; \
public: \
	DECLARE_CLASS(AVoxelWorld, AVoxelRuntimeActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelWorld) \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_ARCHIVESERIALIZER


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelWorld(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelWorld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelWorld); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelWorld); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelWorld(AVoxelWorld&&); \
	NO_API AVoxelWorld(const AVoxelWorld&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelWorld(AVoxelWorld&&); \
	NO_API AVoxelWorld(const AVoxelWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelWorld); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelWorld)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldRoot() { return STRUCT_OFFSET(AVoxelWorld, WorldRoot); } \
	FORCEINLINE static uint32 __PPO__LineBatchComponent() { return STRUCT_OFFSET(AVoxelWorld, LineBatchComponent); } \
	FORCEINLINE static uint32 __PPO__MultiplayerInterfaceInstance() { return STRUCT_OFFSET(AVoxelWorld, MultiplayerInterfaceInstance); } \
	FORCEINLINE static uint32 __PPO__GeneratorCache() { return STRUCT_OFFSET(AVoxelWorld, GeneratorCache); } \
	FORCEINLINE static uint32 __PPO__PlaceableItemActorHelper() { return STRUCT_OFFSET(AVoxelWorld, PlaceableItemActorHelper); } \
	FORCEINLINE static uint32 __PPO__bIsToggled() { return STRUCT_OFFSET(AVoxelWorld, bIsToggled); }


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_22_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelWorld>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
