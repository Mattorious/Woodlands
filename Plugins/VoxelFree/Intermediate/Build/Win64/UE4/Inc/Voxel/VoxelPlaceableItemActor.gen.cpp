// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemActor() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVoxelPlaceableItemActor::execK2_GetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->K2_GetPriority_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelPlaceableItemActor::execK2_AddItemToWorld)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddItemToWorld_Implementation(Z_Param_World);
		P_NATIVE_END;
	}
	static FName NAME_AVoxelPlaceableItemActor_K2_AddItemToWorld = FName(TEXT("K2_AddItemToWorld"));
	void AVoxelPlaceableItemActor::K2_AddItemToWorld(AVoxelWorld* World)
	{
		VoxelPlaceableItemActor_eventK2_AddItemToWorld_Parms Parms;
		Parms.World=World;
		ProcessEvent(FindFunctionChecked(NAME_AVoxelPlaceableItemActor_K2_AddItemToWorld),&Parms);
	}
	static FName NAME_AVoxelPlaceableItemActor_K2_GetPriority = FName(TEXT("K2_GetPriority"));
	int32 AVoxelPlaceableItemActor::K2_GetPriority() const
	{
		VoxelPlaceableItemActor_eventK2_GetPriority_Parms Parms;
		const_cast<AVoxelPlaceableItemActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AVoxelPlaceableItemActor_K2_GetPriority),&Parms);
		return Parms.ReturnValue;
	}
	void AVoxelPlaceableItemActor::StaticRegisterNativesAVoxelPlaceableItemActor()
	{
		UClass* Class = AVoxelPlaceableItemActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_AddItemToWorld", &AVoxelPlaceableItemActor::execK2_AddItemToWorld },
			{ "K2_GetPriority", &AVoxelPlaceableItemActor::execK2_GetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemActor_eventK2_AddItemToWorld_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "AddItemToWorld" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelPlaceableItemActor, nullptr, "K2_AddItemToWorld", nullptr, nullptr, sizeof(VoxelPlaceableItemActor_eventK2_AddItemToWorld_Parms), Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemActor_eventK2_GetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "GetPriority" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelPlaceableItemActor, nullptr, "K2_GetPriority", nullptr, nullptr, sizeof(VoxelPlaceableItemActor_eventK2_GetPriority_Parms), Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVoxelPlaceableItemActor_NoRegister()
	{
		return AVoxelPlaceableItemActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelPlaceableItemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyImportIntoPreviewWorld_MetaData[];
#endif
		static void NewProp_bOnlyImportIntoPreviewWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyImportIntoPreviewWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld, "K2_AddItemToWorld" }, // 4174955440
		{ &Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority, "K2_GetPriority" }, // 3113176711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Placeable Item Actor" },
		{ "Comment", "// If true, will only affect PreviewWorld. If false, will affect all the voxel worlds spawned into the scene\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
		{ "ToolTip", "If true, will only affect PreviewWorld. If false, will affect all the voxel worlds spawned into the scene" },
	};
#endif
	void Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_SetBit(void* Obj)
	{
		((AVoxelPlaceableItemActor*)Obj)->bOnlyImportIntoPreviewWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld = { "bOnlyImportIntoPreviewWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelPlaceableItemActor), &Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Placeable Item Actor" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld = { "PreviewWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelPlaceableItemActor, PreviewWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelPlaceableItemActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::ClassParams = {
		&AVoxelPlaceableItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelPlaceableItemActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelPlaceableItemActor, 1841495643);
	template<> VOXEL_API UClass* StaticClass<AVoxelPlaceableItemActor>()
	{
		return AVoxelPlaceableItemActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelPlaceableItemActor(Z_Construct_UClass_AVoxelPlaceableItemActor, &AVoxelPlaceableItemActor::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelPlaceableItemActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelPlaceableItemActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
