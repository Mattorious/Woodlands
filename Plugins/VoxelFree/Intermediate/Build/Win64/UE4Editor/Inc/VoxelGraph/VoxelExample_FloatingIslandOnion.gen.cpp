// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_FloatingIslandOnion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_FloatingIslandOnion() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_FloatingIslandOnion();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelExample_FloatingIslandOnion::StaticRegisterNativesUVoxelExample_FloatingIslandOnion()
	{
	}
	UClass* Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_NoRegister()
	{
		return UVoxelExample_FloatingIslandOnion::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perturb_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Perturb_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perturb_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Perturb_Amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_FloatingIslandOnion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Top Noise Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Height = { "Top_Noise_Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Top_Noise_Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Top Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Frequency = { "Top_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Top_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Seed), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Perturb Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Frequency = { "Perturb_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Perturb_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Amplitude_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Perturb Amplitude" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Amplitude = { "Perturb_Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Perturb_Amplitude), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Height_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Height,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_FloatingIslandOnion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::ClassParams = {
		&UVoxelExample_FloatingIslandOnion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_FloatingIslandOnion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelExample_FloatingIslandOnion, 2009211246);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_FloatingIslandOnion>()
	{
		return UVoxelExample_FloatingIslandOnion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelExample_FloatingIslandOnion(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion, &UVoxelExample_FloatingIslandOnion::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelExample_FloatingIslandOnion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_FloatingIslandOnion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
