// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMaterial() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
// End Cross Module References
	static UEnum* EVoxelMaterialMask_BP_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMaterialMask_BP"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelMaterialMask_BP>()
	{
		return EVoxelMaterialMask_BP_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelMaterialMask_BP(EVoxelMaterialMask_BP_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelMaterialMask_BP"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Hash() { return 3373741296U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelMaterialMask_BP"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelMaterialMask_BP::R", (int64)EVoxelMaterialMask_BP::R },
				{ "EVoxelMaterialMask_BP::G", (int64)EVoxelMaterialMask_BP::G },
				{ "EVoxelMaterialMask_BP::B", (int64)EVoxelMaterialMask_BP::B },
				{ "EVoxelMaterialMask_BP::A", (int64)EVoxelMaterialMask_BP::A },
				{ "EVoxelMaterialMask_BP::U0", (int64)EVoxelMaterialMask_BP::U0 },
				{ "EVoxelMaterialMask_BP::V0", (int64)EVoxelMaterialMask_BP::V0 },
				{ "EVoxelMaterialMask_BP::U1", (int64)EVoxelMaterialMask_BP::U1 },
				{ "EVoxelMaterialMask_BP::V1", (int64)EVoxelMaterialMask_BP::V1 },
				{ "EVoxelMaterialMask_BP::U2", (int64)EVoxelMaterialMask_BP::U2 },
				{ "EVoxelMaterialMask_BP::V2", (int64)EVoxelMaterialMask_BP::V2 },
				{ "EVoxelMaterialMask_BP::U3", (int64)EVoxelMaterialMask_BP::U3 },
				{ "EVoxelMaterialMask_BP::V3", (int64)EVoxelMaterialMask_BP::V3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "EVoxelMaterialMask_BP::A" },
				{ "B.Name", "EVoxelMaterialMask_BP::B" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "DisplayName", "Voxel Material Mask" },
				{ "G.Name", "EVoxelMaterialMask_BP::G" },
				{ "ModuleRelativePath", "Public/VoxelMaterial.h" },
				{ "R.Name", "EVoxelMaterialMask_BP::R" },
				{ "U0.Name", "EVoxelMaterialMask_BP::U0" },
				{ "U1.Name", "EVoxelMaterialMask_BP::U1" },
				{ "U2.Name", "EVoxelMaterialMask_BP::U2" },
				{ "U3.Name", "EVoxelMaterialMask_BP::U3" },
				{ "V0.Name", "EVoxelMaterialMask_BP::V0" },
				{ "V1.Name", "EVoxelMaterialMask_BP::V1" },
				{ "V2.Name", "EVoxelMaterialMask_BP::V2" },
				{ "V3.Name", "EVoxelMaterialMask_BP::V3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelMaterialMask_BP",
				"EVoxelMaterialMask_BP",
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
class UScriptStruct* FVoxelMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMaterial, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMaterial"), sizeof(FVoxelMaterial), Get_Z_Construct_UScriptStruct_FVoxelMaterial_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMaterial>()
{
	return FVoxelMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelMaterial(FVoxelMaterial::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelMaterial
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelMaterial")),new UScriptStruct::TCppStructOps<FVoxelMaterial>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelMaterial;
	struct Z_Construct_UScriptStruct_FVoxelMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TODO Make not compatible with BP and have a serialization-safe BP version of it\n" },
		{ "ModuleRelativePath", "Public/VoxelMaterial.h" },
		{ "ToolTip", "TODO Make not compatible with BP and have a serialization-safe BP version of it" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMaterial>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelMaterial",
		sizeof(FVoxelMaterial),
		alignof(FVoxelMaterial),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelMaterial"), sizeof(FVoxelMaterial), Get_Z_Construct_UScriptStruct_FVoxelMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelMaterial_Hash() { return 998434296U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
