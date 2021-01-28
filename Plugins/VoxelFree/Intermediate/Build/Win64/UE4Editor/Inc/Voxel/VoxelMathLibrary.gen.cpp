// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelMathLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMathLibrary() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelHaltonStream();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMathLibrary_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMathLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FVoxelHaltonStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelHaltonStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelHaltonStream, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelHaltonStream"), sizeof(FVoxelHaltonStream), Get_Z_Construct_UScriptStruct_FVoxelHaltonStream_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelHaltonStream>()
{
	return FVoxelHaltonStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelHaltonStream(FVoxelHaltonStream::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelHaltonStream"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelHaltonStream
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelHaltonStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelHaltonStream")),new UScriptStruct::TCppStructOps<FVoxelHaltonStream>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelHaltonStream;
	struct Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "Voxel.VoxelMathLibrary.MakeHaltonStream" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelHaltonStream>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHaltonStream, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed = { "InitialSeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHaltonStream, InitialSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelHaltonStream",
		sizeof(FVoxelHaltonStream),
		alignof(FVoxelHaltonStream),
		Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelHaltonStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelHaltonStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelHaltonStream"), sizeof(FVoxelHaltonStream), Get_Z_Construct_UScriptStruct_FVoxelHaltonStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelHaltonStream_Hash() { return 3731983632U; }
	DEFINE_FUNCTION(UVoxelMathLibrary::execGetHalton3D)
	{
		P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVoxelMathLibrary::GetHalton3D(Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execGetHalton2D)
	{
		P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UVoxelMathLibrary::GetHalton2D(Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execGetHalton1D)
	{
		P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVoxelMathLibrary::GetHalton1D(Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execResetHaltonStream)
	{
		P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelMathLibrary::ResetHaltonStream(Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execMakeHaltonStream)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InitialSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelHaltonStream*)Z_Param__Result=UVoxelMathLibrary::MakeHaltonStream(Z_Param_InitialSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMathLibrary::execGetUnitVectorFromRandom)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Random);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVoxelMathLibrary::GetUnitVectorFromRandom(Z_Param_Random);
		P_NATIVE_END;
	}
	void UVoxelMathLibrary::StaticRegisterNativesUVoxelMathLibrary()
	{
		UClass* Class = UVoxelMathLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHalton1D", &UVoxelMathLibrary::execGetHalton1D },
			{ "GetHalton2D", &UVoxelMathLibrary::execGetHalton2D },
			{ "GetHalton3D", &UVoxelMathLibrary::execGetHalton3D },
			{ "GetUnitVectorFromRandom", &UVoxelMathLibrary::execGetUnitVectorFromRandom },
			{ "MakeHaltonStream", &UVoxelMathLibrary::execMakeHaltonStream },
			{ "ResetHaltonStream", &UVoxelMathLibrary::execResetHaltonStream },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics
	{
		struct VoxelMathLibrary_eventGetHalton1D_Parms
		{
			FVoxelHaltonStream Stream;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton1D_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetHalton1D", nullptr, nullptr, sizeof(VoxelMathLibrary_eventGetHalton1D_Parms), Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics
	{
		struct VoxelMathLibrary_eventGetHalton2D_Parms
		{
			FVoxelHaltonStream Stream;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton2D_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetHalton2D", nullptr, nullptr, sizeof(VoxelMathLibrary_eventGetHalton2D_Parms), Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics
	{
		struct VoxelMathLibrary_eventGetHalton3D_Parms
		{
			FVoxelHaltonStream Stream;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton3D_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetHalton3D", nullptr, nullptr, sizeof(VoxelMathLibrary_eventGetHalton3D_Parms), Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics
	{
		struct VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms
		{
			FVector2D Random;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Random;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_Random = { "Random", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms, Random), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_Random,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "Comment", "/**\n\x09 * Generates a random position on the unit sphere, given some random input between 0 and 1\n\x09 * @param\x09Random\x09\x09Random values, between 0 and 1. Can use RandomFloat, but also more complex noises like Halton or Sobol\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
		{ "ToolTip", "Generates a random position on the unit sphere, given some random input between 0 and 1\n@param       Random          Random values, between 0 and 1. Can use RandomFloat, but also more complex noises like Halton or Sobol" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetUnitVectorFromRandom", nullptr, nullptr, sizeof(VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms), Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics
	{
		struct VoxelMathLibrary_eventMakeHaltonStream_Parms
		{
			int32 InitialSeed;
			FVoxelHaltonStream ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventMakeHaltonStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_InitialSeed = { "InitialSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventMakeHaltonStream_Parms, InitialSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_InitialSeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "MakeHaltonStream", nullptr, nullptr, sizeof(VoxelMathLibrary_eventMakeHaltonStream_Parms), Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics
	{
		struct VoxelMathLibrary_eventResetHaltonStream_Parms
		{
			FVoxelHaltonStream Stream;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMathLibrary_eventResetHaltonStream_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "ResetHaltonStream", nullptr, nullptr, sizeof(VoxelMathLibrary_eventResetHaltonStream_Parms), Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelMathLibrary_NoRegister()
	{
		return UVoxelMathLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMathLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMathLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelMathLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D, "GetHalton1D" }, // 3429689570
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D, "GetHalton2D" }, // 3814894846
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D, "GetHalton3D" }, // 3803326968
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom, "GetUnitVectorFromRandom" }, // 61163146
		{ &Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream, "MakeHaltonStream" }, // 2664556363
		{ &Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream, "ResetHaltonStream" }, // 595462355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMathLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelMathLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMathLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMathLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMathLibrary_Statics::ClassParams = {
		&UVoxelMathLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMathLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMathLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMathLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMathLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMathLibrary, 2178411884);
	template<> VOXEL_API UClass* StaticClass<UVoxelMathLibrary>()
	{
		return UVoxelMathLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMathLibrary(Z_Construct_UClass_UVoxelMathLibrary, &UVoxelMathLibrary::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMathLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMathLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
