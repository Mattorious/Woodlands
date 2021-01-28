// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/VoxelDebugEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDebugEditor() {}
// Cross Module References
	VOXELEDITOR_API UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXELEDITOR_API UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugType();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_Base_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData();
// End Cross Module References
	static UEnum* EVoxelDebugSliceAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis, Z_Construct_UPackage__Script_VoxelEditor(), TEXT("EVoxelDebugSliceAxis"));
		}
		return Singleton;
	}
	template<> VOXELEDITOR_API UEnum* StaticEnum<EVoxelDebugSliceAxis>()
	{
		return EVoxelDebugSliceAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelDebugSliceAxis(EVoxelDebugSliceAxis_StaticEnum, TEXT("/Script/VoxelEditor"), TEXT("EVoxelDebugSliceAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Hash() { return 2010159103U; }
	UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelDebugSliceAxis"), 0, Get_Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelDebugSliceAxis::X", (int64)EVoxelDebugSliceAxis::X },
				{ "EVoxelDebugSliceAxis::Y", (int64)EVoxelDebugSliceAxis::Y },
				{ "EVoxelDebugSliceAxis::Z", (int64)EVoxelDebugSliceAxis::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
				{ "X.Name", "EVoxelDebugSliceAxis::X" },
				{ "Y.Name", "EVoxelDebugSliceAxis::Y" },
				{ "Z.Name", "EVoxelDebugSliceAxis::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelEditor,
				nullptr,
				"EVoxelDebugSliceAxis",
				"EVoxelDebugSliceAxis",
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
	static UEnum* EVoxelDebugType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelEditor_EVoxelDebugType, Z_Construct_UPackage__Script_VoxelEditor(), TEXT("EVoxelDebugType"));
		}
		return Singleton;
	}
	template<> VOXELEDITOR_API UEnum* StaticEnum<EVoxelDebugType>()
	{
		return EVoxelDebugType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelDebugType(EVoxelDebugType_StaticEnum, TEXT("/Script/VoxelEditor"), TEXT("EVoxelDebugType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Hash() { return 4054851446U; }
	UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelDebugType"), 0, Get_Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelDebugType::JumpFlood", (int64)EVoxelDebugType::JumpFlood },
				{ "EVoxelDebugType::CustomData", (int64)EVoxelDebugType::CustomData },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CustomData.Name", "EVoxelDebugType::CustomData" },
				{ "JumpFlood.Name", "EVoxelDebugType::JumpFlood" },
				{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelEditor,
				nullptr,
				"EVoxelDebugType",
				"EVoxelDebugType",
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
	void UVoxelDebugParameters_Base::StaticRegisterNativesUVoxelDebugParameters_Base()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDebugParameters_Base_NoRegister()
	{
		return UVoxelDebugParameters_Base::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDebugParameters_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdate_MetaData[];
#endif
		static void NewProp_bUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebugType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DebugType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebugEditor.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_Base*)Obj)->bUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_Base), &Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType = { "DebugType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_Base, DebugType), Z_Construct_UEnum_VoxelEditor_EVoxelDebugType, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugParameters_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::ClassParams = {
		&UVoxelDebugParameters_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDebugParameters_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDebugParameters_Base, 1788926710);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDebugParameters_Base>()
	{
		return UVoxelDebugParameters_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDebugParameters_Base(Z_Construct_UClass_UVoxelDebugParameters_Base, &UVoxelDebugParameters_Base::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelDebugParameters_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugParameters_Base);
	void UVoxelDebugParameters_JumpFlood::StaticRegisterNativesUVoxelDebugParameters_JumpFlood()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_NoRegister()
	{
		return UVoxelDebugParameters_JumpFlood::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiThreaded_MetaData[];
#endif
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCPU_MetaData[];
#endif
		static void NewProp_bUseCPU_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCPU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShrink_MetaData[];
#endif
		static void NewProp_bShrink_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShrink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Divisor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Divisor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDistances_MetaData[];
#endif
		static void NewProp_bShowDistances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDistances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Passes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Passes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlip_MetaData[];
#endif
		static void NewProp_bFlip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliceAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SliceAxis;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SliceAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoxExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshImporterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshImporterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMesh_MetaData[];
#endif
		static void NewProp_bUseMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebugEditor.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, TimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bUseCPU = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU = { "bUseCPU", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bShrink = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink = { "bShrink", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor = { "Divisor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Divisor), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bShowDistances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances = { "bShowDistances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes = { "Passes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Passes), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bFlip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip = { "bFlip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice = { "Slice", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Slice), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis = { "SliceAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, SliceAxis), Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension = { "BoxExtension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, BoxExtension), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings = { "MeshImporterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, MeshImporterSettings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Source|Sphere" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, TextureSize), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_JumpFlood*)Obj)->bUseMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh = { "bUseMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugParameters_JumpFlood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::ClassParams = {
		&UVoxelDebugParameters_JumpFlood::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDebugParameters_JumpFlood, 62585056);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDebugParameters_JumpFlood>()
	{
		return UVoxelDebugParameters_JumpFlood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDebugParameters_JumpFlood(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood, &UVoxelDebugParameters_JumpFlood::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelDebugParameters_JumpFlood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugParameters_JumpFlood);
	void UVoxelDebugParameters_CustomData::StaticRegisterNativesUVoxelDebugParameters_CustomData()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData_NoRegister()
	{
		return UVoxelDebugParameters_CustomData::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DataToDisplay;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataToDisplay_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DataToDisplay_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlip_MetaData[];
#endif
		static void NewProp_bFlip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliceAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SliceAxis;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SliceAxis_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebugEditor.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
		{ "UIMax", "99" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, Frame), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay = { "DataToDisplay", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, DataToDisplay), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_Key_KeyProp = { "DataToDisplay_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_ValueProp = { "DataToDisplay", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_SetBit(void* Obj)
	{
		((UVoxelDebugParameters_CustomData*)Obj)->bFlip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip = { "bFlip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDebugParameters_CustomData), &Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice = { "Slice", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, Slice), METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis = { "SliceAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, SliceAxis), Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis, METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugParameters_CustomData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::ClassParams = {
		&UVoxelDebugParameters_CustomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDebugParameters_CustomData, 2100249232);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDebugParameters_CustomData>()
	{
		return UVoxelDebugParameters_CustomData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDebugParameters_CustomData(Z_Construct_UClass_UVoxelDebugParameters_CustomData, &UVoxelDebugParameters_CustomData::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelDebugParameters_CustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugParameters_CustomData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
