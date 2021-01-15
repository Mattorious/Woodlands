// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/Prefab/Random/PrefabRandomizerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabRandomizerActor() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UFunction* Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabRandomizer_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabRandomizer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Prefab/Random/PrefabRandomizerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PrefabricatorRuntime, nullptr, "PrefabRandomizerCompleteBindableEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(APrefabRandomizer::execRandomize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Randomize(Z_Param_InSeed);
		P_NATIVE_END;
	}
	void APrefabRandomizer::StaticRegisterNativesAPrefabRandomizer()
	{
		UClass* Class = APrefabRandomizer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Randomize", &APrefabRandomizer::execRandomize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics
	{
		struct PrefabRandomizer_eventRandomize_Parms
		{
			int32 InSeed;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabRandomizer_eventRandomize_Parms, InSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::NewProp_InSeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prefabricator" },
		{ "ModuleRelativePath", "Public/Prefab/Random/PrefabRandomizerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrefabRandomizer, nullptr, "Randomize", nullptr, nullptr, sizeof(PrefabRandomizer_eventRandomize_Parms), Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrefabRandomizer_Randomize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APrefabRandomizer_NoRegister()
	{
		return APrefabRandomizer::StaticClass();
	}
	struct Z_Construct_UClass_APrefabRandomizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToRandomize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToRandomize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToRandomize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFastSyncBuild_MetaData[];
#endif
		static void NewProp_bFastSyncBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFastSyncBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRandomizationComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRandomizationComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBuildTimePerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBuildTimePerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeedOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeOnBeginPlay_MetaData[];
#endif
		static void NewProp_bRandomizeOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeOnBeginPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrefabRandomizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APrefabRandomizer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APrefabRandomizer_Randomize, "Randomize" }, // 3480408867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Prefab/Random/PrefabRandomizerActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Prefab/Random/PrefabRandomizerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_ActorsToRandomize_MetaData[] = {
		{ "Category", "Prefabricator" },
		{ "Comment", "/** If left empty, everything in the level will be randomized.  If set, only the actors in the list will be randomized. */" },
		{ "ModuleRelativePath", "Public/Prefab/Random/PrefabRandomizerActor.h" },
		{ "ToolTip", "If left empty, everything in the level will be randomized.  If set, only the actors in the list will be randomized." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_ActorsToRandomize = { "ActorsToRandomize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, ActorsToRandomize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_ActorsToRandomize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_ActorsToRandomize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_ActorsToRandomize_Inner = { "ActorsToRandomize", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APrefabActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_MetaData[] = {
		{ "Category", "Prefabricator" },
		{ "ModuleRelativePath", "Public/Prefab/Random/PrefabRandomizerActor.h" },
	};
#endif
	void Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_SetBit(void* Obj)
	{
		((APrefabRandomizer*)Obj)->bFastSyncBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild = { "bFastSyncBuild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APrefabRandomizer), &Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete_MetaData[] = {
		{ "Category", "Prefabricator" },
		{ "ModuleRelativePath", "Public/Prefab/Random/PrefabRandomizerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete = { "OnRandomizationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, OnRandomizationComplete), Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame_MetaData[] = {
		{ "Category", "Prefabricator" },
		{ "ModuleRelativePath", "Public/Prefab/Random/PrefabRandomizerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame = { "MaxBuildTimePerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, MaxBuildTimePerFrame), METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset_MetaData[] = {
		{ "Category", "Prefabricator" },
		{ "ModuleRelativePath", "Public/Prefab/Random/PrefabRandomizerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset = { "SeedOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, SeedOffset), METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bRandomizeOnBeginPlay_MetaData[] = {
		{ "Category", "Prefabricator" },
		{ "ModuleRelativePath", "Public/Prefab/Random/PrefabRandomizerActor.h" },
	};
#endif
	void Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bRandomizeOnBeginPlay_SetBit(void* Obj)
	{
		((APrefabRandomizer*)Obj)->bRandomizeOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bRandomizeOnBeginPlay = { "bRandomizeOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APrefabRandomizer), &Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bRandomizeOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bRandomizeOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bRandomizeOnBeginPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrefabRandomizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_ActorsToRandomize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_ActorsToRandomize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bRandomizeOnBeginPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrefabRandomizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrefabRandomizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrefabRandomizer_Statics::ClassParams = {
		&APrefabRandomizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APrefabRandomizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrefabRandomizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrefabRandomizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrefabRandomizer, 1144164686);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<APrefabRandomizer>()
	{
		return APrefabRandomizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrefabRandomizer(Z_Construct_UClass_APrefabRandomizer, &APrefabRandomizer::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("APrefabRandomizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrefabRandomizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
