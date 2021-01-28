// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGavoronoiNoiseNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGavoronoiNoiseNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DErosion_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DErosion();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal();
// End Cross Module References
	void UVoxelNode_2DGavoronoiNoise::StaticRegisterNativesUVoxelNode_2DGavoronoiNoise()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_NoRegister()
	{
		return UVoxelNode_2DGavoronoiNoise::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Jitter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|Gavoronoi Noise" },
		{ "Comment", "// 2D Gavoronoi Noise\n// This noise can be directed, and is used to fake erosion\n// See https://www.shadertoy.com/view/llsGWl\n" },
		{ "DisplayName", "2D Gavoronoi Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "2D Gavoronoi Noise\nThis noise can be directed, and is used to fake erosion\nSee https:www.shadertoy.com/view/llsGWl" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter_MetaData[] = {
		{ "Category", "Gavoronoi Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_2DGavoronoiNoise, Jitter), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DGavoronoiNoise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::ClassParams = {
		&UVoxelNode_2DGavoronoiNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_2DGavoronoiNoise, 843015168);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DGavoronoiNoise>()
	{
		return UVoxelNode_2DGavoronoiNoise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_2DGavoronoiNoise(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise, &UVoxelNode_2DGavoronoiNoise::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_2DGavoronoiNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DGavoronoiNoise);
	void UVoxelNode_2DGavoronoiNoiseFractal::StaticRegisterNativesUVoxelNode_2DGavoronoiNoiseFractal()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_NoRegister()
	{
		return UVoxelNode_2DGavoronoiNoiseFractal::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Jitter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeFractal,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|Gavoronoi Noise" },
		{ "Comment", "// 2D Gavoronoi Noise Fractal\n// This noise can be directed, and is used to fake erosion\n// See https://www.shadertoy.com/view/llsGWl\n" },
		{ "DisplayName", "2D Gavoronoi Noise Fractal" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "2D Gavoronoi Noise Fractal\nThis noise can be directed, and is used to fake erosion\nSee https:www.shadertoy.com/view/llsGWl" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter_MetaData[] = {
		{ "Category", "Gavoronoi Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_2DGavoronoiNoiseFractal, Jitter), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DGavoronoiNoiseFractal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::ClassParams = {
		&UVoxelNode_2DGavoronoiNoiseFractal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_2DGavoronoiNoiseFractal, 2377481346);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DGavoronoiNoiseFractal>()
	{
		return UVoxelNode_2DGavoronoiNoiseFractal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_2DGavoronoiNoiseFractal(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal, &UVoxelNode_2DGavoronoiNoiseFractal::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_2DGavoronoiNoiseFractal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DGavoronoiNoiseFractal);
	void UVoxelNode_2DErosion::StaticRegisterNativesUVoxelNode_2DErosion()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_2DErosion_NoRegister()
	{
		return UVoxelNode_2DErosion::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DErosion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Jitter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DErosion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DErosion_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|Erosion" },
		{ "Comment", "// 2D Erosion\n// Add this to your noise to fake erosion\n// From https://www.shadertoy.com/view/MtGcWh\n" },
		{ "DisplayName", "2D Erosion" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "2D Erosion\nAdd this to your noise to fake erosion\nFrom https:www.shadertoy.com/view/MtGcWh" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter_MetaData[] = {
		{ "Category", "Erosion settings" },
		{ "Comment", "// Controls the jitter of the noise used for the \"ravines\"\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "Controls the jitter of the noise used for the \"ravines\"" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_2DErosion, Jitter), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DErosion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DErosion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DErosion_Statics::ClassParams = {
		&UVoxelNode_2DErosion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DErosion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_2DErosion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_2DErosion, 3536290037);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DErosion>()
	{
		return UVoxelNode_2DErosion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_2DErosion(Z_Construct_UClass_UVoxelNode_2DErosion, &UVoxelNode_2DErosion::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_2DErosion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DErosion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
