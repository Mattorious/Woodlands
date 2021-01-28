// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemManager() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelDataItemConstructionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelDataItemConstructionInfo"), sizeof(FVoxelDataItemConstructionInfo), Get_Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelDataItemConstructionInfo>()
{
	return FVoxelDataItemConstructionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelDataItemConstructionInfo(FVoxelDataItemConstructionInfo::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelDataItemConstructionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelDataItemConstructionInfo
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelDataItemConstructionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelDataItemConstructionInfo")),new UScriptStruct::TCppStructOps<FVoxelDataItemConstructionInfo>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelDataItemConstructionInfo;
	struct Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelDataItemConstructionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxel32BitMask" },
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelDataItemConstructionInfo",
		sizeof(FVoxelDataItemConstructionInfo),
		alignof(FVoxelDataItemConstructionInfo),
		Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelDataItemConstructionInfo"), sizeof(FVoxelDataItemConstructionInfo), Get_Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Hash() { return 1982019403U; }
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execOnClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClear_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execOnGenerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGenerate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execGetGeneratorCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelGeneratorCache**)Z_Param__Result=P_THIS->GetGeneratorCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execDrawDebugPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugPoint(Z_Param_Position,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execDrawDebugLine)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugLine(Z_Param_Start,Z_Param_End,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelPlaceableItemManager::execAddDataItem)
	{
		P_GET_STRUCT(FVoxelDataItemConstructionInfo,Z_Param_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDataItem(Z_Param_Info);
		P_NATIVE_END;
	}
	static FName NAME_UVoxelPlaceableItemManager_OnClear = FName(TEXT("OnClear"));
	void UVoxelPlaceableItemManager::OnClear()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVoxelPlaceableItemManager_OnClear),NULL);
	}
	static FName NAME_UVoxelPlaceableItemManager_OnGenerate = FName(TEXT("OnGenerate"));
	void UVoxelPlaceableItemManager::OnGenerate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVoxelPlaceableItemManager_OnGenerate),NULL);
	}
	void UVoxelPlaceableItemManager::StaticRegisterNativesUVoxelPlaceableItemManager()
	{
		UClass* Class = UVoxelPlaceableItemManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDataItem", &UVoxelPlaceableItemManager::execAddDataItem },
			{ "DrawDebugLine", &UVoxelPlaceableItemManager::execDrawDebugLine },
			{ "DrawDebugPoint", &UVoxelPlaceableItemManager::execDrawDebugPoint },
			{ "GetGeneratorCache", &UVoxelPlaceableItemManager::execGetGeneratorCache },
			{ "OnClear", &UVoxelPlaceableItemManager::execOnClear },
			{ "OnGenerate", &UVoxelPlaceableItemManager::execOnGenerate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics
	{
		struct VoxelPlaceableItemManager_eventAddDataItem_Parms
		{
			FVoxelDataItemConstructionInfo Info;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventAddDataItem_Parms, Info), Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "Comment", "// Do not call this directly: call the respective Add Data Item instead!\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Do not call this directly: call the respective Add Data Item instead!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "AddDataItem", nullptr, nullptr, sizeof(VoxelPlaceableItemManager_eventAddDataItem_Parms), Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics
	{
		struct VoxelPlaceableItemManager_eventDrawDebugLine_Parms
		{
			FVector Start;
			FVector End;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugLine_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugLine_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugLine_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "Comment", "/**\n\x09 * Draws a line in the world & in the voxel graph preview\n\x09 * @param\x09Start\x09\x09The start position in voxels\n\x09 * @param\x09""End\x09\x09\x09The end position in voxels\n\x09 * @param\x09""Color\x09\x09The color\n\x09 */" },
		{ "CPP_Default_Color", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Draws a line in the world & in the voxel graph preview\n@param       Start           The start position in voxels\n@param       End                     The end position in voxels\n@param       Color           The color" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "DrawDebugLine", nullptr, nullptr, sizeof(VoxelPlaceableItemManager_eventDrawDebugLine_Parms), Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics
	{
		struct VoxelPlaceableItemManager_eventDrawDebugPoint_Parms
		{
			FVector Position;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugPoint_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "Comment", "/**\n\x09 * Draws a point in the world & in the voxel graph preview\n\x09 * @param\x09Position\x09The position in voxels\n\x09 * @param\x09""Color\x09\x09The color\n\x09 */" },
		{ "CPP_Default_Color", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Draws a point in the world & in the voxel graph preview\n@param       Position        The position in voxels\n@param       Color           The color" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "DrawDebugPoint", nullptr, nullptr, sizeof(VoxelPlaceableItemManager_eventDrawDebugPoint_Parms), Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics
	{
		struct VoxelPlaceableItemManager_eventGetGeneratorCache_Parms
		{
			UVoxelGeneratorCache* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventGetGeneratorCache_Parms, ReturnValue), Z_Construct_UClass_UVoxelGeneratorCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "GetGeneratorCache", nullptr, nullptr, sizeof(VoxelPlaceableItemManager_eventGetGeneratorCache_Parms), Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "OnClear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "OnGenerate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister()
	{
		return UVoxelPlaceableItemManager::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPlaceableItemManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratorCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataItemInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataItemInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataItemInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugBounds_MetaData[];
#endif
		static void NewProp_bDebugBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[];
#endif
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem, "AddDataItem" }, // 3572531616
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine, "DrawDebugLine" }, // 2871131787
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint, "DrawDebugPoint" }, // 1202592117
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache, "GetGeneratorCache" }, // 358224463
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear, "OnClear" }, // 3694802651
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate, "OnGenerate" }, // 2894421635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache = { "GeneratorCache", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelPlaceableItemManager, GeneratorCache), Z_Construct_UClass_UVoxelGeneratorCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_MetaData[] = {
		{ "Comment", "// Transient as otherwise it's serialized in the graph preview settings\x09\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Transient as otherwise it's serialized in the graph preview settings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos = { "DataItemInfos", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelPlaceableItemManager, DataItemInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_Inner = { "DataItemInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, will show all the data items bounds\n" },
		{ "EditCondition", "bEnableDebug" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "If true, will show all the data items bounds" },
	};
#endif
	void Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_SetBit(void* Obj)
	{
		((UVoxelPlaceableItemManager*)Obj)->bDebugBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds = { "bDebugBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelPlaceableItemManager), &Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((UVoxelPlaceableItemManager*)Obj)->bEnableDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelPlaceableItemManager), &Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPlaceableItemManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::ClassParams = {
		&UVoxelPlaceableItemManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPlaceableItemManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelPlaceableItemManager, 94670789);
	template<> VOXEL_API UClass* StaticClass<UVoxelPlaceableItemManager>()
	{
		return UVoxelPlaceableItemManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelPlaceableItemManager(Z_Construct_UClass_UVoxelPlaceableItemManager, &UVoxelPlaceableItemManager::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelPlaceableItemManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPlaceableItemManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
