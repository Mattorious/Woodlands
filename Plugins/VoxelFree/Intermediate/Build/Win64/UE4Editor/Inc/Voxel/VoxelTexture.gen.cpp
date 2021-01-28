// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTexture() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTextureStructBase();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
// End Cross Module References
class UScriptStruct* FVoxelColorTexture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelColorTexture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelColorTexture, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelColorTexture"), sizeof(FVoxelColorTexture), Get_Z_Construct_UScriptStruct_FVoxelColorTexture_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelColorTexture>()
{
	return FVoxelColorTexture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelColorTexture(FVoxelColorTexture::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelColorTexture"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelColorTexture
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelColorTexture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelColorTexture")),new UScriptStruct::TCppStructOps<FVoxelColorTexture>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelColorTexture;
	struct Z_Construct_UScriptStruct_FVoxelColorTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelColorTexture>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelTextureStructBase,
		&NewStructOps,
		"VoxelColorTexture",
		sizeof(FVoxelColorTexture),
		alignof(FVoxelColorTexture),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelColorTexture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelColorTexture"), sizeof(FVoxelColorTexture), Get_Z_Construct_UScriptStruct_FVoxelColorTexture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelColorTexture_Hash() { return 723784774U; }
class UScriptStruct* FVoxelFloatTexture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFloatTexture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFloatTexture, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFloatTexture"), sizeof(FVoxelFloatTexture), Get_Z_Construct_UScriptStruct_FVoxelFloatTexture_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFloatTexture>()
{
	return FVoxelFloatTexture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFloatTexture(FVoxelFloatTexture::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFloatTexture"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFloatTexture
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFloatTexture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFloatTexture")),new UScriptStruct::TCppStructOps<FVoxelFloatTexture>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFloatTexture;
	struct Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/VoxelTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFloatTexture>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelTextureStructBase,
		&NewStructOps,
		"VoxelFloatTexture",
		sizeof(FVoxelFloatTexture),
		alignof(FVoxelFloatTexture),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFloatTexture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFloatTexture"), sizeof(FVoxelFloatTexture), Get_Z_Construct_UScriptStruct_FVoxelFloatTexture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFloatTexture_Hash() { return 720365799U; }
class UScriptStruct* FVoxelTextureStructBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelTextureStructBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelTextureStructBase, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelTextureStructBase"), sizeof(FVoxelTextureStructBase), Get_Z_Construct_UScriptStruct_FVoxelTextureStructBase_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelTextureStructBase>()
{
	return FVoxelTextureStructBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelTextureStructBase(FVoxelTextureStructBase::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelTextureStructBase"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelTextureStructBase
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelTextureStructBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelTextureStructBase")),new UScriptStruct::TCppStructOps<FVoxelTextureStructBase>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelTextureStructBase;
	struct Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/VoxelTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelTextureStructBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelTextureStructBase, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelTextureStructBase",
		sizeof(FVoxelTextureStructBase),
		alignof(FVoxelTextureStructBase),
		Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelTextureStructBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelTextureStructBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelTextureStructBase"), sizeof(FVoxelTextureStructBase), Get_Z_Construct_UScriptStruct_FVoxelTextureStructBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelTextureStructBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelTextureStructBase_Hash() { return 1200315071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
