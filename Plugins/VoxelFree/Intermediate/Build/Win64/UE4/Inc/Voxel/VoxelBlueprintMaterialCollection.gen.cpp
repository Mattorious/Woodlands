// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBlueprintMaterialCollection() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelCubicFace();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollection_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollection();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection();
// End Cross Module References
	static FName NAME_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex = FName(TEXT("GetMaterialForIndex"));
	UMaterialInterface* UVoxelBlueprintMaterialCollectionInterface::GetMaterialForIndex(int32 Index, EVoxelCubicFace Face)
	{
		VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndex_Parms Parms;
		Parms.Index=Index;
		Parms.Face=Face;
		ProcessEvent(FindFunctionChecked(NAME_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices = FName(TEXT("GetMaterialForIndices"));
	UMaterialInterface* UVoxelBlueprintMaterialCollectionInterface::GetMaterialForIndices(TArray<uint8> const& Indices)
	{
		VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndices_Parms Parms;
		Parms.Indices=Indices;
		ProcessEvent(FindFunctionChecked(NAME_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVoxelBlueprintMaterialCollectionInterface_GetMaterials = FName(TEXT("GetMaterials"));
	TArray<FVoxelMaterialCollectionMaterialInfo> UVoxelBlueprintMaterialCollectionInterface::GetMaterials()
	{
		VoxelBlueprintMaterialCollectionInterface_eventGetMaterials_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVoxelBlueprintMaterialCollectionInterface_GetMaterials),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection = FName(TEXT("InitializeCollection"));
	void UVoxelBlueprintMaterialCollectionInterface::InitializeCollection()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection),NULL);
	}
	void UVoxelBlueprintMaterialCollectionInterface::StaticRegisterNativesUVoxelBlueprintMaterialCollectionInterface()
	{
	}
	struct Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Face;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Face_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndex_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::NewProp_Face = { "Face", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndex_Parms, Face), Z_Construct_UEnum_Voxel_EVoxelCubicFace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::NewProp_Face_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::NewProp_Face,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::NewProp_Face_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface, nullptr, "GetMaterialForIndex", nullptr, nullptr, sizeof(VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndex_Parms), Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Indices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndices_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::NewProp_Indices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndices_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::NewProp_Indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::NewProp_Indices_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Indices will have between 2 and MaxMaterialsToBlendAtOnce elements, and will be sorted\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
		{ "ToolTip", "Indices will have between 2 and MaxMaterialsToBlendAtOnce elements, and will be sorted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface, nullptr, "GetMaterialForIndices", nullptr, nullptr, sizeof(VoxelBlueprintMaterialCollectionInterface_eventGetMaterialForIndices_Parms), Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBlueprintMaterialCollectionInterface_eventGetMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelMaterialCollectionMaterialInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// This is used by the tools dropdown to select the material to paint\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
		{ "ToolTip", "This is used by the tools dropdown to select the material to paint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface, nullptr, "GetMaterials", nullptr, nullptr, sizeof(VoxelBlueprintMaterialCollectionInterface_eventGetMaterials_Parms), Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface, nullptr, "InitializeCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_NoRegister()
	{
		return UVoxelBlueprintMaterialCollectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCubicFaces_MetaData[];
#endif
		static void NewProp_bEnableCubicFaces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCubicFaces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMaterialsToBlendAtOnce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMaterialsToBlendAtOnce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndex, "GetMaterialForIndex" }, // 1041046464
		{ &Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterialForIndices, "GetMaterialForIndices" }, // 1926733933
		{ &Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_GetMaterials, "GetMaterials" }, // 1643565364
		{ &Z_Construct_UFunction_UVoxelBlueprintMaterialCollectionInterface_InitializeCollection, "InitializeCollection" }, // 1615216121
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_bEnableCubicFaces_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If false, faces will be merged\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
		{ "ToolTip", "If false, faces will be merged" },
	};
#endif
	void Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_bEnableCubicFaces_SetBit(void* Obj)
	{
		((UVoxelBlueprintMaterialCollectionInterface*)Obj)->bEnableCubicFaces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_bEnableCubicFaces = { "bEnableCubicFaces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelBlueprintMaterialCollectionInterface), &Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_bEnableCubicFaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_bEnableCubicFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_bEnableCubicFaces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "6" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
		{ "UIMax", "6" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_MaxMaterialsToBlendAtOnce = { "MaxMaterialsToBlendAtOnce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBlueprintMaterialCollectionInterface, MaxMaterialsToBlendAtOnce), METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_bEnableCubicFaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::NewProp_MaxMaterialsToBlendAtOnce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlueprintMaterialCollectionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::ClassParams = {
		&UVoxelBlueprintMaterialCollectionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBlueprintMaterialCollectionInterface, 696767722);
	template<> VOXEL_API UClass* StaticClass<UVoxelBlueprintMaterialCollectionInterface>()
	{
		return UVoxelBlueprintMaterialCollectionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBlueprintMaterialCollectionInterface(Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface, &UVoxelBlueprintMaterialCollectionInterface::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelBlueprintMaterialCollectionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlueprintMaterialCollectionInterface);
	void UVoxelBlueprintMaterialCollection::StaticRegisterNativesUVoxelBlueprintMaterialCollection()
	{
	}
	UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollection_NoRegister()
	{
		return UVoxelBlueprintMaterialCollection::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCachedMaterialCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Material collection that does not generate any blending and is just a list of materials\n" },
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
		{ "ToolTip", "Material collection that does not generate any blending and is just a list of materials" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::NewProp_Instance_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBlueprintMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBlueprintMaterialCollection, Instance), Z_Construct_UClass_UVoxelBlueprintMaterialCollectionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::NewProp_Instance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::NewProp_Instance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlueprintMaterialCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::ClassParams = {
		&UVoxelBlueprintMaterialCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBlueprintMaterialCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBlueprintMaterialCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBlueprintMaterialCollection, 1193300583);
	template<> VOXEL_API UClass* StaticClass<UVoxelBlueprintMaterialCollection>()
	{
		return UVoxelBlueprintMaterialCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBlueprintMaterialCollection(Z_Construct_UClass_UVoxelBlueprintMaterialCollection, &UVoxelBlueprintMaterialCollection::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelBlueprintMaterialCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlueprintMaterialCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
