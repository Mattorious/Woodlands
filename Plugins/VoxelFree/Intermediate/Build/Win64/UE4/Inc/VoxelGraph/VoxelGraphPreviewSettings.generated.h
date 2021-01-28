// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXELGRAPH_VoxelGraphPreviewSettings_generated_h
#error "VoxelGraphPreviewSettings.generated.h already included, missing '#pragma once' in VoxelGraphPreviewSettings.h"
#endif
#define VOXELGRAPH_VoxelGraphPreviewSettings_generated_h

#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGraphPreviewSettings(); \
	friend struct Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics; \
public: \
	DECLARE_CLASS(UVoxelGraphPreviewSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGraphPreviewSettings) \
	DECLARE_WITHIN(UVoxelGraphGenerator)


#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelGraphPreviewSettings(); \
	friend struct Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics; \
public: \
	DECLARE_CLASS(UVoxelGraphPreviewSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGraphPreviewSettings) \
	DECLARE_WITHIN(UVoxelGraphGenerator)


#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGraphPreviewSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGraphPreviewSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphPreviewSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphPreviewSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGraphPreviewSettings(UVoxelGraphPreviewSettings&&); \
	NO_API UVoxelGraphPreviewSettings(const UVoxelGraphPreviewSettings&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGraphPreviewSettings(UVoxelGraphPreviewSettings&&); \
	NO_API UVoxelGraphPreviewSettings(const UVoxelGraphPreviewSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphPreviewSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphPreviewSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelGraphPreviewSettings)


#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_67_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELGRAPH_API UClass* StaticClass<class UVoxelGraphPreviewSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h


#define FOREACH_ENUM_EVOXELGRAPHMATERIALPREVIEWTYPE(op) \
	op(EVoxelGraphMaterialPreviewType::RGB) \
	op(EVoxelGraphMaterialPreviewType::Alpha) \
	op(EVoxelGraphMaterialPreviewType::SingleIndex) \
	op(EVoxelGraphMaterialPreviewType::MultiIndex_Overview) \
	op(EVoxelGraphMaterialPreviewType::MultiIndex_SingleIndexPreview) \
	op(EVoxelGraphMaterialPreviewType::MultiIndex_Wetness) \
	op(EVoxelGraphMaterialPreviewType::UV0) \
	op(EVoxelGraphMaterialPreviewType::UV1) \
	op(EVoxelGraphMaterialPreviewType::UV2) \
	op(EVoxelGraphMaterialPreviewType::UV3) 

enum class EVoxelGraphMaterialPreviewType : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphMaterialPreviewType>();

#define FOREACH_ENUM_EVOXELGRAPHPREVIEWSHOWVALUE(op) \
	op(EVoxelGraphPreviewShowValue::ShowValue) \
	op(EVoxelGraphPreviewShowValue::ShowRange) \
	op(EVoxelGraphPreviewShowValue::ShowValueAndRange) 

enum class EVoxelGraphPreviewShowValue : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewShowValue>();

#define FOREACH_ENUM_EVOXELGRAPHPREVIEWTYPE(op) \
	op(EVoxelGraphPreviewType::Density) \
	op(EVoxelGraphPreviewType::Material) \
	op(EVoxelGraphPreviewType::Cost) \
	op(EVoxelGraphPreviewType::RangeAnalysis) 

enum class EVoxelGraphPreviewType : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewType>();

#define FOREACH_ENUM_EVOXELGRAPHPREVIEWAXES(op) \
	op(EVoxelGraphPreviewAxes::X) \
	op(EVoxelGraphPreviewAxes::Y) \
	op(EVoxelGraphPreviewAxes::Z) 

enum class EVoxelGraphPreviewAxes : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewAxes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
