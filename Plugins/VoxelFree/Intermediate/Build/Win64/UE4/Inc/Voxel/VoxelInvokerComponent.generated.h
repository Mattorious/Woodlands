// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelInvokerSettings;
class AVoxelWorld;
struct FIntVector;
struct FVector;
#ifdef VOXEL_VoxelInvokerComponent_generated_h
#error "VoxelInvokerComponent.generated.h already included, missing '#pragma once' in VoxelInvokerComponent.h"
#endif
#define VOXEL_VoxelInvokerComponent_generated_h

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS \
	virtual FVoxelInvokerSettings GetInvokerSettings_Implementation(AVoxelWorld* VoxelWorld) const; \
	virtual FIntVector GetInvokerVoxelPosition_Implementation(AVoxelWorld* VoxelWorld) const; \
	virtual bool ShouldUseInvoker_Implementation(AVoxelWorld* VoxelWorld) const; \
	virtual bool IsLocalInvoker_Implementation() const; \
 \
	DECLARE_FUNCTION(execRefreshAllVoxelInvokers); \
	DECLARE_FUNCTION(execGetInvokerSettings); \
	DECLARE_FUNCTION(execGetInvokerVoxelPosition); \
	DECLARE_FUNCTION(execShouldUseInvoker); \
	DECLARE_FUNCTION(execIsLocalInvoker);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshAllVoxelInvokers); \
	DECLARE_FUNCTION(execGetInvokerSettings); \
	DECLARE_FUNCTION(execGetInvokerVoxelPosition); \
	DECLARE_FUNCTION(execShouldUseInvoker); \
	DECLARE_FUNCTION(execIsLocalInvoker);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_EVENT_PARMS \
	struct VoxelInvokerComponentBase_eventGetInvokerSettings_Parms \
	{ \
		AVoxelWorld* VoxelWorld; \
		FVoxelInvokerSettings ReturnValue; \
	}; \
	struct VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms \
	{ \
		AVoxelWorld* VoxelWorld; \
		FIntVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct VoxelInvokerComponentBase_eventIsLocalInvoker_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelInvokerComponentBase_eventIsLocalInvoker_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VoxelInvokerComponentBase_eventShouldUseInvoker_Parms \
	{ \
		AVoxelWorld* VoxelWorld; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelInvokerComponentBase_eventShouldUseInvoker_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_CALLBACK_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelInvokerComponentBase(); \
	friend struct Z_Construct_UClass_UVoxelInvokerComponentBase_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerComponentBase)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelInvokerComponentBase(); \
	friend struct Z_Construct_UClass_UVoxelInvokerComponentBase_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerComponentBase)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerComponentBase(UVoxelInvokerComponentBase&&); \
	NO_API UVoxelInvokerComponentBase(const UVoxelInvokerComponentBase&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerComponentBase(UVoxelInvokerComponentBase&&); \
	NO_API UVoxelInvokerComponentBase(const UVoxelInvokerComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerComponentBase)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_15_PROLOG \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_EVENT_PARMS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelInvokerComponentBase>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_RPC_WRAPPERS \
	virtual FVector GetInvokerGlobalPosition_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetInvokerGlobalPosition);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInvokerGlobalPosition);


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_EVENT_PARMS \
	struct VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_CALLBACK_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSimpleInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelSimpleInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSimpleInvokerComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelSimpleInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelSimpleInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSimpleInvokerComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSimpleInvokerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSimpleInvokerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSimpleInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSimpleInvokerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSimpleInvokerComponent(UVoxelSimpleInvokerComponent&&); \
	NO_API UVoxelSimpleInvokerComponent(const UVoxelSimpleInvokerComponent&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSimpleInvokerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSimpleInvokerComponent(UVoxelSimpleInvokerComponent&&); \
	NO_API UVoxelSimpleInvokerComponent(const UVoxelSimpleInvokerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSimpleInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSimpleInvokerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSimpleInvokerComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_97_PROLOG \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_EVENT_PARMS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_CALLBACK_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelSimpleInvokerComponent>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelInvokerWithPredictionComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerWithPredictionComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerWithPredictionComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelInvokerWithPredictionComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerWithPredictionComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerWithPredictionComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerWithPredictionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerWithPredictionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerWithPredictionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerWithPredictionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerWithPredictionComponent(UVoxelInvokerWithPredictionComponent&&); \
	NO_API UVoxelInvokerWithPredictionComponent(const UVoxelInvokerWithPredictionComponent&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerWithPredictionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerWithPredictionComponent(UVoxelInvokerWithPredictionComponent&&); \
	NO_API UVoxelInvokerWithPredictionComponent(const UVoxelInvokerWithPredictionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerWithPredictionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerWithPredictionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerWithPredictionComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_150_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelInvokerWithPredictionComponent>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelInvokerAutoCameraComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerAutoCameraComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerAutoCameraComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelInvokerAutoCameraComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerAutoCameraComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerAutoCameraComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerAutoCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerAutoCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerAutoCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerAutoCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerAutoCameraComponent(UVoxelInvokerAutoCameraComponent&&); \
	NO_API UVoxelInvokerAutoCameraComponent(const UVoxelInvokerAutoCameraComponent&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerAutoCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerAutoCameraComponent(UVoxelInvokerAutoCameraComponent&&); \
	NO_API UVoxelInvokerAutoCameraComponent(const UVoxelInvokerAutoCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerAutoCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerAutoCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerAutoCameraComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_172_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_175_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelInvokerAutoCameraComponent>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelVolumeInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelVolumeInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelVolumeInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelVolumeInvokerComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelVolumeInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelVolumeInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelVolumeInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelVolumeInvokerComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelVolumeInvokerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelVolumeInvokerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelVolumeInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelVolumeInvokerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelVolumeInvokerComponent(UVoxelVolumeInvokerComponent&&); \
	NO_API UVoxelVolumeInvokerComponent(const UVoxelVolumeInvokerComponent&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelVolumeInvokerComponent(UVoxelVolumeInvokerComponent&&); \
	NO_API UVoxelVolumeInvokerComponent(const UVoxelVolumeInvokerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelVolumeInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelVolumeInvokerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelVolumeInvokerComponent)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_184_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelVolumeInvokerComponent>();

#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_SPARSE_DATA
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_RPC_WRAPPERS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelLODVolume(); \
	friend struct Z_Construct_UClass_AVoxelLODVolume_Statics; \
public: \
	DECLARE_CLASS(AVoxelLODVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelLODVolume)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelLODVolume(); \
	friend struct Z_Construct_UClass_AVoxelLODVolume_Statics; \
public: \
	DECLARE_CLASS(AVoxelLODVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelLODVolume)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelLODVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelLODVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelLODVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelLODVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelLODVolume(AVoxelLODVolume&&); \
	NO_API AVoxelLODVolume(const AVoxelLODVolume&); \
public:


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelLODVolume(AVoxelLODVolume&&); \
	NO_API AVoxelLODVolume(const AVoxelLODVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelLODVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelLODVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelLODVolume)


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_PRIVATE_PROPERTY_OFFSET
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_222_PROLOG
#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_RPC_WRAPPERS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_PRIVATE_PROPERTY_OFFSET \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_SPARSE_DATA \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS_NO_PURE_DECLS \
	Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelLODVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
