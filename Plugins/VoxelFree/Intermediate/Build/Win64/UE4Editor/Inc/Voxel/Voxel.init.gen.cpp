// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxel_init() {}
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Voxel()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Voxel",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD9275F1A,
				0xA9B133B1,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
