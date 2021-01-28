// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelFactories.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFactories() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFoliageCollectionFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFoliageCollectionFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFoliageBiomeFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFoliageBiomeFactory();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageBiomeType_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfigFactory();
// End Cross Module References
	void UVoxelFactory::StaticRegisterNativesUVoxelFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFactory_NoRegister()
	{
		return UVoxelFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFactory_Statics::ClassParams = {
		&UVoxelFactory::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFactory, 1389051163);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelFactory>()
	{
		return UVoxelFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFactory(Z_Construct_UClass_UVoxelFactory, &UVoxelFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFactory);
	void UVoxelWorldSaveObjectFactory::StaticRegisterNativesUVoxelWorldSaveObjectFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory_NoRegister()
	{
		return UVoxelWorldSaveObjectFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldSaveObjectFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::ClassParams = {
		&UVoxelWorldSaveObjectFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelWorldSaveObjectFactory, 1039370712);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelWorldSaveObjectFactory>()
	{
		return UVoxelWorldSaveObjectFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelWorldSaveObjectFactory(Z_Construct_UClass_UVoxelWorldSaveObjectFactory, &UVoxelWorldSaveObjectFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelWorldSaveObjectFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldSaveObjectFactory);
	void UVoxelFoliageCollectionFactory::StaticRegisterNativesUVoxelFoliageCollectionFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFoliageCollectionFactory_NoRegister()
	{
		return UVoxelFoliageCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFoliageCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFoliageCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFoliageCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFoliageCollectionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFoliageCollectionFactory_Statics::ClassParams = {
		&UVoxelFoliageCollectionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageCollectionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFoliageCollectionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFoliageCollectionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFoliageCollectionFactory, 678407160);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelFoliageCollectionFactory>()
	{
		return UVoxelFoliageCollectionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFoliageCollectionFactory(Z_Construct_UClass_UVoxelFoliageCollectionFactory, &UVoxelFoliageCollectionFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelFoliageCollectionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFoliageCollectionFactory);
	void UVoxelFoliageBiomeTypeFactory::StaticRegisterNativesUVoxelFoliageBiomeTypeFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_NoRegister()
	{
		return UVoxelFoliageBiomeTypeFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFoliageBiomeTypeFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_Statics::ClassParams = {
		&UVoxelFoliageBiomeTypeFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFoliageBiomeTypeFactory, 47257186);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelFoliageBiomeTypeFactory>()
	{
		return UVoxelFoliageBiomeTypeFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFoliageBiomeTypeFactory(Z_Construct_UClass_UVoxelFoliageBiomeTypeFactory, &UVoxelFoliageBiomeTypeFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelFoliageBiomeTypeFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFoliageBiomeTypeFactory);
	void UVoxelFoliageBiomeFactory::StaticRegisterNativesUVoxelFoliageBiomeFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFoliageBiomeFactory_NoRegister()
	{
		return UVoxelFoliageBiomeFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliageBiomeFactory, Type), Z_Construct_UClass_UVoxelFoliageBiomeType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFoliageBiomeFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::ClassParams = {
		&UVoxelFoliageBiomeFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFoliageBiomeFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFoliageBiomeFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFoliageBiomeFactory, 169685917);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelFoliageBiomeFactory>()
	{
		return UVoxelFoliageBiomeFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFoliageBiomeFactory(Z_Construct_UClass_UVoxelFoliageBiomeFactory, &UVoxelFoliageBiomeFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelFoliageBiomeFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFoliageBiomeFactory);
	void UVoxelBasicMaterialCollectionFactory::StaticRegisterNativesUVoxelBasicMaterialCollectionFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_NoRegister()
	{
		return UVoxelBasicMaterialCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBasicMaterialCollectionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::ClassParams = {
		&UVoxelBasicMaterialCollectionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBasicMaterialCollectionFactory, 3233516595);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelBasicMaterialCollectionFactory>()
	{
		return UVoxelBasicMaterialCollectionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBasicMaterialCollectionFactory(Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory, &UVoxelBasicMaterialCollectionFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelBasicMaterialCollectionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBasicMaterialCollectionFactory);
	void UVoxelBlueprintMaterialCollectionFactory::StaticRegisterNativesUVoxelBlueprintMaterialCollectionFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_NoRegister()
	{
		return UVoxelBlueprintMaterialCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlueprintMaterialCollectionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_Statics::ClassParams = {
		&UVoxelBlueprintMaterialCollectionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBlueprintMaterialCollectionFactory, 1572994727);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelBlueprintMaterialCollectionFactory>()
	{
		return UVoxelBlueprintMaterialCollectionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBlueprintMaterialCollectionFactory(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionFactory, &UVoxelBlueprintMaterialCollectionFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelBlueprintMaterialCollectionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlueprintMaterialCollectionFactory);
	void UVoxelInstancedMaterialCollectionTemplatesFactory::StaticRegisterNativesUVoxelInstancedMaterialCollectionTemplatesFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_NoRegister()
	{
		return UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionTemplatesFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::ClassParams = {
		&UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInstancedMaterialCollectionTemplatesFactory, 3307419354);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelInstancedMaterialCollectionTemplatesFactory>()
	{
		return UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory, &UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelInstancedMaterialCollectionTemplatesFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionTemplatesFactory);
	void UVoxelInstancedMaterialCollectionFactory::StaticRegisterNativesUVoxelInstancedMaterialCollectionFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_NoRegister()
	{
		return UVoxelInstancedMaterialCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::ClassParams = {
		&UVoxelInstancedMaterialCollectionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInstancedMaterialCollectionFactory, 1265406801);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelInstancedMaterialCollectionFactory>()
	{
		return UVoxelInstancedMaterialCollectionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInstancedMaterialCollectionFactory(Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory, &UVoxelInstancedMaterialCollectionFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelInstancedMaterialCollectionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionFactory);
	void UVoxelInstancedMaterialCollectionInstanceFactory::StaticRegisterNativesUVoxelInstancedMaterialCollectionInstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_NoRegister()
	{
		return UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionInstanceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::ClassParams = {
		&UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInstancedMaterialCollectionInstanceFactory, 2619732633);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelInstancedMaterialCollectionInstanceFactory>()
	{
		return UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInstancedMaterialCollectionInstanceFactory(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory, &UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelInstancedMaterialCollectionInstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionInstanceFactory);
	void UVoxelLandscapeMaterialCollectionFactory::StaticRegisterNativesUVoxelLandscapeMaterialCollectionFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_NoRegister()
	{
		return UVoxelLandscapeMaterialCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLandscapeMaterialCollectionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::ClassParams = {
		&UVoxelLandscapeMaterialCollectionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelLandscapeMaterialCollectionFactory, 1630928459);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelLandscapeMaterialCollectionFactory>()
	{
		return UVoxelLandscapeMaterialCollectionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelLandscapeMaterialCollectionFactory(Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory, &UVoxelLandscapeMaterialCollectionFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelLandscapeMaterialCollectionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLandscapeMaterialCollectionFactory);
	void UVoxelGraphMacroAssetFactory::StaticRegisterNativesUVoxelGraphMacroAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory_NoRegister()
	{
		return UVoxelGraphMacroAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::ClassParams = {
		&UVoxelGraphMacroAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphMacroAssetFactory, 477437759);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelGraphMacroAssetFactory>()
	{
		return UVoxelGraphMacroAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphMacroAssetFactory(Z_Construct_UClass_UVoxelGraphMacroAssetFactory, &UVoxelGraphMacroAssetFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelGraphMacroAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroAssetFactory);
	void UVoxelGraphGeneratorAssetFactory::StaticRegisterNativesUVoxelGraphGeneratorAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_NoRegister()
	{
		return UVoxelGraphGeneratorAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphGeneratorAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::ClassParams = {
		&UVoxelGraphGeneratorAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphGeneratorAssetFactory, 449852149);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelGraphGeneratorAssetFactory>()
	{
		return UVoxelGraphGeneratorAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphGeneratorAssetFactory(Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory, &UVoxelGraphGeneratorAssetFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelGraphGeneratorAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphGeneratorAssetFactory);
	void UVoxelGraphDataItemConfigFactory::StaticRegisterNativesUVoxelGraphDataItemConfigFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_NoRegister()
	{
		return UVoxelGraphDataItemConfigFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphDataItemConfigFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::ClassParams = {
		&UVoxelGraphDataItemConfigFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphDataItemConfigFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphDataItemConfigFactory, 2740005642);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelGraphDataItemConfigFactory>()
	{
		return UVoxelGraphDataItemConfigFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphDataItemConfigFactory(Z_Construct_UClass_UVoxelGraphDataItemConfigFactory, &UVoxelGraphDataItemConfigFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelGraphDataItemConfigFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphDataItemConfigFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
