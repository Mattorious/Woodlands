// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APrefabActor;
class UPrefabricatorAssetInterface;
class AActor;
struct FRandomStream;
class UObject;
struct FTransform;
#ifdef PREFABRICATORRUNTIME_PrefabricatorFunctionLibrary_generated_h
#error "PrefabricatorFunctionLibrary.generated.h already included, missing '#pragma once' in PrefabricatorFunctionLibrary.h"
#endif
#define PREFABRICATORRUNTIME_PrefabricatorFunctionLibrary_generated_h

#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_SPARSE_DATA
#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPrefabAsset); \
	DECLARE_FUNCTION(execGetAllAttachedActors); \
	DECLARE_FUNCTION(execUnlinkPrefab); \
	DECLARE_FUNCTION(execRandomizePrefab); \
	DECLARE_FUNCTION(execSpawnPrefab);


#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPrefabAsset); \
	DECLARE_FUNCTION(execGetAllAttachedActors); \
	DECLARE_FUNCTION(execUnlinkPrefab); \
	DECLARE_FUNCTION(execRandomizePrefab); \
	DECLARE_FUNCTION(execSpawnPrefab);


#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrefabricatorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPrefabricatorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPrefabricatorBlueprintLibrary)


#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPrefabricatorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPrefabricatorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPrefabricatorBlueprintLibrary)


#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrefabricatorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrefabricatorBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrefabricatorBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrefabricatorBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrefabricatorBlueprintLibrary(UPrefabricatorBlueprintLibrary&&); \
	NO_API UPrefabricatorBlueprintLibrary(const UPrefabricatorBlueprintLibrary&); \
public:


#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrefabricatorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrefabricatorBlueprintLibrary(UPrefabricatorBlueprintLibrary&&); \
	NO_API UPrefabricatorBlueprintLibrary(const UPrefabricatorBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrefabricatorBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrefabricatorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrefabricatorBlueprintLibrary)


#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_12_PROLOG
#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_SPARSE_DATA \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_RPC_WRAPPERS \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_INCLASS \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_SPARSE_DATA \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PREFABRICATORRUNTIME_API UClass* StaticClass<class UPrefabricatorBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Prefabricator_Source_PrefabricatorRuntime_Public_Utils_PrefabricatorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
