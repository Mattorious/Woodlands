// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEnums() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelCubicFace();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageWorldType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxel32BitMask();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAxis();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelComputeDevice();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBHardness();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelUVConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNormalConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
// End Cross Module References
	static UEnum* EVoxelCubicFace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelCubicFace, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelCubicFace"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelCubicFace>()
	{
		return EVoxelCubicFace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelCubicFace(EVoxelCubicFace_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelCubicFace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelCubicFace_Hash() { return 332648358U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelCubicFace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelCubicFace"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelCubicFace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelCubicFace::Back", (int64)EVoxelCubicFace::Back },
				{ "EVoxelCubicFace::Front", (int64)EVoxelCubicFace::Front },
				{ "EVoxelCubicFace::Left", (int64)EVoxelCubicFace::Left },
				{ "EVoxelCubicFace::Right", (int64)EVoxelCubicFace::Right },
				{ "EVoxelCubicFace::Bottom", (int64)EVoxelCubicFace::Bottom },
				{ "EVoxelCubicFace::Top", (int64)EVoxelCubicFace::Top },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Comment", "// -X\n" },
				{ "Back.Name", "EVoxelCubicFace::Back" },
				{ "Back.ToolTip", "-X" },
				{ "BlueprintType", "true" },
				{ "Bottom.Comment", "// -Z\n" },
				{ "Bottom.Name", "EVoxelCubicFace::Bottom" },
				{ "Bottom.ToolTip", "-Z" },
				{ "Front.Comment", "// +X\n" },
				{ "Front.Name", "EVoxelCubicFace::Front" },
				{ "Front.ToolTip", "+X" },
				{ "Left.Comment", "// -Y\n" },
				{ "Left.Name", "EVoxelCubicFace::Left" },
				{ "Left.ToolTip", "-Y" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "Right.Comment", "// +Y\n" },
				{ "Right.Name", "EVoxelCubicFace::Right" },
				{ "Right.ToolTip", "+Y" },
				{ "Top.Comment", "// +Z\n" },
				{ "Top.Name", "EVoxelCubicFace::Top" },
				{ "Top.ToolTip", "+Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelCubicFace",
				"EVoxelCubicFace",
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
	static UEnum* EVoxelFoliageWorldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelFoliageWorldType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelFoliageWorldType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageWorldType>()
	{
		return EVoxelFoliageWorldType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelFoliageWorldType(EVoxelFoliageWorldType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelFoliageWorldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelFoliageWorldType_Hash() { return 1041024004U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageWorldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelFoliageWorldType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelFoliageWorldType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelFoliageWorldType::Flat", (int64)EVoxelFoliageWorldType::Flat },
				{ "EVoxelFoliageWorldType::Planet", (int64)EVoxelFoliageWorldType::Planet },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Flat.Name", "EVoxelFoliageWorldType::Flat" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "Planet.Name", "EVoxelFoliageWorldType::Planet" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelFoliageWorldType",
				"EVoxelFoliageWorldType",
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
	static UEnum* EVoxelTaskType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelTaskType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelTaskType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelTaskType>()
	{
		return EVoxelTaskType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelTaskType(EVoxelTaskType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelTaskType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelTaskType_Hash() { return 2721099482U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelTaskType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelTaskType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelTaskType::ChunksMeshing", (int64)EVoxelTaskType::ChunksMeshing },
				{ "EVoxelTaskType::CollisionsChunksMeshing", (int64)EVoxelTaskType::CollisionsChunksMeshing },
				{ "EVoxelTaskType::VisibleChunksMeshing", (int64)EVoxelTaskType::VisibleChunksMeshing },
				{ "EVoxelTaskType::VisibleCollisionsChunksMeshing", (int64)EVoxelTaskType::VisibleCollisionsChunksMeshing },
				{ "EVoxelTaskType::CollisionCooking", (int64)EVoxelTaskType::CollisionCooking },
				{ "EVoxelTaskType::FoliageBuild", (int64)EVoxelTaskType::FoliageBuild },
				{ "EVoxelTaskType::HISMBuild", (int64)EVoxelTaskType::HISMBuild },
				{ "EVoxelTaskType::AsyncEditFunctions", (int64)EVoxelTaskType::AsyncEditFunctions },
				{ "EVoxelTaskType::MeshMerge", (int64)EVoxelTaskType::MeshMerge },
				{ "EVoxelTaskType::RenderOctree", (int64)EVoxelTaskType::RenderOctree },
				{ "EVoxelTaskType::Max", (int64)EVoxelTaskType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AsyncEditFunctions.Comment", "// Async edit functions such as AddSphereAsync\n" },
				{ "AsyncEditFunctions.Name", "EVoxelTaskType::AsyncEditFunctions" },
				{ "AsyncEditFunctions.ToolTip", "Async edit functions such as AddSphereAsync" },
				{ "BlueprintType", "true" },
				{ "ChunksMeshing.Comment", "// Meshing of chunks that don't have collisions and are not visible\n" },
				{ "ChunksMeshing.Name", "EVoxelTaskType::ChunksMeshing" },
				{ "ChunksMeshing.ToolTip", "Meshing of chunks that don't have collisions and are not visible" },
				{ "CollisionCooking.Comment", "// PhysX collision cooking, once the meshing task is done\n" },
				{ "CollisionCooking.Name", "EVoxelTaskType::CollisionCooking" },
				{ "CollisionCooking.ToolTip", "PhysX collision cooking, once the meshing task is done" },
				{ "CollisionsChunksMeshing.Comment", "// Meshing of not visible chunks that have collisions\n" },
				{ "CollisionsChunksMeshing.Name", "EVoxelTaskType::CollisionsChunksMeshing" },
				{ "CollisionsChunksMeshing.ToolTip", "Meshing of not visible chunks that have collisions" },
				{ "FoliageBuild.Comment", "// Foliage generation\n" },
				{ "FoliageBuild.Name", "EVoxelTaskType::FoliageBuild" },
				{ "FoliageBuild.ToolTip", "Foliage generation" },
				{ "HISMBuild.Comment", "// Building of the instanced mesh components culling tree, used for foliage\n// The meshes are not updated until the build is done\n" },
				{ "HISMBuild.Name", "EVoxelTaskType::HISMBuild" },
				{ "HISMBuild.ToolTip", "Building of the instanced mesh components culling tree, used for foliage\nThe meshes are not updated until the build is done" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "EVoxelTaskType::Max" },
				{ "MeshMerge.Comment", "// Mesh merge tasks are used after meshing to create the render buffers\n// Note: they are also used if bMergeChunks = false!\n" },
				{ "MeshMerge.Name", "EVoxelTaskType::MeshMerge" },
				{ "MeshMerge.ToolTip", "Mesh merge tasks are used after meshing to create the render buffers\nNote: they are also used if bMergeChunks = false!" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "RenderOctree.Comment", "// The render octree is used to determine the LODs to display\n// Should be done as fast as possible to start meshing tasks \n" },
				{ "RenderOctree.Name", "EVoxelTaskType::RenderOctree" },
				{ "RenderOctree.ToolTip", "The render octree is used to determine the LODs to display\nShould be done as fast as possible to start meshing tasks" },
				{ "VisibleChunksMeshing.Comment", "// Meshing of visible chunks that don't have collisions\n" },
				{ "VisibleChunksMeshing.Name", "EVoxelTaskType::VisibleChunksMeshing" },
				{ "VisibleChunksMeshing.ToolTip", "Meshing of visible chunks that don't have collisions" },
				{ "VisibleCollisionsChunksMeshing.Comment", "// Meshing of visible chunks that have collisions\n" },
				{ "VisibleCollisionsChunksMeshing.Name", "EVoxelTaskType::VisibleCollisionsChunksMeshing" },
				{ "VisibleCollisionsChunksMeshing.ToolTip", "Meshing of visible chunks that have collisions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelTaskType",
				"EVoxelTaskType",
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
	static UEnum* EVoxelDataItemCombineMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelDataItemCombineMode"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelDataItemCombineMode>()
	{
		return EVoxelDataItemCombineMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelDataItemCombineMode(EVoxelDataItemCombineMode_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelDataItemCombineMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Hash() { return 2171974985U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelDataItemCombineMode"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelDataItemCombineMode::Min", (int64)EVoxelDataItemCombineMode::Min },
				{ "EVoxelDataItemCombineMode::Max", (int64)EVoxelDataItemCombineMode::Max },
				{ "EVoxelDataItemCombineMode::Sum", (int64)EVoxelDataItemCombineMode::Sum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Name", "EVoxelDataItemCombineMode::Max" },
				{ "Min.Name", "EVoxelDataItemCombineMode::Min" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "Sum.Name", "EVoxelDataItemCombineMode::Sum" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelDataItemCombineMode",
				"EVoxelDataItemCombineMode",
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
	static UEnum* EVoxel32BitMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxel32BitMask, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxel32BitMask"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxel32BitMask>()
	{
		return EVoxel32BitMask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxel32BitMask(EVoxel32BitMask_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxel32BitMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxel32BitMask_Hash() { return 3988053273U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxel32BitMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxel32BitMask"), 0, Get_Z_Construct_UEnum_Voxel_EVoxel32BitMask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxel32BitMask::Channel0", (int64)EVoxel32BitMask::Channel0 },
				{ "EVoxel32BitMask::Channel1", (int64)EVoxel32BitMask::Channel1 },
				{ "EVoxel32BitMask::Channel2", (int64)EVoxel32BitMask::Channel2 },
				{ "EVoxel32BitMask::Channel3", (int64)EVoxel32BitMask::Channel3 },
				{ "EVoxel32BitMask::Channel4", (int64)EVoxel32BitMask::Channel4 },
				{ "EVoxel32BitMask::Channel5", (int64)EVoxel32BitMask::Channel5 },
				{ "EVoxel32BitMask::Channel6", (int64)EVoxel32BitMask::Channel6 },
				{ "EVoxel32BitMask::Channel7", (int64)EVoxel32BitMask::Channel7 },
				{ "EVoxel32BitMask::Channel8", (int64)EVoxel32BitMask::Channel8 },
				{ "EVoxel32BitMask::Channel9", (int64)EVoxel32BitMask::Channel9 },
				{ "EVoxel32BitMask::Channel10", (int64)EVoxel32BitMask::Channel10 },
				{ "EVoxel32BitMask::Channel11", (int64)EVoxel32BitMask::Channel11 },
				{ "EVoxel32BitMask::Channel12", (int64)EVoxel32BitMask::Channel12 },
				{ "EVoxel32BitMask::Channel13", (int64)EVoxel32BitMask::Channel13 },
				{ "EVoxel32BitMask::Channel14", (int64)EVoxel32BitMask::Channel14 },
				{ "EVoxel32BitMask::Channel15", (int64)EVoxel32BitMask::Channel15 },
				{ "EVoxel32BitMask::Channel16", (int64)EVoxel32BitMask::Channel16 },
				{ "EVoxel32BitMask::Channel17", (int64)EVoxel32BitMask::Channel17 },
				{ "EVoxel32BitMask::Channel18", (int64)EVoxel32BitMask::Channel18 },
				{ "EVoxel32BitMask::Channel19", (int64)EVoxel32BitMask::Channel19 },
				{ "EVoxel32BitMask::Channel20", (int64)EVoxel32BitMask::Channel20 },
				{ "EVoxel32BitMask::Channel21", (int64)EVoxel32BitMask::Channel21 },
				{ "EVoxel32BitMask::Channel22", (int64)EVoxel32BitMask::Channel22 },
				{ "EVoxel32BitMask::Channel23", (int64)EVoxel32BitMask::Channel23 },
				{ "EVoxel32BitMask::Channel24", (int64)EVoxel32BitMask::Channel24 },
				{ "EVoxel32BitMask::Channel25", (int64)EVoxel32BitMask::Channel25 },
				{ "EVoxel32BitMask::Channel26", (int64)EVoxel32BitMask::Channel26 },
				{ "EVoxel32BitMask::Channel27", (int64)EVoxel32BitMask::Channel27 },
				{ "EVoxel32BitMask::Channel28", (int64)EVoxel32BitMask::Channel28 },
				{ "EVoxel32BitMask::Channel29", (int64)EVoxel32BitMask::Channel29 },
				{ "EVoxel32BitMask::Channel30", (int64)EVoxel32BitMask::Channel30 },
				{ "EVoxel32BitMask::Channel31", (int64)EVoxel32BitMask::Channel31 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Channel0.Name", "EVoxel32BitMask::Channel0" },
				{ "Channel1.Name", "EVoxel32BitMask::Channel1" },
				{ "Channel10.Name", "EVoxel32BitMask::Channel10" },
				{ "Channel11.Name", "EVoxel32BitMask::Channel11" },
				{ "Channel12.Name", "EVoxel32BitMask::Channel12" },
				{ "Channel13.Name", "EVoxel32BitMask::Channel13" },
				{ "Channel14.Name", "EVoxel32BitMask::Channel14" },
				{ "Channel15.Name", "EVoxel32BitMask::Channel15" },
				{ "Channel16.Name", "EVoxel32BitMask::Channel16" },
				{ "Channel17.Name", "EVoxel32BitMask::Channel17" },
				{ "Channel18.Name", "EVoxel32BitMask::Channel18" },
				{ "Channel19.Name", "EVoxel32BitMask::Channel19" },
				{ "Channel2.Name", "EVoxel32BitMask::Channel2" },
				{ "Channel20.Name", "EVoxel32BitMask::Channel20" },
				{ "Channel21.Name", "EVoxel32BitMask::Channel21" },
				{ "Channel22.Name", "EVoxel32BitMask::Channel22" },
				{ "Channel23.Name", "EVoxel32BitMask::Channel23" },
				{ "Channel24.Name", "EVoxel32BitMask::Channel24" },
				{ "Channel25.Name", "EVoxel32BitMask::Channel25" },
				{ "Channel26.Name", "EVoxel32BitMask::Channel26" },
				{ "Channel27.Name", "EVoxel32BitMask::Channel27" },
				{ "Channel28.Name", "EVoxel32BitMask::Channel28" },
				{ "Channel29.Name", "EVoxel32BitMask::Channel29" },
				{ "Channel3.Name", "EVoxel32BitMask::Channel3" },
				{ "Channel30.Name", "EVoxel32BitMask::Channel30" },
				{ "Channel31.Name", "EVoxel32BitMask::Channel31" },
				{ "Channel4.Name", "EVoxel32BitMask::Channel4" },
				{ "Channel5.Name", "EVoxel32BitMask::Channel5" },
				{ "Channel6.Name", "EVoxel32BitMask::Channel6" },
				{ "Channel7.Name", "EVoxel32BitMask::Channel7" },
				{ "Channel8.Name", "EVoxel32BitMask::Channel8" },
				{ "Channel9.Name", "EVoxel32BitMask::Channel9" },
				{ "DisplayName", "Voxel 32 bit Mask" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxel32BitMask",
				"EVoxel32BitMask",
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
	static UEnum* EVoxelAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelAxis, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelAxis"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelAxis>()
	{
		return EVoxelAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelAxis(EVoxelAxis_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelAxis_Hash() { return 3481928343U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelAxis"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelAxis::X", (int64)EVoxelAxis::X },
				{ "EVoxelAxis::Y", (int64)EVoxelAxis::Y },
				{ "EVoxelAxis::Z", (int64)EVoxelAxis::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "X.Name", "EVoxelAxis::X" },
				{ "Y.Name", "EVoxelAxis::Y" },
				{ "Z.Name", "EVoxelAxis::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelAxis",
				"EVoxelAxis",
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
	static UEnum* EVoxelComputeDevice_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelComputeDevice, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelComputeDevice"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelComputeDevice>()
	{
		return EVoxelComputeDevice_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelComputeDevice(EVoxelComputeDevice_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelComputeDevice"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Hash() { return 701150526U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelComputeDevice()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelComputeDevice"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelComputeDevice_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelComputeDevice::CPU", (int64)EVoxelComputeDevice::CPU },
				{ "EVoxelComputeDevice::GPU", (int64)EVoxelComputeDevice::GPU },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CPU.Name", "EVoxelComputeDevice::CPU" },
				{ "GPU.Name", "EVoxelComputeDevice::GPU" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelComputeDevice",
				"EVoxelComputeDevice",
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
	static UEnum* EVoxelFalloff_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelFalloff, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelFalloff"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelFalloff>()
	{
		return EVoxelFalloff_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelFalloff(EVoxelFalloff_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelFalloff"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelFalloff_Hash() { return 728946519U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelFalloff"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelFalloff_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelFalloff::Linear", (int64)EVoxelFalloff::Linear },
				{ "EVoxelFalloff::Smooth", (int64)EVoxelFalloff::Smooth },
				{ "EVoxelFalloff::Spherical", (int64)EVoxelFalloff::Spherical },
				{ "EVoxelFalloff::Tip", (int64)EVoxelFalloff::Tip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Linear.Name", "EVoxelFalloff::Linear" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "Smooth.Name", "EVoxelFalloff::Smooth" },
				{ "Spherical.Name", "EVoxelFalloff::Spherical" },
				{ "Tip.Name", "EVoxelFalloff::Tip" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelFalloff",
				"EVoxelFalloff",
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
	static UEnum* EVoxelRGBHardness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelRGBHardness, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelRGBHardness"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBHardness>()
	{
		return EVoxelRGBHardness_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelRGBHardness(EVoxelRGBHardness_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelRGBHardness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Hash() { return 1968731635U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBHardness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelRGBHardness"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelRGBHardness::FourWayBlend", (int64)EVoxelRGBHardness::FourWayBlend },
				{ "EVoxelRGBHardness::FiveWayBlend", (int64)EVoxelRGBHardness::FiveWayBlend },
				{ "EVoxelRGBHardness::R", (int64)EVoxelRGBHardness::R },
				{ "EVoxelRGBHardness::G", (int64)EVoxelRGBHardness::G },
				{ "EVoxelRGBHardness::B", (int64)EVoxelRGBHardness::B },
				{ "EVoxelRGBHardness::A", (int64)EVoxelRGBHardness::A },
				{ "EVoxelRGBHardness::U0", (int64)EVoxelRGBHardness::U0 },
				{ "EVoxelRGBHardness::U1", (int64)EVoxelRGBHardness::U1 },
				{ "EVoxelRGBHardness::V0", (int64)EVoxelRGBHardness::V0 },
				{ "EVoxelRGBHardness::V1", (int64)EVoxelRGBHardness::V1 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Comment", "// Use the Alpha channel as hardness\n" },
				{ "A.Name", "EVoxelRGBHardness::A" },
				{ "A.ToolTip", "Use the Alpha channel as hardness" },
				{ "B.Comment", "// Use the Blue channel as hardness\n" },
				{ "B.Name", "EVoxelRGBHardness::B" },
				{ "B.ToolTip", "Use the Blue channel as hardness" },
				{ "BlueprintType", "true" },
				{ "FiveWayBlend.Comment", "// Interpret the material as 5 way blend, and use MaterialsHardness\n" },
				{ "FiveWayBlend.Name", "EVoxelRGBHardness::FiveWayBlend" },
				{ "FiveWayBlend.ToolTip", "Interpret the material as 5 way blend, and use MaterialsHardness" },
				{ "FourWayBlend.Comment", "// Interpret the material as 4 way blend, and use MaterialsHardness\n" },
				{ "FourWayBlend.Name", "EVoxelRGBHardness::FourWayBlend" },
				{ "FourWayBlend.ToolTip", "Interpret the material as 4 way blend, and use MaterialsHardness" },
				{ "G.Comment", "// Use the Green channel as hardness\n" },
				{ "G.Name", "EVoxelRGBHardness::G" },
				{ "G.ToolTip", "Use the Green channel as hardness" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "R.Comment", "// Use the Red channel as hardness\n" },
				{ "R.Name", "EVoxelRGBHardness::R" },
				{ "R.ToolTip", "Use the Red channel as hardness" },
				{ "U0.Comment", "// Use the U0 channel as hardness\n" },
				{ "U0.Name", "EVoxelRGBHardness::U0" },
				{ "U0.ToolTip", "Use the U0 channel as hardness" },
				{ "U1.Comment", "// Use the U1 channel as hardness\n" },
				{ "U1.Name", "EVoxelRGBHardness::U1" },
				{ "U1.ToolTip", "Use the U1 channel as hardness" },
				{ "V0.Comment", "// Use the V0 channel as hardness\n" },
				{ "V0.Name", "EVoxelRGBHardness::V0" },
				{ "V0.ToolTip", "Use the V0 channel as hardness" },
				{ "V1.Comment", "// Use the V1 channel as hardness\n" },
				{ "V1.Name", "EVoxelRGBHardness::V1" },
				{ "V1.ToolTip", "Use the V1 channel as hardness" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelRGBHardness",
				"EVoxelRGBHardness",
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
	static UEnum* EVoxelDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelDataType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelDataType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelDataType>()
	{
		return EVoxelDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelDataType(EVoxelDataType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelDataType_Hash() { return 976590550U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelDataType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelDataType::Values", (int64)EVoxelDataType::Values },
				{ "EVoxelDataType::Materials", (int64)EVoxelDataType::Materials },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Materials.Name", "EVoxelDataType::Materials" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "Values.Name", "EVoxelDataType::Values" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelDataType",
				"EVoxelDataType",
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
	static UEnum* EVoxelSamplerMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSamplerMode, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSamplerMode"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSamplerMode>()
	{
		return EVoxelSamplerMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSamplerMode(EVoxelSamplerMode_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSamplerMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Hash() { return 3495494132U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSamplerMode"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSamplerMode::Clamp", (int64)EVoxelSamplerMode::Clamp },
				{ "EVoxelSamplerMode::Tile", (int64)EVoxelSamplerMode::Tile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Clamp.Comment", "// Clamp the coordinates\n" },
				{ "Clamp.Name", "EVoxelSamplerMode::Clamp" },
				{ "Clamp.ToolTip", "Clamp the coordinates" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "Tile.Comment", "// Tile the coordinates\n" },
				{ "Tile.Name", "EVoxelSamplerMode::Tile" },
				{ "Tile.ToolTip", "Tile the coordinates" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSamplerMode",
				"EVoxelSamplerMode",
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
	static UEnum* EVoxelSpawnerActorSpawnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerActorSpawnType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerActorSpawnType>()
	{
		return EVoxelSpawnerActorSpawnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSpawnerActorSpawnType(EVoxelSpawnerActorSpawnType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSpawnerActorSpawnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Hash() { return 1792264476U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSpawnerActorSpawnType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSpawnerActorSpawnType::All", (int64)EVoxelSpawnerActorSpawnType::All },
				{ "EVoxelSpawnerActorSpawnType::OnlyFloating", (int64)EVoxelSpawnerActorSpawnType::OnlyFloating },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "// Spawn all spawner actors\n" },
				{ "All.Name", "EVoxelSpawnerActorSpawnType::All" },
				{ "All.ToolTip", "Spawn all spawner actors" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "OnlyFloating.Comment", "// Spawn only floating spawner actors\n" },
				{ "OnlyFloating.Name", "EVoxelSpawnerActorSpawnType::OnlyFloating" },
				{ "OnlyFloating.ToolTip", "Spawn only floating spawner actors" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSpawnerActorSpawnType",
				"EVoxelSpawnerActorSpawnType",
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
	static UEnum* EVoxelRGBA_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelRGBA, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelRGBA"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBA>()
	{
		return EVoxelRGBA_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelRGBA(EVoxelRGBA_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelRGBA"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelRGBA_Hash() { return 928507811U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelRGBA"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelRGBA_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelRGBA::R", (int64)EVoxelRGBA::R },
				{ "EVoxelRGBA::G", (int64)EVoxelRGBA::G },
				{ "EVoxelRGBA::B", (int64)EVoxelRGBA::B },
				{ "EVoxelRGBA::A", (int64)EVoxelRGBA::A },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "EVoxelRGBA::A" },
				{ "B.Name", "EVoxelRGBA::B" },
				{ "BlueprintType", "true" },
				{ "G.Name", "EVoxelRGBA::G" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "R.Name", "EVoxelRGBA::R" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelRGBA",
				"EVoxelRGBA",
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
	static UEnum* EVoxelUVConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelUVConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelUVConfig"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelUVConfig>()
	{
		return EVoxelUVConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelUVConfig(EVoxelUVConfig_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelUVConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelUVConfig_Hash() { return 1057491411U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelUVConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelUVConfig"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelUVConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelUVConfig::GlobalUVs", (int64)EVoxelUVConfig::GlobalUVs },
				{ "EVoxelUVConfig::PackWorldUpInUVs", (int64)EVoxelUVConfig::PackWorldUpInUVs },
				{ "EVoxelUVConfig::PerVoxelUVs", (int64)EVoxelUVConfig::PerVoxelUVs },
				{ "EVoxelUVConfig::Max", (int64)EVoxelUVConfig::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GlobalUVs.DisplayName", "Global UVs" },
				{ "GlobalUVs.Name", "EVoxelUVConfig::GlobalUVs" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "EVoxelUVConfig::Max" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "PackWorldUpInUVs.DisplayName", "Pack WorldUp in UVs" },
				{ "PackWorldUpInUVs.Name", "EVoxelUVConfig::PackWorldUpInUVs" },
				{ "PerVoxelUVs.Comment", "// In Cubic, per Voxel. In others, per chunk\n" },
				{ "PerVoxelUVs.DisplayName", "Per Voxel/Chunk UVs" },
				{ "PerVoxelUVs.Name", "EVoxelUVConfig::PerVoxelUVs" },
				{ "PerVoxelUVs.ToolTip", "In Cubic, per Voxel. In others, per chunk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelUVConfig",
				"EVoxelUVConfig",
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
	static UEnum* EVoxelMaterialConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMaterialConfig"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelMaterialConfig>()
	{
		return EVoxelMaterialConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelMaterialConfig(EVoxelMaterialConfig_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelMaterialConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Hash() { return 4284135858U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelMaterialConfig"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelMaterialConfig::RGB", (int64)EVoxelMaterialConfig::RGB },
				{ "EVoxelMaterialConfig::SingleIndex", (int64)EVoxelMaterialConfig::SingleIndex },
				{ "EVoxelMaterialConfig::DoubleIndex_DEPRECATED", (int64)EVoxelMaterialConfig::DoubleIndex_DEPRECATED },
				{ "EVoxelMaterialConfig::MultiIndex", (int64)EVoxelMaterialConfig::MultiIndex },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DoubleIndex_DEPRECATED.Hidden", "" },
				{ "DoubleIndex_DEPRECATED.Name", "EVoxelMaterialConfig::DoubleIndex_DEPRECATED" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "MultiIndex.Name", "EVoxelMaterialConfig::MultiIndex" },
				{ "RGB.Name", "EVoxelMaterialConfig::RGB" },
				{ "SingleIndex.Name", "EVoxelMaterialConfig::SingleIndex" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelMaterialConfig",
				"EVoxelMaterialConfig",
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
	static UEnum* EVoxelNormalConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelNormalConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelNormalConfig"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelNormalConfig>()
	{
		return EVoxelNormalConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelNormalConfig(EVoxelNormalConfig_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelNormalConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Hash() { return 637718801U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelNormalConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelNormalConfig"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelNormalConfig::NoNormal", (int64)EVoxelNormalConfig::NoNormal },
				{ "EVoxelNormalConfig::GradientNormal", (int64)EVoxelNormalConfig::GradientNormal },
				{ "EVoxelNormalConfig::FlatNormal", (int64)EVoxelNormalConfig::FlatNormal },
				{ "EVoxelNormalConfig::MeshNormal", (int64)EVoxelNormalConfig::MeshNormal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FlatNormal.Comment", "// Each vertex will be duplicated & its normal set to the face normal\n// This will disable vertex translating on transitions between LODs as the normals are not the same anymore\n// This will not create any holes, but the transitions might look slightly worse (tiny vertical faces)\n" },
				{ "FlatNormal.Name", "EVoxelNormalConfig::FlatNormal" },
				{ "FlatNormal.ToolTip", "Each vertex will be duplicated & its normal set to the face normal\nThis will disable vertex translating on transitions between LODs as the normals are not the same anymore\nThis will not create any holes, but the transitions might look slightly worse (tiny vertical faces)" },
				{ "GradientNormal.Comment", "// Use the density field gradient as normal. Might have glitches on hard corners which can be quite visible when using triplanar projection\n" },
				{ "GradientNormal.Name", "EVoxelNormalConfig::GradientNormal" },
				{ "GradientNormal.ToolTip", "Use the density field gradient as normal. Might have glitches on hard corners which can be quite visible when using triplanar projection" },
				{ "MeshNormal.Comment", "// Compute the normal from the mesh faces. This will have glitches on chunks borders, Gradient Normal are preferred\n" },
				{ "MeshNormal.Name", "EVoxelNormalConfig::MeshNormal" },
				{ "MeshNormal.ToolTip", "Compute the normal from the mesh faces. This will have glitches on chunks borders, Gradient Normal are preferred" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "NoNormal.Name", "EVoxelNormalConfig::NoNormal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelNormalConfig",
				"EVoxelNormalConfig",
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
	static UEnum* EVoxelRenderType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelRenderType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelRenderType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelRenderType>()
	{
		return EVoxelRenderType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelRenderType(EVoxelRenderType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelRenderType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelRenderType_Hash() { return 113985217U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelRenderType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelRenderType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelRenderType::MarchingCubes", (int64)EVoxelRenderType::MarchingCubes },
				{ "EVoxelRenderType::Cubic", (int64)EVoxelRenderType::Cubic },
				{ "EVoxelRenderType::SurfaceNets", (int64)EVoxelRenderType::SurfaceNets },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cubic.Name", "EVoxelRenderType::Cubic" },
				{ "MarchingCubes.Name", "EVoxelRenderType::MarchingCubes" },
				{ "ModuleRelativePath", "Public/VoxelEnums.h" },
				{ "SurfaceNets.Comment", "// Surface nets only work well at LOD 0. They will have holes between higher LODs, and the material won't be picked correctly.\n" },
				{ "SurfaceNets.Name", "EVoxelRenderType::SurfaceNets" },
				{ "SurfaceNets.ToolTip", "Surface nets only work well at LOD 0. They will have holes between higher LODs, and the material won't be picked correctly." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelRenderType",
				"EVoxelRenderType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
