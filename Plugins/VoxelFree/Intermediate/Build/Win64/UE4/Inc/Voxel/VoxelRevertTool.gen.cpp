// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelRevertTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelRevertTool() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelRevertTool_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelRevertTool();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereToolBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelRevertTool::StaticRegisterNativesUVoxelRevertTool()
	{
	}
	UClass* Z_Construct_UClass_UVoxelRevertTool_NoRegister()
	{
		return UVoxelRevertTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelRevertTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHistoryPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentHistoryPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistoryPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HistoryPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRevertMaterials_MetaData[];
#endif
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRevertValues_MetaData[];
#endif
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelRevertTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSphereToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelRevertTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition = { "CurrentHistoryPosition", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelRevertTool, CurrentHistoryPosition), METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition = { "HistoryPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelRevertTool, HistoryPosition), METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((UVoxelRevertTool*)Obj)->bRevertMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelRevertTool), &Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((UVoxelRevertTool*)Obj)->bRevertValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelRevertTool), &Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelRevertTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelRevertTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelRevertTool_Statics::ClassParams = {
		&UVoxelRevertTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelRevertTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelRevertTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelRevertTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelRevertTool, 2230992581);
	template<> VOXEL_API UClass* StaticClass<UVoxelRevertTool>()
	{
		return UVoxelRevertTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelRevertTool(Z_Construct_UClass_UVoxelRevertTool, &UVoxelRevertTool::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelRevertTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelRevertTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
