// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelSettings_generated_h
#error "VoxelSettings.generated.h already included, missing '#pragma once' in VoxelSettings.h"
#endif
#define VOXEL_VoxelSettings_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSettings(); \
	friend struct Z_Construct_UClass_UVoxelSettings_Statics; \
public: \
	DECLARE_CLASS(UVoxelSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelSettings(); \
	friend struct Z_Construct_UClass_UVoxelSettings_Statics; \
public: \
	DECLARE_CLASS(UVoxelSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSettings(UVoxelSettings&&); \
	NO_API UVoxelSettings(const UVoxelSettings&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSettings(UVoxelSettings&&); \
	NO_API UVoxelSettings(const UVoxelSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelSettings)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_21_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelSettings_h


#define FOREACH_ENUM_EVOXELTHREADPRIORITY(op) \
	op(EVoxelThreadPriority::Normal) \
	op(EVoxelThreadPriority::AboveNormal) \
	op(EVoxelThreadPriority::BelowNormal) \
	op(EVoxelThreadPriority::Highest) \
	op(EVoxelThreadPriority::Lowest) \
	op(EVoxelThreadPriority::SlightlyBelowNormal) \
	op(EVoxelThreadPriority::TimeCritical) 

enum class EVoxelThreadPriority : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelThreadPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
