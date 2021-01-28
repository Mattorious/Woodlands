// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VDI_Ravine_Graph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVDI_Ravine_Graph() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Ravine_Graph_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Ravine_Graph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVDI_Ravine_Graph::StaticRegisterNativesUVDI_Ravine_Graph()
	{
	}
	UClass* Z_Construct_UClass_UVDI_Ravine_Graph_NoRegister()
	{
		return UVDI_Ravine_Graph::StaticClass();
	}
	struct Z_Construct_UClass_UVDI_Ravine_Graph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVDI_Ravine_Graph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVDI_Ravine_Graph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VDI_Ravine_Graph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Ravine_Graph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVDI_Ravine_Graph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVDI_Ravine_Graph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVDI_Ravine_Graph_Statics::ClassParams = {
		&UVDI_Ravine_Graph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVDI_Ravine_Graph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Ravine_Graph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVDI_Ravine_Graph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVDI_Ravine_Graph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVDI_Ravine_Graph, 3213474055);
	template<> VOXELGRAPH_API UClass* StaticClass<UVDI_Ravine_Graph>()
	{
		return UVDI_Ravine_Graph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVDI_Ravine_Graph(Z_Construct_UClass_UVDI_Ravine_Graph, &UVDI_Ravine_Graph::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVDI_Ravine_Graph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVDI_Ravine_Graph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
