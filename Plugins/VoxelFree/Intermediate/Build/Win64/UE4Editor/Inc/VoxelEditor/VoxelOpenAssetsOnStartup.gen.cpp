// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/VoxelOpenAssetsOnStartup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelOpenAssetsOnStartup() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelOpenAssetsOnStartup_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelOpenAssetsOnStartup();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
// End Cross Module References
	void UVoxelOpenAssetsOnStartup::StaticRegisterNativesUVoxelOpenAssetsOnStartup()
	{
	}
	UClass* Z_Construct_UClass_UVoxelOpenAssetsOnStartup_NoRegister()
	{
		return UVoxelOpenAssetsOnStartup::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsToOpenOnStartup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AssetsToOpenOnStartup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetsToOpenOnStartup_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AssetsToOpenOnStartup_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSetAsStartupMap_MetaData[];
#endif
		static void NewProp_bShowSetAsStartupMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSetAsStartupMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOpenAssetsOnStartup_MetaData[];
#endif
		static void NewProp_bEnableOpenAssetsOnStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOpenAssetsOnStartup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Open Assets On Startup" },
		{ "IncludePath", "VoxelOpenAssetsOnStartup.h" },
		{ "ModuleRelativePath", "Private/VoxelOpenAssetsOnStartup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelOpenAssetsOnStartup.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup = { "AssetsToOpenOnStartup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelOpenAssetsOnStartup, AssetsToOpenOnStartup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_Key_KeyProp = { "AssetsToOpenOnStartup_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_ValueProp = { "AssetsToOpenOnStartup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, will show a context menu option to change the project editor startup map in the context menu\n" },
		{ "ModuleRelativePath", "Private/VoxelOpenAssetsOnStartup.h" },
		{ "ToolTip", "If true, will show a context menu option to change the project editor startup map in the context menu" },
	};
#endif
	void Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap_SetBit(void* Obj)
	{
		((UVoxelOpenAssetsOnStartup*)Obj)->bShowSetAsStartupMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap = { "bShowSetAsStartupMap", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelOpenAssetsOnStartup), &Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, will add a Open Asset On Startup option to all assets context menus in the content browser\n// Assets marked as such will automatically open on engine startup\n// Useful to iterate quickly when restarting the editor\n" },
		{ "ModuleRelativePath", "Private/VoxelOpenAssetsOnStartup.h" },
		{ "ToolTip", "If true, will add a Open Asset On Startup option to all assets context menus in the content browser\nAssets marked as such will automatically open on engine startup\nUseful to iterate quickly when restarting the editor" },
	};
#endif
	void Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup_SetBit(void* Obj)
	{
		((UVoxelOpenAssetsOnStartup*)Obj)->bEnableOpenAssetsOnStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup = { "bEnableOpenAssetsOnStartup", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelOpenAssetsOnStartup), &Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelOpenAssetsOnStartup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::ClassParams = {
		&UVoxelOpenAssetsOnStartup::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelOpenAssetsOnStartup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelOpenAssetsOnStartup, 3474131728);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelOpenAssetsOnStartup>()
	{
		return UVoxelOpenAssetsOnStartup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelOpenAssetsOnStartup(Z_Construct_UClass_UVoxelOpenAssetsOnStartup, &UVoxelOpenAssetsOnStartup::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelOpenAssetsOnStartup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelOpenAssetsOnStartup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
