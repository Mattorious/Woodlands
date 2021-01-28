// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Gen/VoxelSurfaceEditTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceEditTools() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceEditTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceEditTools();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelSurfaceEditTools::execPropagateVoxelMaterialsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceEditTools::PropagateVoxelMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_ProcessedVoxels,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceEditTools::execPropagateVoxelMaterials)
	{
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceEditTools::PropagateVoxelMaterials(Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_ProcessedVoxels,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceEditTools::execEditVoxelMaterialsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceEditTools::EditVoxelMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_PaintMaterial,Z_Param_Out_ProcessedVoxels,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceEditTools::execEditVoxelMaterials)
	{
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceEditTools::EditVoxelMaterials(Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_PaintMaterial,Z_Param_Out_ProcessedVoxels,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceEditTools::execEditVoxelValuesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceDivisor);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceEditTools::EditVoxelValuesAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_ProcessedVoxels,Z_Param_DistanceDivisor,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceEditTools::execEditVoxelValues)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceDivisor);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceEditTools::EditVoxelValues(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_ProcessedVoxels,Z_Param_DistanceDivisor,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	void UVoxelSurfaceEditTools::StaticRegisterNativesUVoxelSurfaceEditTools()
	{
		UClass* Class = UVoxelSurfaceEditTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditVoxelMaterials", &UVoxelSurfaceEditTools::execEditVoxelMaterials },
			{ "EditVoxelMaterialsAsync", &UVoxelSurfaceEditTools::execEditVoxelMaterialsAsync },
			{ "EditVoxelValues", &UVoxelSurfaceEditTools::execEditVoxelValues },
			{ "EditVoxelValuesAsync", &UVoxelSurfaceEditTools::execEditVoxelValuesAsync },
			{ "PropagateVoxelMaterials", &UVoxelSurfaceEditTools::execPropagateVoxelMaterials },
			{ "PropagateVoxelMaterialsAsync", &UVoxelSurfaceEditTools::execPropagateVoxelMaterialsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics
	{
		struct VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms
		{
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelPaintMaterial PaintMaterial;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_ProcessedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_ProcessedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_ProcessedVoxels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::NewProp_ModifiedMaterials_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bUpdateRender" },
		{ "Category", "Voxel|Tools|Surface Edit Tools" },
		{ "Comment", "/**\n\x09 * Apply paint material to the processed voxels, using the processed strengths\n\x09 * @see ApplyStack, AddToStack\n\x09 * @see EditVoxelMaterials, EditVoxelMaterialsAsync and FVoxelSurfaceEditToolsImpl::EditVoxelMaterials\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09PaintMaterial           \x09The paint material to apply\n\x09 * @param\x09ProcessedVoxels         \x09The processed voxels, usually obtained by applying a surface edit stack\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSurfaceEditTools.h" },
		{ "ToolTip", "Apply paint material to the processed voxels, using the processed strengths\n@see ApplyStack, AddToStack\n@see EditVoxelMaterials, EditVoxelMaterialsAsync and FVoxelSurfaceEditToolsImpl::EditVoxelMaterials\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       PaintMaterial                   The paint material to apply\n@param       ProcessedVoxels                 The processed voxels, usually obtained by applying a surface edit stack\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceEditTools, nullptr, "EditVoxelMaterials", nullptr, nullptr, sizeof(VoxelSurfaceEditTools_eventEditVoxelMaterials_Parms), Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics
	{
		struct VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelPaintMaterial PaintMaterial;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_ModifiedMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Edit Tools" },
		{ "Comment", "/**\n\x09 * Apply paint material to the processed voxels, using the processed strengths\n\x09 * Runs asynchronously in a background thread\n\x09 * @see ApplyStack, AddToStack\n\x09 * @see EditVoxelMaterials, EditVoxelMaterialsAsync and FVoxelSurfaceEditToolsImpl::EditVoxelMaterials\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09PaintMaterial           \x09The paint material to apply\n\x09 * @param\x09ProcessedVoxels         \x09The processed voxels, usually obtained by applying a surface edit stack\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings     \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSurfaceEditTools.h" },
		{ "ToolTip", "Apply paint material to the processed voxels, using the processed strengths\nRuns asynchronously in a background thread\n@see ApplyStack, AddToStack\n@see EditVoxelMaterials, EditVoxelMaterialsAsync and FVoxelSurfaceEditToolsImpl::EditVoxelMaterials\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       PaintMaterial                   The paint material to apply\n@param       ProcessedVoxels                 The processed voxels, usually obtained by applying a surface edit stack\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceEditTools, nullptr, "EditVoxelMaterialsAsync", nullptr, nullptr, sizeof(VoxelSurfaceEditTools_eventEditVoxelMaterialsAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics
	{
		struct VoxelSurfaceEditTools_eventEditVoxelValues_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			float DistanceDivisor;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceDivisor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelValues_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelValues_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelValues_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelValues_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelValues_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelValues_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_DistanceDivisor = { "DistanceDivisor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValues_Parms, DistanceDivisor), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_ProcessedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValues_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_ProcessedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_ProcessedVoxels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValues_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValues_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValues_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_DistanceDivisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DistanceDivisor, bMultiThreaded, bRecordModifiedValues, bUpdateRender" },
		{ "Category", "Voxel|Tools|Surface Edit Tools" },
		{ "Comment", "/**\n\x09 * Apply processed voxels strengths to the voxel values\n\x09 * @see ApplyStack, AddToStack\n\x09 * @see EditVoxelValues, EditVoxelValuesAsync and FVoxelSurfaceEditToolsImpl::EditVoxelValues\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09ProcessedVoxels      \x09The processed voxels, usually obtained by applying a surface edit stack\n\x09 * @param\x09""DistanceDivisor      \x09""Distance divisor: the new value will be divided by this. Useful if normals are bad because of clamped values\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_DistanceDivisor", "1.000000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSurfaceEditTools.h" },
		{ "ToolTip", "Apply processed voxels strengths to the voxel values\n@see ApplyStack, AddToStack\n@see EditVoxelValues, EditVoxelValuesAsync and FVoxelSurfaceEditToolsImpl::EditVoxelValues\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       ProcessedVoxels         The processed voxels, usually obtained by applying a surface edit stack\n@param       DistanceDivisor         Distance divisor: the new value will be divided by this. Useful if normals are bad because of clamped values\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceEditTools, nullptr, "EditVoxelValues", nullptr, nullptr, sizeof(VoxelSurfaceEditTools_eventEditVoxelValues_Parms), Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics
	{
		struct VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			float DistanceDivisor;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceDivisor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_DistanceDivisor = { "DistanceDivisor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms, DistanceDivisor), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_ProcessedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_ProcessedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_ProcessedVoxels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_DistanceDivisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DistanceDivisor, bMultiThreaded, bRecordModifiedValues, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Edit Tools" },
		{ "Comment", "/**\n\x09 * Apply processed voxels strengths to the voxel values\n\x09 * Runs asynchronously in a background thread\n\x09 * @see ApplyStack, AddToStack\n\x09 * @see EditVoxelValues, EditVoxelValuesAsync and FVoxelSurfaceEditToolsImpl::EditVoxelValues\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09ProcessedVoxels      \x09The processed voxels, usually obtained by applying a surface edit stack\n\x09 * @param\x09""DistanceDivisor      \x09""Distance divisor: the new value will be divided by this. Useful if normals are bad because of clamped values\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_DistanceDivisor", "1.000000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSurfaceEditTools.h" },
		{ "ToolTip", "Apply processed voxels strengths to the voxel values\nRuns asynchronously in a background thread\n@see ApplyStack, AddToStack\n@see EditVoxelValues, EditVoxelValuesAsync and FVoxelSurfaceEditToolsImpl::EditVoxelValues\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       ProcessedVoxels         The processed voxels, usually obtained by applying a surface edit stack\n@param       DistanceDivisor         Distance divisor: the new value will be divided by this. Useful if normals are bad because of clamped values\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceEditTools, nullptr, "EditVoxelValuesAsync", nullptr, nullptr, sizeof(VoxelSurfaceEditTools_eventEditVoxelValuesAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics
	{
		struct VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms
		{
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_ProcessedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_ProcessedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_ProcessedVoxels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::NewProp_ModifiedMaterials_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bUpdateRender" },
		{ "Category", "Voxel|Tools|Surface Edit Tools" },
		{ "Comment", "/**\n\x09 * Propagate the materials of the voxels, so that the new surface is painted correctly\n\x09 * Must be called BEFORE EditVoxelValues!\n\x09 * @see ApplyStack, AddToStack\n\x09 * @see PropagateVoxelMaterials, PropagateVoxelMaterialsAsync and FVoxelSurfaceEditToolsImpl::PropagateVoxelMaterials\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09ProcessedVoxels         \x09The processed voxels, usually obtained by applying a surface edit stack\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSurfaceEditTools.h" },
		{ "ToolTip", "Propagate the materials of the voxels, so that the new surface is painted correctly\nMust be called BEFORE EditVoxelValues!\n@see ApplyStack, AddToStack\n@see PropagateVoxelMaterials, PropagateVoxelMaterialsAsync and FVoxelSurfaceEditToolsImpl::PropagateVoxelMaterials\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       ProcessedVoxels                 The processed voxels, usually obtained by applying a surface edit stack\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceEditTools, nullptr, "PropagateVoxelMaterials", nullptr, nullptr, sizeof(VoxelSurfaceEditTools_eventPropagateVoxelMaterials_Parms), Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics
	{
		struct VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_ModifiedMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Edit Tools" },
		{ "Comment", "/**\n\x09 * Propagate the materials of the voxels, so that the new surface is painted correctly\n\x09 * Must be called BEFORE EditVoxelValues!\n\x09 * Runs asynchronously in a background thread\n\x09 * @see ApplyStack, AddToStack\n\x09 * @see PropagateVoxelMaterials, PropagateVoxelMaterialsAsync and FVoxelSurfaceEditToolsImpl::PropagateVoxelMaterials\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09ProcessedVoxels         \x09The processed voxels, usually obtained by applying a surface edit stack\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings     \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSurfaceEditTools.h" },
		{ "ToolTip", "Propagate the materials of the voxels, so that the new surface is painted correctly\nMust be called BEFORE EditVoxelValues!\nRuns asynchronously in a background thread\n@see ApplyStack, AddToStack\n@see PropagateVoxelMaterials, PropagateVoxelMaterialsAsync and FVoxelSurfaceEditToolsImpl::PropagateVoxelMaterials\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       ProcessedVoxels                 The processed voxels, usually obtained by applying a surface edit stack\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceEditTools, nullptr, "PropagateVoxelMaterialsAsync", nullptr, nullptr, sizeof(VoxelSurfaceEditTools_eventPropagateVoxelMaterialsAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelSurfaceEditTools_NoRegister()
	{
		return UVoxelSurfaceEditTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSurfaceEditTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSurfaceEditTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelSurfaceEditTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterials, "EditVoxelMaterials" }, // 1674513092
		{ &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelMaterialsAsync, "EditVoxelMaterialsAsync" }, // 3518487197
		{ &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValues, "EditVoxelValues" }, // 2299039960
		{ &Z_Construct_UFunction_UVoxelSurfaceEditTools_EditVoxelValuesAsync, "EditVoxelValuesAsync" }, // 3544627711
		{ &Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterials, "PropagateVoxelMaterials" }, // 1975826678
		{ &Z_Construct_UFunction_UVoxelSurfaceEditTools_PropagateVoxelMaterialsAsync, "PropagateVoxelMaterialsAsync" }, // 1946119417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceEditTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Gen/VoxelSurfaceEditTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSurfaceEditTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSurfaceEditTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSurfaceEditTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSurfaceEditTools_Statics::ClassParams = {
		&UVoxelSurfaceEditTools::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceEditTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceEditTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSurfaceEditTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSurfaceEditTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSurfaceEditTools, 2014563436);
	template<> VOXEL_API UClass* StaticClass<UVoxelSurfaceEditTools>()
	{
		return UVoxelSurfaceEditTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSurfaceEditTools(Z_Construct_UClass_UVoxelSurfaceEditTools, &UVoxelSurfaceEditTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSurfaceEditTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSurfaceEditTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
