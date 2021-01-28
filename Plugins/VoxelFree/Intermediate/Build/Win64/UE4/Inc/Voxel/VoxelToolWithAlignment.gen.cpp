// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelToolWithAlignment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelToolWithAlignment() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolWithAlignment_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolWithAlignment();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelToolAlignment();
// End Cross Module References
	void UVoxelToolWithAlignment::StaticRegisterNativesUVoxelToolWithAlignment()
	{
	}
	UClass* Z_Construct_UClass_UVoxelToolWithAlignment_NoRegister()
	{
		return UVoxelToolWithAlignment::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelToolWithAlignment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPlanePreview_MetaData[];
#endif
		static void NewProp_bShowPlanePreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPlanePreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAirMode_MetaData[];
#endif
		static void NewProp_bAirMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAirMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Alignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelToolWithAlignment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolWithAlignment_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Voxel tool with basic alignment settings\n" },
		{ "IncludePath", "VoxelTools/Tools/VoxelToolWithAlignment.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
		{ "ToolTip", "Voxel tool with basic alignment settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "EditCondition", "Alignment != EVoxelToolAlignment::Surface" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview_SetBit(void* Obj)
	{
		((UVoxelToolWithAlignment*)Obj)->bShowPlanePreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview = { "bShowPlanePreview", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelToolWithAlignment), &Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_DistanceToCamera_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Distance to the camera when no voxel world under the cursor, or Air Mode = true\n" },
		{ "EditCondition", "Alignment != EVoxelToolAlignment::Surface" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
		{ "ToolTip", "Distance to the camera when no voxel world under the cursor, or Air Mode = true" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_DistanceToCamera = { "DistanceToCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolWithAlignment, DistanceToCamera), METADATA_PARAMS(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_DistanceToCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_DistanceToCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Position is based on the distance from the camera instead of the hit point\n" },
		{ "EditCondition", "Alignment != EVoxelToolAlignment::Surface" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
		{ "ToolTip", "Position is based on the distance from the camera instead of the hit point" },
	};
#endif
	void Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode_SetBit(void* Obj)
	{
		((UVoxelToolWithAlignment*)Obj)->bAirMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode = { "bAirMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelToolWithAlignment), &Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// The plane your sculpting is restricted to when holding mouse button down\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
		{ "ToolTip", "The plane your sculpting is restricted to when holding mouse button down" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolWithAlignment, Alignment), Z_Construct_UEnum_Voxel_EVoxelToolAlignment, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelToolWithAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_DistanceToCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelToolWithAlignment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolWithAlignment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::ClassParams = {
		&UVoxelToolWithAlignment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelToolWithAlignment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelToolWithAlignment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelToolWithAlignment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelToolWithAlignment, 1288530285);
	template<> VOXEL_API UClass* StaticClass<UVoxelToolWithAlignment>()
	{
		return UVoxelToolWithAlignment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelToolWithAlignment(Z_Construct_UClass_UVoxelToolWithAlignment, &UVoxelToolWithAlignment::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelToolWithAlignment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolWithAlignment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
