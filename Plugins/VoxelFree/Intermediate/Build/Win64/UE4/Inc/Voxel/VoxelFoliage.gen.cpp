// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelFoliage/VoxelFoliage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFoliage() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageScaling();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageRotation();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageMesh();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageScale();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatInterval();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliage_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelFoliage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageDensity();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelFoliageActor_NoRegister();
// End Cross Module References
	static UEnum* EVoxelFoliageScaling_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelFoliageScaling, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelFoliageScaling"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageScaling>()
	{
		return EVoxelFoliageScaling_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelFoliageScaling(EVoxelFoliageScaling_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelFoliageScaling"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelFoliageScaling_Hash() { return 1912126489U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageScaling()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelFoliageScaling"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelFoliageScaling_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelFoliageScaling::Uniform", (int64)EVoxelFoliageScaling::Uniform },
				{ "EVoxelFoliageScaling::Free", (int64)EVoxelFoliageScaling::Free },
				{ "EVoxelFoliageScaling::LockXY", (int64)EVoxelFoliageScaling::LockXY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Free.Comment", "/** Instances will have random X, Y and Z scales */" },
				{ "Free.Name", "EVoxelFoliageScaling::Free" },
				{ "Free.ToolTip", "Instances will have random X, Y and Z scales" },
				{ "LockXY.Comment", "/** X and Y will be the same random scale, Z will be another */" },
				{ "LockXY.Name", "EVoxelFoliageScaling::LockXY" },
				{ "LockXY.ToolTip", "X and Y will be the same random scale, Z will be another" },
				{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
				{ "Uniform.Comment", "/** Instances will have uniform X, Y and Z scales */" },
				{ "Uniform.Name", "EVoxelFoliageScaling::Uniform" },
				{ "Uniform.ToolTip", "Instances will have uniform X, Y and Z scales" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelFoliageScaling",
				"EVoxelFoliageScaling",
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
	static UEnum* EVoxelFoliageRotation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelFoliageRotation, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelFoliageRotation"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelFoliageRotation>()
	{
		return EVoxelFoliageRotation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelFoliageRotation(EVoxelFoliageRotation_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelFoliageRotation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelFoliageRotation_Hash() { return 2030267304U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelFoliageRotation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelFoliageRotation"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelFoliageRotation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelFoliageRotation::AlignToSurface", (int64)EVoxelFoliageRotation::AlignToSurface },
				{ "EVoxelFoliageRotation::AlignToWorldUp", (int64)EVoxelFoliageRotation::AlignToWorldUp },
				{ "EVoxelFoliageRotation::RandomAlign", (int64)EVoxelFoliageRotation::RandomAlign },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlignToSurface.Name", "EVoxelFoliageRotation::AlignToSurface" },
				{ "AlignToWorldUp.Name", "EVoxelFoliageRotation::AlignToWorldUp" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
				{ "RandomAlign.Name", "EVoxelFoliageRotation::RandomAlign" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelFoliageRotation",
				"EVoxelFoliageRotation",
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
class UScriptStruct* FVoxelFoliageMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFoliageMesh, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFoliageMesh"), sizeof(FVoxelFoliageMesh), Get_Z_Construct_UScriptStruct_FVoxelFoliageMesh_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFoliageMesh>()
{
	return FVoxelFoliageMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFoliageMesh(FVoxelFoliageMesh::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFoliageMesh"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageMesh
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFoliageMesh")),new UScriptStruct::TCppStructOps<FVoxelFoliageMesh>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageMesh;
	struct Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFoliageMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Voxel Foliage" },
		{ "Comment", "// Relative to the other strength in this array - they will be normalized\n// Has no impact if the array has only one element\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Relative to the other strength in this array - they will be normalized\nHas no impact if the array has only one element" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageMesh, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Voxel Foliage" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageMesh, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Voxel Foliage" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::NewProp_Mesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFoliageMesh",
		sizeof(FVoxelFoliageMesh),
		alignof(FVoxelFoliageMesh),
		Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFoliageMesh"), sizeof(FVoxelFoliageMesh), Get_Z_Construct_UScriptStruct_FVoxelFoliageMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFoliageMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageMesh_Hash() { return 3569385876U; }
class UScriptStruct* FVoxelFoliageScale::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageScale_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFoliageScale, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFoliageScale"), sizeof(FVoxelFoliageScale), Get_Z_Construct_UScriptStruct_FVoxelFoliageScale_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFoliageScale>()
{
	return FVoxelFoliageScale::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFoliageScale(FVoxelFoliageScale::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFoliageScale"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageScale
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageScale()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFoliageScale")),new UScriptStruct::TCppStructOps<FVoxelFoliageScale>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFoliageScale;
	struct Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scaling;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFoliageScale>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleZ_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Z Scale property */" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Z Scale property" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageScale, ScaleZ), Z_Construct_UScriptStruct_FVoxelFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleY_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Y Scale property */" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Y Scale property" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageScale, ScaleY), Z_Construct_UScriptStruct_FVoxelFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleX_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to an actor instance's X Scale property */" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to an actor instance's X Scale property" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageScale, ScaleX), Z_Construct_UScriptStruct_FVoxelFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_Scaling_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFoliageScale, Scaling), Z_Construct_UEnum_Voxel_EVoxelFoliageScaling, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_Scaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_Scaling_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_Scaling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_ScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_Scaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::NewProp_Scaling_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFoliageScale",
		sizeof(FVoxelFoliageScale),
		alignof(FVoxelFoliageScale),
		Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliageScale()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageScale_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFoliageScale"), sizeof(FVoxelFoliageScale), Get_Z_Construct_UScriptStruct_FVoxelFoliageScale_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFoliageScale_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFoliageScale_Hash() { return 12859780U; }
	void UVoxelFoliage::StaticRegisterNativesUVoxelFoliage()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFoliage_NoRegister()
	{
		return UVoxelFoliage::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFoliage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotDespawn_MetaData[];
#endif
		static void NewProp_bDoNotDespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotDespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[];
#endif
		static void NewProp_bSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDetectionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingDetectionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomYaw_MetaData[];
#endif
		static void NewProp_bRandomYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightRestrictionFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightRestrictionFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightRestriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHeightRestriction_MetaData[];
#endif
		static void NewProp_bEnableHeightRestriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHeightRestriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundSlopeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundSlopeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSlopeRestriction_MetaData[];
#endif
		static void NewProp_bEnableSlopeRestriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSlopeRestriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Densities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Densities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Densities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPickerGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputPickerGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFoliage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelFoliage/VoxelFoliage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Save" },
		{ "Comment", "// Also used as a seed\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Also used as a seed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bDoNotDespawn_MetaData[] = {
		{ "Category", "Save" },
		{ "Comment", "// If false, instances that are out of range will be despawned. If true, they will stay forever.\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "If false, instances that are out of range will be despawned. If true, they will stay forever." },
	};
#endif
	void Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bDoNotDespawn_SetBit(void* Obj)
	{
		((UVoxelFoliage*)Obj)->bDoNotDespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bDoNotDespawn = { "bDoNotDespawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFoliage), &Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bDoNotDespawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bDoNotDespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bDoNotDespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bSave_MetaData[] = {
		{ "Category", "Save" },
		{ "Comment", "// Whether to save the instances that are removed\n// If false will also respawn instances if they are out of range\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Whether to save the instances that are removed\nIf false will also respawn instances if they are out of range" },
	};
#endif
	void Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((UVoxelFoliage*)Obj)->bSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFoliage), &Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_FloatingDetectionOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
		{ "Comment", "// In local space. Increase this if your foliage is enabling physics too soon. In cm\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "In local space. Increase this if your foliage is enabling physics too soon. In cm" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_FloatingDetectionOffset = { "FloatingDetectionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, FloatingDetectionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_FloatingDetectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_FloatingDetectionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GlobalPositionOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
		{ "Comment", "// Apply an offset to the instance position. Applied after the rotation. In cm\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Apply an offset to the instance position. Applied after the rotation. In cm" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GlobalPositionOffset = { "GlobalPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, GlobalPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GlobalPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GlobalPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalRotationOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
		{ "Comment", "// Apply an offset to the instance rotation. Applied after the local position offset, and before the rotation\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Apply an offset to the instance rotation. Applied after the local position offset, and before the rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalRotationOffset = { "LocalRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, LocalRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalPositionOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
		{ "Comment", "// Apply an offset to the instance position. Applied before the rotation. In cm\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Apply an offset to the instance position. Applied before the rotation. In cm" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalPositionOffset = { "LocalPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, LocalPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RandomPitchAngle_MetaData[] = {
		{ "Category", "Placement - Rotation" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "// A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RandomPitchAngle = { "RandomPitchAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, RandomPitchAngle), METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RandomPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RandomPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bRandomYaw_MetaData[] = {
		{ "Category", "Placement - Rotation" },
		{ "Comment", "// If selected, foliage instances will have a random yaw rotation around their vertical axis applied\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "If selected, foliage instances will have a random yaw rotation around their vertical axis applied" },
	};
#endif
	void Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bRandomYaw_SetBit(void* Obj)
	{
		((UVoxelFoliage*)Obj)->bRandomYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bRandomYaw = { "bRandomYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFoliage), &Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bRandomYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bRandomYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bRandomYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RotationAlignment_MetaData[] = {
		{ "Category", "Placement - Rotation" },
		{ "Comment", "// Vertical to use for the instances\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Vertical to use for the instances" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RotationAlignment = { "RotationAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, RotationAlignment), Z_Construct_UEnum_Voxel_EVoxelFoliageRotation, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RotationAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RotationAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RotationAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Scaling_MetaData[] = {
		{ "Category", "Placement - Scale" },
		{ "Comment", "// Specifies instance scaling type\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Specifies instance scaling type" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, Scaling), Z_Construct_UScriptStruct_FVoxelFoliageScale, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Scaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Scaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestrictionFalloff_MetaData[] = {
		{ "Category", "Placement - Height" },
		{ "ClampMin", "0" },
		{ "Comment", "// In voxels, the size of the fade on the edges of HeightRestriction\n" },
		{ "EditCondition", "bEnableHeightRestriction" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "In voxels, the size of the fade on the edges of HeightRestriction" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestrictionFalloff = { "HeightRestrictionFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, HeightRestrictionFalloff), METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestrictionFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestrictionFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestriction_MetaData[] = {
		{ "Category", "Placement - Height" },
		{ "Comment", "// In voxels. Only spawn instances if the instance voxel Z position is in this interval.\n// TODO: optimize to not generate chunks that do not match this restriction\n" },
		{ "EditCondition", "bEnableHeightRestriction" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "In voxels. Only spawn instances if the instance voxel Z position is in this interval.\nTODO: optimize to not generate chunks that do not match this restriction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestriction = { "HeightRestriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, HeightRestriction), Z_Construct_UScriptStruct_FVoxelFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableHeightRestriction_MetaData[] = {
		{ "Category", "Placement - Height" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableHeightRestriction_SetBit(void* Obj)
	{
		((UVoxelFoliage*)Obj)->bEnableHeightRestriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableHeightRestriction = { "bEnableHeightRestriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFoliage), &Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableHeightRestriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableHeightRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableHeightRestriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GroundSlopeAngle_MetaData[] = {
		{ "Category", "Placement - Slope" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "// Min/max angle between object up vector and generator up vector in degrees\n" },
		{ "EditCondition", "bEnableSlopeRestriction" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Min/max angle between object up vector and generator up vector in degrees" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GroundSlopeAngle = { "GroundSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, GroundSlopeAngle), Z_Construct_UScriptStruct_FVoxelFloatInterval, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GroundSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GroundSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableSlopeRestriction_MetaData[] = {
		{ "Category", "Placement - Slope" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableSlopeRestriction_SetBit(void* Obj)
	{
		((UVoxelFoliage*)Obj)->bEnableSlopeRestriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableSlopeRestriction = { "bEnableSlopeRestriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelFoliage), &Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableSlopeRestriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableSlopeRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableSlopeRestriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_SpawnSettings_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_SpawnSettings = { "SpawnSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, SpawnSettings), Z_Construct_UScriptStruct_FVoxelFoliageSpawnSettings, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_SpawnSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_SpawnSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Densities_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "// The final density will be the multiplication of all of these\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "The final density will be the multiplication of all of these" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Densities = { "Densities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, Densities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Densities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Densities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Densities_Inner = { "Densities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelFoliageDensity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_OutputPickerGenerator_MetaData[] = {
		{ "Category", "Voxel Foliage" },
		{ "Comment", "// Used to autocomplete generator output names\n" },
		{ "DisplayName", "Generator (for autocomplete only)" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "Used to autocomplete generator output names" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_OutputPickerGenerator = { "OutputPickerGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, OutputPickerGenerator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_OutputPickerGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_OutputPickerGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_InstanceSettings_MetaData[] = {
		{ "Category", "Voxel Foliage" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_InstanceSettings = { "InstanceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, InstanceSettings), Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_InstanceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_InstanceSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Voxel Foliage" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, ActorClass), Z_Construct_UClass_AVoxelFoliageActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Voxel Foliage" },
		{ "Comment", "// The meshes to use - if you use multiple ones, the hits will be split among them based on their strength\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliage.h" },
		{ "ToolTip", "The meshes to use - if you use multiple ones, the hits will be split among them based on their strength" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFoliage, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelFoliageMesh, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFoliage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bDoNotDespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_FloatingDetectionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GlobalPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_LocalPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RandomPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bRandomYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RotationAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_RotationAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Scaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestrictionFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_HeightRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableHeightRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_GroundSlopeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_bEnableSlopeRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_SpawnSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Densities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Densities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_OutputPickerGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_InstanceSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFoliage_Statics::NewProp_Meshes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFoliage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFoliage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFoliage_Statics::ClassParams = {
		&UVoxelFoliage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelFoliage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFoliage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFoliage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFoliage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFoliage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFoliage, 2123271799);
	template<> VOXEL_API UClass* StaticClass<UVoxelFoliage>()
	{
		return UVoxelFoliage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFoliage(Z_Construct_UClass_UVoxelFoliage, &UVoxelFoliage::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelFoliage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFoliage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
