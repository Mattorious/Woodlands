// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
#ifdef VOXEL_VoxelNoClippingComponent_generated_h
#error "VoxelNoClippingComponent.generated.h already included, missing '#pragma once' in VoxelNoClippingComponent.h"
#endif
#define VOXEL_VoxelNoClippingComponent_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_64_DELEGATE \
static inline void FOnTeleported_DelegateWrapper(const FMulticastScriptDelegate& OnTeleported) \
{ \
	OnTeleported.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_63_DELEGATE \
static inline void FOnStopMovingTowardsSurface_DelegateWrapper(const FMulticastScriptDelegate& OnStopMovingTowardsSurface) \
{ \
	OnStopMovingTowardsSurface.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_62_DELEGATE \
static inline void FOnMoveTowardsSurface_DelegateWrapper(const FMulticastScriptDelegate& OnMoveTowardsSurface) \
{ \
	OnMoveTowardsSurface.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_RPC_WRAPPERS \
	virtual bool ShouldUseVoxelWorld_Implementation(AVoxelWorld* VoxelWorld); \
 \
	DECLARE_FUNCTION(execShouldUseVoxelWorld);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShouldUseVoxelWorld);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_EVENT_PARMS \
	struct VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms \
	{ \
		AVoxelWorld* VoxelWorld; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_CALLBACK_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelNoClippingComponent(); \
	friend struct Z_Construct_UClass_UVoxelNoClippingComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelNoClippingComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelNoClippingComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelNoClippingComponent(); \
	friend struct Z_Construct_UClass_UVoxelNoClippingComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelNoClippingComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelNoClippingComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelNoClippingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelNoClippingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelNoClippingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelNoClippingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelNoClippingComponent(UVoxelNoClippingComponent&&); \
	NO_API UVoxelNoClippingComponent(const UVoxelNoClippingComponent&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelNoClippingComponent(UVoxelNoClippingComponent&&); \
	NO_API UVoxelNoClippingComponent(const UVoxelNoClippingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelNoClippingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelNoClippingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelNoClippingComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_25_PROLOG \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_EVENT_PARMS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelNoClippingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
