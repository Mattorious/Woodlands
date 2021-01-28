// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelExamples/Public/VoxelExamplesModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExamplesModule() {}
// Cross Module References
	VOXELEXAMPLES_API UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy_NoRegister();
	VOXELEXAMPLES_API UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoxelExamples();
// End Cross Module References
	void UVoxelExamplesModuleDummy::StaticRegisterNativesUVoxelExamplesModuleDummy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy_NoRegister()
	{
		return UVoxelExamplesModuleDummy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelExamples,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// UBT doesn't like not having any UObject in a module\n" },
		{ "IncludePath", "VoxelExamplesModule.h" },
		{ "ModuleRelativePath", "Public/VoxelExamplesModule.h" },
		{ "ToolTip", "UBT doesn't like not having any UObject in a module" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExamplesModuleDummy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::ClassParams = {
		&UVoxelExamplesModuleDummy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelExamplesModuleDummy, 2956496844);
	template<> VOXELEXAMPLES_API UClass* StaticClass<UVoxelExamplesModuleDummy>()
	{
		return UVoxelExamplesModuleDummy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelExamplesModuleDummy(Z_Construct_UClass_UVoxelExamplesModuleDummy, &UVoxelExamplesModuleDummy::StaticClass, TEXT("/Script/VoxelExamples"), TEXT("UVoxelExamplesModuleDummy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExamplesModuleDummy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
