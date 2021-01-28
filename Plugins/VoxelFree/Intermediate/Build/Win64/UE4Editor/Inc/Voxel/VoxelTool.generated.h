// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AVoxelWorld;
struct FVoxelIntBox;
struct FVoxelToolTickData;
struct FVector2D;
class APlayerController;
 
class UVoxelTool;
class UObject;
#ifdef VOXEL_VoxelTool_generated_h
#error "VoxelTool.generated.h already included, missing '#pragma once' in VoxelTool.h"
#endif
#define VOXEL_VoxelTool_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolTickData_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolTickData>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_214_DELEGATE \
struct VoxelTool_eventDoEditDynamicOverride_Parms \
{ \
	FVector Position; \
	FVector Normal; \
}; \
static inline void FDoEditDynamicOverride_DelegateWrapper(const FScriptDelegate& DoEditDynamicOverride, FVector Position, FVector Normal) \
{ \
	VoxelTool_eventDoEditDynamicOverride_Parms Parms; \
	Parms.Position=Position; \
	Parms.Normal=Normal; \
	DoEditDynamicOverride.ProcessDelegate<UObject>(&Parms); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_90_DELEGATE \
struct _Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms \
{ \
	AVoxelWorld* World; \
	FVoxelIntBox Bounds; \
}; \
static inline void FVoxelTool_OnBoundsUpdated_DelegateWrapper(const FMulticastScriptDelegate& VoxelTool_OnBoundsUpdated, AVoxelWorld* World, FVoxelIntBox Bounds) \
{ \
	_Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms Parms; \
	Parms.World=World; \
	Parms.Bounds=Bounds; \
	VoxelTool_OnBoundsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelToolSharedConfig(); \
	friend struct Z_Construct_UClass_UVoxelToolSharedConfig_Statics; \
public: \
	DECLARE_CLASS(UVoxelToolSharedConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelToolSharedConfig)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelToolSharedConfig(); \
	friend struct Z_Construct_UClass_UVoxelToolSharedConfig_Statics; \
public: \
	DECLARE_CLASS(UVoxelToolSharedConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelToolSharedConfig)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelToolSharedConfig(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelToolSharedConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolSharedConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolSharedConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelToolSharedConfig(UVoxelToolSharedConfig&&); \
	NO_API UVoxelToolSharedConfig(const UVoxelToolSharedConfig&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelToolSharedConfig(UVoxelToolSharedConfig&&); \
	NO_API UVoxelToolSharedConfig(const UVoxelToolSharedConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolSharedConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolSharedConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelToolSharedConfig)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_92_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelToolSharedConfig>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRayDirection); \
	DECLARE_FUNCTION(execGetRayOrigin); \
	DECLARE_FUNCTION(execDeproject); \
	DECLARE_FUNCTION(execIsAlternativeMode); \
	DECLARE_FUNCTION(execGetAxis); \
	DECLARE_FUNCTION(execIsKeyDown); \
	DECLARE_FUNCTION(execMakeVoxelToolTickData); \
	DECLARE_FUNCTION(execMakeVoxelTool); \
	DECLARE_FUNCTION(execMakeToolAxes); \
	DECLARE_FUNCTION(execMakeToolKeys); \
	DECLARE_FUNCTION(execGetToolName); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execK2_SimpleTick); \
	DECLARE_FUNCTION(execK2_AdvancedTick); \
	DECLARE_FUNCTION(execGetVoxelWorld); \
	DECLARE_FUNCTION(execDisableTool); \
	DECLARE_FUNCTION(execEnableTool);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRayDirection); \
	DECLARE_FUNCTION(execGetRayOrigin); \
	DECLARE_FUNCTION(execDeproject); \
	DECLARE_FUNCTION(execIsAlternativeMode); \
	DECLARE_FUNCTION(execGetAxis); \
	DECLARE_FUNCTION(execIsKeyDown); \
	DECLARE_FUNCTION(execMakeVoxelToolTickData); \
	DECLARE_FUNCTION(execMakeVoxelTool); \
	DECLARE_FUNCTION(execMakeToolAxes); \
	DECLARE_FUNCTION(execMakeToolKeys); \
	DECLARE_FUNCTION(execGetToolName); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execK2_SimpleTick); \
	DECLARE_FUNCTION(execK2_AdvancedTick); \
	DECLARE_FUNCTION(execGetVoxelWorld); \
	DECLARE_FUNCTION(execDisableTool); \
	DECLARE_FUNCTION(execEnableTool);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelTool(); \
	friend struct Z_Construct_UClass_UVoxelTool_Statics; \
public: \
	DECLARE_CLASS(UVoxelTool, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelTool)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelTool(); \
	friend struct Z_Construct_UClass_UVoxelTool_Statics; \
public: \
	DECLARE_CLASS(UVoxelTool, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelTool)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelTool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelTool(UVoxelTool&&); \
	NO_API UVoxelTool(const UVoxelTool&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelTool(UVoxelTool&&); \
	NO_API UVoxelTool(const UVoxelTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelTool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelTool)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnabled() { return STRUCT_OFFSET(UVoxelTool, bEnabled); } \
	FORCEINLINE static uint32 __PPO__FrozenTickData() { return STRUCT_OFFSET(UVoxelTool, FrozenTickData); }


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_175_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_178_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
