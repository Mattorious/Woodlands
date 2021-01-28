// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VG_Example_Dunes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVG_Example_Dunes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Dunes_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Dunes();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVG_Example_Dunes::StaticRegisterNativesUVG_Example_Dunes()
	{
	}
	UClass* Z_Construct_UClass_UVG_Example_Dunes_NoRegister()
	{
		return UVG_Example_Dunes::StaticClass();
	}
	struct Z_Construct_UClass_UVG_Example_Dunes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Noise_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Noise_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dune_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dune_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVG_Example_Dunes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_Dunes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency = { "Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Height), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Dune Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency = { "Dune_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Dune_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// The direction of the noise. Will be normalized\n" },
		{ "DisplayName", "Direction Y" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
		{ "ToolTip", "The direction of the noise. Will be normalized" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y = { "Direction_Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Direction_Y), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// The direction of the noise. Will be normalized\n" },
		{ "DisplayName", "Direction X" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
		{ "ToolTip", "The direction of the noise. Will be normalized" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X = { "Direction_X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVG_Example_Dunes, Direction_X), METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVG_Example_Dunes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_Dunes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_Dunes_Statics::ClassParams = {
		&UVG_Example_Dunes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVG_Example_Dunes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVG_Example_Dunes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVG_Example_Dunes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVG_Example_Dunes, 1994784529);
	template<> VOXELGRAPH_API UClass* StaticClass<UVG_Example_Dunes>()
	{
		return UVG_Example_Dunes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVG_Example_Dunes(Z_Construct_UClass_UVG_Example_Dunes, &UVG_Example_Dunes::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVG_Example_Dunes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_Dunes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
