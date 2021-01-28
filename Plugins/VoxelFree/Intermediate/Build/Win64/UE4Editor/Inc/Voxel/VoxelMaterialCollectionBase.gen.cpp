// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMaterialCollectionBase() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FVoxelMaterialCollectionMaterialInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMaterialCollectionMaterialInfo"), sizeof(FVoxelMaterialCollectionMaterialInfo), Get_Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMaterialCollectionMaterialInfo>()
{
	return FVoxelMaterialCollectionMaterialInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo(FVoxelMaterialCollectionMaterialInfo::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelMaterialCollectionMaterialInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelMaterialCollectionMaterialInfo
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelMaterialCollectionMaterialInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelMaterialCollectionMaterialInfo")),new UScriptStruct::TCppStructOps<FVoxelMaterialCollectionMaterialInfo>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelMaterialCollectionMaterialInfo;
	struct Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMaterialCollectionMaterialInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_NameOverride_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If empty, will use the Material name\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
		{ "ToolTip", "If empty, will use the Material name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_NameOverride = { "NameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMaterialCollectionMaterialInfo, NameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_NameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_NameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMaterialCollectionMaterialInfo, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMaterialCollectionMaterialInfo, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_NameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelMaterialCollectionMaterialInfo",
		sizeof(FVoxelMaterialCollectionMaterialInfo),
		alignof(FVoxelMaterialCollectionMaterialInfo),
		Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelMaterialCollectionMaterialInfo"), sizeof(FVoxelMaterialCollectionMaterialInfo), Get_Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo_Hash() { return 2881204301U; }
	DEFINE_FUNCTION(UVoxelMaterialCollectionBase::execGetMaterialIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMaterialCollectionBase::execGetIndexMaterial)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetIndexMaterial(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMaterialCollectionBase::execGetMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVoxelMaterialCollectionMaterialInfo>*)Z_Param__Result=P_THIS->GetMaterials();
		P_NATIVE_END;
	}
	void UVoxelMaterialCollectionBase::StaticRegisterNativesUVoxelMaterialCollectionBase()
	{
		UClass* Class = UVoxelMaterialCollectionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIndexMaterial", &UVoxelMaterialCollectionBase::execGetIndexMaterial },
			{ "GetMaterialIndex", &UVoxelMaterialCollectionBase::execGetMaterialIndex },
			{ "GetMaterials", &UVoxelMaterialCollectionBase::execGetMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics
	{
		struct VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms
		{
			uint8 Index;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms, Index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Material Collection" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMaterialCollectionBase, nullptr, "GetIndexMaterial", nullptr, nullptr, sizeof(VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms), Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics
	{
		struct VoxelMaterialCollectionBase_eventGetMaterialIndex_Parms
		{
			FName Name;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMaterialCollectionBase_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMaterialCollectionBase_eventGetMaterialIndex_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Material Collection" },
		{ "Comment", "// Get the material index from a material or a layer name\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
		{ "ToolTip", "Get the material index from a material or a layer name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMaterialCollectionBase, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(VoxelMaterialCollectionBase_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics
	{
		struct VoxelMaterialCollectionBase_eventGetMaterials_Parms
		{
			TArray<FVoxelMaterialCollectionMaterialInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMaterialCollectionBase_eventGetMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Material Collection" },
		{ "Comment", "// Used by paint material customization. Some materials might be null.\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
		{ "ToolTip", "Used by paint material customization. Some materials might be null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMaterialCollectionBase, nullptr, "GetMaterials", nullptr, nullptr, sizeof(VoxelMaterialCollectionBase_eventGetMaterials_Parms), Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister()
	{
		return UVoxelMaterialCollectionBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial, "GetIndexMaterial" }, // 3849187202
		{ &Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterialIndex, "GetMaterialIndex" }, // 1496055767
		{ &Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetMaterials, "GetMaterials" }, // 3761833109
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMaterialCollectionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::ClassParams = {
		&UVoxelMaterialCollectionBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMaterialCollectionBase, 1164357493);
	template<> VOXEL_API UClass* StaticClass<UVoxelMaterialCollectionBase>()
	{
		return UVoxelMaterialCollectionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMaterialCollectionBase(Z_Construct_UClass_UVoxelMaterialCollectionBase, &UVoxelMaterialCollectionBase::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMaterialCollectionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMaterialCollectionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
