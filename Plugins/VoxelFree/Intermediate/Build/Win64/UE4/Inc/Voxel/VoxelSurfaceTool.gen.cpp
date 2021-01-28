// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelSurfaceTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceTool() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceToolMask();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTool_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTool();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* EVoxelSurfaceToolMaskType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSurfaceToolMaskType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSurfaceToolMaskType>()
	{
		return EVoxelSurfaceToolMaskType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSurfaceToolMaskType(EVoxelSurfaceToolMaskType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSurfaceToolMaskType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Hash() { return 2947072885U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSurfaceToolMaskType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSurfaceToolMaskType::Texture", (int64)EVoxelSurfaceToolMaskType::Texture },
				{ "EVoxelSurfaceToolMaskType::Generator", (int64)EVoxelSurfaceToolMaskType::Generator },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Generator.Name", "EVoxelSurfaceToolMaskType::Generator" },
				{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
				{ "Texture.Name", "EVoxelSurfaceToolMaskType::Texture" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSurfaceToolMaskType",
				"EVoxelSurfaceToolMaskType",
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
class UScriptStruct* FVoxelSurfaceToolMask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceToolMask"), sizeof(FVoxelSurfaceToolMask), Get_Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceToolMask>()
{
	return FVoxelSurfaceToolMask::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSurfaceToolMask(FVoxelSurfaceToolMask::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSurfaceToolMask"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceToolMask
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceToolMask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSurfaceToolMask")),new UScriptStruct::TCppStructOps<FVoxelSurfaceToolMask>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceToolMask;
	struct Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorDebugTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratorDebugTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleWithBrushSize_MetaData[];
#endif
		static void NewProp_bScaleWithBrushSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleWithBrushSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedsToRandomize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SeedsToRandomize;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeedsToRandomize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceToolMask>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Mask" },
		{ "Comment", "// ScaleY/ScaleX. MaskScale = ScaleX\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "ScaleY/ScaleX. MaskScale = ScaleX" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture = { "GeneratorDebugTexture", nullptr, (EPropertyFlags)0x0010040000022015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, GeneratorDebugTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_SetBit(void* Obj)
	{
		((FVoxelSurfaceToolMask*)Obj)->bScaleWithBrushSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize = { "bScaleWithBrushSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSurfaceToolMask), &Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize = { "SeedsToRandomize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, SeedsToRandomize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_Inner = { "SeedsToRandomize", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Generator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Mask|Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Channel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Mask|Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Type), Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceToolMask",
		sizeof(FVoxelSurfaceToolMask),
		alignof(FVoxelSurfaceToolMask),
		Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceToolMask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSurfaceToolMask"), sizeof(FVoxelSurfaceToolMask), Get_Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Hash() { return 546858551U; }
	void UVoxelSurfaceTool::StaticRegisterNativesUVoxelSurfaceTool()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSurfaceTool_NoRegister()
	{
		return UVoxelSurfaceTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSurfaceTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskGeneratorCache_RenderTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskGeneratorCache_RenderTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMask_MetaData[];
#endif
		static void NewProp_bUseMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFalloff_MetaData[];
#endif
		static void NewProp_bEnableFalloff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModulateStrengthByDeltaTime_MetaData[];
#endif
		static void NewProp_bModulateStrengthByDeltaTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModulateStrengthByDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlignToMovement_MetaData[];
#endif
		static void NewProp_bAlignToMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlignToMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovementAffectsStrength_MetaData[];
#endif
		static void NewProp_bMovementAffectsStrength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovementAffectsStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2DBrush_MetaData[];
#endif
		static void NewProp_b2DBrush_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b2DBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaintStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaint_MetaData[];
#endif
		static void NewProp_bPaint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPropagateMaterials_MetaData[];
#endif
		static void NewProp_bPropagateMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPropagateMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SculptStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SculptStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSculpt_MetaData[];
#endif
		static void NewProp_bSculpt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSculpt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSurfaceTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture = { "MaskGeneratorCache_RenderTexture", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, MaskGeneratorCache_RenderTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask_MetaData[] = {
		{ "Category", "Mask" },
		{ "EditCondition", "bUseMask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, Mask), Z_Construct_UScriptStruct_FVoxelSurfaceToolMask, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bUseMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask = { "bUseMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, Falloff), METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bEnableFalloff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff = { "bEnableFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If true, strength will be modulated by the time since the last edit so that the results don't depend on the framerate\n// Automatically turned off if Stride > 0, or if paint strength = 1\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If true, strength will be modulated by the time since the last edit so that the results don't depend on the framerate\nAutomatically turned off if Stride > 0, or if paint strength = 1" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bModulateStrengthByDeltaTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime = { "bModulateStrengthByDeltaTime", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If false, align the tool to the mouse movement\n" },
		{ "EditCondition", "!bAlignToMovement" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If false, align the tool to the mouse movement" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection = { "FixedDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, FixedDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bAlignToMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement = { "bAlignToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Relative to the radius\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "Relative to the radius" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, Stride), METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If true, sculpt/paint strength will be modulated by the distance the mouse travels\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If true, sculpt/paint strength will be modulated by the distance the mouse travels" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bMovementAffectsStrength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength = { "bMovementAffectsStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Will only affect the topmost voxels\n" },
		{ "DisplayName", "2D Brush" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "Will only affect the topmost voxels" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->b2DBrush = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush = { "b2DBrush", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength = { "PaintStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, PaintStrength), METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bPaint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint = { "bPaint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "Comment", "// If true, will propagate materials so that the surface stays correctly painted.\n// Disabled in 2D mode or if Paint is enabled\n" },
		{ "EditCondition", "!bPaint && !b2DBrush" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If true, will propagate materials so that the surface stays correctly painted.\nDisabled in 2D mode or if Paint is enabled" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bPropagateMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials = { "bPropagateMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "Comment", "// Relative to brush size\n" },
		{ "EditCondition", "bSculpt" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "Relative to brush size" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength = { "SculptStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, SculptStrength), METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_SetBit(void* Obj)
	{
		((UVoxelSurfaceTool*)Obj)->bSculpt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt = { "bSculpt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSurfaceTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSurfaceTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSurfaceTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::ClassParams = {
		&UVoxelSurfaceTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSurfaceTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSurfaceTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSurfaceTool, 491774073);
	template<> VOXEL_API UClass* StaticClass<UVoxelSurfaceTool>()
	{
		return UVoxelSurfaceTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSurfaceTool(Z_Construct_UClass_UVoxelSurfaceTool, &UVoxelSurfaceTool::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSurfaceTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSurfaceTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
