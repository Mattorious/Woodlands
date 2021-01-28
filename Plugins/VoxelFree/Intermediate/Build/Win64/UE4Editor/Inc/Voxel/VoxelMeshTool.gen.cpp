// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelMeshTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMeshTool() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshTool_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshTool();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolWithAlignment();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettings();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void UVoxelMeshTool::StaticRegisterNativesUVoxelMeshTool()
	{
	}
	UClass* Z_Construct_UClass_UVoxelMeshTool_NoRegister()
	{
		return UVoxelMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMeshTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_ImporterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData_ImporterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderTargetCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlignToMovement_MetaData[];
#endif
		static void NewProp_bAlignToMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlignToMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlignToNormal_MetaData[];
#endif
		static void NewProp_bAlignToNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlignToNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteScale_MetaData[];
#endif
		static void NewProp_bAbsoluteScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenderTargetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorsRenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorsRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVsRenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UVsRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexToPaint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IndexToPaint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintIndex_MetaData[];
#endif
		static void NewProp_bPaintIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1ToPaint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1ToPaint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0ToPaint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0ToPaint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVsMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UVsMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportUVsFromMesh_MetaData[];
#endif
		static void NewProp_bImportUVsFromMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportUVsFromMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintUVs_MetaData[];
#endif
		static void NewProp_bPaintUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorToPaint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorToPaint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorsMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorsMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportColorsFromMesh_MetaData[];
#endif
		static void NewProp_bImportColorsFromMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportColorsFromMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintColors_MetaData[];
#endif
		static void NewProp_bPaintColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PaintMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaint_MetaData[];
#endif
		static void NewProp_bPaint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSculpt_MetaData[];
#endif
		static void NewProp_bSculpt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSculpt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshImporterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshImporterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProgressiveStamp_MetaData[];
#endif
		static void NewProp_bProgressiveStamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProgressiveStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Smoothness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Smoothness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothImport_MetaData[];
#endif
		static void NewProp_bSmoothImport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothImport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolWithAlignment,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_AssetData_ImporterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_AssetData_ImporterSettings = { "AssetData_ImporterSettings", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, AssetData_ImporterSettings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettings, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_AssetData_ImporterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_AssetData_ImporterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetCache = { "RenderTargetCache", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, RenderTargetCache), Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "// Applied after position and scale offset\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Applied after position and scale offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bAlignToMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement = { "bAlignToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bAlignToNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal = { "bAlignToNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "// If false the mesh scale will be set to match the radius\n// If true the mesh scale will ignore the radius, and only use the scale below\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "If false the mesh scale will be set to match the radius\nIf true the mesh scale will ignore the radius, and only use the scale below" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bAbsoluteScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale = { "bAbsoluteScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PositionOffset_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "// Relative to the size of the mesh\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Relative to the size of the mesh" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, PositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetSize_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetSize = { "RenderTargetSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, RenderTargetSize), METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsRenderTarget_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// For debug\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "For debug" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsRenderTarget = { "ColorsRenderTarget", nullptr, (EPropertyFlags)0x0010040000022015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, ColorsRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsRenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsRenderTarget_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// For debug\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "For debug" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsRenderTarget = { "UVsRenderTarget", nullptr, (EPropertyFlags)0x0010040000022015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, UVsRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsRenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_IndexToPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint && bPaintIndex" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "SingleIndex, MultiIndex" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_IndexToPaint = { "IndexToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, IndexToPaint), nullptr, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_IndexToPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_IndexToPaint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "SingleIndex, MultiIndex" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bPaintIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex = { "bPaintIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV1ToPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Used if bImportUVsFromMesh = false\n" },
		{ "EditCondition", "bPaint && bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Used if bImportUVsFromMesh = false" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV1ToPaint = { "UV1ToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, UV1ToPaint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV1ToPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV1ToPaint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV0ToPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Used if bImportUVsFromMesh = false\n" },
		{ "EditCondition", "bPaint && bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Used if bImportUVsFromMesh = false" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV0ToPaint = { "UV0ToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, UV0ToPaint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV0ToPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV0ToPaint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsMaterial_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp && bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsMaterial = { "UVsMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, UVsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Import the uvs directly from the mesh by sampling UVsMaterial at the mesh UVs\n// NOTE: Will be disabled if bSmoothImport = true or bProgressiveStamp = true\n" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp && bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Import the uvs directly from the mesh by sampling UVsMaterial at the mesh UVs\nNOTE: Will be disabled if bSmoothImport = true or bProgressiveStamp = true" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bImportUVsFromMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh = { "bImportUVsFromMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bPaintUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs = { "bPaintUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorToPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Used if bImportColorsFromMesh = false\n" },
		{ "EditCondition", "bPaint && bPaintColors" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Used if bImportColorsFromMesh = false" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorToPaint = { "ColorToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, ColorToPaint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorToPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorToPaint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsMaterial_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp && bPaintColors && bImportColorsFromMesh" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsMaterial = { "ColorsMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, ColorsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Import the colors directly from the mesh by sampling ColorsMaterial at the mesh UVs\n// NOTE: Will be disabled if bSmoothImport = true or bProgressiveStamp = true\n" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp && bPaintColors" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Import the colors directly from the mesh by sampling ColorsMaterial at the mesh UVs\nNOTE: Will be disabled if bSmoothImport = true or bProgressiveStamp = true" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bImportColorsFromMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh = { "bImportColorsFromMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bPaintColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors = { "bPaintColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PaintMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
		{ "Category", "Paint Settings" },
		{ "Comment", "// Use to restrict editing on some channels\n" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Use to restrict editing on some channels" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PaintMask = { "PaintMask", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, PaintMask), METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PaintMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PaintMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bPaint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint = { "bPaint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bSculpt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt = { "bSculpt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_MeshImporterSettings_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_MeshImporterSettings = { "MeshImporterSettings", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, MeshImporterSettings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_MeshImporterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_MeshImporterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Speed of the progressive stamp\n// Make sure your mesh is intersecting the voxel world!\n" },
		{ "EditCondition", "bProgressiveStamp" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Speed of the progressive stamp\nMake sure your mesh is intersecting the voxel world!" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, Speed), METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Will slowly grow/shrink the surface towards the mesh\n// NOTE: Will disable SmoothImport\n// NOTE: Will disable bImportColorsFromMesh/bImportUVsFromMesh\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Will slowly grow/shrink the surface towards the mesh\nNOTE: Will disable SmoothImport\nNOTE: Will disable bImportColorsFromMesh/bImportUVsFromMesh" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bProgressiveStamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp = { "bProgressiveStamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Smoothness_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Relative to radius\n" },
		{ "EditCondition", "bSmoothImport && !bProgressiveStamp" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Relative to radius" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Smoothness = { "Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Smoothness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Do a smooth import by converting the voxel densities & the mesh to true distance fields, and doing a smooth union/subtraction on these\n// NOTE: Disabled if bProgressiveStamp = true\n// NOTE: Will disable bImportColorsFromMesh/bImportUVsFromMesh\n" },
		{ "EditCondition", "!bProgressiveStamp" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Do a smooth import by converting the voxel densities & the mesh to true distance fields, and doing a smooth union/subtraction on these\nNOTE: Disabled if bProgressiveStamp = true\nNOTE: Will disable bImportColorsFromMesh/bImportUVsFromMesh" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport_SetBit(void* Obj)
	{
		((UVoxelMeshTool*)Obj)->bSmoothImport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport = { "bSmoothImport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Stride_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Relative to the radius\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Relative to the radius" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, Stride), METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Stride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Stride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ToolMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ToolMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMeshTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_AssetData_ImporterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_IndexToPaint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV1ToPaint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV0ToPaint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorToPaint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PaintMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_MeshImporterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Smoothness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Stride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ToolMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshTool_Statics::ClassParams = {
		&UVoxelMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMeshTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMeshTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMeshTool, 1758735628);
	template<> VOXEL_API UClass* StaticClass<UVoxelMeshTool>()
	{
		return UVoxelMeshTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMeshTool(Z_Construct_UClass_UVoxelMeshTool, &UVoxelMeshTool::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMeshTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
