// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGenerator() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds();
// End Cross Module References
	void UVoxelGenerator::StaticRegisterNativesUVoxelGenerator()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister()
	{
		return UVoxelGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A UVoxelGenerator is used to create a FVoxelGeneratorInstance\n */" },
		{ "IncludePath", "VoxelGenerators/VoxelGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGenerator.h" },
		{ "ToolTip", "A UVoxelGenerator is used to create a FVoxelGeneratorInstance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGenerator_Statics::ClassParams = {
		&UVoxelGenerator::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGenerator, 2498318206);
	template<> VOXEL_API UClass* StaticClass<UVoxelGenerator>()
	{
		return UVoxelGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGenerator(Z_Construct_UClass_UVoxelGenerator, &UVoxelGenerator::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGenerator);
	void UVoxelTransformableGenerator::StaticRegisterNativesUVoxelTransformableGenerator()
	{
	}
	UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister()
	{
		return UVoxelTransformableGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTransformableGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTransformableGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTransformableGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Generator that can be moved around\n" },
		{ "IncludePath", "VoxelGenerators/VoxelGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGenerator.h" },
		{ "ToolTip", "Generator that can be moved around" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTransformableGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableGenerator_Statics::ClassParams = {
		&UVoxelTransformableGenerator::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTransformableGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTransformableGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelTransformableGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelTransformableGenerator, 217893308);
	template<> VOXEL_API UClass* StaticClass<UVoxelTransformableGenerator>()
	{
		return UVoxelTransformableGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelTransformableGenerator(Z_Construct_UClass_UVoxelTransformableGenerator, &UVoxelTransformableGenerator::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelTransformableGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableGenerator);
	void UVoxelTransformableGeneratorWithBounds::StaticRegisterNativesUVoxelTransformableGeneratorWithBounds()
	{
	}
	UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_NoRegister()
	{
		return UVoxelTransformableGeneratorWithBounds::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGenerators/VoxelGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableGeneratorWithBounds>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::ClassParams = {
		&UVoxelTransformableGeneratorWithBounds::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelTransformableGeneratorWithBounds, 2787557513);
	template<> VOXEL_API UClass* StaticClass<UVoxelTransformableGeneratorWithBounds>()
	{
		return UVoxelTransformableGeneratorWithBounds::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelTransformableGeneratorWithBounds(Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds, &UVoxelTransformableGeneratorWithBounds::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelTransformableGeneratorWithBounds"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableGeneratorWithBounds);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
