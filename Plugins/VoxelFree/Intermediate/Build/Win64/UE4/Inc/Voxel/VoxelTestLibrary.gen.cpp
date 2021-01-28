// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelTestLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTestLibrary() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTestValues();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTestLibrary_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTestLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelTestValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelTestValues_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelTestValues, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelTestValues"), sizeof(FVoxelTestValues), Get_Z_Construct_UScriptStruct_FVoxelTestValues_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelTestValues>()
{
	return FVoxelTestValues::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelTestValues(FVoxelTestValues::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelTestValues"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelTestValues
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelTestValues()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelTestValues")),new UScriptStruct::TCppStructOps<FVoxelTestValues>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelTestValues;
	struct Z_Construct_UScriptStruct_FVoxelTestValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTestValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelTestValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelTestValues>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelTestValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelTestValues",
		sizeof(FVoxelTestValues),
		alignof(FVoxelTestValues),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTestValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTestValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelTestValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelTestValues_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelTestValues"), sizeof(FVoxelTestValues), Get_Z_Construct_UScriptStruct_FVoxelTestValues_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelTestValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelTestValues_Hash() { return 1891189555U; }
	DEFINE_FUNCTION(UVoxelTestLibrary::execTestValues)
	{
		P_GET_STRUCT(FVoxelTestValues,Z_Param_ValuesA);
		P_GET_STRUCT(FVoxelTestValues,Z_Param_ValuesB);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelTestLibrary::TestValues(Z_Param_ValuesA,Z_Param_ValuesB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelTestLibrary::execReadValues)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelTestValues*)Z_Param__Result=UVoxelTestLibrary::ReadValues(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	void UVoxelTestLibrary::StaticRegisterNativesUVoxelTestLibrary()
	{
		UClass* Class = UVoxelTestLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadValues", &UVoxelTestLibrary::execReadValues },
			{ "TestValues", &UVoxelTestLibrary::execTestValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics
	{
		struct VoxelTestLibrary_eventReadValues_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			FVoxelTestValues ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventReadValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelTestValues, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventReadValues_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventReadValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Test" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTestLibrary, nullptr, "ReadValues", nullptr, nullptr, sizeof(VoxelTestLibrary_eventReadValues_Parms), Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTestLibrary_ReadValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics
	{
		struct VoxelTestLibrary_eventTestValues_Parms
		{
			FVoxelTestValues ValuesA;
			FVoxelTestValues ValuesB;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValuesB;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValuesA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesB = { "ValuesB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventTestValues_Parms, ValuesB), Z_Construct_UScriptStruct_FVoxelTestValues, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesA = { "ValuesA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelTestLibrary_eventTestValues_Parms, ValuesA), Z_Construct_UScriptStruct_FVoxelTestValues, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Test" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTestLibrary, nullptr, "TestValues", nullptr, nullptr, sizeof(VoxelTestLibrary_eventTestValues_Parms), Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTestLibrary_TestValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelTestLibrary_NoRegister()
	{
		return UVoxelTestLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTestLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTestLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelTestLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelTestLibrary_ReadValues, "ReadValues" }, // 657571553
		{ &Z_Construct_UFunction_UVoxelTestLibrary_TestValues, "TestValues" }, // 1082760692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTestLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelTestLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTestLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTestLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTestLibrary_Statics::ClassParams = {
		&UVoxelTestLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTestLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTestLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTestLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelTestLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelTestLibrary, 3511746068);
	template<> VOXEL_API UClass* StaticClass<UVoxelTestLibrary>()
	{
		return UVoxelTestLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelTestLibrary(Z_Construct_UClass_UVoxelTestLibrary, &UVoxelTestLibrary::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelTestLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTestLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
