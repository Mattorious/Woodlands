// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelFlatGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFlatGenerator() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFlatGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFlatGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FVoxelFlatGeneratorDataItemConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFlatGeneratorDataItemConfig"), sizeof(FVoxelFlatGeneratorDataItemConfig), Get_Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFlatGeneratorDataItemConfig>()
{
	return FVoxelFlatGeneratorDataItemConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig(FVoxelFlatGeneratorDataItemConfig::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFlatGeneratorDataItemConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFlatGeneratorDataItemConfig
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFlatGeneratorDataItemConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFlatGeneratorDataItemConfig")),new UScriptStruct::TCppStructOps<FVoxelFlatGeneratorDataItemConfig>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFlatGeneratorDataItemConfig;
	struct Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubtractItems_MetaData[];
#endif
		static void NewProp_bSubtractItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtractItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Smoothness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Smoothness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFlatGeneratorDataItemConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, will subtract the items from the world and will invert their values\n// If false, will add the items to the world and will not invert their values\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "If true, will subtract the items from the world and will invert their values\nIf false, will add the items to the world and will not invert their values" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_SetBit(void* Obj)
	{
		((FVoxelFlatGeneratorDataItemConfig*)Obj)->bSubtractItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems = { "bSubtractItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelFlatGeneratorDataItemConfig), &Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxel32BitMask" },
		{ "Category", "Config" },
		{ "Comment", "// Only items matching this mask will be added\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "Only items matching this mask will be added" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFlatGeneratorDataItemConfig, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// In voxels, how smooth the intersection with the existing terrain and these items should be\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "In voxels, how smooth the intersection with the existing terrain and these items should be" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness = { "Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFlatGeneratorDataItemConfig, Smoothness), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFlatGeneratorDataItemConfig",
		sizeof(FVoxelFlatGeneratorDataItemConfig),
		alignof(FVoxelFlatGeneratorDataItemConfig),
		Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFlatGeneratorDataItemConfig"), sizeof(FVoxelFlatGeneratorDataItemConfig), Get_Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Hash() { return 2378009250U; }
	void UVoxelFlatGenerator::StaticRegisterNativesUVoxelFlatGenerator()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFlatGenerator_NoRegister()
	{
		return UVoxelFlatGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFlatGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataItemConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataItemConfigs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataItemConfigs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFlatGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlatGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Flat world\n */" },
		{ "IncludePath", "VoxelGenerators/VoxelFlatGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "Flat world" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs = { "DataItemConfigs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFlatGenerator, DataItemConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_Inner = { "DataItemConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFlatGenerator, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFlatGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFlatGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::ClassParams = {
		&UVoxelFlatGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFlatGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFlatGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFlatGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFlatGenerator, 1890324807);
	template<> VOXEL_API UClass* StaticClass<UVoxelFlatGenerator>()
	{
		return UVoxelFlatGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFlatGenerator(Z_Construct_UClass_UVoxelFlatGenerator, &UVoxelFlatGenerator::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelFlatGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFlatGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
