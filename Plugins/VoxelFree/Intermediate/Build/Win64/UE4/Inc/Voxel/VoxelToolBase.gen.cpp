// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelToolBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelToolBase() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelToolAlignment();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolBaseConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTool();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolTickData();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
	static UEnum* EVoxelToolAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelToolAlignment, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelToolAlignment"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelToolAlignment>()
	{
		return EVoxelToolAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelToolAlignment(EVoxelToolAlignment_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelToolAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelToolAlignment_Hash() { return 2827215777U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelToolAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelToolAlignment"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelToolAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelToolAlignment::Surface", (int64)EVoxelToolAlignment::Surface },
				{ "EVoxelToolAlignment::View", (int64)EVoxelToolAlignment::View },
				{ "EVoxelToolAlignment::Ground", (int64)EVoxelToolAlignment::Ground },
				{ "EVoxelToolAlignment::Up", (int64)EVoxelToolAlignment::Up },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Ground.Comment", "// Align with XY plane\n" },
				{ "Ground.Name", "EVoxelToolAlignment::Ground" },
				{ "Ground.ToolTip", "Align with XY plane" },
				{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
				{ "Surface.Comment", "// The tool follow the surface. The surface is frozen until the next click.\n" },
				{ "Surface.Name", "EVoxelToolAlignment::Surface" },
				{ "Surface.ToolTip", "The tool follow the surface. The surface is frozen until the next click." },
				{ "Up.Comment", "// Align with the camera view plane, with the Z component zeroed out\n" },
				{ "Up.Name", "EVoxelToolAlignment::Up" },
				{ "Up.ToolTip", "Align with the camera view plane, with the Z component zeroed out" },
				{ "View.Comment", "// Align with the camera view plane\n" },
				{ "View.Name", "EVoxelToolAlignment::View" },
				{ "View.ToolTip", "Align with the camera view plane" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelToolAlignment",
				"EVoxelToolAlignment",
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
class UScriptStruct* FVoxelToolBaseConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelToolBaseConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelToolBaseConfig"), sizeof(FVoxelToolBaseConfig), Get_Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelToolBaseConfig>()
{
	return FVoxelToolBaseConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelToolBaseConfig(FVoxelToolBaseConfig::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelToolBaseConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelToolBaseConfig
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelToolBaseConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelToolBaseConfig")),new UScriptStruct::TCppStructOps<FVoxelToolBaseConfig>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelToolBaseConfig;
	struct Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPlanePreview_MetaData[];
#endif
		static void NewProp_bShowPlanePreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPlanePreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAirMode_MetaData[];
#endif
		static void NewProp_bAirMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAirMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Alignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasAlignment_MetaData[];
#endif
		static void NewProp_bHasAlignment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedNormal_MetaData[];
#endif
		static void NewProp_bUseFixedNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedDirection_MetaData[];
#endif
		static void NewProp_bUseFixedDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelToolBaseConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview_MetaData[] = {
		{ "Category", "Aligment" },
		{ "Comment", "// If Alignment != Surface\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If Alignment != Surface" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview_SetBit(void* Obj)
	{
		((FVoxelToolBaseConfig*)Obj)->bShowPlanePreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview = { "bShowPlanePreview", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_DistanceToCamera_MetaData[] = {
		{ "Category", "Aligment" },
		{ "Comment", "// If Alignment != Surface and AirMode = true\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If Alignment != Surface and AirMode = true" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_DistanceToCamera = { "DistanceToCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, DistanceToCamera), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_DistanceToCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_DistanceToCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode_MetaData[] = {
		{ "Category", "Aligment" },
		{ "Comment", "// If Alignment != Surface\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If Alignment != Surface" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode_SetBit(void* Obj)
	{
		((FVoxelToolBaseConfig*)Obj)->bAirMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode = { "bAirMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Aligment" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, Alignment), Z_Construct_UEnum_Voxel_EVoxelToolAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment_MetaData[] = {
		{ "Category", "Aligment" },
		{ "Comment", "// Whether this tool has an alignment setting\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Whether this tool has an alignment setting" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment_SetBit(void* Obj)
	{
		((FVoxelToolBaseConfig*)Obj)->bHasAlignment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment = { "bHasAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedNormal_MetaData[] = {
		{ "Category", "Normal" },
		{ "Comment", "// If UseFixedNormal = true\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If UseFixedNormal = true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedNormal = { "FixedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, FixedNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal_MetaData[] = {
		{ "Category", "Normal" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal_SetBit(void* Obj)
	{
		((FVoxelToolBaseConfig*)Obj)->bUseFixedNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal = { "bUseFixedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedDirection_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "// If bUseFixedDirection = true\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If bUseFixedDirection = true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedDirection = { "FixedDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, FixedDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "// If false will align to movement\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If false will align to movement" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection_SetBit(void* Obj)
	{
		((FVoxelToolBaseConfig*)Obj)->bUseFixedDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection = { "bUseFixedDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Stride_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Set to 0 to disable\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Set to 0 to disable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, Stride), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Stride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Stride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_MeshMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_MeshMaterial = { "MeshMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, MeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_MeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_MeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_OverlayMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_OverlayMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_DistanceToCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Stride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_MeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_OverlayMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelToolBaseConfig",
		sizeof(FVoxelToolBaseConfig),
		alignof(FVoxelToolBaseConfig),
		Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolBaseConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelToolBaseConfig"), sizeof(FVoxelToolBaseConfig), Get_Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Hash() { return 708643408U; }
	DEFINE_FUNCTION(UVoxelToolBase::execUpdateToolMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_PROPERTY(FNameProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateToolMesh(Z_Param_Mesh,Z_Param_Material,Z_Param_Out_Transform,Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execSetToolOverlayBounds)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToolOverlayBounds(Z_Param_Out_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetValueAfterAxisInput)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValueAfterAxisInput(Z_Param_AxisName,Z_Param_CurrentValue,Z_Param_Min,Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetBoundsToCache)
	{
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=P_THIS->GetBoundsToCache(Z_Param_Out_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetDeltaTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDeltaTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetMouseMovementSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseMovementSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetLastFrameTickData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelToolTickData*)Z_Param__Result=P_THIS->GetLastFrameTickData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetTickData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelToolTickData*)Z_Param__Result=P_THIS->GetTickData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execLastFrameCanEdit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LastFrameCanEdit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execCanEdit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEdit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetToolDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetToolDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetToolNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetToolNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetToolPreviewPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetToolPreviewPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execGetToolPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetToolPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execK2_DoEdit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBoxWithValidity*)Z_Param__Result=P_THIS->K2_DoEdit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execK2_UpdateRender)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_OverlayMaterialInstance);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MeshMaterialInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_UpdateRender_Implementation(Z_Param_OverlayMaterialInstance,Z_Param_MeshMaterialInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolBase::execK2_GetToolConfig)
	{
		P_GET_STRUCT(FVoxelToolBaseConfig,Z_Param_InConfig);
		P_GET_STRUCT_REF(FVoxelToolBaseConfig,Z_Param_Out_OutConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetToolConfig_Implementation(Z_Param_InConfig,Z_Param_Out_OutConfig);
		P_NATIVE_END;
	}
	static FName NAME_UVoxelToolBase_K2_DoEdit = FName(TEXT("K2_DoEdit"));
	FVoxelIntBoxWithValidity UVoxelToolBase::K2_DoEdit()
	{
		VoxelToolBase_eventK2_DoEdit_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVoxelToolBase_K2_DoEdit),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVoxelToolBase_K2_GetToolConfig = FName(TEXT("K2_GetToolConfig"));
	void UVoxelToolBase::K2_GetToolConfig(FVoxelToolBaseConfig InConfig, FVoxelToolBaseConfig& OutConfig) const
	{
		VoxelToolBase_eventK2_GetToolConfig_Parms Parms;
		Parms.InConfig=InConfig;
		Parms.OutConfig=OutConfig;
		const_cast<UVoxelToolBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UVoxelToolBase_K2_GetToolConfig),&Parms);
		OutConfig=Parms.OutConfig;
	}
	static FName NAME_UVoxelToolBase_K2_Tick = FName(TEXT("K2_Tick"));
	void UVoxelToolBase::K2_Tick()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVoxelToolBase_K2_Tick),NULL);
	}
	static FName NAME_UVoxelToolBase_K2_UpdateRender = FName(TEXT("K2_UpdateRender"));
	void UVoxelToolBase::K2_UpdateRender(UMaterialInstanceDynamic* OverlayMaterialInstance, UMaterialInstanceDynamic* MeshMaterialInstance)
	{
		VoxelToolBase_eventK2_UpdateRender_Parms Parms;
		Parms.OverlayMaterialInstance=OverlayMaterialInstance;
		Parms.MeshMaterialInstance=MeshMaterialInstance;
		ProcessEvent(FindFunctionChecked(NAME_UVoxelToolBase_K2_UpdateRender),&Parms);
	}
	void UVoxelToolBase::StaticRegisterNativesUVoxelToolBase()
	{
		UClass* Class = UVoxelToolBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanEdit", &UVoxelToolBase::execCanEdit },
			{ "GetBoundsToCache", &UVoxelToolBase::execGetBoundsToCache },
			{ "GetDeltaTime", &UVoxelToolBase::execGetDeltaTime },
			{ "GetLastFrameTickData", &UVoxelToolBase::execGetLastFrameTickData },
			{ "GetMouseMovementSize", &UVoxelToolBase::execGetMouseMovementSize },
			{ "GetTickData", &UVoxelToolBase::execGetTickData },
			{ "GetToolDirection", &UVoxelToolBase::execGetToolDirection },
			{ "GetToolNormal", &UVoxelToolBase::execGetToolNormal },
			{ "GetToolPosition", &UVoxelToolBase::execGetToolPosition },
			{ "GetToolPreviewPosition", &UVoxelToolBase::execGetToolPreviewPosition },
			{ "GetValueAfterAxisInput", &UVoxelToolBase::execGetValueAfterAxisInput },
			{ "K2_DoEdit", &UVoxelToolBase::execK2_DoEdit },
			{ "K2_GetToolConfig", &UVoxelToolBase::execK2_GetToolConfig },
			{ "K2_UpdateRender", &UVoxelToolBase::execK2_UpdateRender },
			{ "LastFrameCanEdit", &UVoxelToolBase::execLastFrameCanEdit },
			{ "SetToolOverlayBounds", &UVoxelToolBase::execSetToolOverlayBounds },
			{ "UpdateToolMesh", &UVoxelToolBase::execUpdateToolMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics
	{
		struct VoxelToolBase_eventCanEdit_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelToolBase_eventCanEdit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelToolBase_eventCanEdit_Parms), &Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "CanEdit", nullptr, nullptr, sizeof(VoxelToolBase_eventCanEdit_Parms), Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_CanEdit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics
	{
		struct VoxelToolBase_eventGetBoundsToCache_Parms
		{
			FVoxelIntBox Bounds;
			FVoxelIntBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetBoundsToCache_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetBoundsToCache_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "Comment", "// Will also debug them\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Will also debug them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetBoundsToCache", nullptr, nullptr, sizeof(VoxelToolBase_eventGetBoundsToCache_Parms), Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics
	{
		struct VoxelToolBase_eventGetDeltaTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetDeltaTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "Comment", "// Delta time accounting for the skipped frame waiting for updates\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Delta time accounting for the skipped frame waiting for updates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetDeltaTime", nullptr, nullptr, sizeof(VoxelToolBase_eventGetDeltaTime_Parms), Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics
	{
		struct VoxelToolBase_eventGetLastFrameTickData_Parms
		{
			FVoxelToolTickData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetLastFrameTickData_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetLastFrameTickData", nullptr, nullptr, sizeof(VoxelToolBase_eventGetLastFrameTickData_Parms), Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics
	{
		struct VoxelToolBase_eventGetMouseMovementSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetMouseMovementSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetMouseMovementSize", nullptr, nullptr, sizeof(VoxelToolBase_eventGetMouseMovementSize_Parms), Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics
	{
		struct VoxelToolBase_eventGetTickData_Parms
		{
			FVoxelToolTickData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetTickData_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetTickData", nullptr, nullptr, sizeof(VoxelToolBase_eventGetTickData_Parms), Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetTickData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics
	{
		struct VoxelToolBase_eventGetToolDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetToolDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool|Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetToolDirection", nullptr, nullptr, sizeof(VoxelToolBase_eventGetToolDirection_Parms), Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetToolDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics
	{
		struct VoxelToolBase_eventGetToolNormal_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetToolNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool|Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetToolNormal", nullptr, nullptr, sizeof(VoxelToolBase_eventGetToolNormal_Parms), Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetToolNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics
	{
		struct VoxelToolBase_eventGetToolPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetToolPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool|Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetToolPosition", nullptr, nullptr, sizeof(VoxelToolBase_eventGetToolPosition_Parms), Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetToolPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics
	{
		struct VoxelToolBase_eventGetToolPreviewPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetToolPreviewPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool|Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetToolPreviewPosition", nullptr, nullptr, sizeof(VoxelToolBase_eventGetToolPreviewPosition_Parms), Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics
	{
		struct VoxelToolBase_eventGetValueAfterAxisInput_Parms
		{
			FName AxisName;
			float CurrentValue;
			float Min;
			float Max;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, CurrentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, AxisName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_AxisName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "CPP_Default_Max", "1.000000" },
		{ "CPP_Default_Min", "0.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetValueAfterAxisInput", nullptr, nullptr, sizeof(VoxelToolBase_eventGetValueAfterAxisInput_Parms), Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_DoEdit_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returned bounds will be updated & SaveFrame called on them, as well as RegenerateSpawners if enabled\n// Tick will always be called before\n" },
		{ "DisplayName", "DoEdit" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Returned bounds will be updated & SaveFrame called on them, as well as RegenerateSpawners if enabled\nTick will always be called before" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "K2_DoEdit", nullptr, nullptr, sizeof(VoxelToolBase_eventK2_DoEdit_Parms), Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::NewProp_OutConfig = { "OutConfig", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_GetToolConfig_Parms, OutConfig), Z_Construct_UScriptStruct_FVoxelToolBaseConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_GetToolConfig_Parms, InConfig), Z_Construct_UScriptStruct_FVoxelToolBaseConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::NewProp_OutConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::NewProp_InConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called on tick\n" },
		{ "DisplayName", "GetToolConfig" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Called on tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "K2_GetToolConfig", nullptr, nullptr, sizeof(VoxelToolBase_eventK2_GetToolConfig_Parms), Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called first, before DoEdit and UpdateRender\n// Note: Tick is a BlueprintImplementableEvent. The native Tick will always be called before.\n" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Called first, before DoEdit and UpdateRender\nNote: Tick is a BlueprintImplementableEvent. The native Tick will always be called before." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "K2_Tick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_K2_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMaterialInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::NewProp_MeshMaterialInstance = { "MeshMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_UpdateRender_Parms, MeshMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::NewProp_OverlayMaterialInstance = { "OverlayMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_UpdateRender_Parms, OverlayMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::NewProp_MeshMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::NewProp_OverlayMaterialInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Might not always be called - if you want to compute things for the frame, use Tick\n" },
		{ "DisplayName", "UpdateRender" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Might not always be called - if you want to compute things for the frame, use Tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "K2_UpdateRender", nullptr, nullptr, sizeof(VoxelToolBase_eventK2_UpdateRender_Parms), Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics
	{
		struct VoxelToolBase_eventLastFrameCanEdit_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelToolBase_eventLastFrameCanEdit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelToolBase_eventLastFrameCanEdit_Parms), &Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "LastFrameCanEdit", nullptr, nullptr, sizeof(VoxelToolBase_eventLastFrameCanEdit_Parms), Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics
	{
		struct VoxelToolBase_eventSetToolOverlayBounds_Parms
		{
			FBox Bounds;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventSetToolOverlayBounds_Parms, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::NewProp_Bounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool|Render" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "SetToolOverlayBounds", nullptr, nullptr, sizeof(VoxelToolBase_eventSetToolOverlayBounds_Parms), Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics
	{
		struct VoxelToolBase_eventUpdateToolMesh_Parms
		{
			UStaticMesh* Mesh;
			UMaterialInterface* Material;
			FTransform Transform;
			FName Id;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventUpdateToolMesh_Parms, Id), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventUpdateToolMesh_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventUpdateToolMesh_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolBase_eventUpdateToolMesh_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool|Render" },
		{ "Comment", "// Note: Material will not be updated if the mesh did not change\n" },
		{ "CPP_Default_Id", "None" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Note: Material will not be updated if the mesh did not change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "UpdateToolMesh", nullptr, nullptr, sizeof(VoxelToolBase_eventUpdateToolMesh_Parms), Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelToolBase_NoRegister()
	{
		return UVoxelToolBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelToolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneMeshMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneMeshMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolMeshMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolMeshMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolOverlayMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolOverlayMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelToolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTool,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelToolBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelToolBase_CanEdit, "CanEdit" }, // 1296617932
		{ &Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache, "GetBoundsToCache" }, // 1226215788
		{ &Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime, "GetDeltaTime" }, // 246904749
		{ &Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData, "GetLastFrameTickData" }, // 3043463696
		{ &Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize, "GetMouseMovementSize" }, // 381931938
		{ &Z_Construct_UFunction_UVoxelToolBase_GetTickData, "GetTickData" }, // 1174084478
		{ &Z_Construct_UFunction_UVoxelToolBase_GetToolDirection, "GetToolDirection" }, // 2051094266
		{ &Z_Construct_UFunction_UVoxelToolBase_GetToolNormal, "GetToolNormal" }, // 3255856657
		{ &Z_Construct_UFunction_UVoxelToolBase_GetToolPosition, "GetToolPosition" }, // 2222454983
		{ &Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition, "GetToolPreviewPosition" }, // 2955970115
		{ &Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput, "GetValueAfterAxisInput" }, // 4023241778
		{ &Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit, "K2_DoEdit" }, // 3640882837
		{ &Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig, "K2_GetToolConfig" }, // 209478876
		{ &Z_Construct_UFunction_UVoxelToolBase_K2_Tick, "K2_Tick" }, // 1204452392
		{ &Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender, "K2_UpdateRender" }, // 2318274324
		{ &Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit, "LastFrameCanEdit" }, // 3832892239
		{ &Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds, "SetToolOverlayBounds" }, // 945516633
		{ &Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh, "UpdateToolMesh" }, // 527936107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelTools/Tools/VoxelToolBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_PlaneMeshMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_PlaneMeshMaterialInstance = { "PlaneMeshMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolBase, PlaneMeshMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_PlaneMeshMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_PlaneMeshMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolMeshMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolMeshMaterialInstance = { "ToolMeshMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolBase, ToolMeshMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolMeshMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolMeshMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolOverlayMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolOverlayMaterialInstance = { "ToolOverlayMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolBase, ToolOverlayMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolOverlayMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolOverlayMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_VoxelWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolBase, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_VoxelWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_VoxelWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelToolBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_PlaneMeshMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolMeshMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolOverlayMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_VoxelWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelToolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolBase_Statics::ClassParams = {
		&UVoxelToolBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelToolBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelToolBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelToolBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelToolBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelToolBase, 1118925466);
	template<> VOXEL_API UClass* StaticClass<UVoxelToolBase>()
	{
		return UVoxelToolBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelToolBase(Z_Construct_UClass_UVoxelToolBase, &UVoxelToolBase::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelToolBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
