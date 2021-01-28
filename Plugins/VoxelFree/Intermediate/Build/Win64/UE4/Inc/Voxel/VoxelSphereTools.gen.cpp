// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Gen/VoxelSphereTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSphereTools() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTools();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphereToGeneratorAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bRevertValues);
		P_GET_UBOOL(Z_Param_bRevertMaterials);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RevertSphereToGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphereToGenerator)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bRevertValues);
		P_GET_UBOOL(Z_Param_bRevertMaterials);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RevertSphereToGenerator(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_HistoryPosition);
		P_GET_UBOOL(Z_Param_bRevertValues);
		P_GET_UBOOL(Z_Param_bRevertMaterials);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RevertSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_HistoryPosition,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_HistoryPosition);
		P_GET_UBOOL(Z_Param_bRevertValues);
		P_GET_UBOOL(Z_Param_bRevertMaterials);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RevertSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_HistoryPosition,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execTrimSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bAdditive);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::TrimSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Out_Normal,Z_Param_Radius,Z_Param_Falloff,Z_Param_bAdditive,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execTrimSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bAdditive);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::TrimSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Out_Normal,Z_Param_Radius,Z_Param_Falloff,Z_Param_bAdditive,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSmoothMaterialSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
		P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SmoothMaterialSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_NumIterations,Z_Param_Mask,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSmoothMaterialSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
		P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SmoothMaterialSphere(Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_NumIterations,Z_Param_Mask,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSmoothSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SmoothSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_NumIterations,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSmoothSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SmoothSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_NumIterations,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execApplyMaterialKernelSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::ApplyMaterialKernelSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_NumIterations,Z_Param_Mask,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execApplyMaterialKernelSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::ApplyMaterialKernelSphere(Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_NumIterations,Z_Param_Mask,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execApplyKernelSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::ApplyKernelSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_NumIterations,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execApplyKernelSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::ApplyKernelSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_NumIterations,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSetMaterialSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SetMaterialSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Out_PaintMaterial,Z_Param_Strength,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSetMaterialSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SetMaterialSphere(Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Out_PaintMaterial,Z_Param_Strength,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execAddSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::AddSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execAddSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::AddSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRemoveSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RemoveSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRemoveSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RemoveSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSetValueSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SetValueSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Value,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSetValueSphere)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SetValueSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Value,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	void UVoxelSphereTools::StaticRegisterNativesUVoxelSphereTools()
	{
		UClass* Class = UVoxelSphereTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSphere", &UVoxelSphereTools::execAddSphere },
			{ "AddSphereAsync", &UVoxelSphereTools::execAddSphereAsync },
			{ "ApplyKernelSphere", &UVoxelSphereTools::execApplyKernelSphere },
			{ "ApplyKernelSphereAsync", &UVoxelSphereTools::execApplyKernelSphereAsync },
			{ "ApplyMaterialKernelSphere", &UVoxelSphereTools::execApplyMaterialKernelSphere },
			{ "ApplyMaterialKernelSphereAsync", &UVoxelSphereTools::execApplyMaterialKernelSphereAsync },
			{ "RemoveSphere", &UVoxelSphereTools::execRemoveSphere },
			{ "RemoveSphereAsync", &UVoxelSphereTools::execRemoveSphereAsync },
			{ "RevertSphere", &UVoxelSphereTools::execRevertSphere },
			{ "RevertSphereAsync", &UVoxelSphereTools::execRevertSphereAsync },
			{ "RevertSphereToGenerator", &UVoxelSphereTools::execRevertSphereToGenerator },
			{ "RevertSphereToGeneratorAsync", &UVoxelSphereTools::execRevertSphereToGeneratorAsync },
			{ "SetMaterialSphere", &UVoxelSphereTools::execSetMaterialSphere },
			{ "SetMaterialSphereAsync", &UVoxelSphereTools::execSetMaterialSphereAsync },
			{ "SetValueSphere", &UVoxelSphereTools::execSetValueSphere },
			{ "SetValueSphereAsync", &UVoxelSphereTools::execSetValueSphereAsync },
			{ "SmoothMaterialSphere", &UVoxelSphereTools::execSmoothMaterialSphere },
			{ "SmoothMaterialSphereAsync", &UVoxelSphereTools::execSmoothMaterialSphereAsync },
			{ "SmoothSphere", &UVoxelSphereTools::execSmoothSphere },
			{ "SmoothSphereAsync", &UVoxelSphereTools::execSmoothSphereAsync },
			{ "TrimSphere", &UVoxelSphereTools::execTrimSphere },
			{ "TrimSphereAsync", &UVoxelSphereTools::execTrimSphereAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics
	{
		struct VoxelSphereTools_eventAddSphere_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphere_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Add a sphere\n\x09 * @see AddSphere, AddSphereAsync and FVoxelSphereToolsImpl::AddSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Add a sphere\n@see AddSphere, AddSphereAsync and FVoxelSphereToolsImpl::AddSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "AddSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventAddSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_AddSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics
	{
		struct VoxelSphereTools_eventAddSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Add a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see AddSphere, AddSphereAsync and FVoxelSphereToolsImpl::AddSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Add a sphere\nRuns asynchronously in a background thread\n@see AddSphere, AddSphereAsync and FVoxelSphereToolsImpl::AddSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "AddSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics
	{
		struct VoxelSphereTools_eventApplyKernelSphere_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float CenterMultiplier;
			float FirstDegreeNeighborMultiplier;
			float SecondDegreeNeighborMultiplier;
			float ThirdDegreeNeighborMultiplier;
			int32 NumIterations;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphere_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, CenterMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_NumIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_CenterMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel\n\x09 * @see ApplyKernelSphere, ApplyKernelSphereAsync and FVoxelSphereToolsImpl::ApplyKernelSphere\n\x09 * @param\x09ModifiedValues                \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds                  \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld                    \x09The voxel world to do the edit to\n\x09 * @param\x09Position                      \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                        \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""CenterMultiplier              \x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier \x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param\x09SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param\x09ThirdDegreeNeighborMultiplier \x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09NumIterations                 \x09The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n\x09 * @param\x09""bMultiThreaded                \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues         \x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace          \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender                 \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_NumIterations", "1" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Apply a 3x3x3 kernel\n@see ApplyKernelSphere, ApplyKernelSphereAsync and FVoxelSphereToolsImpl::ApplyKernelSphere\n@param       ModifiedValues                  Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       CenterMultiplier                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param       SecondDegreeNeighborMultiplier  Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param       ThirdDegreeNeighborMultiplier   Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       NumIterations                   The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues           If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyKernelSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics
	{
		struct VoxelSphereTools_eventApplyKernelSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float CenterMultiplier;
			float FirstDegreeNeighborMultiplier;
			float SecondDegreeNeighborMultiplier;
			float ThirdDegreeNeighborMultiplier;
			int32 NumIterations;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, CenterMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_NumIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_CenterMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel\n\x09 * Runs asynchronously in a background thread\n\x09 * @see ApplyKernelSphere, ApplyKernelSphereAsync and FVoxelSphereToolsImpl::ApplyKernelSphere\n\x09 * @param\x09ModifiedValues                \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds                  \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld                    \x09The voxel world to do the edit to\n\x09 * @param\x09Position                      \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                        \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""CenterMultiplier              \x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier \x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param\x09SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param\x09ThirdDegreeNeighborMultiplier \x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09NumIterations                 \x09The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n\x09 * @param\x09""bMultiThreaded                \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues         \x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace          \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender                 \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings           \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_NumIterations", "1" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Apply a 3x3x3 kernel\nRuns asynchronously in a background thread\n@see ApplyKernelSphere, ApplyKernelSphereAsync and FVoxelSphereToolsImpl::ApplyKernelSphere\n@param       ModifiedValues                  Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       CenterMultiplier                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param       SecondDegreeNeighborMultiplier  Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param       ThirdDegreeNeighborMultiplier   Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       NumIterations                   The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues           If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyKernelSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics
	{
		struct VoxelSphereTools_eventApplyMaterialKernelSphere_Parms
		{
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float CenterMultiplier;
			float FirstDegreeNeighborMultiplier;
			float SecondDegreeNeighborMultiplier;
			float ThirdDegreeNeighborMultiplier;
			int32 NumIterations;
			int32 Mask;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyMaterialKernelSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyMaterialKernelSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyMaterialKernelSphere_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyMaterialKernelSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, Mask), METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, CenterMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_NumIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_CenterMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ModifiedMaterials_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel to the materials\n\x09 * @see ApplyMaterialKernelSphere, ApplyMaterialKernelSphereAsync and FVoxelSphereToolsImpl::ApplyMaterialKernelSphere\n\x09 * @param\x09ModifiedMaterials             \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds                  \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld                    \x09The voxel world to do the edit to\n\x09 * @param\x09Position                      \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                        \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""CenterMultiplier              \x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier \x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param\x09SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param\x09ThirdDegreeNeighborMultiplier \x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09NumIterations                 \x09The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n\x09 * @param\x09Mask                          \x09The material channels to affect\n\x09 * @param\x09""bMultiThreaded                \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedMaterials      \x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace          \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender                 \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_Mask", "4095" },
		{ "CPP_Default_NumIterations", "1" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Apply a 3x3x3 kernel to the materials\n@see ApplyMaterialKernelSphere, ApplyMaterialKernelSphereAsync and FVoxelSphereToolsImpl::ApplyMaterialKernelSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       CenterMultiplier                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param       SecondDegreeNeighborMultiplier  Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param       ThirdDegreeNeighborMultiplier   Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       NumIterations                   The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n@param       Mask                            The material channels to affect\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyMaterialKernelSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics
	{
		struct VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float CenterMultiplier;
			float FirstDegreeNeighborMultiplier;
			float SecondDegreeNeighborMultiplier;
			float ThirdDegreeNeighborMultiplier;
			int32 NumIterations;
			int32 Mask;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, Mask), METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, CenterMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_NumIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_CenterMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ModifiedMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel to the materials\n\x09 * Runs asynchronously in a background thread\n\x09 * @see ApplyMaterialKernelSphere, ApplyMaterialKernelSphereAsync and FVoxelSphereToolsImpl::ApplyMaterialKernelSphere\n\x09 * @param\x09ModifiedMaterials             \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds                  \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld                    \x09The voxel world to do the edit to\n\x09 * @param\x09Position                      \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                        \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""CenterMultiplier              \x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier \x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param\x09SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param\x09ThirdDegreeNeighborMultiplier \x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09NumIterations                 \x09The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n\x09 * @param\x09Mask                          \x09The material channels to affect\n\x09 * @param\x09""bMultiThreaded                \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedMaterials      \x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace          \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender                 \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings           \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_Mask", "4095" },
		{ "CPP_Default_NumIterations", "1" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Apply a 3x3x3 kernel to the materials\nRuns asynchronously in a background thread\n@see ApplyMaterialKernelSphere, ApplyMaterialKernelSphereAsync and FVoxelSphereToolsImpl::ApplyMaterialKernelSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       CenterMultiplier                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param       SecondDegreeNeighborMultiplier  Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param       ThirdDegreeNeighborMultiplier   Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       NumIterations                   The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n@param       Mask                            The material channels to affect\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyMaterialKernelSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics
	{
		struct VoxelSphereTools_eventRemoveSphere_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphere_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Remove a sphere\n\x09 * @see RemoveSphere, RemoveSphereAsync and FVoxelSphereToolsImpl::RemoveSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Remove a sphere\n@see RemoveSphere, RemoveSphereAsync and FVoxelSphereToolsImpl::RemoveSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RemoveSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventRemoveSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics
	{
		struct VoxelSphereTools_eventRemoveSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Remove a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see RemoveSphere, RemoveSphereAsync and FVoxelSphereToolsImpl::RemoveSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Remove a sphere\nRuns asynchronously in a background thread\n@see RemoveSphere, RemoveSphereAsync and FVoxelSphereToolsImpl::RemoveSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RemoveSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics
	{
		struct VoxelSphereTools_eventRevertSphere_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			int32 HistoryPosition;
			bool bRevertValues;
			bool bRevertMaterials;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HistoryPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bRevertMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bRevertValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_HistoryPosition = { "HistoryPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, HistoryPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_HistoryPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to a previous frame in the undo history.\n\x09 * Can be used to \"paint\" the undo history\n\x09 * NOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n\x09 * @see RevertSphere, RevertSphereAsync and FVoxelSphereToolsImpl::RevertSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09HistoryPosition      \x09The history position to go back to. You can use GetHistoryPosition to get it.\n\x09 * @param\x09""bRevertValues        \x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials     \x09Whether to revert materials\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Reverts the voxels inside a sphere shape to a previous frame in the undo history.\nCan be used to \"paint\" the undo history\nNOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n@see RevertSphere, RevertSphereAsync and FVoxelSphereToolsImpl::RevertSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       HistoryPosition         The history position to go back to. You can use GetHistoryPosition to get it.\n@param       bRevertValues           Whether to revert values\n@param       bRevertMaterials        Whether to revert materials\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventRevertSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics
	{
		struct VoxelSphereTools_eventRevertSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			int32 HistoryPosition;
			bool bRevertValues;
			bool bRevertMaterials;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HistoryPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bRevertMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bRevertValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_HistoryPosition = { "HistoryPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, HistoryPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_HistoryPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to a previous frame in the undo history.\n\x09 * Can be used to \"paint\" the undo history\n\x09 * NOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n\x09 * Runs asynchronously in a background thread\n\x09 * @see RevertSphere, RevertSphereAsync and FVoxelSphereToolsImpl::RevertSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09HistoryPosition      \x09The history position to go back to. You can use GetHistoryPosition to get it.\n\x09 * @param\x09""bRevertValues        \x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials     \x09Whether to revert materials\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Reverts the voxels inside a sphere shape to a previous frame in the undo history.\nCan be used to \"paint\" the undo history\nNOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\nRuns asynchronously in a background thread\n@see RevertSphere, RevertSphereAsync and FVoxelSphereToolsImpl::RevertSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       HistoryPosition         The history position to go back to. You can use GetHistoryPosition to get it.\n@param       bRevertValues           Whether to revert values\n@param       bRevertMaterials        Whether to revert materials\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics
	{
		struct VoxelSphereTools_eventRevertSphereToGenerator_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			bool bRevertValues;
			bool bRevertMaterials;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bRevertMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bRevertValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to their generator value\n\x09 * NOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n\x09 * @see RevertSphereToGenerator, RevertSphereToGeneratorAsync and FVoxelSphereToolsImpl::RevertSphereToGenerator\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bRevertValues        \x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials     \x09Whether to revert materials\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Reverts the voxels inside a sphere shape to their generator value\nNOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n@see RevertSphereToGenerator, RevertSphereToGeneratorAsync and FVoxelSphereToolsImpl::RevertSphereToGenerator\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bRevertValues           Whether to revert values\n@param       bRevertMaterials        Whether to revert materials\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphereToGenerator", nullptr, nullptr, sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics
	{
		struct VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			bool bRevertValues;
			bool bRevertMaterials;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bRevertMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bRevertValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to their generator value\n\x09 * NOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n\x09 * Runs asynchronously in a background thread\n\x09 * @see RevertSphereToGenerator, RevertSphereToGeneratorAsync and FVoxelSphereToolsImpl::RevertSphereToGenerator\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bRevertValues        \x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials     \x09Whether to revert materials\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Reverts the voxels inside a sphere shape to their generator value\nNOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\nRuns asynchronously in a background thread\n@see RevertSphereToGenerator, RevertSphereToGeneratorAsync and FVoxelSphereToolsImpl::RevertSphereToGenerator\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bRevertValues           Whether to revert values\n@param       bRevertMaterials        Whether to revert materials\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphereToGeneratorAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics
	{
		struct VoxelSphereTools_eventSetMaterialSphere_Parms
		{
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			FVoxelPaintMaterial PaintMaterial;
			float Strength;
			EVoxelFalloff FalloffType;
			float Falloff;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphere_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_PaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_PaintMaterial_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_FalloffType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_FalloffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_ModifiedMaterials_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Paint material in a sphere shape\n\x09 * @see SetMaterialSphere, SetMaterialSphereAsync and FVoxelSphereToolsImpl::SetMaterialSphere\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09Position                \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                  \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09PaintMaterial           \x09The material to paint\n\x09 * @param\x09Strength                \x09The strength of the painting (preferably between 0 and 1)\n\x09 * @param\x09""FalloffType             \x09The type of falloff\n\x09 * @param\x09""Falloff                 \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace    \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Paint material in a sphere shape\n@see SetMaterialSphere, SetMaterialSphereAsync and FVoxelSphereToolsImpl::SetMaterialSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       PaintMaterial                   The material to paint\n@param       Strength                        The strength of the painting (preferably between 0 and 1)\n@param       FalloffType                     The type of falloff\n@param       Falloff                         The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetMaterialSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics
	{
		struct VoxelSphereTools_eventSetMaterialSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			FVoxelPaintMaterial PaintMaterial;
			float Strength;
			EVoxelFalloff FalloffType;
			float Falloff;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_PaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_PaintMaterial_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_FalloffType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_FalloffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_ModifiedMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Paint material in a sphere shape\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SetMaterialSphere, SetMaterialSphereAsync and FVoxelSphereToolsImpl::SetMaterialSphere\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09Position                \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                  \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09PaintMaterial           \x09The material to paint\n\x09 * @param\x09Strength                \x09The strength of the painting (preferably between 0 and 1)\n\x09 * @param\x09""FalloffType             \x09The type of falloff\n\x09 * @param\x09""Falloff                 \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace    \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings     \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Paint material in a sphere shape\nRuns asynchronously in a background thread\n@see SetMaterialSphere, SetMaterialSphereAsync and FVoxelSphereToolsImpl::SetMaterialSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       PaintMaterial                   The material to paint\n@param       Strength                        The strength of the painting (preferably between 0 and 1)\n@param       FalloffType                     The type of falloff\n@param       Falloff                         The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetMaterialSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics
	{
		struct VoxelSphereTools_eventSetValueSphere_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float Value;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphere_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Set the density in a sphere\n\x09 * @see SetValueSphere, SetValueSphereAsync and FVoxelSphereToolsImpl::SetValueSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Value                \x09The density to set\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Set the density in a sphere\n@see SetValueSphere, SetValueSphereAsync and FVoxelSphereToolsImpl::SetValueSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Value                   The density to set\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetValueSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventSetValueSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics
	{
		struct VoxelSphereTools_eventSetValueSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float Value;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Set the density in a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SetValueSphere, SetValueSphereAsync and FVoxelSphereToolsImpl::SetValueSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Value                \x09The density to set\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Set the density in a sphere\nRuns asynchronously in a background thread\n@see SetValueSphere, SetValueSphereAsync and FVoxelSphereToolsImpl::SetValueSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Value                   The density to set\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetValueSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics
	{
		struct VoxelSphereTools_eventSmoothMaterialSphere_Parms
		{
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float Strength;
			int32 NumIterations;
			int32 Mask;
			EVoxelFalloff FalloffType;
			float Falloff;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothMaterialSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothMaterialSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothMaterialSphere_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothMaterialSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Mask), METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_FalloffType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_FalloffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_NumIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_ModifiedMaterials_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Smooth materials in a sphere\n\x09 * @see SmoothMaterialSphere, SmoothMaterialSphereAsync and FVoxelSphereToolsImpl::SmoothMaterialSphere\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09Position                \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                  \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Strength                \x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09NumIterations           \x09The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n\x09 * @param\x09Mask                    \x09The material channels to affect\n\x09 * @param\x09""FalloffType             \x09The type of falloff\n\x09 * @param\x09""Falloff                 \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace    \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_Mask", "4095" },
		{ "CPP_Default_NumIterations", "1" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Smooth materials in a sphere\n@see SmoothMaterialSphere, SmoothMaterialSphereAsync and FVoxelSphereToolsImpl::SmoothMaterialSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Strength                        The strength of the smoothing (preferably between 0 and 1)\n@param       NumIterations                   The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n@param       Mask                            The material channels to affect\n@param       FalloffType                     The type of falloff\n@param       Falloff                         The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothMaterialSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventSmoothMaterialSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics
	{
		struct VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float Strength;
			int32 NumIterations;
			int32 Mask;
			EVoxelFalloff FalloffType;
			float Falloff;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Mask), METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_FalloffType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_FalloffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_NumIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_ModifiedMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Smooth materials in a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SmoothMaterialSphere, SmoothMaterialSphereAsync and FVoxelSphereToolsImpl::SmoothMaterialSphere\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09Position                \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                  \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Strength                \x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09NumIterations           \x09The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n\x09 * @param\x09Mask                    \x09The material channels to affect\n\x09 * @param\x09""FalloffType             \x09The type of falloff\n\x09 * @param\x09""Falloff                 \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace    \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings     \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_Mask", "4095" },
		{ "CPP_Default_NumIterations", "1" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Smooth materials in a sphere\nRuns asynchronously in a background thread\n@see SmoothMaterialSphere, SmoothMaterialSphereAsync and FVoxelSphereToolsImpl::SmoothMaterialSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Strength                        The strength of the smoothing (preferably between 0 and 1)\n@param       NumIterations                   The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n@param       Mask                            The material channels to affect\n@param       FalloffType                     The type of falloff\n@param       Falloff                         The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothMaterialSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics
	{
		struct VoxelSphereTools_eventSmoothSphere_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float Strength;
			int32 NumIterations;
			EVoxelFalloff FalloffType;
			float Falloff;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphere_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_FalloffType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_FalloffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_NumIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Smooth a sphere\n\x09 * @see SmoothSphere, SmoothSphereAsync and FVoxelSphereToolsImpl::SmoothSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Strength             \x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09NumIterations        \x09The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n\x09 * @param\x09""FalloffType          \x09The type of falloff\n\x09 * @param\x09""Falloff              \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_NumIterations", "1" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Smooth a sphere\n@see SmoothSphere, SmoothSphereAsync and FVoxelSphereToolsImpl::SmoothSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Strength                The strength of the smoothing (preferably between 0 and 1)\n@param       NumIterations           The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n@param       FalloffType             The type of falloff\n@param       Falloff                 The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventSmoothSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics
	{
		struct VoxelSphereTools_eventSmoothSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			float Radius;
			float Strength;
			int32 NumIterations;
			EVoxelFalloff FalloffType;
			float Falloff;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_FalloffType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_FalloffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_NumIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Smooth a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SmoothSphere, SmoothSphereAsync and FVoxelSphereToolsImpl::SmoothSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Strength             \x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09NumIterations        \x09The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n\x09 * @param\x09""FalloffType          \x09The type of falloff\n\x09 * @param\x09""Falloff              \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_NumIterations", "1" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Smooth a sphere\nRuns asynchronously in a background thread\n@see SmoothSphere, SmoothSphereAsync and FVoxelSphereToolsImpl::SmoothSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Strength                The strength of the smoothing (preferably between 0 and 1)\n@param       NumIterations           The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n@param       FalloffType             The type of falloff\n@param       Falloff                 The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics
	{
		struct VoxelSphereTools_eventTrimSphere_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			FVector Normal;
			float Radius;
			float Falloff;
			bool bAdditive;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static void NewProp_bAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Normal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Trim tool: used to quickly flatten large portions of the world\n\x09 * Best results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\n\x09 * This ensures the tool usage is relatively smooth.\n\x09 * Works by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\n\x09 * The shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n\x09 * @see TrimSphere, TrimSphereAsync and FVoxelSphereToolsImpl::TrimSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Normal               \x09The normal\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""Falloff              \x09The falloff, between 0 and 1\n\x09 * @param\x09""bAdditive            \x09Whether to add or remove voxels\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Trim tool: used to quickly flatten large portions of the world\nBest results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\nThis ensures the tool usage is relatively smooth.\nWorks by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\nThe shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n@see TrimSphere, TrimSphereAsync and FVoxelSphereToolsImpl::TrimSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Normal                  The normal\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Falloff                 The falloff, between 0 and 1\n@param       bAdditive               Whether to add or remove voxels\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "TrimSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventTrimSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_TrimSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics
	{
		struct VoxelSphereTools_eventTrimSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVector Position;
			FVector Normal;
			float Radius;
			float Falloff;
			bool bAdditive;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static void NewProp_bAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
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
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Normal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Trim tool: used to quickly flatten large portions of the world\n\x09 * Best results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\n\x09 * This ensures the tool usage is relatively smooth.\n\x09 * Works by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\n\x09 * The shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n\x09 * Runs asynchronously in a background thread\n\x09 * @see TrimSphere, TrimSphereAsync and FVoxelSphereToolsImpl::TrimSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Normal               \x09The normal\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""Falloff              \x09The falloff, between 0 and 1\n\x09 * @param\x09""bAdditive            \x09Whether to add or remove voxels\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ToolTip", "Trim tool: used to quickly flatten large portions of the world\nBest results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\nThis ensures the tool usage is relatively smooth.\nWorks by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\nThe shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\nRuns asynchronously in a background thread\n@see TrimSphere, TrimSphereAsync and FVoxelSphereToolsImpl::TrimSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Normal                  The normal\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Falloff                 The falloff, between 0 and 1\n@param       bAdditive               Whether to add or remove voxels\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "TrimSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelSphereTools_NoRegister()
	{
		return UVoxelSphereTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSphereTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSphereTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelSphereTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSphereTools_AddSphere, "AddSphere" }, // 1616826448
		{ &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync, "AddSphereAsync" }, // 3216785686
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere, "ApplyKernelSphere" }, // 388656533
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync, "ApplyKernelSphereAsync" }, // 3137976910
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere, "ApplyMaterialKernelSphere" }, // 3910904816
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync, "ApplyMaterialKernelSphereAsync" }, // 1937022635
		{ &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere, "RemoveSphere" }, // 1445048156
		{ &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync, "RemoveSphereAsync" }, // 709927175
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere, "RevertSphere" }, // 431059388
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync, "RevertSphereAsync" }, // 2773207666
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator, "RevertSphereToGenerator" }, // 214788318
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync, "RevertSphereToGeneratorAsync" }, // 101838244
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere, "SetMaterialSphere" }, // 2401870261
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync, "SetMaterialSphereAsync" }, // 3127808398
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere, "SetValueSphere" }, // 1406869654
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync, "SetValueSphereAsync" }, // 2722789719
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere, "SmoothMaterialSphere" }, // 2012811113
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync, "SmoothMaterialSphereAsync" }, // 2009867008
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere, "SmoothSphere" }, // 1841026112
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync, "SmoothSphereAsync" }, // 2329502089
		{ &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere, "TrimSphere" }, // 2840310395
		{ &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync, "TrimSphereAsync" }, // 1213943025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSphereTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSphereTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSphereTools_Statics::ClassParams = {
		&UVoxelSphereTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSphereTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSphereTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSphereTools, 1834161561);
	template<> VOXEL_API UClass* StaticClass<UVoxelSphereTools>()
	{
		return UVoxelSphereTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSphereTools(Z_Construct_UClass_UVoxelSphereTools, &UVoxelSphereTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSphereTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSphereTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
