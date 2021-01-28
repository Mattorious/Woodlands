// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGeneratorSamplerNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorSamplerNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput();
// End Cross Module References
	void UVoxelNode_GeneratorSamplerBase::StaticRegisterNativesUVoxelNode_GeneratorSamplerBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_NoRegister()
	{
		return UVoxelNode_GeneratorSamplerBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GeneratorSamplerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::ClassParams = {
		&UVoxelNode_GeneratorSamplerBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GeneratorSamplerBase, 1163287018);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GeneratorSamplerBase>()
	{
		return UVoxelNode_GeneratorSamplerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GeneratorSamplerBase(Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase, &UVoxelNode_GeneratorSamplerBase::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GeneratorSamplerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GeneratorSamplerBase);
	void UVoxelNode_SingleGeneratorSamplerBase::StaticRegisterNativesUVoxelNode_SingleGeneratorSamplerBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_NoRegister()
	{
		return UVoxelNode_SingleGeneratorSamplerBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_SingleGeneratorSamplerBase, Generator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SingleGeneratorSamplerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::ClassParams = {
		&UVoxelNode_SingleGeneratorSamplerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SingleGeneratorSamplerBase, 1770691600);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SingleGeneratorSamplerBase>()
	{
		return UVoxelNode_SingleGeneratorSamplerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SingleGeneratorSamplerBase(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase, &UVoxelNode_SingleGeneratorSamplerBase::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SingleGeneratorSamplerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SingleGeneratorSamplerBase);
	void UVoxelNode_GetGeneratorValue::StaticRegisterNativesUVoxelNode_GetGeneratorValue()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue_NoRegister()
	{
		return UVoxelNode_GetGeneratorValue::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get Generator Value" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetGeneratorValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::ClassParams = {
		&UVoxelNode_GetGeneratorValue::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetGeneratorValue, 130882429);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetGeneratorValue>()
	{
		return UVoxelNode_GetGeneratorValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetGeneratorValue(Z_Construct_UClass_UVoxelNode_GetGeneratorValue, &UVoxelNode_GetGeneratorValue::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetGeneratorValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetGeneratorValue);
	void UVoxelNode_GetGeneratorMaterial::StaticRegisterNativesUVoxelNode_GetGeneratorMaterial()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_NoRegister()
	{
		return UVoxelNode_GetGeneratorMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get Generator Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetGeneratorMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::ClassParams = {
		&UVoxelNode_GetGeneratorMaterial::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetGeneratorMaterial, 3465370200);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetGeneratorMaterial>()
	{
		return UVoxelNode_GetGeneratorMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetGeneratorMaterial(Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial, &UVoxelNode_GetGeneratorMaterial::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetGeneratorMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetGeneratorMaterial);
	void UVoxelNode_GetGeneratorCustomOutput::StaticRegisterNativesUVoxelNode_GetGeneratorCustomOutput()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_NoRegister()
	{
		return UVoxelNode_GetGeneratorCustomOutput::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get Generator Custom Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GetGeneratorCustomOutput, OutputName), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetGeneratorCustomOutput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::ClassParams = {
		&UVoxelNode_GetGeneratorCustomOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetGeneratorCustomOutput, 2207782233);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetGeneratorCustomOutput>()
	{
		return UVoxelNode_GetGeneratorCustomOutput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetGeneratorCustomOutput(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput, &UVoxelNode_GetGeneratorCustomOutput::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetGeneratorCustomOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetGeneratorCustomOutput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
