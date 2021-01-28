// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelToolLibary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelToolLibary() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolLibrary_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelToolLibrary::execUpdateSphereOverlayMaterial)
	{
		P_GET_OBJECT(UVoxelToolBase,Z_Param_Tool);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_OverlayMaterialInstance);
		P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelToolLibrary::UpdateSphereOverlayMaterial(Z_Param_Tool,Z_Param_OverlayMaterialInstance,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff);
		P_NATIVE_END;
	}
	void UVoxelToolLibrary::StaticRegisterNativesUVoxelToolLibrary()
	{
		UClass* Class = UVoxelToolLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSphereOverlayMaterial", &UVoxelToolLibrary::execUpdateSphereOverlayMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics
	{
		struct VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms
		{
			UVoxelToolBase* Tool;
			UMaterialInstanceDynamic* OverlayMaterialInstance;
			EVoxelFalloff FalloffType;
			float Falloff;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterialInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_OverlayMaterialInstance = { "OverlayMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms, OverlayMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms, Tool), Z_Construct_UClass_UVoxelToolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_FalloffType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_FalloffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_OverlayMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_Tool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Tool Library" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolLibary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolLibrary, nullptr, "UpdateSphereOverlayMaterial", nullptr, nullptr, sizeof(VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms), Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelToolLibrary_NoRegister()
	{
		return UVoxelToolLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelToolLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelToolLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelToolLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial, "UpdateSphereOverlayMaterial" }, // 2952775966
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelToolLibary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolLibary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelToolLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolLibrary_Statics::ClassParams = {
		&UVoxelToolLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelToolLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelToolLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelToolLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelToolLibrary, 828343125);
	template<> VOXEL_API UClass* StaticClass<UVoxelToolLibrary>()
	{
		return UVoxelToolLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelToolLibrary(Z_Construct_UClass_UVoxelToolLibrary, &UVoxelToolLibrary::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelToolLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
