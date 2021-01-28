// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VG_Example_FastCraters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVG_Example_FastCraters() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_FastCraters_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_FastCraters();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVG_Example_FastCraters::StaticRegisterNativesUVG_Example_FastCraters()
	{
	}
	UClass* Z_Construct_UClass_UVG_Example_FastCraters_NoRegister()
	{
		return UVG_Example_FastCraters::StaticClass();
	}
	struct Z_Construct_UClass_UVG_Example_FastCraters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVG_Example_FastCraters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVG_Example_FastCraters_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_FastCraters.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_FastCraters.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVG_Example_FastCraters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_FastCraters>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_FastCraters_Statics::ClassParams = {
		&UVG_Example_FastCraters::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVG_Example_FastCraters_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_FastCraters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVG_Example_FastCraters()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVG_Example_FastCraters_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVG_Example_FastCraters, 2322768046);
	template<> VOXELGRAPH_API UClass* StaticClass<UVG_Example_FastCraters>()
	{
		return UVG_Example_FastCraters::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVG_Example_FastCraters(Z_Construct_UClass_UVG_Example_FastCraters, &UVG_Example_FastCraters::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVG_Example_FastCraters"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_FastCraters);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
