// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelFoliage/VoxelFoliageDensity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFoliageDensity() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageDensityUVAxis();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageDensityType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageDensity();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
// End Cross Module References
	static UEnum* EVoxelFoliageDensityUVAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelFoliageDensityUVAxis, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelFoliageDensityUVAxis"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageDensityUVAxis>()
	{
		return EVoxelFoliageDensityUVAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelFoliageDensityUVAxis(EVoxelFoliageDensityUVAxis_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelFoliageDensityUVAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelFoliageDensityUVAxis_Hash() { return 1504206868U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageDensityUVAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelFoliageDensityUVAxis"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelFoliageDensityUVAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelFoliageDensityUVAxis::U", (int64)EVoxelFoliageDensityUVAxis::U },
				{ "EVoxelFoliageDensityUVAxis::V", (int64)EVoxelFoliageDensityUVAxis::V },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
				{ "U.Name", "EVoxelFoliageDensityUVAxis::U" },
				{ "V.Name", "EVoxelFoliageDensityUVAxis::V" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelFoliageDensityUVAxis",
				"EVoxelFoliageDensityUVAxis",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVoxelFoliageDensityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelFoliageDensityType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelFoliageDensityType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageDensityType>()
	{
		return EVoxelFoliageDensityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelFoliageDensityType(EVoxelFoliageDensityType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelFoliageDensityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelFoliageDensityType_Hash() { return 1123073660U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageDensityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelFoliageDensityType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelFoliageDensityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelFoliageDensityType::Constant", (int64)EVoxelFoliageDensityType::Constant },
				{ "EVoxelFoliageDensityType::GeneratorOutput", (int64)EVoxelFoliageDensityType::GeneratorOutput },
				{ "EVoxelFoliageDensityType::MaterialRGBA", (int64)EVoxelFoliageDensityType::MaterialRGBA },
				{ "EVoxelFoliageDensityType::MaterialUVs", (int64)EVoxelFoliageDensityType::MaterialUVs },
				{ "EVoxelFoliageDensityType::MaterialFiveWayBlend", (int64)EVoxelFoliageDensityType::MaterialFiveWayBlend },
				{ "EVoxelFoliageDensityType::SingleIndex", (int64)EVoxelFoliageDensityType::SingleIndex },
				{ "EVoxelFoliageDensityType::MultiIndex", (int64)EVoxelFoliageDensityType::MultiIndex },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Constant.Comment", "// Use a constant as density\n" },
				{ "Constant.Name", "EVoxelFoliageDensityType::Constant" },
				{ "Constant.ToolTip", "Use a constant as density" },
				{ "GeneratorOutput.Comment", "// Use a generator output\n" },
				{ "GeneratorOutput.Name", "EVoxelFoliageDensityType::GeneratorOutput" },
				{ "GeneratorOutput.ToolTip", "Use a generator output" },
				{ "MaterialFiveWayBlend.Comment", "// Use a five way blend strength\n" },
				{ "MaterialFiveWayBlend.Name", "EVoxelFoliageDensityType::MaterialFiveWayBlend" },
				{ "MaterialFiveWayBlend.ToolTip", "Use a five way blend strength" },
				{ "MaterialRGBA.Comment", "// Use one of the material RGBA channels\n" },
				{ "MaterialRGBA.Name", "EVoxelFoliageDensityType::MaterialRGBA" },
				{ "MaterialRGBA.ToolTip", "Use one of the material RGBA channels" },
				{ "MaterialUVs.Comment", "// Use the material UV channels\n" },
				{ "MaterialUVs.Name", "EVoxelFoliageDensityType::MaterialUVs" },
				{ "MaterialUVs.ToolTip", "Use the material UV channels" },
				{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
				{ "MultiIndex.Comment", "// Use a multi index channel\n" },
				{ "MultiIndex.Name", "EVoxelFoliageDensityType::MultiIndex" },
				{ "MultiIndex.ToolTip", "Use a multi index channel" },
				{ "SingleIndex.Comment", "// Use a single index channel\n" },
				{ "SingleIndex.Name", "EVoxelFoliageDensityType::SingleIndex" },
				{ "SingleIndex.ToolTip", "Use a single index channel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelFoliageDensityType",
				"EVoxelFoliageDensityType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVoxelFoliageDensity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageDensity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFoliageDensity, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFoliageDensity"), sizeof(FVoxelFoliageDensity), Get_Z_Construct_UScriptStruct_FVoxelFoliageDensity_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFoliageDensity>()
{
	return FVoxelFoliageDensity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFoliageDensity(FVoxelFoliageDensity::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFoliageDensity"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageDensity
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageDensity()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFoliageDensity")),new UScriptStruct::TCppStructOps<FVoxelFoliageDensity>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageDensity;
	struct Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertDensity_MetaData[];
#endif
		static void NewProp_bInvertDensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiIndexChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultiIndexChannels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiIndexChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleIndexChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SingleIndexChannels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SingleIndexChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiveWayBlendChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FiveWayBlendChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UVAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UVAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RGBAChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RGBAChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RGBAChannel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorOutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratorOutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMainGenerator_MetaData[];
#endif
		static void NewProp_bUseMainGenerator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMainGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Constant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFoliageDensity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bInvertDensity_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If true, will use 1 - Density instead\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
		{ "ToolTip", "If true, will use 1 - Density instead" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bInvertDensity_SetBit(void* Obj)
	{
		((FVoxelFoliageDensity*)Obj)->bInvertDensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bInvertDensity = { "bInvertDensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelFoliageDensity), &Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bInvertDensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bInvertDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bInvertDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_MultiIndexChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_MultiIndexChannels = { "MultiIndexChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, MultiIndexChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_MultiIndexChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_MultiIndexChannels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_MultiIndexChannels_Inner = { "MultiIndexChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_SingleIndexChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_SingleIndexChannels = { "SingleIndexChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, SingleIndexChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_SingleIndexChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_SingleIndexChannels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_SingleIndexChannels_Inner = { "SingleIndexChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_FiveWayBlendChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_FiveWayBlendChannel = { "FiveWayBlendChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, FiveWayBlendChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_FiveWayBlendChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_FiveWayBlendChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVAxis_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisplayName", "UV Axis" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVAxis = { "UVAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, UVAxis), Z_Construct_UEnum_Voxel_EVoxelFoliageDensityUVAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "DisplayName", "UV Channel" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, UVChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_RGBAChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisplayName", "RGBA Channel" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_RGBAChannel = { "RGBAChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, RGBAChannel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_RGBAChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_RGBAChannel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_RGBAChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_GeneratorOutputName_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Your generator needs to have a float output named like this\n" },
		{ "DensityOutput", "" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
		{ "ToolTip", "Your generator needs to have a float output named like this" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_GeneratorOutputName = { "GeneratorOutputName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, GeneratorOutputName), Z_Construct_UScriptStruct_FVoxelGeneratorOutputPicker, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_GeneratorOutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_GeneratorOutputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_CustomGenerator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_CustomGenerator = { "CustomGenerator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, CustomGenerator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_CustomGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_CustomGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bUseMainGenerator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Whether to use the voxel world generator, or a custom one\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
		{ "ToolTip", "Whether to use the voxel world generator, or a custom one" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bUseMainGenerator_SetBit(void* Obj)
	{
		((FVoxelFoliageDensity*)Obj)->bUseMainGenerator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bUseMainGenerator = { "bUseMainGenerator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelFoliageDensity), &Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bUseMainGenerator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bUseMainGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bUseMainGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Constant_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, Constant), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Constant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Constant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageDensity, Type), Z_Construct_UEnum_Voxel_EVoxelFoliageDensityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bInvertDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_MultiIndexChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_MultiIndexChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_SingleIndexChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_SingleIndexChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_FiveWayBlendChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_UVChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_RGBAChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_RGBAChannel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_GeneratorOutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_CustomGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_bUseMainGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Constant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFoliageDensity",
		sizeof(FVoxelFoliageDensity),
		alignof(FVoxelFoliageDensity),
		Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageDensity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageDensity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFoliageDensity"), sizeof(FVoxelFoliageDensity), Get_Z_Construct_UScriptStruct_FVoxelFoliageDensity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFoliageDensity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageDensity_Hash() { return 320054171U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
