// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelDataAssetFromMagicaVoxFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetFromMagicaVoxFactory() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
// End Cross Module References
	void UVoxelDataAssetFromMagicaVoxFactory::StaticRegisterNativesUVoxelDataAssetFromMagicaVoxFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_NoRegister()
	{
		return UVoxelDataAssetFromMagicaVoxFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePalette_MetaData[];
#endif
		static void NewProp_bUsePalette_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePalette;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFromMagicaVoxFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFromMagicaVoxFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "Comment", "// If false, the material index will be set to the palette index (Single Index material config)\n// If true, the palette will be read and the color will be imported instead (RGB material config)\n// If you're not sure, leave to true\n" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFromMagicaVoxFactory.h" },
		{ "ToolTip", "If false, the material index will be set to the palette index (Single Index material config)\nIf true, the palette will be read and the color will be imported instead (RGB material config)\nIf you're not sure, leave to true" },
	};
#endif
	void Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_SetBit(void* Obj)
	{
		((UVoxelDataAssetFromMagicaVoxFactory*)Obj)->bUsePalette = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette = { "bUsePalette", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDataAssetFromMagicaVoxFactory), &Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromMagicaVoxFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::ClassParams = {
		&UVoxelDataAssetFromMagicaVoxFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDataAssetFromMagicaVoxFactory, 2857464891);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFromMagicaVoxFactory>()
	{
		return UVoxelDataAssetFromMagicaVoxFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDataAssetFromMagicaVoxFactory(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory, &UVoxelDataAssetFromMagicaVoxFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelDataAssetFromMagicaVoxFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromMagicaVoxFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
