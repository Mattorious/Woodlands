// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Gen/VoxelBoxTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBoxTools() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBoxTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBoxTools();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelBoxTools::execSetMaterialBoxAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
		P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBoxTools::SetMaterialBoxAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Bounds,Z_Param_Out_PaintMaterial,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBoxTools::execSetMaterialBox)
	{
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
		P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBoxTools::SetMaterialBox(Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Bounds,Z_Param_Out_PaintMaterial,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBoxTools::execRemoveBoxAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBoxTools::RemoveBoxAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Bounds,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBoxTools::execRemoveBox)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBoxTools::RemoveBox(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Bounds,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBoxTools::execAddBoxAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBoxTools::AddBoxAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Bounds,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBoxTools::execAddBox)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBoxTools::AddBox(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Bounds,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBoxTools::execSetValueBoxAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBoxTools::SetValueBoxAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Bounds,Z_Param_Value,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelBoxTools::execSetValueBox)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
		P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
		P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_GET_UBOOL(Z_Param_bRecordModifiedValues);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelBoxTools::SetValueBox(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Bounds,Z_Param_Value,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	void UVoxelBoxTools::StaticRegisterNativesUVoxelBoxTools()
	{
		UClass* Class = UVoxelBoxTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBox", &UVoxelBoxTools::execAddBox },
			{ "AddBoxAsync", &UVoxelBoxTools::execAddBoxAsync },
			{ "RemoveBox", &UVoxelBoxTools::execRemoveBox },
			{ "RemoveBoxAsync", &UVoxelBoxTools::execRemoveBoxAsync },
			{ "SetMaterialBox", &UVoxelBoxTools::execSetMaterialBox },
			{ "SetMaterialBoxAsync", &UVoxelBoxTools::execSetMaterialBoxAsync },
			{ "SetValueBox", &UVoxelBoxTools::execSetValueBox },
			{ "SetValueBoxAsync", &UVoxelBoxTools::execSetValueBoxAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics
	{
		struct VoxelBoxTools_eventAddBox_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelIntBox Bounds;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventAddBox_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventAddBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventAddBox_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventAddBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventAddBox_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventAddBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBox_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBox_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBox_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBox_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bUpdateRender" },
		{ "Category", "Voxel|Tools|Box Tools" },
		{ "Comment", "/**\n\x09 * Add a box shape\n\x09 * @see AddBox, AddBoxAsync and FVoxelBoxToolsImpl::AddBox\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09""Bounds               \x09The bounds of the box\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelBoxTools.h" },
		{ "ToolTip", "Add a box shape\n@see AddBox, AddBoxAsync and FVoxelBoxToolsImpl::AddBox\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Bounds                  The bounds of the box\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBoxTools, nullptr, "AddBox", nullptr, nullptr, sizeof(VoxelBoxTools_eventAddBox_Parms), Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBoxTools_AddBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBoxTools_AddBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics
	{
		struct VoxelBoxTools_eventAddBoxAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelIntBox Bounds;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventAddBoxAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventAddBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventAddBoxAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventAddBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventAddBoxAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventAddBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventAddBoxAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventAddBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBoxAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBoxAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBoxAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBoxAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBoxAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventAddBoxAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Box Tools" },
		{ "Comment", "/**\n\x09 * Add a box shape\n\x09 * Runs asynchronously in a background thread\n\x09 * @see AddBox, AddBoxAsync and FVoxelBoxToolsImpl::AddBox\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09""Bounds               \x09The bounds of the box\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelBoxTools.h" },
		{ "ToolTip", "Add a box shape\nRuns asynchronously in a background thread\n@see AddBox, AddBoxAsync and FVoxelBoxToolsImpl::AddBox\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Bounds                  The bounds of the box\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBoxTools, nullptr, "AddBoxAsync", nullptr, nullptr, sizeof(VoxelBoxTools_eventAddBoxAsync_Parms), Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics
	{
		struct VoxelBoxTools_eventRemoveBox_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelIntBox Bounds;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventRemoveBox_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventRemoveBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventRemoveBox_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventRemoveBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventRemoveBox_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventRemoveBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBox_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBox_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBox_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBox_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bUpdateRender" },
		{ "Category", "Voxel|Tools|Box Tools" },
		{ "Comment", "/**\n\x09 * Remove a box shape\n\x09 * @see RemoveBox, RemoveBoxAsync and FVoxelBoxToolsImpl::RemoveBox\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09""Bounds               \x09The bounds of the box\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelBoxTools.h" },
		{ "ToolTip", "Remove a box shape\n@see RemoveBox, RemoveBoxAsync and FVoxelBoxToolsImpl::RemoveBox\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Bounds                  The bounds of the box\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBoxTools, nullptr, "RemoveBox", nullptr, nullptr, sizeof(VoxelBoxTools_eventRemoveBox_Parms), Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBoxTools_RemoveBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBoxTools_RemoveBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics
	{
		struct VoxelBoxTools_eventRemoveBoxAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelIntBox Bounds;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventRemoveBoxAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventRemoveBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventRemoveBoxAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventRemoveBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventRemoveBoxAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventRemoveBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventRemoveBoxAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventRemoveBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBoxAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBoxAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBoxAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBoxAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBoxAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventRemoveBoxAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Box Tools" },
		{ "Comment", "/**\n\x09 * Remove a box shape\n\x09 * Runs asynchronously in a background thread\n\x09 * @see RemoveBox, RemoveBoxAsync and FVoxelBoxToolsImpl::RemoveBox\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09""Bounds               \x09The bounds of the box\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelBoxTools.h" },
		{ "ToolTip", "Remove a box shape\nRuns asynchronously in a background thread\n@see RemoveBox, RemoveBoxAsync and FVoxelBoxToolsImpl::RemoveBox\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Bounds                  The bounds of the box\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBoxTools, nullptr, "RemoveBoxAsync", nullptr, nullptr, sizeof(VoxelBoxTools_eventRemoveBoxAsync_Parms), Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics
	{
		struct VoxelBoxTools_eventSetMaterialBox_Parms
		{
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelIntBox Bounds;
			FVoxelPaintMaterial PaintMaterial;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetMaterialBox_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetMaterialBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetMaterialBox_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetMaterialBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetMaterialBox_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetMaterialBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBox_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_PaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_PaintMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBox_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBox_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBox_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBox_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::NewProp_ModifiedMaterials_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bUpdateRender" },
		{ "Category", "Voxel|Tools|Box Tools" },
		{ "Comment", "/**\n\x09 * Paint a box shape\n\x09 * @see SetMaterialBox, SetMaterialBoxAsync and FVoxelBoxToolsImpl::SetMaterialBox\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09""Bounds                  \x09The bounds of the box\n\x09 * @param\x09PaintMaterial           \x09The material to set\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelBoxTools.h" },
		{ "ToolTip", "Paint a box shape\n@see SetMaterialBox, SetMaterialBoxAsync and FVoxelBoxToolsImpl::SetMaterialBox\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Bounds                          The bounds of the box\n@param       PaintMaterial                   The material to set\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBoxTools, nullptr, "SetMaterialBox", nullptr, nullptr, sizeof(VoxelBoxTools_eventSetMaterialBox_Parms), Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics
	{
		struct VoxelBoxTools_eventSetMaterialBoxAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelMaterial> ModifiedMaterials;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelIntBox Bounds;
			FVoxelPaintMaterial PaintMaterial;
			bool bMultiThreaded;
			bool bRecordModifiedMaterials;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetMaterialBoxAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetMaterialBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetMaterialBoxAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetMaterialBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetMaterialBoxAsync_Parms*)Obj)->bRecordModifiedMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetMaterialBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetMaterialBoxAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetMaterialBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBoxAsync_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_PaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_PaintMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBoxAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBoxAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBoxAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBoxAsync_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBoxAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetMaterialBoxAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bRecordModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_ModifiedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_ModifiedMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Box Tools" },
		{ "Comment", "/**\n\x09 * Paint a box shape\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SetMaterialBox, SetMaterialBoxAsync and FVoxelBoxToolsImpl::SetMaterialBox\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09""Bounds                  \x09The bounds of the box\n\x09 * @param\x09PaintMaterial           \x09The material to set\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings     \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelBoxTools.h" },
		{ "ToolTip", "Paint a box shape\nRuns asynchronously in a background thread\n@see SetMaterialBox, SetMaterialBoxAsync and FVoxelBoxToolsImpl::SetMaterialBox\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Bounds                          The bounds of the box\n@param       PaintMaterial                   The material to set\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBoxTools, nullptr, "SetMaterialBoxAsync", nullptr, nullptr, sizeof(VoxelBoxTools_eventSetMaterialBoxAsync_Parms), Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics
	{
		struct VoxelBoxTools_eventSetValueBox_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelIntBox Bounds;
			float Value;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetValueBox_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetValueBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetValueBox_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetValueBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetValueBox_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetValueBox_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBox_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBox_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBox_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBox_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBox_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::NewProp_ModifiedValues_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bUpdateRender" },
		{ "Category", "Voxel|Tools|Box Tools" },
		{ "Comment", "/**\n\x09 * Set the density in a box\n\x09 * @see SetValueBox, SetValueBoxAsync and FVoxelBoxToolsImpl::SetValueBox\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09""Bounds               \x09The bounds of the box\n\x09 * @param\x09Value                \x09The density to set\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelBoxTools.h" },
		{ "ToolTip", "Set the density in a box\n@see SetValueBox, SetValueBoxAsync and FVoxelBoxToolsImpl::SetValueBox\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Bounds                  The bounds of the box\n@param       Value                   The density to set\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBoxTools, nullptr, "SetValueBox", nullptr, nullptr, sizeof(VoxelBoxTools_eventSetValueBox_Parms), Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBoxTools_SetValueBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBoxTools_SetValueBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics
	{
		struct VoxelBoxTools_eventSetValueBoxAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedValues;
			FVoxelIntBox EditedBounds;
			AVoxelWorld* VoxelWorld;
			FVoxelIntBox Bounds;
			float Value;
			bool bMultiThreaded;
			bool bRecordModifiedValues;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetValueBoxAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetValueBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetValueBoxAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetValueBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetValueBoxAsync_Parms*)Obj)->bRecordModifiedValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetValueBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelBoxTools_eventSetValueBoxAsync_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelBoxTools_eventSetValueBoxAsync_Parms), &Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBoxAsync_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBoxAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBoxAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBoxAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBoxAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBoxAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelBoxTools_eventSetValueBoxAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bRecordModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_VoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_EditedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_ModifiedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_ModifiedValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Box Tools" },
		{ "Comment", "/**\n\x09 * Set the density in a box\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SetValueBox, SetValueBoxAsync and FVoxelBoxToolsImpl::SetValueBox\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09""Bounds               \x09The bounds of the box\n\x09 * @param\x09Value                \x09The density to set\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelBoxTools.h" },
		{ "ToolTip", "Set the density in a box\nRuns asynchronously in a background thread\n@see SetValueBox, SetValueBoxAsync and FVoxelBoxToolsImpl::SetValueBox\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Bounds                  The bounds of the box\n@param       Value                   The density to set\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelBoxTools, nullptr, "SetValueBoxAsync", nullptr, nullptr, sizeof(VoxelBoxTools_eventSetValueBoxAsync_Parms), Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelBoxTools_NoRegister()
	{
		return UVoxelBoxTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBoxTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBoxTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelToolsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelBoxTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelBoxTools_AddBox, "AddBox" }, // 3615347469
		{ &Z_Construct_UFunction_UVoxelBoxTools_AddBoxAsync, "AddBoxAsync" }, // 146250724
		{ &Z_Construct_UFunction_UVoxelBoxTools_RemoveBox, "RemoveBox" }, // 3094620807
		{ &Z_Construct_UFunction_UVoxelBoxTools_RemoveBoxAsync, "RemoveBoxAsync" }, // 947989692
		{ &Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBox, "SetMaterialBox" }, // 2252247834
		{ &Z_Construct_UFunction_UVoxelBoxTools_SetMaterialBoxAsync, "SetMaterialBoxAsync" }, // 903435267
		{ &Z_Construct_UFunction_UVoxelBoxTools_SetValueBox, "SetValueBox" }, // 40998322
		{ &Z_Construct_UFunction_UVoxelBoxTools_SetValueBoxAsync, "SetValueBoxAsync" }, // 392436153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBoxTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Gen/VoxelBoxTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelBoxTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBoxTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBoxTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBoxTools_Statics::ClassParams = {
		&UVoxelBoxTools::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBoxTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBoxTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBoxTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBoxTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBoxTools, 1854138051);
	template<> VOXEL_API UClass* StaticClass<UVoxelBoxTools>()
	{
		return UVoxelBoxTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBoxTools(Z_Construct_UClass_UVoxelBoxTools, &UVoxelBoxTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelBoxTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBoxTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
