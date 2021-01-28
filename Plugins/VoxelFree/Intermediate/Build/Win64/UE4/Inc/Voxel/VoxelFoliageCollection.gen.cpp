// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelFoliage/VoxelFoliageCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFoliageCollection() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageCollection_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliage_NoRegister();
// End Cross Module References
	void UVoxelFoliageCollection::StaticRegisterNativesUVoxelFoliageCollection()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFoliageCollection_NoRegister()
	{
		return UVoxelFoliageCollection::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFoliageCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foliages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Foliages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Foliages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFoliageCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelFoliage/VoxelFoliageCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageCollection_Statics::NewProp_Foliages_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelFoliageCollection_Statics::NewProp_Foliages = { "Foliages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliageCollection, Foliages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageCollection_Statics::NewProp_Foliages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageCollection_Statics::NewProp_Foliages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelFoliageCollection_Statics::NewProp_Foliages_Inner = { "Foliages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelFoliage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFoliageCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageCollection_Statics::NewProp_Foliages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageCollection_Statics::NewProp_Foliages_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFoliageCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFoliageCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFoliageCollection_Statics::ClassParams = {
		&UVoxelFoliageCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelFoliageCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFoliageCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFoliageCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFoliageCollection, 2446111883);
	template<> VOXEL_API UClass* StaticClass<UVoxelFoliageCollection>()
	{
		return UVoxelFoliageCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFoliageCollection(Z_Construct_UClass_UVoxelFoliageCollection, &UVoxelFoliageCollection::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelFoliageCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFoliageCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
