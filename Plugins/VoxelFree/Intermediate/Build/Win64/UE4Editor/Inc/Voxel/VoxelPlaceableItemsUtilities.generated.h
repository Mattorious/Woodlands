// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVoxelPerlinWormsSettings;
#ifdef VOXEL_VoxelPlaceableItemsUtilities_generated_h
#error "VoxelPlaceableItemsUtilities.generated.h already included, missing '#pragma once' in VoxelPlaceableItemsUtilities.h"
#endif
#define VOXEL_VoxelPlaceableItemsUtilities_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPerlinWormsSettings>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_83_DELEGATE \
struct VoxelPlaceableItemsUtilities_eventAddWorm_Parms \
{ \
	FVector Start; \
	FVector End; \
	float Radius; \
}; \
static inline void FAddWorm_DelegateWrapper(const FScriptDelegate& AddWorm, FVector Start, FVector End, float Radius) \
{ \
	VoxelPlaceableItemsUtilities_eventAddWorm_Parms Parms; \
	Parms.Start=Start; \
	Parms.End=End; \
	Parms.Radius=Radius; \
	AddWorm.ProcessDelegate<UObject>(&Parms); \
}


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddWorms);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddWorms);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPlaceableItemsUtilities(); \
	friend struct Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics; \
public: \
	DECLARE_CLASS(UVoxelPlaceableItemsUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPlaceableItemsUtilities)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelPlaceableItemsUtilities(); \
	friend struct Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics; \
public: \
	DECLARE_CLASS(UVoxelPlaceableItemsUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPlaceableItemsUtilities)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPlaceableItemsUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPlaceableItemsUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPlaceableItemsUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPlaceableItemsUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPlaceableItemsUtilities(UVoxelPlaceableItemsUtilities&&); \
	NO_API UVoxelPlaceableItemsUtilities(const UVoxelPlaceableItemsUtilities&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPlaceableItemsUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPlaceableItemsUtilities(UVoxelPlaceableItemsUtilities&&); \
	NO_API UVoxelPlaceableItemsUtilities(const UVoxelPlaceableItemsUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPlaceableItemsUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPlaceableItemsUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPlaceableItemsUtilities)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_77_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelPlaceableItemsUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
