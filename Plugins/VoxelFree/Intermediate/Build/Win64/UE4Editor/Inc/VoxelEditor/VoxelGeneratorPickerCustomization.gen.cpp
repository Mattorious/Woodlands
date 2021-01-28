// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Details/VoxelGeneratorPickerCustomization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorPickerCustomization() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameter();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool();
// End Cross Module References
	void UVoxelGeneratorPickerEditorData::StaticRegisterNativesUVoxelGeneratorPickerEditorData()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData_NoRegister()
	{
		return UVoxelGeneratorPickerEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueprintInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratorObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Details/VoxelGeneratorPickerCustomization.h" },
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance = { "BlueprintInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, BlueprintInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelGeneratorParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject = { "GeneratorObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, GeneratorObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorPickerEditorData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::ClassParams = {
		&UVoxelGeneratorPickerEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGeneratorPickerEditorData, 140632771);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelGeneratorPickerEditorData>()
	{
		return UVoxelGeneratorPickerEditorData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGeneratorPickerEditorData(Z_Construct_UClass_UVoxelGeneratorPickerEditorData, &UVoxelGeneratorPickerEditorData::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelGeneratorPickerEditorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorPickerEditorData);
	void UVoxelGeneratorPickerBlueprintPool::StaticRegisterNativesUVoxelGeneratorPickerBlueprintPool()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_NoRegister()
	{
		return UVoxelGeneratorPickerBlueprintPool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blueprints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blueprints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Details/VoxelGeneratorPickerCustomization.h" },
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints = { "Blueprints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGeneratorPickerBlueprintPool, Blueprints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_Inner = { "Blueprints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorPickerBlueprintPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::ClassParams = {
		&UVoxelGeneratorPickerBlueprintPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGeneratorPickerBlueprintPool, 4144401910);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelGeneratorPickerBlueprintPool>()
	{
		return UVoxelGeneratorPickerBlueprintPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGeneratorPickerBlueprintPool(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool, &UVoxelGeneratorPickerBlueprintPool::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelGeneratorPickerBlueprintPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorPickerBlueprintPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
