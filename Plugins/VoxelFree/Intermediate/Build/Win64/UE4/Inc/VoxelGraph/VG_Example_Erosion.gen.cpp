// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VG_Example_Erosion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVG_Example_Erosion() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Erosion_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Erosion();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UVG_Example_Erosion::StaticRegisterNativesUVG_Example_Erosion()
	{
	}
	UClass* Z_Construct_UClass_UVG_Example_Erosion_NoRegister()
	{
		return UVG_Example_Erosion::StaticClass();
	}
	struct Z_Construct_UClass_UVG_Example_Erosion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Valleys_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Valleys_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snow_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Snow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Rocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Erosion_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Erosion_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Erosion_Material_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Erosion_Material_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Erosion_Material_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Erosion_Material_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVG_Example_Erosion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_Erosion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Valleys Height" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height = { "Valleys_Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Valleys_Height), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Snow" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow = { "Snow", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Snow), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Rocks" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks = { "Rocks", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Rocks), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Height), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Erosion Strength" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength = { "Erosion_Strength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Erosion_Strength), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Erosion Material Strength" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength = { "Erosion_Material_Strength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Erosion_Material_Strength), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Erosion Material Offset" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset = { "Erosion_Material_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Erosion, Erosion_Material_Offset), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVG_Example_Erosion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_Erosion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_Erosion_Statics::ClassParams = {
		&UVG_Example_Erosion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Erosion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVG_Example_Erosion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVG_Example_Erosion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVG_Example_Erosion, 2089979458);
	template<> VOXELGRAPH_API UClass* StaticClass<UVG_Example_Erosion>()
	{
		return UVG_Example_Erosion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVG_Example_Erosion(Z_Construct_UClass_UVG_Example_Erosion, &UVG_Example_Erosion::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVG_Example_Erosion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_Erosion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
