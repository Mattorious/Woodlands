// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelCooking/VoxelCookingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCookingLibrary() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCookingSettings();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelCookingLibrary_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelCookingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCookedData();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelCookingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelCookingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelCookingSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelCookingSettings"), sizeof(FVoxelCookingSettings), Get_Z_Construct_UScriptStruct_FVoxelCookingSettings_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelCookingSettings>()
{
	return FVoxelCookingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelCookingSettings(FVoxelCookingSettings::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelCookingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelCookingSettings
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelCookingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelCookingSettings")),new UScriptStruct::TCppStructOps<FVoxelCookingSettings>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelCookingSettings;
	struct Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCleanCollisionMesh_MetaData[];
#endif
		static void NewProp_bCleanCollisionMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCleanCollisionMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFastCollisionCook_MetaData[];
#endif
		static void NewProp_bFastCollisionCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFastCollisionCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLogProgress_MetaData[];
#endif
		static void NewProp_bLogProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLogProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderOctreeDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenderOctreeDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelCookingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bCleanCollisionMesh_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bCleanCollisionMesh_SetBit(void* Obj)
	{
		((FVoxelCookingSettings*)Obj)->bCleanCollisionMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bCleanCollisionMesh = { "bCleanCollisionMesh", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelCookingSettings), &Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bCleanCollisionMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bCleanCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bCleanCollisionMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bFastCollisionCook_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bFastCollisionCook_SetBit(void* Obj)
	{
		((FVoxelCookingSettings*)Obj)->bFastCollisionCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bFastCollisionCook = { "bFastCollisionCook", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelCookingSettings), &Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bFastCollisionCook_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bFastCollisionCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bFastCollisionCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bLogProgress_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bLogProgress_SetBit(void* Obj)
	{
		((FVoxelCookingSettings*)Obj)->bLogProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bLogProgress = { "bLogProgress", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelCookingSettings), &Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bLogProgress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bLogProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bLogProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelCookingSettings, Generator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_Generator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderType_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderType = { "RenderType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelCookingSettings, RenderType), Z_Construct_UEnum_Voxel_EVoxelRenderType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelCookingSettings, VoxelSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderOctreeDepth_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderOctreeDepth = { "RenderOctreeDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelCookingSettings, RenderOctreeDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderOctreeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderOctreeDepth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bCleanCollisionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bFastCollisionCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_bLogProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_Generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_VoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::NewProp_RenderOctreeDepth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelCookingSettings",
		sizeof(FVoxelCookingSettings),
		alignof(FVoxelCookingSettings),
		Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelCookingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelCookingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelCookingSettings"), sizeof(FVoxelCookingSettings), Get_Z_Construct_UScriptStruct_FVoxelCookingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelCookingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelCookingSettings_Hash() { return 1779352566U; }
	DEFINE_FUNCTION(UVoxelCookingLibrary::execLoadCookedVoxelData)
	{
		P_GET_STRUCT(FVoxelCookedData,Z_Param_CookedData);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelCookingLibrary::LoadCookedVoxelData(Z_Param_CookedData,Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelCookingLibrary::execMakeVoxelCookingSettingsFromVoxelWorld)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelCookingSettings*)Z_Param__Result=UVoxelCookingLibrary::MakeVoxelCookingSettingsFromVoxelWorld(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelCookingLibrary::execCookVoxelDataWithSave)
	{
		P_GET_STRUCT(FVoxelCookingSettings,Z_Param_Settings);
		P_GET_STRUCT(FVoxelUncompressedWorldSave,Z_Param_Save);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelCookedData*)Z_Param__Result=UVoxelCookingLibrary::CookVoxelDataWithSave(Z_Param_Settings,Z_Param_Save);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelCookingLibrary::execCookVoxelData)
	{
		P_GET_STRUCT(FVoxelCookingSettings,Z_Param_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelCookedData*)Z_Param__Result=UVoxelCookingLibrary::CookVoxelData(Z_Param_Settings);
		P_NATIVE_END;
	}
	void UVoxelCookingLibrary::StaticRegisterNativesUVoxelCookingLibrary()
	{
		UClass* Class = UVoxelCookingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CookVoxelData", &UVoxelCookingLibrary::execCookVoxelData },
			{ "CookVoxelDataWithSave", &UVoxelCookingLibrary::execCookVoxelDataWithSave },
			{ "LoadCookedVoxelData", &UVoxelCookingLibrary::execLoadCookedVoxelData },
			{ "MakeVoxelCookingSettingsFromVoxelWorld", &UVoxelCookingLibrary::execMakeVoxelCookingSettingsFromVoxelWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics
	{
		struct VoxelCookingLibrary_eventCookVoxelData_Parms
		{
			FVoxelCookingSettings Settings;
			FVoxelCookedData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelCookingLibrary_eventCookVoxelData_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelCookedData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelCookingLibrary_eventCookVoxelData_Parms, Settings), Z_Construct_UScriptStruct_FVoxelCookingSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Cooking" },
		{ "Comment", "// Cook collision meshes and save the result to VoxelCookedData\n// Can then be loaded using LoadCookedVoxelData\n// Useful for servers\n" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
		{ "ToolTip", "Cook collision meshes and save the result to VoxelCookedData\nCan then be loaded using LoadCookedVoxelData\nUseful for servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelCookingLibrary, nullptr, "CookVoxelData", nullptr, nullptr, sizeof(VoxelCookingLibrary_eventCookVoxelData_Parms), Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics
	{
		struct VoxelCookingLibrary_eventCookVoxelDataWithSave_Parms
		{
			FVoxelCookingSettings Settings;
			FVoxelUncompressedWorldSave Save;
			FVoxelCookedData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Save;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelCookingLibrary_eventCookVoxelDataWithSave_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelCookedData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelCookingLibrary_eventCookVoxelDataWithSave_Parms, Save), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelCookingLibrary_eventCookVoxelDataWithSave_Parms, Settings), Z_Construct_UScriptStruct_FVoxelCookingSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::NewProp_Save,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Cooking" },
		{ "Comment", "// Cook collision meshes and save the result to VoxelCookedData\n// Can then be loaded using LoadCookedVoxelData\n// Useful for servers\n" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
		{ "ToolTip", "Cook collision meshes and save the result to VoxelCookedData\nCan then be loaded using LoadCookedVoxelData\nUseful for servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelCookingLibrary, nullptr, "CookVoxelDataWithSave", nullptr, nullptr, sizeof(VoxelCookingLibrary_eventCookVoxelDataWithSave_Parms), Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics
	{
		struct VoxelCookingLibrary_eventLoadCookedVoxelData_Parms
		{
			FVoxelCookedData CookedData;
			AVoxelWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CookedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelCookingLibrary_eventLoadCookedVoxelData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::NewProp_CookedData = { "CookedData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelCookingLibrary_eventLoadCookedVoxelData_Parms, CookedData), Z_Construct_UScriptStruct_FVoxelCookedData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::NewProp_CookedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Cooking" },
		{ "Comment", "// Loads collision cooked with CookVoxelData\n// The voxel world must not be created: it won't ever be created, collision meshes will be loaded directly\n// Note: Only the voxel world collision settings will be applied\n// Useful for servers\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
		{ "ToolTip", "Loads collision cooked with CookVoxelData\nThe voxel world must not be created: it won't ever be created, collision meshes will be loaded directly\nNote: Only the voxel world collision settings will be applied\nUseful for servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelCookingLibrary, nullptr, "LoadCookedVoxelData", nullptr, nullptr, sizeof(VoxelCookingLibrary_eventLoadCookedVoxelData_Parms), Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics
	{
		struct VoxelCookingLibrary_eventMakeVoxelCookingSettingsFromVoxelWorld_Parms
		{
			AVoxelWorld* World;
			FVoxelCookingSettings ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelCookingLibrary_eventMakeVoxelCookingSettingsFromVoxelWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelCookingSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelCookingLibrary_eventMakeVoxelCookingSettingsFromVoxelWorld_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Cooking" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelCookingLibrary, nullptr, "MakeVoxelCookingSettingsFromVoxelWorld", nullptr, nullptr, sizeof(VoxelCookingLibrary_eventMakeVoxelCookingSettingsFromVoxelWorld_Parms), Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelCookingLibrary_NoRegister()
	{
		return UVoxelCookingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelCookingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelCookingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelCookingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelData, "CookVoxelData" }, // 484340144
		{ &Z_Construct_UFunction_UVoxelCookingLibrary_CookVoxelDataWithSave, "CookVoxelDataWithSave" }, // 578488633
		{ &Z_Construct_UFunction_UVoxelCookingLibrary_LoadCookedVoxelData, "LoadCookedVoxelData" }, // 931766148
		{ &Z_Construct_UFunction_UVoxelCookingLibrary_MakeVoxelCookingSettingsFromVoxelWorld, "MakeVoxelCookingSettingsFromVoxelWorld" }, // 2527885613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCookingLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCooking/VoxelCookingLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelCooking/VoxelCookingLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelCookingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelCookingLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelCookingLibrary_Statics::ClassParams = {
		&UVoxelCookingLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelCookingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCookingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelCookingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelCookingLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelCookingLibrary, 3854056552);
	template<> VOXEL_API UClass* StaticClass<UVoxelCookingLibrary>()
	{
		return UVoxelCookingLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelCookingLibrary(Z_Construct_UClass_UVoxelCookingLibrary, &UVoxelCookingLibrary::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelCookingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelCookingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
