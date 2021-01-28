// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelFoliage/VoxelFoliageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFoliageActor() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelFoliageActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelFoliageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AVoxelFoliageActor::StaticRegisterNativesAVoxelFoliageActor()
	{
	}
	UClass* Z_Construct_UClass_AVoxelFoliageActor_NoRegister()
	{
		return AVoxelFoliageActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelFoliageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsRelevancyComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsRelevancyComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallySetMesh_MetaData[];
#endif
		static void NewProp_bAutomaticallySetMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallySetMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelFoliageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelFoliageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelFoliage/VoxelFoliageActor.h" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_PhysicsRelevancyComponent_MetaData[] = {
		{ "Category", "Voxel Foliage Actor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_PhysicsRelevancyComponent = { "PhysicsRelevancyComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelFoliageActor, PhysicsRelevancyComponent), Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_PhysicsRelevancyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_PhysicsRelevancyComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Voxel Foliage Actor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelFoliageActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_bAutomaticallySetMesh_MetaData[] = {
		{ "Category", "Voxel Foliage Actor" },
		{ "Comment", "// If true, will set the StaticMeshComponent mesh (and materials) based on the foliage mesh\n" },
		{ "ModuleRelativePath", "Public/VoxelFoliage/VoxelFoliageActor.h" },
		{ "ToolTip", "If true, will set the StaticMeshComponent mesh (and materials) based on the foliage mesh" },
	};
#endif
	void Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_bAutomaticallySetMesh_SetBit(void* Obj)
	{
		((AVoxelFoliageActor*)Obj)->bAutomaticallySetMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_bAutomaticallySetMesh = { "bAutomaticallySetMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelFoliageActor), &Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_bAutomaticallySetMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_bAutomaticallySetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_bAutomaticallySetMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelFoliageActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_PhysicsRelevancyComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelFoliageActor_Statics::NewProp_bAutomaticallySetMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelFoliageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelFoliageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelFoliageActor_Statics::ClassParams = {
		&AVoxelFoliageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelFoliageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelFoliageActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelFoliageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelFoliageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelFoliageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelFoliageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelFoliageActor, 610331585);
	template<> VOXEL_API UClass* StaticClass<AVoxelFoliageActor>()
	{
		return AVoxelFoliageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelFoliageActor(Z_Construct_UClass_AVoxelFoliageActor, &AVoxelFoliageActor::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelFoliageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelFoliageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
