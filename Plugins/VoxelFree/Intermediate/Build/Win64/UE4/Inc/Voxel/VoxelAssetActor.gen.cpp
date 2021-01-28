// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAssetActor() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelAssetActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelAssetActor();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
// End Cross Module References
	static UEnum* EVoxelAssetActorPreviewUpdateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelAssetActorPreviewUpdateType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelAssetActorPreviewUpdateType>()
	{
		return EVoxelAssetActorPreviewUpdateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelAssetActorPreviewUpdateType(EVoxelAssetActorPreviewUpdateType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelAssetActorPreviewUpdateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Hash() { return 2885339784U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelAssetActorPreviewUpdateType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelAssetActorPreviewUpdateType::Manually", (int64)EVoxelAssetActorPreviewUpdateType::Manually },
				{ "EVoxelAssetActorPreviewUpdateType::EndOfMove", (int64)EVoxelAssetActorPreviewUpdateType::EndOfMove },
				{ "EVoxelAssetActorPreviewUpdateType::RealTime", (int64)EVoxelAssetActorPreviewUpdateType::RealTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EndOfMove.Comment", "// Will update after each move\n" },
				{ "EndOfMove.Name", "EVoxelAssetActorPreviewUpdateType::EndOfMove" },
				{ "EndOfMove.ToolTip", "Will update after each move" },
				{ "Manually.Comment", "// Will only update when Update is clicked, or when a property is changed\n" },
				{ "Manually.Name", "EVoxelAssetActorPreviewUpdateType::Manually" },
				{ "Manually.ToolTip", "Will only update when Update is clicked, or when a property is changed" },
				{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
				{ "RealTime.Comment", "// Will update while moving\n" },
				{ "RealTime.Name", "EVoxelAssetActorPreviewUpdateType::RealTime" },
				{ "RealTime.ToolTip", "Will update while moving" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelAssetActorPreviewUpdateType",
				"EVoxelAssetActorPreviewUpdateType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAssetActorPrimitiveComponent::StaticRegisterNativesUAssetActorPrimitiveComponent()
	{
	}
	UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent_NoRegister()
	{
		return UAssetActorPrimitiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetActorPrimitiveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::ClassParams = {
		&UAssetActorPrimitiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetActorPrimitiveComponent, 2627817328);
	template<> VOXEL_API UClass* StaticClass<UAssetActorPrimitiveComponent>()
	{
		return UAssetActorPrimitiveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetActorPrimitiveComponent(Z_Construct_UClass_UAssetActorPrimitiveComponent, &UAssetActorPrimitiveComponent::StaticClass, TEXT("/Script/Voxel"), TEXT("UAssetActorPrimitiveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetActorPrimitiveComponent);
	void AVoxelAssetActor::StaticRegisterNativesAVoxelAssetActor()
	{
	}
	UClass* Z_Construct_UClass_AVoxelAssetActor_NoRegister()
	{
		return AVoxelAssetActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelAssetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPreviewChunks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxPreviewChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoundAssetRotation_MetaData[];
#endif
		static void NewProp_bRoundAssetRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoundAssetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoundAssetPosition_MetaData[];
#endif
		static void NewProp_bRoundAssetPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoundAssetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UpdateType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulatePhysics_MetaData[];
#endif
		static void NewProp_bSimulatePhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulatePhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnNewVoxelWorld_MetaData[];
#endif
		static void NewProp_bSpawnNewVoxelWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnNewVoxelWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubtractiveAsset_MetaData[];
#endif
		static void NewProp_bSubtractiveAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtractiveAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[];
#endif
		static void NewProp_bImportAsReference_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAssetBounds_MetaData[];
#endif
		static void NewProp_bOverrideAssetBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAssetBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelAssetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoxelPlaceableItemActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Tick Replication Input Actor Rendering HOLD LOD Cooking Collision" },
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, PrimitiveComponent), Z_Construct_UClass_UAssetActorPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// Increase this if you want a higher quality preview\n// Be careful: might freeze Unreal if too high!\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "Increase this if you want a higher quality preview\nBe careful: might freeze Unreal if too high!" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks = { "MaxPreviewChunks", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, MaxPreviewChunks), METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// If true, the voxel asset actor rotation will be rounded to the nearest valid rotation (90/180/-90)\n// Always on in cubic mode\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "If true, the voxel asset actor rotation will be rounded to the nearest valid rotation (90/180/-90)\nAlways on in cubic mode" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bRoundAssetRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation = { "bRoundAssetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// If true, the voxel asset actor position will be rounded to the nearest voxel position when moved\n// Always on in cubic mode\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "If true, the voxel asset actor position will be rounded to the nearest voxel position when moved\nAlways on in cubic mode" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bRoundAssetPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition = { "bRoundAssetPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType = { "UpdateType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, UpdateType), Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD_MetaData[] = {
		{ "Category", "Preview" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "Comment", "// The lower, the better looking but the slower\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "The lower, the better looking but the slower" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD = { "PreviewLOD", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, PreviewLOD), METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSimulatePhysics_MetaData[] = {
		{ "Category", "Voxel World" },
		{ "EditCondition", "bSpawnNewVoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSimulatePhysics_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bSimulatePhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSimulatePhysics = { "bSimulatePhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSimulatePhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSimulatePhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSimulatePhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSpawnNewVoxelWorld_MetaData[] = {
		{ "Category", "Voxel World" },
		{ "Comment", "// If true, will not add to any voxel world and will spawn a new one instead\n// Useful for physics\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "If true, will not add to any voxel world and will spawn a new one instead\nUseful for physics" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSpawnNewVoxelWorld_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bSpawnNewVoxelWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSpawnNewVoxelWorld = { "bSpawnNewVoxelWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSpawnNewVoxelWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSpawnNewVoxelWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSpawnNewVoxelWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_MetaData[] = {
		{ "Category", "Asset Actor" },
		{ "EditCondition", "!bImportAsReference" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_MetaData[] = {
		{ "Category", "Asset Actor" },
		{ "EditCondition", "!bImportAsReference" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bSubtractiveAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset = { "bSubtractiveAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_MetaData[] = {
		{ "Category", "Asset Actor" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bImportAsReference = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds_MetaData[] = {
		{ "Category", "Asset Actor" },
		{ "EditCondition", "bOverrideAssetBounds" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds = { "AssetBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, AssetBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_MetaData[] = {
		{ "Category", "Asset Actor" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_SetBit(void* Obj)
	{
		((AVoxelAssetActor*)Obj)->bOverrideAssetBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds = { "bOverrideAssetBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Asset Actor" },
		{ "Comment", "// Higher priority assets will be on top\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ToolTip", "Higher priority assets will be on top" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, Priority), METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Asset Actor" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelAssetActor, Generator), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSimulatePhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSpawnNewVoxelWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelAssetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelAssetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelAssetActor_Statics::ClassParams = {
		&AVoxelAssetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelAssetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelAssetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelAssetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelAssetActor, 845851640);
	template<> VOXEL_API UClass* StaticClass<AVoxelAssetActor>()
	{
		return AVoxelAssetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelAssetActor(Z_Construct_UClass_AVoxelAssetActor, &AVoxelAssetActor::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelAssetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelAssetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
