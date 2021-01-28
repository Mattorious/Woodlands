// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelImporters/VoxelMagicaVoxImporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMagicaVoxImporter() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMagicaVoxScene_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMagicaVoxScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMagicaVoxSceneActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMagicaVoxSceneActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelAssetActor_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelMagicaVoxSceneEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMagicaVoxSceneEntry"), sizeof(FVoxelMagicaVoxSceneEntry), Get_Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMagicaVoxSceneEntry>()
{
	return FVoxelMagicaVoxSceneEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelMagicaVoxSceneEntry(FVoxelMagicaVoxSceneEntry::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelMagicaVoxSceneEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelMagicaVoxSceneEntry
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelMagicaVoxSceneEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelMagicaVoxSceneEntry")),new UScriptStruct::TCppStructOps<FVoxelMagicaVoxSceneEntry>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelMagicaVoxSceneEntry;
	struct Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMagicaVoxSceneEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMagicaVoxSceneEntry, Layer), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Center of the asset\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
		{ "ToolTip", "Center of the asset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMagicaVoxSceneEntry, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMagicaVoxSceneEntry, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMagicaVoxSceneEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelMagicaVoxSceneEntry",
		sizeof(FVoxelMagicaVoxSceneEntry),
		alignof(FVoxelMagicaVoxSceneEntry),
		Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelMagicaVoxSceneEntry"), sizeof(FVoxelMagicaVoxSceneEntry), Get_Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry_Hash() { return 1815316464U; }
	void UVoxelMagicaVoxScene::StaticRegisterNativesUVoxelMagicaVoxScene()
	{
	}
	UClass* Z_Construct_UClass_UVoxelMagicaVoxScene_NoRegister()
	{
		return UVoxelMagicaVoxScene::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMagicaVoxScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelImporters/VoxelMagicaVoxImporter.h" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_ImportPath_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMagicaVoxScene, ImportPath), METADATA_PARAMS(Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_ImportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Scene" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMagicaVoxScene, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelMagicaVoxSceneEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_ImportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::NewProp_Entries_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMagicaVoxScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::ClassParams = {
		&UVoxelMagicaVoxScene::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMagicaVoxScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMagicaVoxScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMagicaVoxScene, 3845833580);
	template<> VOXEL_API UClass* StaticClass<UVoxelMagicaVoxScene>()
	{
		return UVoxelMagicaVoxScene::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMagicaVoxScene(Z_Construct_UClass_UVoxelMagicaVoxScene, &UVoxelMagicaVoxScene::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMagicaVoxScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMagicaVoxScene);
	DEFINE_FUNCTION(AVoxelMagicaVoxSceneActor::execSetScene)
	{
		P_GET_OBJECT(UVoxelMagicaVoxScene,Z_Param_Scene);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScene(Z_Param_Scene);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelMagicaVoxSceneActor::execApplyVoxelSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyVoxelSize();
		P_NATIVE_END;
	}
	void AVoxelMagicaVoxSceneActor::StaticRegisterNativesAVoxelMagicaVoxSceneActor()
	{
		UClass* Class = AVoxelMagicaVoxSceneActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyVoxelSize", &AVoxelMagicaVoxSceneActor::execApplyVoxelSize },
			{ "SetScene", &AVoxelMagicaVoxSceneActor::execSetScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_ApplyVoxelSize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_ApplyVoxelSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_ApplyVoxelSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelMagicaVoxSceneActor, nullptr, "ApplyVoxelSize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_ApplyVoxelSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_ApplyVoxelSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_ApplyVoxelSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_ApplyVoxelSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics
	{
		struct VoxelMagicaVoxSceneActor_eventSetScene_Parms
		{
			UVoxelMagicaVoxScene* Scene;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMagicaVoxSceneActor_eventSetScene_Parms, Scene), Z_Construct_UClass_UVoxelMagicaVoxScene_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::NewProp_Scene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelMagicaVoxSceneActor, nullptr, "SetScene", nullptr, nullptr, sizeof(VoxelMagicaVoxSceneActor_eventSetScene_Parms), Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVoxelMagicaVoxSceneActor_NoRegister()
	{
		return AVoxelMagicaVoxSceneActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActorTransforms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorTransforms_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorTransforms_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_ApplyVoxelSize, "ApplyVoxelSize" }, // 2567769038
		{ &Z_Construct_UFunction_AVoxelMagicaVoxSceneActor_SetScene, "SetScene" }, // 3184810009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelImporters/VoxelMagicaVoxImporter.h" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelWorld_MetaData[] = {
		{ "Category", "Scene" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMagicaVoxSceneActor, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_ActorTransforms_MetaData[] = {
		{ "Category", "Scene" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_ActorTransforms = { "ActorTransforms", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMagicaVoxSceneActor, ActorTransforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_ActorTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_ActorTransforms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_ActorTransforms_Key_KeyProp = { "ActorTransforms_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AVoxelAssetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_ActorTransforms_ValueProp = { "ActorTransforms", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Scene" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMagicaVoxImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMagicaVoxSceneActor, VoxelSize), METADATA_PARAMS(Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_ActorTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_ActorTransforms_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_ActorTransforms_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::NewProp_VoxelSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMagicaVoxSceneActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::ClassParams = {
		&AVoxelMagicaVoxSceneActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelMagicaVoxSceneActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelMagicaVoxSceneActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelMagicaVoxSceneActor, 3374087577);
	template<> VOXEL_API UClass* StaticClass<AVoxelMagicaVoxSceneActor>()
	{
		return AVoxelMagicaVoxSceneActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelMagicaVoxSceneActor(Z_Construct_UClass_AVoxelMagicaVoxSceneActor, &AVoxelMagicaVoxSceneActor::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelMagicaVoxSceneActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMagicaVoxSceneActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
