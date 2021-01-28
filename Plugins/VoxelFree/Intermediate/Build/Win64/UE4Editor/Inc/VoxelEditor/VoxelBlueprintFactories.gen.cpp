// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelBlueprintFactories.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBlueprintFactories() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBlueprintFactoryBase_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBlueprintFactoryBase();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBlueprintClassFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBlueprintClassFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBlueprintAssetFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBlueprintAssetFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFoliageAssetFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelFoliageAssetFactory();
// End Cross Module References
	void UVoxelBlueprintFactoryBase::StaticRegisterNativesUVoxelBlueprintFactoryBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelBlueprintFactoryBase_NoRegister()
	{
		return UVoxelBlueprintFactoryBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelBlueprintFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelBlueprintFactories.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/Factories/VoxelBlueprintFactories.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBlueprintFactoryBase, ParentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::NewProp_ParentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlueprintFactoryBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::ClassParams = {
		&UVoxelBlueprintFactoryBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBlueprintFactoryBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBlueprintFactoryBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBlueprintFactoryBase, 3448119454);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelBlueprintFactoryBase>()
	{
		return UVoxelBlueprintFactoryBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBlueprintFactoryBase(Z_Construct_UClass_UVoxelBlueprintFactoryBase, &UVoxelBlueprintFactoryBase::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelBlueprintFactoryBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlueprintFactoryBase);
	void UVoxelBlueprintClassFactory::StaticRegisterNativesUVoxelBlueprintClassFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelBlueprintClassFactory_NoRegister()
	{
		return UVoxelBlueprintClassFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBlueprintClassFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBlueprintClassFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelBlueprintFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintClassFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelBlueprintFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelBlueprintFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBlueprintClassFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlueprintClassFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlueprintClassFactory_Statics::ClassParams = {
		&UVoxelBlueprintClassFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintClassFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintClassFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBlueprintClassFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBlueprintClassFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBlueprintClassFactory, 2147825663);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelBlueprintClassFactory>()
	{
		return UVoxelBlueprintClassFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBlueprintClassFactory(Z_Construct_UClass_UVoxelBlueprintClassFactory, &UVoxelBlueprintClassFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelBlueprintClassFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlueprintClassFactory);
	void UVoxelBlueprintAssetFactory::StaticRegisterNativesUVoxelBlueprintAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelBlueprintAssetFactory_NoRegister()
	{
		return UVoxelBlueprintAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBlueprintAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBlueprintAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelBlueprintFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelBlueprintFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelBlueprintFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBlueprintAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlueprintAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlueprintAssetFactory_Statics::ClassParams = {
		&UVoxelBlueprintAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBlueprintAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBlueprintAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBlueprintAssetFactory, 1960110038);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelBlueprintAssetFactory>()
	{
		return UVoxelBlueprintAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBlueprintAssetFactory(Z_Construct_UClass_UVoxelBlueprintAssetFactory, &UVoxelBlueprintAssetFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelBlueprintAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlueprintAssetFactory);
	void UVoxelFoliageAssetFactory::StaticRegisterNativesUVoxelFoliageAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFoliageAssetFactory_NoRegister()
	{
		return UVoxelFoliageAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFoliageAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFoliageAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelBlueprintAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliageAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "Factories/VoxelBlueprintFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelBlueprintFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFoliageAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFoliageAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFoliageAssetFactory_Statics::ClassParams = {
		&UVoxelFoliageAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliageAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliageAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFoliageAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFoliageAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFoliageAssetFactory, 828204345);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelFoliageAssetFactory>()
	{
		return UVoxelFoliageAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFoliageAssetFactory(Z_Construct_UClass_UVoxelFoliageAssetFactory, &UVoxelFoliageAssetFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelFoliageAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFoliageAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
