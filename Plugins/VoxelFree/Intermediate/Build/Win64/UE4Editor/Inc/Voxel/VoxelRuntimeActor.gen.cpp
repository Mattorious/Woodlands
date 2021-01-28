// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRuntimeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelRuntimeActor() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelRuntimeActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelRuntimeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLODSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelRendererSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECanBeCharacterBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageWorldType();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliageCollection_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBHardness();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNormalConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelUVConfig();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterials();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
// End Cross Module References
	void AVoxelRuntimeActor::StaticRegisterNativesAVoxelRuntimeActor()
	{
	}
	UClass* Z_Construct_UClass_AVoxelRuntimeActor_NoRegister()
	{
		return AVoxelRuntimeActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelRuntimeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugTextures;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_DebugTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LODSubsystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RendererSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RendererSubsystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplayerSyncRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiplayerSyncRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplayerInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MultiplayerInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiplayer_MetaData[];
#endif
		static void NewProp_bEnableMultiplayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiplayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataOctreeInitialSubdivisionDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataOctreeInitialSubdivisionDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsTickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EventsTickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshUpdatesBudget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshUpdatesBudget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PriorityOffsets;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PriorityOffsets_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PriorityOffsets_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriorityOffsets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PriorityCategories;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PriorityCategories_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PriorityCategories_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriorityCategories_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleChunksNavmeshMaxLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibleChunksNavmeshMaxLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeVisibleChunksNavmesh_MetaData[];
#endif
		static void NewProp_bComputeVisibleChunksNavmesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeVisibleChunksNavmesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableNavmesh_MetaData[];
#endif
		static void NewProp_bEnableNavmesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableNavmesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCleanCollisionMeshes_MetaData[];
#endif
		static void NewProp_bCleanCollisionMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCleanCollisionMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumConvexHullsPerAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumConvexHullsPerAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleCubicCollisionLODBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimpleCubicCollisionLODBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimpleCubicCollision_MetaData[];
#endif
		static void NewProp_bSimpleCubicCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimpleCubicCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCCD_MetaData[];
#endif
		static void NewProp_bUseCCD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCCD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterialOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleChunksCollisionsMaxLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibleChunksCollisionsMaxLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeVisibleChunksCollisions_MetaData[];
#endif
		static void NewProp_bComputeVisibleChunksCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeVisibleChunksCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEvents_MetaData[];
#endif
		static void NewProp_bGenerateOverlapEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyRigidBodyCollision_MetaData[];
#endif
		static void NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyRigidBodyCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanCharacterStepUpOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CanCharacterStepUpOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionPresets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionPresets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollisions_MetaData[];
#endif
		static void NewProp_bEnableCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfFoliageInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_MaxNumberOfFoliageInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageCollisionDistanceInVoxel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FoliageCollisionDistanceInVoxel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HISMChunkSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HISMChunkSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFourWayBlend_MetaData[];
#endif
		static void NewProp_bIsFourWayBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFourWayBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageWorldType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FoliageWorldType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoliageWorldType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageCollections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotMergeCollisionsAndNavmesh_MetaData[];
#endif
		static void NewProp_bDoNotMergeCollisionsAndNavmesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotMergeCollisionsAndNavmesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunksClustersSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChunksClustersSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeChunks_MetaData[];
#endif
		static void NewProp_bMergeChunks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTransitions_MetaData[];
#endif
		static void NewProp_bEnableTransitions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTransitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionDivisor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistanceFieldResolutionDivisor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistanceFieldBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFieldLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDistanceFieldLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateDistanceFields_MetaData[];
#endif
		static void NewProp_bGenerateDistanceFields_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateDistanceFields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOptimizeIndices_MetaData[];
#endif
		static void NewProp_bOptimizeIndices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOptimizeIndices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePoolTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TexturePoolTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGreedyCubicMesher_MetaData[];
#endif
		static void NewProp_bGreedyCubicMesher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGreedyCubicMesher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticWorld_MetaData[];
#endif
		static void NewProp_bStaticWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStaticWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseStaticPath_MetaData[];
#endif
		static void NewProp_bUseStaticPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseStaticPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContributesToStaticLighting_MetaData[];
#endif
		static void NewProp_bContributesToStaticLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContributesToStaticLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderWorld_MetaData[];
#endif
		static void NewProp_bRenderWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunksCullingLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChunksCullingLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcMeshClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProcMeshClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastFarShadow_MetaData[];
#endif
		static void NewProp_bCastFarShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastFarShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunksDitheringDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChunksDitheringDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDitherChunks_MetaData[];
#endif
		static void NewProp_bDitherChunks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDitherChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterialInstances_MetaData[];
#endif
		static void NewProp_bCreateMaterialInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterialInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderSharpness_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenderSharpness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSRGBColors_MetaData[];
#endif
		static void NewProp_bSRGBColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSRGBColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolateUVs_MetaData[];
#endif
		static void NewProp_bInterpolateUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolateUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolateColors_MetaData[];
#endif
		static void NewProp_bInterpolateColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolateColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHalfPrecisionCoordinates_MetaData[];
#endif
		static void NewProp_bHalfPrecisionCoordinates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHalfPrecisionCoordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialsMeshConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialsMeshConfigs;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialsMeshConfigs_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialsMeshConfigs_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolesMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HolesMaterials;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HolesMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHardColorTransitions_MetaData[];
#endif
		static void NewProp_bHardColorTransitions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHardColorTransitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialsHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialsHardness;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialsHardness_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialsHardness_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RGBHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RGBHardness;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RGBHardness_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NormalConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NormalConfig_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UVConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UVConfig_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODMaterialCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODMaterialCollections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODMaterialCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstantLOD_MetaData[];
#endif
		static void NewProp_bConstantLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstantLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDelayBetweenLODUpdates_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDelayBetweenLODUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvokerDistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvokerDistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomWorldBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomWorldBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomWorldBounds_MetaData[];
#endif
		static void NewProp_bUseCustomWorldBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomWorldBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSizeInVoxel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_WorldSizeInVoxel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderOctreeDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenderOctreeDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugManager_MetaData[];
#endif
		static void NewProp_bDisableDebugManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableOnScreenMessages_MetaData[];
#endif
		static void NewProp_bDisableOnScreenMessages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableOnScreenMessages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeDisableEditsBoxes_MetaData[];
#endif
		static void NewProp_bMergeDisableEditsBoxes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeDisableEditsBoxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeAssetActors_MetaData[];
#endif
		static void NewProp_bMergeAssetActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeAssetActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteTransforms_MetaData[];
#endif
		static void NewProp_bUseAbsoluteTransforms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUndoRedo_MetaData[];
#endif
		static void NewProp_bEnableUndoRedo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUndoRedo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCameraIfNoInvokersFound_MetaData[];
#endif
		static void NewProp_bUseCameraIfNoInvokersFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCameraIfNoInvokersFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateWorldAutomatically_MetaData[];
#endif
		static void NewProp_bCreateWorldAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateWorldAutomatically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableItemManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaceableItemManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelRuntimeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRuntimeActor.h" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DebugTextures_MetaData[] = {
		{ "Category", "Voxel - Debug" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DebugTextures = { "DebugTextures", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, DebugTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DebugTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DebugTextures_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DebugTextures_Inner = { "DebugTextures", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODSubsystem_MetaData[] = {
		{ "Category", "Voxel - Subsystems" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODSubsystem = { "LODSubsystem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, LODSubsystem), Z_Construct_UClass_UVoxelLODSubsystemProxy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODSubsystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RendererSubsystem_MetaData[] = {
		{ "Category", "Voxel - Subsystems" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RendererSubsystem = { "RendererSubsystem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, RendererSubsystem), Z_Construct_UClass_UVoxelRendererSubsystemProxy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RendererSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RendererSubsystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerSyncRate_MetaData[] = {
		{ "Category", "Voxel - Multiplayer" },
		{ "Comment", "// Number of sync per second\n" },
		{ "EditCondition", "bMultiplayer" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Number of sync per second" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerSyncRate = { "MultiplayerSyncRate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MultiplayerSyncRate), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerSyncRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerSyncRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerInterface_MetaData[] = {
		{ "Category", "Voxel - Multiplayer" },
		{ "EditCondition", "bMultiplayer" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerInterface = { "MultiplayerInterface", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MultiplayerInterface), Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableMultiplayer_MetaData[] = {
		{ "Category", "Voxel - Multiplayer" },
		{ "Comment", "// Is this world synchronized using the plugin multiplayer system?\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Is this world synchronized using the plugin multiplayer system?" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableMultiplayer_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bEnableMultiplayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableMultiplayer = { "bEnableMultiplayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableMultiplayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableMultiplayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableMultiplayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DataOctreeInitialSubdivisionDepth_MetaData[] = {
		{ "Category", "Voxel - Performance" },
		{ "ClampMin", "0" },
		{ "Comment", "// Depth to which to subdivide the data octree on start\n// Will create 8^X nodes, so keep low!\n// Useful to avoid update tasks locking the entire octree\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Depth to which to subdivide the data octree on start\nWill create 8^X nodes, so keep low!\nUseful to avoid update tasks locking the entire octree" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DataOctreeInitialSubdivisionDepth = { "DataOctreeInitialSubdivisionDepth", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, DataOctreeInitialSubdivisionDepth), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DataOctreeInitialSubdivisionDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DataOctreeInitialSubdivisionDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_EventsTickRate_MetaData[] = {
		{ "Category", "Voxel - Performance" },
		{ "Comment", "// The rate at which events are fired (number of updates per seconds). Used for foliage spawning, foliage collision, binded BP events...\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "The rate at which events are fired (number of updates per seconds). Used for foliage spawning, foliage collision, binded BP events..." },
		{ "UIMax", "60" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_EventsTickRate = { "EventsTickRate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, EventsTickRate), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_EventsTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_EventsTickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MeshUpdatesBudget_MetaData[] = {
		{ "Category", "Voxel - Performance" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "// Max time in milliseconds to spend on mesh updates per tick\n// If this is too low world will generate very slowly\n// If this is too high you will get lag spikes\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Max time in milliseconds to spend on mesh updates per tick\nIf this is too low world will generate very slowly\nIf this is too high you will get lag spikes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MeshUpdatesBudget = { "MeshUpdatesBudget", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MeshUpdatesBudget), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MeshUpdatesBudget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MeshUpdatesBudget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets_MetaData[] = {
		{ "Category", "Voxel - Performance" },
		{ "Comment", "// Allows to offset tasks own priorities\n// Only useful for tasks that have the same priority category!\n// Most values are in voxel\n" },
		{ "EditCondition", "bCreateGlobalPool" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Allows to offset tasks own priorities\nOnly useful for tasks that have the same priority category!\nMost values are in voxel" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets = { "PriorityOffsets", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, PriorityOffsets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets_Key_KeyProp = { "PriorityOffsets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets_ValueProp = { "PriorityOffsets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories_MetaData[] = {
		{ "Category", "Voxel - Performance" },
		{ "Comment", "// Async tasks are sorted based on 2 values:\n// - first, their priority category\n// - then, their own priority (most of the time their distance from voxel invokers)\n// Using priority categories, you can determine which tasks to compute first\n// Setting 2 task type to the same category will allow to sort them only based on their distance from a voxel invoker\n// eg, for foliage and meshing tasks: meshes will spawn at the same time as the foliage on top of them\n// If you want to spawn the meshes slightly before foliage, you can offset the tasks own priorities using the PriorityOffsets below\n" },
		{ "EditCondition", "bCreateGlobalPool" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Async tasks are sorted based on 2 values:\n- first, their priority category\n- then, their own priority (most of the time their distance from voxel invokers)\nUsing priority categories, you can determine which tasks to compute first\nSetting 2 task type to the same category will allow to sort them only based on their distance from a voxel invoker\neg, for foliage and meshing tasks: meshes will spawn at the same time as the foliage on top of them\nIf you want to spawn the meshes slightly before foliage, you can offset the tasks own priorities using the PriorityOffsets below" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories = { "PriorityCategories", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, PriorityCategories), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories_Key_KeyProp = { "PriorityCategories_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories_ValueProp = { "PriorityCategories", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksNavmeshMaxLOD_MetaData[] = {
		{ "Category", "Voxel - Navmesh" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// Max LOD to compute navmesh on. Inclusive. Does not affect invokers\n" },
		{ "EditCondition", "bEnableNavmesh && bComputeVisibleChunksNavmesh" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Max LOD to compute navmesh on. Inclusive. Does not affect invokers" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksNavmeshMaxLOD = { "VisibleChunksNavmeshMaxLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, VisibleChunksNavmeshMaxLOD), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksNavmeshMaxLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksNavmeshMaxLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksNavmesh_MetaData[] = {
		{ "Category", "Voxel - Navmesh" },
		{ "Comment", "// If false, use only invokers navmesh settings\n" },
		{ "EditCondition", "bEnableNavmesh" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "If false, use only invokers navmesh settings" },
		{ "UpdateLODs", "" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksNavmesh_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bComputeVisibleChunksNavmesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksNavmesh = { "bComputeVisibleChunksNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksNavmesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableNavmesh_MetaData[] = {
		{ "Category", "Voxel - Navmesh" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableNavmesh_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bEnableNavmesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableNavmesh = { "bEnableNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableNavmesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCleanCollisionMeshes_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "Comment", "// Clean collisions meshes when cooking them.\n// Disabling this makes cooking collision slightly faster, but might lead to physx crashing in case of invalid geometry.\n// Enable this if you are getting crashes in the physx code\n// To check the performance improvements: voxel.LogCollisionCookingTimes 1\n" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Clean collisions meshes when cooking them.\nDisabling this makes cooking collision slightly faster, but might lead to physx crashing in case of invalid geometry.\nEnable this if you are getting crashes in the physx code\nTo check the performance improvements: voxel.LogCollisionCookingTimes 1" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCleanCollisionMeshes_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bCleanCollisionMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCleanCollisionMeshes = { "bCleanCollisionMeshes", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCleanCollisionMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCleanCollisionMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCleanCollisionMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NumConvexHullsPerAxis_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "// Number of convex hulls to create per chunk per axis for simple collisions\n// More hulls = more precise collisions, but much more expensive physics\n// You can check the result in the Player Collision view\n" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Number of convex hulls to create per chunk per axis for simple collisions\nMore hulls = more precise collisions, but much more expensive physics\nYou can check the result in the Player Collision view" },
		{ "UIMax", "32" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NumConvexHullsPerAxis = { "NumConvexHullsPerAxis", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, NumConvexHullsPerAxis), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NumConvexHullsPerAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NumConvexHullsPerAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_SimpleCubicCollisionLODBias_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "// Will use a lower LOD for cubic collisions, making them much faster to simulate at the cost of accuracy\n" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Will use a lower LOD for cubic collisions, making them much faster to simulate at the cost of accuracy" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_SimpleCubicCollisionLODBias = { "SimpleCubicCollisionLODBias", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, SimpleCubicCollisionLODBias), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_SimpleCubicCollisionLODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_SimpleCubicCollisionLODBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSimpleCubicCollision_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "Comment", "// If true and the greedy cubic mesher is enabled, will use cubes as simple collision\n// Cubes will be created greedily, so they'll be as large as possible\n" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "If true and the greedy cubic mesher is enabled, will use cubes as simple collision\nCubes will be created greedily, so they'll be as large as possible" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSimpleCubicCollision_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bSimpleCubicCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSimpleCubicCollision = { "bSimpleCubicCollision", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSimpleCubicCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSimpleCubicCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSimpleCubicCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCCD_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "Comment", "/** If true Continuous Collision Detection (CCD) will be used for this component */" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "If true Continuous Collision Detection (CCD) will be used for this component" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCCD_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bUseCCD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCCD = { "bUseCCD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCCD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCCD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCCD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PhysMaterialOverride_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "Comment", "/**\x09""Allows you to override the PhysicalMaterial to use for simple collision on this body. */" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Allows you to override the PhysicalMaterial to use for simple collision on this body." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PhysMaterialOverride = { "PhysMaterialOverride", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, PhysMaterialOverride), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PhysMaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PhysMaterialOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksCollisionsMaxLOD_MetaData[] = {
		{ "Category", "Voxel - Collisions|Visible Chunks" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// Max LOD to compute collisions on. Inclusive. If not 0 collisions won't be precise. Does not affect invokers\n" },
		{ "EditCondition", "bComputeVisibleChunksCollisions && bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Max LOD to compute collisions on. Inclusive. If not 0 collisions won't be precise. Does not affect invokers" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksCollisionsMaxLOD = { "VisibleChunksCollisionsMaxLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, VisibleChunksCollisionsMaxLOD), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksCollisionsMaxLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksCollisionsMaxLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksCollisions_MetaData[] = {
		{ "Category", "Voxel - Collisions|Visible Chunks" },
		{ "Comment", "// If false, use only invokers collisions settings\n" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "If false, use only invokers collisions settings" },
		{ "UpdateLODs", "" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksCollisions_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bComputeVisibleChunksCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksCollisions = { "bComputeVisibleChunksCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateOverlapEvents_MetaData[] = {
		{ "Category", "Voxel - Collisions|Events" },
		{ "Comment", "/**\n\x09 * If true, this component will generate overlap events when it is overlapping other components (eg Begin Overlap).\n\x09 * Both components (this and the other) must have this enabled for overlap events to occur.\n\x09 *\n\x09 * @see [Overlap Events](https://docs.unrealengine.com/latest/INT/Engine/Physics/Collision/index.html#overlapandgenerateoverlapevents)\n\x09 * @see UpdateOverlaps(), BeginComponentOverlap(), EndComponentOverlap()\n\x09 */" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "If true, this component will generate overlap events when it is overlapping other components (eg Begin Overlap).\nBoth components (this and the other) must have this enabled for overlap events to occur.\n\n@see [Overlap Events](https://docs.unrealengine.com/latest/INT/Engine/Physics/Collision/index.html#overlapandgenerateoverlapevents)\n@see UpdateOverlaps(), BeginComponentOverlap(), EndComponentOverlap()" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateOverlapEvents_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bGenerateOverlapEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateOverlapEvents = { "bGenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateOverlapEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateOverlapEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateOverlapEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bNotifyRigidBodyCollision_MetaData[] = {
		{ "Category", "Voxel - Collisions|Events" },
		{ "Comment", "/**\x09Should 'Hit' events fire when this object collides during physics simulation. */" },
		{ "DisplayName", "Simulation Generates Hit Events" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Should 'Hit' events fire when this object collides during physics simulation." },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bNotifyRigidBodyCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bNotifyRigidBodyCollision = { "bNotifyRigidBodyCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bNotifyRigidBodyCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bNotifyRigidBodyCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bNotifyRigidBodyCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CanCharacterStepUpOn_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "Comment", "/**\n\x09 * Determine whether a Character can step up onto this component.\n\x09 * This controls whether they can try to step up on it when they bump in to it, not whether they can walk on it after landing on it.\n\x09 * @see FWalkableSlopeOverride\n\x09 */" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Determine whether a Character can step up onto this component.\nThis controls whether they can try to step up on it when they bump in to it, not whether they can walk on it after landing on it.\n@see FWalkableSlopeOverride" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CanCharacterStepUpOn = { "CanCharacterStepUpOn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, CanCharacterStepUpOn), Z_Construct_UEnum_Engine_ECanBeCharacterBase, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CanCharacterStepUpOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CanCharacterStepUpOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "Comment", "// Whether to compute simple collision meshes or not\n// Change this only if you want to use the voxel world as a rigidbody\n// Simple collision won't match the geometry exactly\n// Using simple collision is not less expensive than using complex collisions, as the convex hulls are far from optimized\n" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Whether to compute simple collision meshes or not\nChange this only if you want to use the voxel world as a rigidbody\nSimple collision won't match the geometry exactly\nUsing simple collision is not less expensive than using complex collisions, as the convex hulls are far from optimized" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, CollisionTraceFlag), Z_Construct_UEnum_Engine_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionTraceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionTraceFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionPresets_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionPresets = { "CollisionPresets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, CollisionPresets), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionPresets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableCollisions_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableCollisions_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bEnableCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableCollisions = { "bEnableCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxNumberOfFoliageInstances_MetaData[] = {
		{ "Category", "Voxel - Foliage" },
		{ "ClampMin", "0" },
		{ "Comment", "// If more instances than this are spawned, they will not be displayed\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateFoliage", "" },
		{ "ToolTip", "If more instances than this are spawned, they will not be displayed" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxNumberOfFoliageInstances = { "MaxNumberOfFoliageInstances", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MaxNumberOfFoliageInstances), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxNumberOfFoliageInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxNumberOfFoliageInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollisionDistanceInVoxel_MetaData[] = {
		{ "Category", "Voxel - Foliage" },
		{ "ClampMin", "0" },
		{ "Comment", "// Only nearby instances have collisions\n// Configure the distance using this\n// In voxels!\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateFoliage", "" },
		{ "ToolTip", "Only nearby instances have collisions\nConfigure the distance using this\nIn voxels!" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollisionDistanceInVoxel = { "FoliageCollisionDistanceInVoxel", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, FoliageCollisionDistanceInVoxel), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollisionDistanceInVoxel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollisionDistanceInVoxel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HISMChunkSize_MetaData[] = {
		{ "Category", "Voxel - Foliage" },
		{ "Comment", "// The chunk size, in voxels, of a single HISM component\n// Lower = higher draw calls/object count\n// Higher = more delay when building the occlusion tree\n" },
		{ "DisplayName", "HISM Chunk Size" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateFoliage", "" },
		{ "ToolTip", "The chunk size, in voxels, of a single HISM component\nLower = higher draw calls/object count\nHigher = more delay when building the occlusion tree" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HISMChunkSize = { "HISMChunkSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, HISMChunkSize), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HISMChunkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HISMChunkSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bIsFourWayBlend_MetaData[] = {
		{ "Category", "Voxel - Foliage" },
		{ "Comment", "// If true, will ignore Alpha when reading material strength\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateFoliage", "" },
		{ "ToolTip", "If true, will ignore Alpha when reading material strength" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bIsFourWayBlend_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bIsFourWayBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bIsFourWayBlend = { "bIsFourWayBlend", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bIsFourWayBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bIsFourWayBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bIsFourWayBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageWorldType_MetaData[] = {
		{ "Category", "Voxel - Foliage" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateFoliage", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageWorldType = { "FoliageWorldType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, FoliageWorldType), Z_Construct_UEnum_Voxel_EVoxelFoliageWorldType, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageWorldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageWorldType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageWorldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollections_MetaData[] = {
		{ "Category", "Voxel - Foliage" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateFoliage", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollections = { "FoliageCollections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, FoliageCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollections_Inner = { "FoliageCollections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelFoliageCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_BoundsExtension_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// Increases the chunks bounding boxes, useful when using tessellation\n// Setting it to 0 can cause issues on flat worlds\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Increases the chunks bounding boxes, useful when using tessellation\nSetting it to 0 can cause issues on flat worlds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_BoundsExtension = { "BoundsExtension", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, BoundsExtension), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_BoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_BoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// If true, additional meshes with the normal chunk size will be spawned only for collisions & navmesh\n// Recommended, as cooking collision for merged chunks takes forever\n" },
		{ "EditCondition", "bMergeChunks" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, additional meshes with the normal chunk size will be spawned only for collisions & navmesh\nRecommended, as cooking collision for merged chunks takes forever" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bDoNotMergeCollisionsAndNavmesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh = { "bDoNotMergeCollisionsAndNavmesh", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksClustersSize_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// Size in voxels of the clusters. Scales with LOD (eg if 64, for LOD 3 it will be 64 * 2 * 2 * 2 = 512)\n" },
		{ "EditCondition", "bMergeChunks" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Size in voxels of the clusters. Scales with LOD (eg if 64, for LOD 3 it will be 64 * 2 * 2 * 2 = 512)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksClustersSize = { "ChunksClustersSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, ChunksClustersSize), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksClustersSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksClustersSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeChunks_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// Will merge chunks together to reduce draw calls.\n// Only merges chunks of the same LOD!\n// Enabling this disables CreateMaterialInstances and DitherChunks.\n// When turning this on, it is recommended to reduce the priority of the Mesh Merge category (eg set it to 0)\n// Else mesh merge are done before meshing tasks, even if these meshing tasks would have made the merge invalid\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Will merge chunks together to reduce draw calls.\nOnly merges chunks of the same LOD!\nEnabling this disables CreateMaterialInstances and DitherChunks.\nWhen turning this on, it is recommended to reduce the priority of the Mesh Merge category (eg set it to 0)\nElse mesh merge are done before meshing tasks, even if these meshing tasks would have made the merge invalid" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeChunks_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bMergeChunks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeChunks = { "bMergeChunks", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeChunks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableTransitions_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableTransitions_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bEnableTransitions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableTransitions = { "bEnableTransitions", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableTransitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableTransitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "/** Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices. */" },
		{ "EditCondition", "bGenerateDistanceFields" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldSelfShadowBias = { "DistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, DistanceFieldSelfShadowBias), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldResolutionDivisor_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "// By how much to divide the distance field resolution\n// By default it'll be 32x32x32: if the divisor is 2, it'll be 16x16x16, if 4 8x8x8...\n// Increasing this decreases quality of the distance field, but saves huge amount of VRAM\n// NOTE: increasing this can lead to messy distance fields as some signs are messy\n" },
		{ "EditCondition", "bGenerateDistanceFields" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "By how much to divide the distance field resolution\nBy default it'll be 32x32x32: if the divisor is 2, it'll be 16x16x16, if 4 8x8x8...\nIncreasing this decreases quality of the distance field, but saves huge amount of VRAM\nNOTE: increasing this can lead to messy distance fields as some signs are messy" },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldResolutionDivisor = { "DistanceFieldResolutionDivisor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, DistanceFieldResolutionDivisor), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldResolutionDivisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldResolutionDivisor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldBoundsExtension_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMax", "32" },
		{ "ClampMin", "0" },
		{ "Comment", "// By how many voxels to extend the chunks distance fields (on every side)\n// This is needed so that distance fields nicely overlap\n" },
		{ "EditCondition", "bGenerateDistanceFields" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "By how many voxels to extend the chunks distance fields (on every side)\nThis is needed so that distance fields nicely overlap" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldBoundsExtension = { "DistanceFieldBoundsExtension", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, DistanceFieldBoundsExtension), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxDistanceFieldLOD_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// Chunks with LOD <= this will have distance fields\n// Be careful when increasing because of the memory usage caused by distance fields\n" },
		{ "EditCondition", "bGenerateDistanceFields" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Chunks with LOD <= this will have distance fields\nBe careful when increasing because of the memory usage caused by distance fields" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxDistanceFieldLOD = { "MaxDistanceFieldLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MaxDistanceFieldLOD), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxDistanceFieldLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxDistanceFieldLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateDistanceFields_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// Will generate distance fields on LOD 0 chunks\n// Has a cost of around 1 ms per chunk (on async thread)\n// Doesn't work with chunks merging or single/double index material config with different materials per chunk\n// Requires UE 4.23+\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Will generate distance fields on LOD 0 chunks\nHas a cost of around 1 ms per chunk (on async thread)\nDoesn't work with chunks merging or single/double index material config with different materials per chunk\nRequires UE 4.23+" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateDistanceFields_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bGenerateDistanceFields = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateDistanceFields = { "bGenerateDistanceFields", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateDistanceFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateDistanceFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateDistanceFields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bOptimizeIndices_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// If true, the mesh indices will be sorted to improve GPU cache performance. Adds a cost to the async mesh building. If you don't see any perf difference, leave it off\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, the mesh indices will be sorted to improve GPU cache performance. Adds a cost to the async mesh building. If you don't see any perf difference, leave it off" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bOptimizeIndices_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bOptimizeIndices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bOptimizeIndices = { "bOptimizeIndices", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bOptimizeIndices_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bOptimizeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bOptimizeIndices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_TexturePoolTextureSize_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMin", "64" },
		{ "Comment", "// The size of the textures in the pool used by the greedy cubic mesher to store the colors\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "The size of the textures in the pool used by the greedy cubic mesher to store the colors" },
		{ "UIMax", "2048" },
		{ "UIMin", "128" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_TexturePoolTextureSize = { "TexturePoolTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, TexturePoolTextureSize), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_TexturePoolTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_TexturePoolTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGreedyCubicMesher_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// If true, will merge quads generated by the cubic mesher\n// Will ignore UV Config\n// Only works with the RGB Material config\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, will merge quads generated by the cubic mesher\nWill ignore UV Config\nOnly works with the RGB Material config" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGreedyCubicMesher_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bGreedyCubicMesher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGreedyCubicMesher = { "bGreedyCubicMesher", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGreedyCubicMesher_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGreedyCubicMesher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGreedyCubicMesher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bStaticWorld_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// Will destroy any intermediate render data to free up memory\n// Does not support any kind of updates INCLUDING LOD updates: your LODs will be frozen!\n// Note: if MergeChunks is true, chunk meshes memory won't be cleared as it can't know if a new mesh will be added to the cluster\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Will destroy any intermediate render data to free up memory\nDoes not support any kind of updates INCLUDING LOD updates: your LODs will be frozen!\nNote: if MergeChunks is true, chunk meshes memory won't be cleared as it can't know if a new mesh will be added to the cluster" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bStaticWorld_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bStaticWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bStaticWorld = { "bStaticWorld", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bStaticWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bStaticWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bStaticWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseStaticPath_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// If true, will try to use the static path when possible. Using the static path is much cheaper on the render thread\n// Should always be on unless you see some issues\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, will try to use the static path when possible. Using the static path is much cheaper on the render thread\nShould always be on unless you see some issues" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseStaticPath_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bUseStaticPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseStaticPath = { "bUseStaticPath", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseStaticPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseStaticPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseStaticPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bContributesToStaticLighting_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// If true, will create static meshes for proc meshes that are overlapping lightmass importance volumes\n// allowing to have static lighting through volumetric lightmaps\n// You can toggle static meshes using voxel.renderer.ShowStaticMeshComponents 1\n// and force an update using voxel.renderer.UpdateStaticMeshComponents\n// In the editor, this will force LOD 0 on chunks overlapping lightmass importance volumes\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, will create static meshes for proc meshes that are overlapping lightmass importance volumes\nallowing to have static lighting through volumetric lightmaps\nYou can toggle static meshes using voxel.renderer.ShowStaticMeshComponents 1\nand force an update using voxel.renderer.UpdateStaticMeshComponents\nIn the editor, this will force LOD 0 on chunks overlapping lightmass importance volumes" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bContributesToStaticLighting_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bContributesToStaticLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bContributesToStaticLighting = { "bContributesToStaticLighting", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bContributesToStaticLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bContributesToStaticLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bContributesToStaticLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bRenderWorld_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// Whether to render the world, or to just use it for collisions/navmesh\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Whether to render the world, or to just use it for collisions/navmesh" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bRenderWorld_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bRenderWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bRenderWorld = { "bRenderWorld", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bRenderWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bRenderWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bRenderWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksCullingLOD_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// Chunks with a LOD strictly higher than this won't be rendered\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Chunks with a LOD strictly higher than this won't be rendered" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksCullingLOD = { "ChunksCullingLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, ChunksCullingLOD), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksCullingLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksCullingLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ProcMeshClass_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// Custom procedural mesh class to use\n// Use this to override specific rendering settings such as cast shadows, render custom depth...\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Custom procedural mesh class to use\nUse this to override specific rendering settings such as cast shadows, render custom depth..." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ProcMeshClass = { "ProcMeshClass", nullptr, (EPropertyFlags)0x0014040000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, ProcMeshClass), Z_Construct_UClass_UVoxelProceduralMeshComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ProcMeshClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ProcMeshClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCastFarShadow_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// When enabled, the component will be rendering into the far shadow cascades (only for directional lights).\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "When enabled, the component will be rendering into the far shadow cascades (only for directional lights)." },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCastFarShadow_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bCastFarShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCastFarShadow = { "bCastFarShadow", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCastFarShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCastFarShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCastFarShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksDitheringDuration_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "// Dithering duration when changing LODs\n" },
		{ "EditCondition", "bDitherChunks" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Dithering duration when changing LODs" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksDitheringDuration = { "ChunksDitheringDuration", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, ChunksDitheringDuration), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksDitheringDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksDitheringDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDitherChunks_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// Whether to dither chunks\n// Requires CreateMaterialInstances\n" },
		{ "EditCondition", "bCreateMaterialInstances" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Whether to dither chunks\nRequires CreateMaterialInstances" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDitherChunks_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bDitherChunks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDitherChunks = { "bDitherChunks", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDitherChunks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDitherChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDitherChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateMaterialInstances_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "Comment", "// If true, a dynamic instance will be created for each chunk. Else, the material will be used directly\n// Disable this if you want to use dynamic material instances as voxel world materials\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, a dynamic instance will be created for each chunk. Else, the material will be used directly\nDisable this if you want to use dynamic material instances as voxel world materials" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateMaterialInstances_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bCreateMaterialInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateMaterialInstances = { "bCreateMaterialInstances", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateMaterialInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateMaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateMaterialInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderSharpness_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "// For marching cubes only\n// If 0, will do nothing\n// If above zero, will round the vertices positions to the nearest multiple of (1 / RenderSharpness)\n// Visually, it will give a more \"sharp\" look, 1 being the sharpest, 2 3 etc being less and less sharp\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "For marching cubes only\nIf 0, will do nothing\nIf above zero, will round the vertices positions to the nearest multiple of (1 / RenderSharpness)\nVisually, it will give a more \"sharp\" look, 1 being the sharpest, 2 3 etc being less and less sharp" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderSharpness = { "RenderSharpness", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, RenderSharpness), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderSharpness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderSharpness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderType_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderType = { "RenderType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, RenderType), Z_Construct_UEnum_Voxel_EVoxelRenderType, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSRGBColors_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "// When ticked, will convert the color stored in the material (as a 4 bytes color) from sRGB to Linear\n// However, since the target will still be 4 bytes, the conversion won't be perfect\n// This is a limitation of vertex colors sadly\n// NOTE: It is recommended to leave this off, and to tick bLinearColor when painting colors instead\n// That way color operations are done in linear space, which is recommended\n// NOTE: DO NOT enable in Multi Index, it will just mess up the blend parameters\n" },
		{ "DisplayName", "sRGB Colors" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "When ticked, will convert the color stored in the material (as a 4 bytes color) from sRGB to Linear\nHowever, since the target will still be 4 bytes, the conversion won't be perfect\nThis is a limitation of vertex colors sadly\nNOTE: It is recommended to leave this off, and to tick bLinearColor when painting colors instead\nThat way color operations are done in linear space, which is recommended\nNOTE: DO NOT enable in Multi Index, it will just mess up the blend parameters" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSRGBColors_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bSRGBColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSRGBColors = { "bSRGBColors", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSRGBColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSRGBColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSRGBColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateUVs_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "// If true, will interpolate the adjacent voxels uvs to find the exact vertex uvs\n// Twice as expensive, as requires to make twice as many material queries!\n// Only works with marching cubes for now\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, will interpolate the adjacent voxels uvs to find the exact vertex uvs\nTwice as expensive, as requires to make twice as many material queries!\nOnly works with marching cubes for now" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateUVs_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bInterpolateUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateUVs = { "bInterpolateUVs", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateColors_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "// If true, will interpolate the adjacent voxels colors to find the exact vertex color\n// In SingleIndex, will interpolate DataA/B/C\n// In MultiIndex, will interpolate Blend and Wetness\n// Twice as expensive, as requires to make twice as many material queries!\n// Might not look as great if the material outside of the voxel surface isn't set to something nice\n// Only works with marching cubes for now\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, will interpolate the adjacent voxels colors to find the exact vertex color\nIn SingleIndex, will interpolate DataA/B/C\nIn MultiIndex, will interpolate Blend and Wetness\nTwice as expensive, as requires to make twice as many material queries!\nMight not look as great if the material outside of the voxel surface isn't set to something nice\nOnly works with marching cubes for now" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateColors_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bInterpolateColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateColors = { "bInterpolateColors", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHalfPrecisionCoordinates_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "// Use 16 bits float instead of 32 bits. Halves the UVs memory usage, but lower precision\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Use 16 bits float instead of 32 bits. Halves the UVs memory usage, but lower precision" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHalfPrecisionCoordinates_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bHalfPrecisionCoordinates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHalfPrecisionCoordinates = { "bHalfPrecisionCoordinates", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHalfPrecisionCoordinates_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHalfPrecisionCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHalfPrecisionCoordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsMeshConfigs_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "// Apply custom mesh settings per material index\n// Will create more mesh components!\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Apply custom mesh settings per material index\nWill create more mesh components!" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsMeshConfigs = { "MaterialsMeshConfigs", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MaterialsMeshConfigs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsMeshConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsMeshConfigs_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsMeshConfigs_Key_KeyProp = { "MaterialsMeshConfigs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsMeshConfigs_ValueProp = { "MaterialsMeshConfigs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVoxelMeshConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HolesMaterials_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "// These materials won't be rendered nor have any collision\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "These materials won't be rendered nor have any collision" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HolesMaterials = { "HolesMaterials", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, HolesMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HolesMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HolesMaterials_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HolesMaterials_Inner = { "HolesMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHardColorTransitions_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "// If true, then in RGB mode additional vertices will be created to ensure that no colors are ever blended\n// Does nothing in cubic mode\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, then in RGB mode additional vertices will be created to ensure that no colors are ever blended\nDoes nothing in cubic mode" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHardColorTransitions_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bHardColorTransitions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHardColorTransitions = { "bHardColorTransitions", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHardColorTransitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHardColorTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHardColorTransitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsHardness_MetaData[] = {
		{ "Category", "Voxel - Materials|Hardness" },
		{ "Comment", "// Material Index -> Hardness, for Single/Multi index, or RGB if Four/Five Way Blend\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Material Index -> Hardness, for Single/Multi index, or RGB if Four/Five Way Blend" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsHardness = { "MaterialsHardness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MaterialsHardness), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsHardness_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsHardness_Key_KeyProp = { "MaterialsHardness_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsHardness_ValueProp = { "MaterialsHardness", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RGBHardness_MetaData[] = {
		{ "Category", "Voxel - Materials|Hardness" },
		{ "Comment", "// Hardness settings for RGB\n" },
		{ "DisplayName", "RGB Hardness" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Hardness settings for RGB" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RGBHardness = { "RGBHardness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, RGBHardness), Z_Construct_UEnum_Voxel_EVoxelRGBHardness, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RGBHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RGBHardness_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RGBHardness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NormalConfig_MetaData[] = {
		{ "Category", "Voxel - Materials|Normals" },
		{ "Comment", "// Normal config, only respected by Marching Cubes\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Normal config, only respected by Marching Cubes" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NormalConfig = { "NormalConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, NormalConfig), Z_Construct_UEnum_Voxel_EVoxelNormalConfig, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NormalConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NormalConfig_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NormalConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "Voxel - Materials|UVs" },
		{ "DisplayName", "UV Scale" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, UVScale), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVConfig_MetaData[] = {
		{ "Category", "Voxel - Materials|UVs" },
		{ "Comment", "// UV Config, ignored if Greedy Meshing is enabled\n" },
		{ "DisplayName", "UV Config" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "UV Config, ignored if Greedy Meshing is enabled" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVConfig = { "UVConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, UVConfig), Z_Construct_UEnum_Voxel_EVoxelUVConfig, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVConfig_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterialCollections_MetaData[] = {
		{ "Category", "Voxel - Materials|LOD" },
		{ "Comment", "// Per LOD material collections overrides\n" },
		{ "DisplayName", "LOD Material Collections" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Per LOD material collections overrides" },
		{ "UpdateRenderer", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterialCollections = { "LODMaterialCollections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, LODMaterialCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterialCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterialCollections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterialCollections_Inner = { "LODMaterialCollections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelLODMaterialCollections, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterials_MetaData[] = {
		{ "Category", "Voxel - Materials|LOD" },
		{ "Comment", "// Per LOD material overrides\n" },
		{ "DisplayName", "LOD Materials" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Per LOD material overrides" },
		{ "UpdateRenderer", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterials = { "LODMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, LODMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterials_Inner = { "LODMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelLODMaterials, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "// The material collection to use in Single Index or Double Index material config\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "The material collection to use in Single Index or Double Index material config" },
		{ "UpdateRenderer", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelMaterial_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "// Only used if Material Config = RGB\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Only used if Material Config = RGB" },
		{ "UpdateRenderer", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelMaterial = { "VoxelMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, VoxelMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Voxel - Materials" },
		{ "Comment", "/* also used by generator */" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "also used by generator" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialConfig_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bConstantLOD_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
		{ "Comment", "// If true, the LODs will be updated only once at start\n// LODs can still be updated using ForceLODsUpdate or ApplyLODSettings\n// For example, can be useful when used with a Max LOD of 0 for worlds that have the highest resolution LOD everywhere\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, the LODs will be updated only once at start\nLODs can still be updated using ForceLODsUpdate or ApplyLODSettings\nFor example, can be useful when used with a Max LOD of 0 for worlds that have the highest resolution LOD everywhere" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bConstantLOD_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bConstantLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bConstantLOD = { "bConstantLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bConstantLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bConstantLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bConstantLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinDelayBetweenLODUpdates_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Min delay between two LOD updates, in seconds\n" },
		{ "DisplayName", "Min Delay Between LOD Updates" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "Min delay between two LOD updates, in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinDelayBetweenLODUpdates = { "MinDelayBetweenLODUpdates", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MinDelayBetweenLODUpdates), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinDelayBetweenLODUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinDelayBetweenLODUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_InvokerDistanceThreshold_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
		{ "Comment", "// In world space. If invokers move by less than this distance LODs won't be updated\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "In world space. If invokers move by less than this distance LODs won't be updated" },
		{ "UpdateLODs", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_InvokerDistanceThreshold = { "InvokerDistanceThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, InvokerDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_InvokerDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_InvokerDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinLOD_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
		{ "ClampMax", "25" },
		{ "ClampMin", "0" },
		{ "Comment", "// Chunks can't have a LOD strictly lower than this. Useful when in space for instance, combined with a manual BP call to ApplyLODSettings\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Chunks can't have a LOD strictly lower than this. Useful when in space for instance, combined with a manual BP call to ApplyLODSettings" },
		{ "UIMax", "25" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MinLOD), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxLOD_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
		{ "ClampMax", "25" },
		{ "ClampMin", "0" },
		{ "Comment", "// Chunks can't have a LOD strictly higher than this. Useful is background has a too low resolution.\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Chunks can't have a LOD strictly higher than this. Useful is background has a too low resolution." },
		{ "UIMax", "25" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxLOD = { "MaxLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, MaxLOD), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CustomWorldBounds_MetaData[] = {
		{ "Category", "Voxel - World Size" },
		{ "EditCondition", "bUseCustomWorldBounds" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CustomWorldBounds = { "CustomWorldBounds", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, CustomWorldBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CustomWorldBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CustomWorldBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCustomWorldBounds_MetaData[] = {
		{ "Category", "Voxel - World Size" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCustomWorldBounds_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bUseCustomWorldBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCustomWorldBounds = { "bUseCustomWorldBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCustomWorldBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCustomWorldBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCustomWorldBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_WorldSizeInVoxel_MetaData[] = {
		{ "Category", "Voxel - World Size" },
		{ "ClampMin", "1" },
		{ "Comment", "// Size of an edge of the world\n" },
		{ "DisplayName", "World Size (in voxel)" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Size of an edge of the world" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_WorldSizeInVoxel = { "WorldSizeInVoxel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, WorldSizeInVoxel), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_WorldSizeInVoxel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_WorldSizeInVoxel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderOctreeDepth_MetaData[] = {
		{ "Category", "Voxel - World Size" },
		{ "ClampMax", "26" },
		{ "ClampMin", "1" },
		{ "Comment", "// WorldSizeInVoxel = RENDER_CHUNK_SIZE * 2^DataOctreeDepth.\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "WorldSizeInVoxel = RENDER_CHUNK_SIZE * 2^DataOctreeDepth." },
		{ "UIMax", "26" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderOctreeDepth = { "RenderOctreeDepth", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, RenderOctreeDepth), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderOctreeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderOctreeDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableDebugManager_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "Comment", "// Will disable all debug features\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Will disable all debug features" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableDebugManager_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bDisableDebugManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableDebugManager = { "bDisableDebugManager", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableDebugManager_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableDebugManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableDebugManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableOnScreenMessages_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "Comment", "// Will hide voxel messages\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "Will hide voxel messages" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableOnScreenMessages_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bDisableOnScreenMessages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableOnScreenMessages = { "bDisableOnScreenMessages", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableOnScreenMessages_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableOnScreenMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableOnScreenMessages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeDisableEditsBoxes_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "Comment", "// If true, will merge disable edits boxes in the scene on create.\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "If true, will merge disable edits boxes in the scene on create." },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeDisableEditsBoxes_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bMergeDisableEditsBoxes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeDisableEditsBoxes = { "bMergeDisableEditsBoxes", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeDisableEditsBoxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeDisableEditsBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeDisableEditsBoxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeAssetActors_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "Comment", "// If true, will merge asset actors in the scene on create.\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "ToolTip", "If true, will merge asset actors in the scene on create." },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeAssetActors_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bMergeAssetActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeAssetActors = { "bMergeAssetActors", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeAssetActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeAssetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeAssetActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseAbsoluteTransforms_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "Comment", "// If true, the voxel mesh components will have their transform stored in world space instead of relative to the actor transform\n// Might add a one frame delay to transform updates, but will greatly reduce precision issues\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "RecreateRender", "" },
		{ "ToolTip", "If true, the voxel mesh components will have their transform stored in world space instead of relative to the actor transform\nMight add a one frame delay to transform updates, but will greatly reduce precision issues" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseAbsoluteTransforms_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bUseAbsoluteTransforms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseAbsoluteTransforms = { "bUseAbsoluteTransforms", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseAbsoluteTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseAbsoluteTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseAbsoluteTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableUndoRedo_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "Comment", "// Keep all the changes in memory to enable undo/redo. Can be expensive\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Keep all the changes in memory to enable undo/redo. Can be expensive" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableUndoRedo_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bEnableUndoRedo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableUndoRedo = { "bEnableUndoRedo", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableUndoRedo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableUndoRedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableUndoRedo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCameraIfNoInvokersFound_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "DisplayName", "Use camera if no invokers found" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCameraIfNoInvokersFound_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bUseCameraIfNoInvokersFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCameraIfNoInvokersFound = { "bUseCameraIfNoInvokersFound", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCameraIfNoInvokersFound_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCameraIfNoInvokersFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCameraIfNoInvokersFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateWorldAutomatically_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateWorldAutomatically_SetBit(void* Obj)
	{
		((AVoxelRuntimeActor*)Obj)->bCreateWorldAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateWorldAutomatically = { "bCreateWorldAutomatically", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelRuntimeActor), &Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateWorldAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateWorldAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateWorldAutomatically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PlaceableItemManager_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "Comment", "// Will be automatically created if not set\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Will be automatically created if not set" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PlaceableItemManager = { "PlaceableItemManager", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, PlaceableItemManager), Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PlaceableItemManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PlaceableItemManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "Comment", "// Generator of this world\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Generator of this world" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, Generator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_Generator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "ClampMin", "0.000100" },
		{ "Comment", "// Size of a voxel in cm\n" },
		{ "ModuleRelativePath", "Public/VoxelRuntimeActor.h" },
		{ "Recreate", "" },
		{ "ToolTip", "Size of a voxel in cm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelRuntimeActor, VoxelSize), METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelRuntimeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DebugTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DebugTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODSubsystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RendererSubsystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerSyncRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MultiplayerInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableMultiplayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DataOctreeInitialSubdivisionDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_EventsTickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MeshUpdatesBudget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityOffsets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PriorityCategories_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksNavmeshMaxLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksNavmesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableNavmesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCleanCollisionMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NumConvexHullsPerAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_SimpleCubicCollisionLODBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSimpleCubicCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCCD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PhysMaterialOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VisibleChunksCollisionsMaxLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bComputeVisibleChunksCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateOverlapEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bNotifyRigidBodyCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CanCharacterStepUpOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionTraceFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CollisionPresets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxNumberOfFoliageInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollisionDistanceInVoxel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HISMChunkSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bIsFourWayBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageWorldType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageWorldType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_FoliageCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_BoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksClustersSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableTransitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldSelfShadowBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldResolutionDivisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_DistanceFieldBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxDistanceFieldLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGenerateDistanceFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bOptimizeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_TexturePoolTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bGreedyCubicMesher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bStaticWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseStaticPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bContributesToStaticLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bRenderWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksCullingLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ProcMeshClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCastFarShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_ChunksDitheringDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDitherChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateMaterialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderSharpness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bSRGBColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bInterpolateColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHalfPrecisionCoordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsMeshConfigs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsMeshConfigs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsMeshConfigs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HolesMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_HolesMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bHardColorTransitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsHardness_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialsHardness_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RGBHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RGBHardness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NormalConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_NormalConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_UVConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterialCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterialCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_LODMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaterialConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bConstantLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinDelayBetweenLODUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_InvokerDistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MinLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_MaxLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_CustomWorldBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCustomWorldBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_WorldSizeInVoxel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_RenderOctreeDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableDebugManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bDisableOnScreenMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeDisableEditsBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bMergeAssetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseAbsoluteTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bEnableUndoRedo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bUseCameraIfNoInvokersFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_bCreateWorldAutomatically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_PlaceableItemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_Generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelRuntimeActor_Statics::NewProp_VoxelSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelRuntimeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelRuntimeActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelRuntimeActor_Statics::ClassParams = {
		&AVoxelRuntimeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelRuntimeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelRuntimeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelRuntimeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelRuntimeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelRuntimeActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelRuntimeActor, 2452631079);
	template<> VOXEL_API UClass* StaticClass<AVoxelRuntimeActor>()
	{
		return AVoxelRuntimeActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelRuntimeActor(Z_Construct_UClass_AVoxelRuntimeActor, &AVoxelRuntimeActor::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelRuntimeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelRuntimeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
