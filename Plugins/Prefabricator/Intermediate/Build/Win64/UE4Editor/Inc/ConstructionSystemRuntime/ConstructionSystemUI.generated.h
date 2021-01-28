// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConstructionSystemComponent;
class UConstructionSystemUIAsset;
#ifdef CONSTRUCTIONSYSTEMRUNTIME_ConstructionSystemUI_generated_h
#error "ConstructionSystemUI.generated.h already included, missing '#pragma once' in ConstructionSystemUI.h"
#endif
#define CONSTRUCTIONSYSTEMRUNTIME_ConstructionSystemUI_generated_h

#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_SPARSE_DATA
#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_RPC_WRAPPERS
#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_EVENT_PARMS \
	struct ConstructionSystemBuildUI_eventSetConstructionSystem_Parms \
	{ \
		UConstructionSystemComponent* ConstructionSystem; \
	}; \
	struct ConstructionSystemBuildUI_eventSetUIAsset_Parms \
	{ \
		UConstructionSystemUIAsset* UIAsset; \
	};


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_CALLBACK_WRAPPERS
#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstructionSystemBuildUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstructionSystemBuildUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstructionSystemBuildUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstructionSystemBuildUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConstructionSystemBuildUI(UConstructionSystemBuildUI&&); \
	NO_API UConstructionSystemBuildUI(const UConstructionSystemBuildUI&); \
public:


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstructionSystemBuildUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConstructionSystemBuildUI(UConstructionSystemBuildUI&&); \
	NO_API UConstructionSystemBuildUI(const UConstructionSystemBuildUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstructionSystemBuildUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstructionSystemBuildUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstructionSystemBuildUI)


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUConstructionSystemBuildUI(); \
	friend struct Z_Construct_UClass_UConstructionSystemBuildUI_Statics; \
public: \
	DECLARE_CLASS(UConstructionSystemBuildUI, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ConstructionSystemRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConstructionSystemBuildUI)


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_GENERATED_UINTERFACE_BODY() \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_GENERATED_UINTERFACE_BODY() \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IConstructionSystemBuildUI() {} \
public: \
	typedef UConstructionSystemBuildUI UClassType; \
	typedef IConstructionSystemBuildUI ThisClass; \
	static void Execute_SetConstructionSystem(UObject* O, UConstructionSystemComponent* ConstructionSystem); \
	static void Execute_SetUIAsset(UObject* O, UConstructionSystemUIAsset* UIAsset); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IConstructionSystemBuildUI() {} \
public: \
	typedef UConstructionSystemBuildUI UClassType; \
	typedef IConstructionSystemBuildUI ThisClass; \
	static void Execute_SetConstructionSystem(UObject* O, UConstructionSystemComponent* ConstructionSystem); \
	static void Execute_SetUIAsset(UObject* O, UConstructionSystemUIAsset* UIAsset); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_10_PROLOG \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_EVENT_PARMS


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_SPARSE_DATA \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_RPC_WRAPPERS \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_CALLBACK_WRAPPERS \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_SPARSE_DATA \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_CALLBACK_WRAPPERS \
	Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRUCTIONSYSTEMRUNTIME_API UClass* StaticClass<class UConstructionSystemBuildUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Woodlands_Plugins_Prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystem_UI_ConstructionSystemUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
