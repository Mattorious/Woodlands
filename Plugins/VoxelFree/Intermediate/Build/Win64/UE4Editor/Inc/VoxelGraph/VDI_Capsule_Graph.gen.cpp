// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VDI_Capsule_Graph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVDI_Capsule_Graph() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Capsule_Graph_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Capsule_Graph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVDI_Capsule_Graph::StaticRegisterNativesUVDI_Capsule_Graph()
	{
	}
	UClass* Z_Construct_UClass_UVDI_Capsule_Graph_NoRegister()
	{
		return UVDI_Capsule_Graph::StaticClass();
	}
	struct Z_Construct_UClass_UVDI_Capsule_Graph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Noise_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Noise_Amplitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVDI_Capsule_Graph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVDI_Capsule_Graph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VDI_Capsule_Graph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Capsule_Graph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Capsule_Graph.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVDI_Capsule_Graph, Seed), METADATA_PARAMS(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// Relative to the radius\n" },
		{ "DisplayName", "Noise Amplitude" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Capsule_Graph.h" },
		{ "ToolTip", "Relative to the radius" },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude = { "Noise_Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVDI_Capsule_Graph, Noise_Amplitude), METADATA_PARAMS(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVDI_Capsule_Graph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVDI_Capsule_Graph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVDI_Capsule_Graph_Statics::ClassParams = {
		&UVDI_Capsule_Graph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVDI_Capsule_Graph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVDI_Capsule_Graph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVDI_Capsule_Graph, 3429239010);
	template<> VOXELGRAPH_API UClass* StaticClass<UVDI_Capsule_Graph>()
	{
		return UVDI_Capsule_Graph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVDI_Capsule_Graph(Z_Construct_UClass_UVDI_Capsule_Graph, &UVDI_Capsule_Graph::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVDI_Capsule_Graph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVDI_Capsule_Graph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
