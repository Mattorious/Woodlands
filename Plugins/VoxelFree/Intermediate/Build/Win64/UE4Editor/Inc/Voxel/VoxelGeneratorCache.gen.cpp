// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorCache() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
// End Cross Module References
	void UVoxelGeneratorCacheSubsystemProxy::StaticRegisterNativesUVoxelGeneratorCacheSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_NoRegister()
	{
		return UVoxelGeneratorCacheSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelStaticSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorCache.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorCacheSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_Statics::ClassParams = {
		&UVoxelGeneratorCacheSubsystemProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGeneratorCacheSubsystemProxy, 14831597);
	template<> VOXEL_API UClass* StaticClass<UVoxelGeneratorCacheSubsystemProxy>()
	{
		return UVoxelGeneratorCacheSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGeneratorCacheSubsystemProxy(Z_Construct_UClass_UVoxelGeneratorCacheSubsystemProxy, &UVoxelGeneratorCacheSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelGeneratorCacheSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorCacheSubsystemProxy);
	DEFINE_FUNCTION(UVoxelGeneratorCache::execMakeTransformableGeneratorInstance)
	{
		P_GET_STRUCT(FVoxelTransformableGeneratorPicker,Z_Param_Picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelTransformableGeneratorInstanceWrapper**)Z_Param__Result=P_THIS->MakeTransformableGeneratorInstance(Z_Param_Picker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorCache::execMakeGeneratorInstance)
	{
		P_GET_STRUCT(FVoxelGeneratorPicker,Z_Param_Picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelGeneratorInstanceWrapper**)Z_Param__Result=P_THIS->MakeGeneratorInstance(Z_Param_Picker);
		P_NATIVE_END;
	}
	void UVoxelGeneratorCache::StaticRegisterNativesUVoxelGeneratorCache()
	{
		UClass* Class = UVoxelGeneratorCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeGeneratorInstance", &UVoxelGeneratorCache::execMakeGeneratorInstance },
			{ "MakeTransformableGeneratorInstance", &UVoxelGeneratorCache::execMakeTransformableGeneratorInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics
	{
		struct VoxelGeneratorCache_eventMakeGeneratorInstance_Parms
		{
			FVoxelGeneratorPicker Picker;
			UVoxelGeneratorInstanceWrapper* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeGeneratorInstance_Parms, Picker), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_Picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/**\n\x09 * Creates (or reuse if possible) a new generator instance\n\x09 *\n\x09 * Among other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
		{ "ToolTip", "Creates (or reuse if possible) a new generator instance\n\nAmong other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorCache, nullptr, "MakeGeneratorInstance", nullptr, nullptr, sizeof(VoxelGeneratorCache_eventMakeGeneratorInstance_Parms), Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics
	{
		struct VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms
		{
			FVoxelTransformableGeneratorPicker Picker;
			UVoxelTransformableGeneratorInstanceWrapper* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms, Picker), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_Picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/**\n\x09 * Creates (or reuse if possible) a new generator instance\n\x09 *\n\x09 * Among other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
		{ "ToolTip", "Creates (or reuse if possible) a new generator instance\n\nAmong other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorCache, nullptr, "MakeTransformableGeneratorInstance", nullptr, nullptr, sizeof(VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms), Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister()
	{
		return UVoxelGeneratorCache::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGeneratorCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGeneratorCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelGeneratorCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance, "MakeGeneratorInstance" }, // 2153525194
		{ &Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance, "MakeTransformableGeneratorInstance" }, // 2441831619
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorCache.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGeneratorCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::ClassParams = {
		&UVoxelGeneratorCache::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGeneratorCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGeneratorCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGeneratorCache, 1496777348);
	template<> VOXEL_API UClass* StaticClass<UVoxelGeneratorCache>()
	{
		return UVoxelGeneratorCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGeneratorCache(Z_Construct_UClass_UVoxelGeneratorCache, &UVoxelGeneratorCache::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelGeneratorCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorCache);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
