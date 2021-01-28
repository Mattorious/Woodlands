// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelEmptyGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEmptyGenerator() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEmptyGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEmptyGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelEmptyGenerator::StaticRegisterNativesUVoxelEmptyGenerator()
	{
	}
	UClass* Z_Construct_UClass_UVoxelEmptyGenerator_NoRegister()
	{
		return UVoxelEmptyGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelEmptyGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelEmptyGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelEmptyGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Empty world, can be used to remove voxels\n */" },
		{ "IncludePath", "VoxelGenerators/VoxelEmptyGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelEmptyGenerator.h" },
		{ "ToolTip", "Empty world, can be used to remove voxels" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelEmptyGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelEmptyGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEmptyGenerator_Statics::ClassParams = {
		&UVoxelEmptyGenerator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelEmptyGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEmptyGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelEmptyGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelEmptyGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelEmptyGenerator, 4210869656);
	template<> VOXEL_API UClass* StaticClass<UVoxelEmptyGenerator>()
	{
		return UVoxelEmptyGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelEmptyGenerator(Z_Construct_UClass_UVoxelEmptyGenerator, &UVoxelEmptyGenerator::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelEmptyGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEmptyGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
