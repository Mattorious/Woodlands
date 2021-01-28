// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelDataAssetFromMeshImporterFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetFromMeshImporterFactory() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister();
// End Cross Module References
	void UVoxelDataAssetFromMeshImporterFactory::StaticRegisterNativesUVoxelDataAssetFromMeshImporterFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_NoRegister()
	{
		return UVoxelDataAssetFromMeshImporterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshImporter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshImporter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFromMeshImporterFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFromMeshImporterFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFromMeshImporterFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter = { "MeshImporter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAssetFromMeshImporterFactory, MeshImporter), Z_Construct_UClass_AVoxelMeshImporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromMeshImporterFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::ClassParams = {
		&UVoxelDataAssetFromMeshImporterFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDataAssetFromMeshImporterFactory, 2063041313);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFromMeshImporterFactory>()
	{
		return UVoxelDataAssetFromMeshImporterFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDataAssetFromMeshImporterFactory(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory, &UVoxelDataAssetFromMeshImporterFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelDataAssetFromMeshImporterFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromMeshImporterFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
