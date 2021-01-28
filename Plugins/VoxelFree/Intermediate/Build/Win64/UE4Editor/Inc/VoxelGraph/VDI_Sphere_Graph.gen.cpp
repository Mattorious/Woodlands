// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VDI_Sphere_Graph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVDI_Sphere_Graph() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Sphere_Graph_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Sphere_Graph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVDI_Sphere_Graph::StaticRegisterNativesUVDI_Sphere_Graph()
	{
	}
	UClass* Z_Construct_UClass_UVDI_Sphere_Graph_NoRegister()
	{
		return UVDI_Sphere_Graph::StaticClass();
	}
	struct Z_Construct_UClass_UVDI_Sphere_Graph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVDI_Sphere_Graph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVDI_Sphere_Graph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VDI_Sphere_Graph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Sphere_Graph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVDI_Sphere_Graph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVDI_Sphere_Graph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVDI_Sphere_Graph_Statics::ClassParams = {
		&UVDI_Sphere_Graph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVDI_Sphere_Graph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Sphere_Graph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVDI_Sphere_Graph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVDI_Sphere_Graph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVDI_Sphere_Graph, 1780852309);
	template<> VOXELGRAPH_API UClass* StaticClass<UVDI_Sphere_Graph>()
	{
		return UVDI_Sphere_Graph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVDI_Sphere_Graph(Z_Construct_UClass_UVDI_Sphere_Graph, &UVDI_Sphere_Graph::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVDI_Sphere_Graph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVDI_Sphere_Graph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
