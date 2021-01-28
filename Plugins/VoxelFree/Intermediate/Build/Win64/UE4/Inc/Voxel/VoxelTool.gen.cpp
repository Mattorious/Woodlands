// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTool() {}
// Cross Module References
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolTickData();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolSharedConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelComputeDevice();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTool_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics
	{
		struct VoxelTool_eventDoEditDynamicOverride_Parms
		{
			FVector Position;
			FVector Normal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventDoEditDynamicOverride_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventDoEditDynamicOverride_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "DoEditDynamicOverride__DelegateSignature", nullptr, nullptr, sizeof(VoxelTool_eventDoEditDynamicOverride_Parms), Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00920000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics
	{
		struct _Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Voxel, nullptr, "VoxelTool_OnBoundsUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms), Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FVoxelToolTickData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelToolTickData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelToolTickData, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelToolTickData"), sizeof(FVoxelToolTickData), Get_Z_Construct_UScriptStruct_FVoxelToolTickData_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelToolTickData>()
{
	return FVoxelToolTickData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelToolTickData(FVoxelToolTickData::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelToolTickData"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelToolTickData
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelToolTickData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelToolTickData")),new UScriptStruct::TCppStructOps<FVoxelToolTickData>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelToolTickData;
	struct Z_Construct_UScriptStruct_FVoxelToolTickData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Axes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Axes_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Keys_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Keys_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEdit_MetaData[];
#endif
		static void NewProp_bEdit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEdit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraViewDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraViewDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MousePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MousePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "Voxel.VoxelTool.MakeVoxelToolTickData" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelToolTickData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolTickData, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolTickData, Axes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_Key_KeyProp = { "Axes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_ValueProp = { "Axes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolTickData, Keys), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_Key_KeyProp = { "Keys_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_ValueProp = { "Keys", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit_SetBit(void* Obj)
	{
		((FVoxelToolTickData*)Obj)->bEdit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit = { "bEdit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelToolTickData), &Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CameraViewDirection_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CameraViewDirection = { "CameraViewDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolTickData, CameraViewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CameraViewDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CameraViewDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_MousePosition_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_MousePosition = { "MousePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelToolTickData, MousePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_MousePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_MousePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CameraViewDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_MousePosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelToolTickData",
		sizeof(FVoxelToolTickData),
		alignof(FVoxelToolTickData),
		Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolTickData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelToolTickData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelToolTickData"), sizeof(FVoxelToolTickData), Get_Z_Construct_UScriptStruct_FVoxelToolTickData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelToolTickData_Hash() { return 1560435929U; }
	void UVoxelToolSharedConfig::StaticRegisterNativesUVoxelToolSharedConfig()
	{
	}
	UClass* Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister()
	{
		return UVoxelToolSharedConfig::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelToolSharedConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBoundsUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBoundsUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForUpdates_MetaData[];
#endif
		static void NewProp_bWaitForUpdates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckForSingleValues_MetaData[];
#endif
		static void NewProp_bCheckForSingleValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckForSingleValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegenerateFoliage_MetaData[];
#endif
		static void NewProp_bRegenerateFoliage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegenerateFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputeDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComputeDevice;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComputeDevice_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiThreaded_MetaData[];
#endif
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCacheData_MetaData[];
#endif
		static void NewProp_bCacheData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCacheData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldsToEdit_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldsToEdit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldsToEdit_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControlSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignToMovementSmoothness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignToMovementSmoothness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToolOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelToolSharedConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelTools/Tools/VoxelTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_OnBoundsUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_OnBoundsUpdated = { "OnBoundsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, OnBoundsUpdated), Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_OnBoundsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_OnBoundsUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMaterial_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMaterial = { "PlaneMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, PlaneMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMesh_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMesh = { "PlaneMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, PlaneMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_FixedDeltaTime_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "Comment", "// This is used when calling ApplyTool\n// We cannot use the app delta time as it's not deterministic\n" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "ToolTip", "This is used when calling ApplyTool\nWe cannot use the app delta time as it's not deterministic" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_FixedDeltaTime = { "FixedDeltaTime", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, FixedDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_FixedDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_FixedDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UVoxelToolSharedConfig*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates_SetBit(void* Obj)
	{
		((UVoxelToolSharedConfig*)Obj)->bWaitForUpdates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates = { "bWaitForUpdates", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues_SetBit(void* Obj)
	{
		((UVoxelToolSharedConfig*)Obj)->bCheckForSingleValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues = { "bCheckForSingleValues", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateFoliage_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateFoliage_SetBit(void* Obj)
	{
		((UVoxelToolSharedConfig*)Obj)->bRegenerateFoliage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateFoliage = { "bRegenerateFoliage", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateFoliage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ComputeDevice_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "Comment", "// Which compute device to use when there's a choice\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "ToolTip", "Which compute device to use when there's a choice" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ComputeDevice = { "ComputeDevice", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, ComputeDevice), Z_Construct_UEnum_Voxel_EVoxelComputeDevice, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ComputeDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ComputeDevice_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ComputeDevice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((UVoxelToolSharedConfig*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData_SetBit(void* Obj)
	{
		((UVoxelToolSharedConfig*)Obj)->bCacheData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData = { "bCacheData", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "Comment", "// If empty, allow editing all worlds\n" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "ToolTip", "If empty, allow editing all worlds" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit = { "WorldsToEdit", nullptr, (EPropertyFlags)0x0010040000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, WorldsToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit_Inner = { "WorldsToEdit", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ControlSpeed_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "Comment", "// Input speed: 0.05 increase radius by 5% every time you press ]\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "ToolTip", "Input speed: 0.05 increase radius by 5% every time you press ]" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ControlSpeed = { "ControlSpeed", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, ControlSpeed), METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ControlSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ControlSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_AlignToMovementSmoothness_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_AlignToMovementSmoothness = { "AlignToMovementSmoothness", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, AlignToMovementSmoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_AlignToMovementSmoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_AlignToMovementSmoothness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ToolOpacity_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ToolOpacity = { "ToolOpacity", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, ToolOpacity), METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ToolOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ToolOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PaintMaterial_MetaData[] = {
		{ "Category", "Shared Config - Paint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "PaintMaterial", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PaintMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_BrushSize_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "UIMax", "20000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, BrushSize), METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_BrushSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_BrushSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelToolSharedConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_OnBoundsUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_FixedDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ComputeDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ComputeDevice_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ControlSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_AlignToMovementSmoothness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ToolOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_BrushSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelToolSharedConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolSharedConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::ClassParams = {
		&UVoxelToolSharedConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelToolSharedConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelToolSharedConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelToolSharedConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelToolSharedConfig, 3161834989);
	template<> VOXEL_API UClass* StaticClass<UVoxelToolSharedConfig>()
	{
		return UVoxelToolSharedConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelToolSharedConfig(Z_Construct_UClass_UVoxelToolSharedConfig, &UVoxelToolSharedConfig::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelToolSharedConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolSharedConfig);
	DEFINE_FUNCTION(UVoxelTool::execGetRayDirection)
	{
		P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVoxelTool::GetRayDirection(Z_Param_TickData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execGetRayOrigin)
	{
		P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVoxelTool::GetRayOrigin(Z_Param_TickData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execDeproject)
	{
		P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelTool::Deproject(Z_Param_TickData,Z_Param_ScreenPosition,Z_Param_Out_WorldPosition,Z_Param_Out_WorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execIsAlternativeMode)
	{
		P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelTool::IsAlternativeMode(Z_Param_TickData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execGetAxis)
	{
		P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
		P_GET_PROPERTY(FNameProperty,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVoxelTool::GetAxis(Z_Param_TickData,Z_Param_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execIsKeyDown)
	{
		P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelTool::IsKeyDown(Z_Param_TickData,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execMakeVoxelToolTickData)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_UBOOL(Z_Param_bEdit);
		P_GET_TMAP_REF(FName,bool,Z_Param_Out_Keys);
		P_GET_TMAP_REF(FName,float,Z_Param_Out_Axes);
		P_GET_STRUCT(FVector2D,Z_Param_MousePosition);
		P_GET_STRUCT(FVector,Z_Param_CameraDirection);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelToolTickData*)Z_Param__Result=UVoxelTool::MakeVoxelToolTickData(Z_Param_PlayerController,Z_Param_bEdit,Z_Param_Out_Keys,Z_Param_Out_Axes,Z_Param_MousePosition,Z_Param_CameraDirection,ECollisionChannel(Z_Param_CollisionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execMakeVoxelTool)
	{
		P_GET_OBJECT(UClass,Z_Param_ToolClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelTool**)Z_Param__Result=UVoxelTool::MakeVoxelTool(Z_Param_ToolClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execMakeToolAxes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BrushSizeDelta);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FalloffDelta);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StrengthDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,float>*)Z_Param__Result=UVoxelTool::MakeToolAxes(Z_Param_BrushSizeDelta,Z_Param_FalloffDelta,Z_Param_StrengthDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execMakeToolKeys)
	{
		P_GET_UBOOL(Z_Param_bAlternativeMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,bool>*)Z_Param__Result=UVoxelTool::MakeToolKeys(Z_Param_bAlternativeMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execGetToolName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetToolName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execApply)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_TMAP_REF(FName,bool,Z_Param_Out_Keys);
		P_GET_TMAP_REF(FName,float,Z_Param_Out_Axes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Apply(Z_Param_World,Z_Param_Position,Z_Param_Normal,Z_Param_Out_Keys,Z_Param_Out_Axes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execK2_SimpleTick)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_UBOOL(Z_Param_bEdit);
		P_GET_TMAP_REF(FName,bool,Z_Param_Out_Keys);
		P_GET_TMAP_REF(FName,float,Z_Param_Out_Axes);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_DoEditOverride);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SimpleTick(Z_Param_PlayerController,Z_Param_bEdit,Z_Param_Out_Keys,Z_Param_Out_Axes,FDoEditDynamicOverride(Z_Param_Out_DoEditOverride),ECollisionChannel(Z_Param_CollisionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execK2_AdvancedTick)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVoxelToolTickData,Z_Param_Out_TickData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_DoEditOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AdvancedTick(Z_Param_WorldContextObject,Z_Param_Out_TickData,FDoEditDynamicOverride(Z_Param_Out_DoEditOverride));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execGetVoxelWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVoxelWorld**)Z_Param__Result=P_THIS->GetVoxelWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execDisableTool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableTool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTool::execEnableTool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableTool();
		P_NATIVE_END;
	}
	void UVoxelTool::StaticRegisterNativesUVoxelTool()
	{
		UClass* Class = UVoxelTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Apply", &UVoxelTool::execApply },
			{ "Deproject", &UVoxelTool::execDeproject },
			{ "DisableTool", &UVoxelTool::execDisableTool },
			{ "EnableTool", &UVoxelTool::execEnableTool },
			{ "GetAxis", &UVoxelTool::execGetAxis },
			{ "GetRayDirection", &UVoxelTool::execGetRayDirection },
			{ "GetRayOrigin", &UVoxelTool::execGetRayOrigin },
			{ "GetToolName", &UVoxelTool::execGetToolName },
			{ "GetVoxelWorld", &UVoxelTool::execGetVoxelWorld },
			{ "IsAlternativeMode", &UVoxelTool::execIsAlternativeMode },
			{ "IsKeyDown", &UVoxelTool::execIsKeyDown },
			{ "K2_AdvancedTick", &UVoxelTool::execK2_AdvancedTick },
			{ "K2_SimpleTick", &UVoxelTool::execK2_SimpleTick },
			{ "MakeToolAxes", &UVoxelTool::execMakeToolAxes },
			{ "MakeToolKeys", &UVoxelTool::execMakeToolKeys },
			{ "MakeVoxelTool", &UVoxelTool::execMakeVoxelTool },
			{ "MakeVoxelToolTickData", &UVoxelTool::execMakeVoxelToolTickData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelTool_Apply_Statics
	{
		struct VoxelTool_eventApply_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			FVector Normal;
			TMap<FName,bool> Keys;
			TMap<FName,float> Axes;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Axes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Axes_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Keys_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Keys_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, Axes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_Key_KeyProp = { "Axes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_ValueProp = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, Keys), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_Key_KeyProp = { "Keys_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_ValueProp = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_Apply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_Apply_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Keys, Axes" },
		{ "Category", "Voxel|Tools" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "Apply", nullptr, nullptr, sizeof(VoxelTool_eventApply_Parms), Z_Construct_UFunction_UVoxelTool_Apply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Apply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_Apply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Apply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_Apply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_Apply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_Deproject_Statics
	{
		struct VoxelTool_eventDeproject_Parms
		{
			FVoxelToolTickData TickData;
			FVector2D ScreenPosition;
			FVector WorldPosition;
			FVector WorldDirection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelTool_eventDeproject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelTool_eventDeproject_Parms), &Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventDeproject_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventDeproject_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventDeproject_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventDeproject_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_Deproject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_TickData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_Deproject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "Deproject", nullptr, nullptr, sizeof(VoxelTool_eventDeproject_Parms), Z_Construct_UFunction_UVoxelTool_Deproject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Deproject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_Deproject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Deproject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_Deproject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_Deproject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_DisableTool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_DisableTool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "Comment", "// Call this to delete any tool preview actors\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "ToolTip", "Call this to delete any tool preview actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_DisableTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "DisableTool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_DisableTool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_DisableTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_DisableTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_DisableTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_EnableTool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_EnableTool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "Comment", "// Call this to do some initial setup\n// Will be called in the first tool tick if you don't\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "ToolTip", "Call this to do some initial setup\nWill be called in the first tool tick if you don't" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_EnableTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "EnableTool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_EnableTool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_EnableTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_EnableTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_EnableTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_GetAxis_Statics
	{
		struct VoxelTool_eventGetAxis_Parms
		{
			FVoxelToolTickData TickData;
			FName Axis;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventGetAxis_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventGetAxis_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventGetAxis_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_TickData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetAxis", nullptr, nullptr, sizeof(VoxelTool_eventGetAxis_Parms), Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_GetAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics
	{
		struct VoxelTool_eventGetRayDirection_Parms
		{
			FVoxelToolTickData TickData;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventGetRayDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventGetRayDirection_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::NewProp_TickData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetRayDirection", nullptr, nullptr, sizeof(VoxelTool_eventGetRayDirection_Parms), Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_GetRayDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics
	{
		struct VoxelTool_eventGetRayOrigin_Parms
		{
			FVoxelToolTickData TickData;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventGetRayOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventGetRayOrigin_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::NewProp_TickData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetRayOrigin", nullptr, nullptr, sizeof(VoxelTool_eventGetRayOrigin_Parms), Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_GetRayOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_GetToolName_Statics
	{
		struct VoxelTool_eventGetToolName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventGetToolName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetToolName", nullptr, nullptr, sizeof(VoxelTool_eventGetToolName_Parms), Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_GetToolName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics
	{
		struct VoxelTool_eventGetVoxelWorld_Parms
		{
			AVoxelWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventGetVoxelWorld_Parms, ReturnValue), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetVoxelWorld", nullptr, nullptr, sizeof(VoxelTool_eventGetVoxelWorld_Parms), Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_GetVoxelWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics
	{
		struct VoxelTool_eventIsAlternativeMode_Parms
		{
			FVoxelToolTickData TickData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelTool_eventIsAlternativeMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelTool_eventIsAlternativeMode_Parms), &Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventIsAlternativeMode_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_TickData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "IsAlternativeMode", nullptr, nullptr, sizeof(VoxelTool_eventIsAlternativeMode_Parms), Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_IsAlternativeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics
	{
		struct VoxelTool_eventIsKeyDown_Parms
		{
			FVoxelToolTickData TickData;
			FName Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelTool_eventIsKeyDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelTool_eventIsKeyDown_Parms), &Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventIsKeyDown_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventIsKeyDown_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_TickData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "IsKeyDown", nullptr, nullptr, sizeof(VoxelTool_eventIsKeyDown_Parms), Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_IsKeyDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics
	{
		struct VoxelTool_eventK2_AdvancedTick_Parms
		{
			UObject* WorldContextObject;
			FVoxelToolTickData TickData;
			FScriptDelegate DoEditOverride;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoEditOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_DoEditOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_DoEditOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_DoEditOverride = { "DoEditOverride", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventK2_AdvancedTick_Parms, DoEditOverride), Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_DoEditOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_DoEditOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_TickData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventK2_AdvancedTick_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_TickData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_TickData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventK2_AdvancedTick_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_DoEditOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_TickData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DoEditOverride" },
		{ "AutoCreateRefTerm", "DoEditOverride" },
		{ "Category", "Voxel|Tools" },
		{ "DisplayName", "AdvancedTick" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "K2_AdvancedTick", nullptr, nullptr, sizeof(VoxelTool_eventK2_AdvancedTick_Parms), Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics
	{
		struct VoxelTool_eventK2_SimpleTick_Parms
		{
			APlayerController* PlayerController;
			bool bEdit;
			TMap<FName,bool> Keys;
			TMap<FName,float> Axes;
			FScriptDelegate DoEditOverride;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoEditOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_DoEditOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Axes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Axes_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Keys_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Keys_ValueProp;
		static void NewProp_bEdit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEdit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_DoEditOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_DoEditOverride = { "DoEditOverride", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, DoEditOverride), Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_DoEditOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_DoEditOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, Axes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_Key_KeyProp = { "Axes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_ValueProp = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, Keys), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_Key_KeyProp = { "Keys_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_ValueProp = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_bEdit_SetBit(void* Obj)
	{
		((VoxelTool_eventK2_SimpleTick_Parms*)Obj)->bEdit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_bEdit = { "bEdit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelTool_eventK2_SimpleTick_Parms), &Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_bEdit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_DoEditOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_bEdit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DoEditOverride" },
		{ "AutoCreateRefTerm", "Keys, Axes, DoEditOverride, CollisionChannel" },
		{ "Category", "Voxel|Tools" },
		{ "Comment", "/**\n\x09 * Tick the tool\n\x09 * @param\x09PlayerController\x09The player controller - use GetPlayerController to get it\n\x09 * @param\x09""bEdit\x09\x09\x09\x09Whether the user is pressing the edit button this frame\n\x09 * @param\x09Keys\x09\x09\x09\x09The keys pressed this frame. Use MakeToolKeys. You can add additional values to the map if you have custom tools using them.\n\x09 * @param\x09""Axes\x09\x09\x09\x09The axes values in this frame, to control brush size/strength etc. Use MakeToolAxes. You can add additional values to the map if you have custom tools using them.\n\x09 * @param\x09""DoEditOverride\x09\x09If provided, the edit will not be done but this function will be called instead.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Useful for multiplayer, as you can broadcast the parameters to the other players & call ApplyTool\n\x09 * @param\x09""CollisionChannel\x09The collision channel to do traces against\n\x09 */" },
		{ "CPP_Default_CollisionChannel", "ECC_Visibility" },
		{ "DisplayName", "SimpleTick" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "ToolTip", "Tick the tool\n@param       PlayerController        The player controller - use GetPlayerController to get it\n@param       bEdit                           Whether the user is pressing the edit button this frame\n@param       Keys                            The keys pressed this frame. Use MakeToolKeys. You can add additional values to the map if you have custom tools using them.\n@param       Axes                            The axes values in this frame, to control brush size/strength etc. Use MakeToolAxes. You can add additional values to the map if you have custom tools using them.\n@param       DoEditOverride          If provided, the edit will not be done but this function will be called instead.\n                                                             Useful for multiplayer, as you can broadcast the parameters to the other players & call ApplyTool\n@param       CollisionChannel        The collision channel to do traces against" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "K2_SimpleTick", nullptr, nullptr, sizeof(VoxelTool_eventK2_SimpleTick_Parms), Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_K2_SimpleTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics
	{
		struct VoxelTool_eventMakeToolAxes_Parms
		{
			float BrushSizeDelta;
			float FalloffDelta;
			float StrengthDelta;
			TMap<FName,float> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrengthDelta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FalloffDelta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushSizeDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolAxes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_StrengthDelta = { "StrengthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolAxes_Parms, StrengthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_FalloffDelta = { "FalloffDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolAxes_Parms, FalloffDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_BrushSizeDelta = { "BrushSizeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolAxes_Parms, BrushSizeDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_StrengthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_FalloffDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_BrushSizeDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "MakeToolAxes", nullptr, nullptr, sizeof(VoxelTool_eventMakeToolAxes_Parms), Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_MakeToolAxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics
	{
		struct VoxelTool_eventMakeToolKeys_Parms
		{
			bool bAlternativeMode;
			TMap<FName,bool> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_ValueProp;
		static void NewProp_bAlternativeMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlternativeMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolKeys_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_bAlternativeMode_SetBit(void* Obj)
	{
		((VoxelTool_eventMakeToolKeys_Parms*)Obj)->bAlternativeMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_bAlternativeMode = { "bAlternativeMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelTool_eventMakeToolKeys_Parms), &Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_bAlternativeMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_bAlternativeMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "MakeToolKeys", nullptr, nullptr, sizeof(VoxelTool_eventMakeToolKeys_Parms), Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_MakeToolKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics
	{
		struct VoxelTool_eventMakeVoxelTool_Parms
		{
			TSubclassOf<UVoxelTool>  ToolClass;
			UVoxelTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToolClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelTool_Parms, ReturnValue), Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::NewProp_ToolClass = { "ToolClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelTool_Parms, ToolClass), Z_Construct_UClass_UVoxelTool_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::NewProp_ToolClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "DeterminesOutputType", "ToolClass" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "MakeVoxelTool", nullptr, nullptr, sizeof(VoxelTool_eventMakeVoxelTool_Parms), Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_MakeVoxelTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics
	{
		struct VoxelTool_eventMakeVoxelToolTickData_Parms
		{
			APlayerController* PlayerController;
			bool bEdit;
			TMap<FName,bool> Keys;
			TMap<FName,float> Axes;
			FVector2D MousePosition;
			FVector CameraDirection;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			FVoxelToolTickData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MousePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Axes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Axes_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Keys_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Keys_ValueProp;
		static void NewProp_bEdit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEdit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelToolTickData_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelToolTickData_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_CameraDirection = { "CameraDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelToolTickData_Parms, CameraDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_MousePosition = { "MousePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelToolTickData_Parms, MousePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Axes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelToolTickData_Parms, Axes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Axes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Axes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Axes_Key_KeyProp = { "Axes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Axes_ValueProp = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelToolTickData_Parms, Keys), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Keys_Key_KeyProp = { "Keys_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Keys_ValueProp = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_bEdit_SetBit(void* Obj)
	{
		((VoxelTool_eventMakeVoxelToolTickData_Parms*)Obj)->bEdit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_bEdit = { "bEdit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelTool_eventMakeVoxelToolTickData_Parms), &Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_bEdit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelToolTickData_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_CameraDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_MousePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Axes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Axes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Axes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Keys_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_Keys_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_bEdit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "CPP_Default_CameraDirection", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_CollisionChannel", "ECC_Visibility" },
		{ "CPP_Default_MousePosition", "(X=500.000,Y=500.000)" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "MakeVoxelToolTickData", nullptr, nullptr, sizeof(VoxelTool_eventMakeVoxelToolTickData_Parms), Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelTool_NoRegister()
	{
		return UVoxelTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrozenTickData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrozenTickData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SharedConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPaintMaterial_MetaData[];
#endif
		static void NewProp_bShowPaintMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPaintMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInDropdown_MetaData[];
#endif
		static void NewProp_bShowInDropdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInDropdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ToolName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelTool_Apply, "Apply" }, // 2636036574
		{ &Z_Construct_UFunction_UVoxelTool_Deproject, "Deproject" }, // 2653088243
		{ &Z_Construct_UFunction_UVoxelTool_DisableTool, "DisableTool" }, // 935326393
		{ &Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature, "DoEditDynamicOverride__DelegateSignature" }, // 1028664282
		{ &Z_Construct_UFunction_UVoxelTool_EnableTool, "EnableTool" }, // 2690898818
		{ &Z_Construct_UFunction_UVoxelTool_GetAxis, "GetAxis" }, // 655229117
		{ &Z_Construct_UFunction_UVoxelTool_GetRayDirection, "GetRayDirection" }, // 1479497208
		{ &Z_Construct_UFunction_UVoxelTool_GetRayOrigin, "GetRayOrigin" }, // 2694704236
		{ &Z_Construct_UFunction_UVoxelTool_GetToolName, "GetToolName" }, // 3017624713
		{ &Z_Construct_UFunction_UVoxelTool_GetVoxelWorld, "GetVoxelWorld" }, // 577863805
		{ &Z_Construct_UFunction_UVoxelTool_IsAlternativeMode, "IsAlternativeMode" }, // 4098451509
		{ &Z_Construct_UFunction_UVoxelTool_IsKeyDown, "IsKeyDown" }, // 1051522397
		{ &Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick, "K2_AdvancedTick" }, // 2260205415
		{ &Z_Construct_UFunction_UVoxelTool_K2_SimpleTick, "K2_SimpleTick" }, // 2589688148
		{ &Z_Construct_UFunction_UVoxelTool_MakeToolAxes, "MakeToolAxes" }, // 2903930850
		{ &Z_Construct_UFunction_UVoxelTool_MakeToolKeys, "MakeToolKeys" }, // 622359706
		{ &Z_Construct_UFunction_UVoxelTool_MakeVoxelTool, "MakeVoxelTool" }, // 475522482
		{ &Z_Construct_UFunction_UVoxelTool_MakeVoxelToolTickData, "MakeVoxelToolTickData" }, // 90171184
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelTools/Tools/VoxelTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTool_Statics::NewProp_FrozenTickData_MetaData[] = {
		{ "Comment", "// For debug\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "ToolTip", "For debug" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_FrozenTickData = { "FrozenTickData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelTool, FrozenTickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(Z_Construct_UClass_UVoxelTool_Statics::NewProp_FrozenTickData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::NewProp_FrozenTickData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UVoxelTool*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelTool), &Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTool_Statics::NewProp_SharedConfig_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Shared config allows to share some values across several tools, like the brush size or the paint material\n// If not set, it will be created in EnableTool\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "ToolTip", "Shared config allows to share some values across several tools, like the brush size or the paint material\nIf not set, it will be created in EnableTool" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_SharedConfig = { "SharedConfig", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelTool, SharedConfig), Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelTool_Statics::NewProp_SharedConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::NewProp_SharedConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial_SetBit(void* Obj)
	{
		((UVoxelTool*)Obj)->bShowPaintMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial = { "bShowPaintMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelTool), &Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown_SetBit(void* Obj)
	{
		((UVoxelTool*)Obj)->bShowInDropdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown = { "bShowInDropdown", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelTool), &Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelTool, ToolTip), METADATA_PARAMS(Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelTool, ToolName), METADATA_PARAMS(Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_FrozenTickData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_SharedConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTool_Statics::ClassParams = {
		&UVoxelTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelTool, 1427731297);
	template<> VOXEL_API UClass* StaticClass<UVoxelTool>()
	{
		return UVoxelTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelTool(Z_Construct_UClass_UVoxelTool, &UVoxelTool::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
