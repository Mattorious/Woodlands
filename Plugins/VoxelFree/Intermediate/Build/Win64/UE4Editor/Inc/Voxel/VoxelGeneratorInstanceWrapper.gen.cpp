// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorInstanceWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorInstanceWrapper() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelGeneratorInstanceWrapper::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	void UVoxelGeneratorInstanceWrapper::StaticRegisterNativesUVoxelGeneratorInstanceWrapper()
	{
		UClass* Class = UVoxelGeneratorInstanceWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValid", &UVoxelGeneratorInstanceWrapper::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics
	{
		struct VoxelGeneratorInstanceWrapper_eventIsValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGeneratorInstanceWrapper_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGeneratorInstanceWrapper_eventIsValid_Parms), &Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorInstanceWrapper, nullptr, "IsValid", nullptr, nullptr, sizeof(VoxelGeneratorInstanceWrapper_eventIsValid_Parms), Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister()
	{
		return UVoxelGeneratorInstanceWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid, "IsValid" }, // 1088052077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorInstanceWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::ClassParams = {
		&UVoxelGeneratorInstanceWrapper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGeneratorInstanceWrapper, 703866520);
	template<> VOXEL_API UClass* StaticClass<UVoxelGeneratorInstanceWrapper>()
	{
		return UVoxelGeneratorInstanceWrapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGeneratorInstanceWrapper(Z_Construct_UClass_UVoxelGeneratorInstanceWrapper, &UVoxelGeneratorInstanceWrapper::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelGeneratorInstanceWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorInstanceWrapper);
	DEFINE_FUNCTION(UVoxelTransformableGeneratorInstanceWrapper::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	void UVoxelTransformableGeneratorInstanceWrapper::StaticRegisterNativesUVoxelTransformableGeneratorInstanceWrapper()
	{
		UClass* Class = UVoxelTransformableGeneratorInstanceWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValid", &UVoxelTransformableGeneratorInstanceWrapper::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics
	{
		struct VoxelTransformableGeneratorInstanceWrapper_eventIsValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelTransformableGeneratorInstanceWrapper_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelTransformableGeneratorInstanceWrapper_eventIsValid_Parms), &Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper, nullptr, "IsValid", nullptr, nullptr, sizeof(VoxelTransformableGeneratorInstanceWrapper_eventIsValid_Parms), Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister()
	{
		return UVoxelTransformableGeneratorInstanceWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid, "IsValid" }, // 2314252218
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableGeneratorInstanceWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::ClassParams = {
		&UVoxelTransformableGeneratorInstanceWrapper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelTransformableGeneratorInstanceWrapper, 2094943678);
	template<> VOXEL_API UClass* StaticClass<UVoxelTransformableGeneratorInstanceWrapper>()
	{
		return UVoxelTransformableGeneratorInstanceWrapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelTransformableGeneratorInstanceWrapper(Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper, &UVoxelTransformableGeneratorInstanceWrapper::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelTransformableGeneratorInstanceWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableGeneratorInstanceWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
