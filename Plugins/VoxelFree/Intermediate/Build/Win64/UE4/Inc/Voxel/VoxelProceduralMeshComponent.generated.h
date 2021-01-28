// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
struct FVoxelIntBox;
#ifdef VOXEL_VoxelProceduralMeshComponent_generated_h
#error "VoxelProceduralMeshComponent.generated.h already included, missing '#pragma once' in VoxelProceduralMeshComponent.h"
#endif
#define VOXEL_VoxelProceduralMeshComponent_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVoxelCollisionsFrozen); \
	DECLARE_FUNCTION(execAreVoxelCollisionsFrozen);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVoxelCollisionsFrozen); \
	DECLARE_FUNCTION(execAreVoxelCollisionsFrozen);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_EVENT_PARMS \
	struct VoxelProceduralMeshComponent_eventInitChunk_Parms \
	{ \
		uint8 ChunkLOD; \
		FVoxelIntBox ChunkBounds; \
	};


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_CALLBACK_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelProceduralMeshComponent, UModelComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelProceduralMeshComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelProceduralMeshComponent, UModelComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelProceduralMeshComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelProceduralMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelProceduralMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelProceduralMeshComponent(UVoxelProceduralMeshComponent&&); \
	NO_API UVoxelProceduralMeshComponent(const UVoxelProceduralMeshComponent&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelProceduralMeshComponent(UVoxelProceduralMeshComponent&&); \
	NO_API UVoxelProceduralMeshComponent(const UVoxelProceduralMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelProceduralMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelProceduralMeshComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodySetup() { return STRUCT_OFFSET(UVoxelProceduralMeshComponent, BodySetup); } \
	FORCEINLINE static uint32 __PPO__BodySetupBeingCooked() { return STRUCT_OFFSET(UVoxelProceduralMeshComponent, BodySetupBeingCooked); } \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(UVoxelProceduralMeshComponent, StaticMeshComponent); }


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_48_PROLOG \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_EVENT_PARMS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelProceduralMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
