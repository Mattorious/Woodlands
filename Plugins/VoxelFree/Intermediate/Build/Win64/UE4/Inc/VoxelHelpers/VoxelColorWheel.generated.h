// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef VOXELHELPERS_VoxelColorWheel_generated_h
#error "VoxelColorWheel.generated.h already included, missing '#pragma once' in VoxelColorWheel.h"
#endif
#define VOXELHELPERS_VoxelColorWheel_generated_h

#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_11_DELEGATE \
struct _Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms \
{ \
	FLinearColor NewColor; \
}; \
static inline void FOnVoxelColorWheelColorChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnVoxelColorWheelColorChangedEvent, FLinearColor const& NewColor) \
{ \
	_Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms Parms; \
	Parms.NewColor=NewColor; \
	OnVoxelColorWheelColorChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelColorWheel(); \
	friend struct Z_Construct_UClass_UVoxelColorWheel_Statics; \
public: \
	DECLARE_CLASS(UVoxelColorWheel, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelHelpers"), NO_API) \
	DECLARE_SERIALIZER(UVoxelColorWheel)


#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelColorWheel(); \
	friend struct Z_Construct_UClass_UVoxelColorWheel_Statics; \
public: \
	DECLARE_CLASS(UVoxelColorWheel, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelHelpers"), NO_API) \
	DECLARE_SERIALIZER(UVoxelColorWheel)


#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelColorWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelColorWheel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelColorWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelColorWheel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelColorWheel(UVoxelColorWheel&&); \
	NO_API UVoxelColorWheel(const UVoxelColorWheel&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelColorWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelColorWheel(UVoxelColorWheel&&); \
	NO_API UVoxelColorWheel(const UVoxelColorWheel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelColorWheel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelColorWheel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelColorWheel)


#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_13_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELHELPERS_API UClass* StaticClass<class UVoxelColorWheel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_VoxelHelpers_Public_VoxelColorWheel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
