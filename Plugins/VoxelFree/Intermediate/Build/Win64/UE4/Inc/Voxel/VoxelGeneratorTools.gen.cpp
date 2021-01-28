// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorTools() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelGeneratorTools::execCreateColorTextureFromGeneratorAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelColorTexture,Z_Param_Out_OutTexture);
		P_GET_OBJECT(UVoxelGeneratorInstanceWrapper,Z_Param_Generator);
		P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelGeneratorTools::CreateColorTextureFromGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutTexture,Z_Param_Generator,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execCreateColorTextureFromGenerator)
	{
		P_GET_STRUCT_REF(FVoxelColorTexture,Z_Param_Out_OutTexture);
		P_GET_OBJECT(UVoxelGeneratorInstanceWrapper,Z_Param_Generator);
		P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelGeneratorTools::CreateColorTextureFromGenerator(Z_Param_Out_OutTexture,Z_Param_Generator,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execCreateFloatTextureFromGeneratorAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelFloatTexture,Z_Param_Out_OutTexture);
		P_GET_OBJECT(UVoxelGeneratorInstanceWrapper,Z_Param_Generator);
		P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelGeneratorTools::CreateFloatTextureFromGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutTexture,Z_Param_Generator,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execCreateFloatTextureFromGenerator)
	{
		P_GET_STRUCT_REF(FVoxelFloatTexture,Z_Param_Out_OutTexture);
		P_GET_OBJECT(UVoxelGeneratorInstanceWrapper,Z_Param_Generator);
		P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelGeneratorTools::CreateFloatTextureFromGenerator(Z_Param_Out_OutTexture,Z_Param_Generator,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execIsValid_TransformableGeneratorPicker)
	{
		P_GET_STRUCT(FVoxelTransformableGeneratorPicker,Z_Param_GeneratorPicker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelGeneratorTools::IsValid_TransformableGeneratorPicker(Z_Param_GeneratorPicker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execIsValid_GeneratorPicker)
	{
		P_GET_STRUCT(FVoxelGeneratorPicker,Z_Param_GeneratorPicker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelGeneratorTools::IsValid_GeneratorPicker(Z_Param_GeneratorPicker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeTransformableGeneratorPickerFromClass)
	{
		P_GET_OBJECT(UClass,Z_Param_GeneratorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelTransformableGeneratorPicker*)Z_Param__Result=UVoxelGeneratorTools::MakeTransformableGeneratorPickerFromClass(Z_Param_GeneratorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeGeneratorPickerFromClass)
	{
		P_GET_OBJECT(UClass,Z_Param_GeneratorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelGeneratorPicker*)Z_Param__Result=UVoxelGeneratorTools::MakeGeneratorPickerFromClass(Z_Param_GeneratorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeTransformableGeneratorPickerFromObject)
	{
		P_GET_OBJECT(UVoxelTransformableGenerator,Z_Param_Generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelTransformableGeneratorPicker*)Z_Param__Result=UVoxelGeneratorTools::MakeTransformableGeneratorPickerFromObject(Z_Param_Generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeGeneratorPickerFromObject)
	{
		P_GET_OBJECT(UVoxelGenerator,Z_Param_Generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelGeneratorPicker*)Z_Param__Result=UVoxelGeneratorTools::MakeGeneratorPickerFromObject(Z_Param_Generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeTransformableGeneratorInstance)
	{
		P_GET_STRUCT(FVoxelTransformableGeneratorPicker,Z_Param_GeneratorPicker);
		P_GET_STRUCT(FVoxelGeneratorInit,Z_Param_GeneratorInit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelTransformableGeneratorInstanceWrapper**)Z_Param__Result=UVoxelGeneratorTools::MakeTransformableGeneratorInstance(Z_Param_GeneratorPicker,Z_Param_GeneratorInit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeGeneratorInstance)
	{
		P_GET_STRUCT(FVoxelGeneratorPicker,Z_Param_GeneratorPicker);
		P_GET_STRUCT(FVoxelGeneratorInit,Z_Param_GeneratorInit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelGeneratorInstanceWrapper**)Z_Param__Result=UVoxelGeneratorTools::MakeGeneratorInstance(Z_Param_GeneratorPicker,Z_Param_GeneratorInit);
		P_NATIVE_END;
	}
	void UVoxelGeneratorTools::StaticRegisterNativesUVoxelGeneratorTools()
	{
		UClass* Class = UVoxelGeneratorTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateColorTextureFromGenerator", &UVoxelGeneratorTools::execCreateColorTextureFromGenerator },
			{ "CreateColorTextureFromGeneratorAsync", &UVoxelGeneratorTools::execCreateColorTextureFromGeneratorAsync },
			{ "CreateFloatTextureFromGenerator", &UVoxelGeneratorTools::execCreateFloatTextureFromGenerator },
			{ "CreateFloatTextureFromGeneratorAsync", &UVoxelGeneratorTools::execCreateFloatTextureFromGeneratorAsync },
			{ "IsValid_GeneratorPicker", &UVoxelGeneratorTools::execIsValid_GeneratorPicker },
			{ "IsValid_TransformableGeneratorPicker", &UVoxelGeneratorTools::execIsValid_TransformableGeneratorPicker },
			{ "MakeGeneratorInstance", &UVoxelGeneratorTools::execMakeGeneratorInstance },
			{ "MakeGeneratorPickerFromClass", &UVoxelGeneratorTools::execMakeGeneratorPickerFromClass },
			{ "MakeGeneratorPickerFromObject", &UVoxelGeneratorTools::execMakeGeneratorPickerFromObject },
			{ "MakeTransformableGeneratorInstance", &UVoxelGeneratorTools::execMakeTransformableGeneratorInstance },
			{ "MakeTransformableGeneratorPickerFromClass", &UVoxelGeneratorTools::execMakeTransformableGeneratorPickerFromClass },
			{ "MakeTransformableGeneratorPickerFromObject", &UVoxelGeneratorTools::execMakeTransformableGeneratorPickerFromObject },
			{ "SetGeneratorParameter", &UVoxelGeneratorTools::execSetGeneratorParameter },
			{ "SetTransformableGeneratorParameter", &UVoxelGeneratorTools::execSetTransformableGeneratorParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics
	{
		struct VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms
		{
			FVoxelColorTexture OutTexture;
			UVoxelGeneratorInstanceWrapper* Generator;
			FName OutputName;
			int32 SizeX;
			int32 SizeY;
			float Scale;
			int32 StartX;
			int32 StartY;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, StartY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, StartX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_Generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_OutTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize" },
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a color texture by reading a color output from a generator\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09Generator\x09\x09\x09The generator to use\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a color output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 */" },
		{ "CPP_Default_OutputName", "MyColor" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a color texture by reading a color output from a generator\n\n@param       OutTexture                      The result\n@param       Generator                       The generator to use\n@param       OutputName                      The output name to query. Must be a color output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "CreateColorTextureFromGenerator", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics
	{
		struct VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelColorTexture OutTexture;
			UVoxelGeneratorInstanceWrapper* Generator;
			FName OutputName;
			int32 SizeX;
			int32 SizeY;
			float Scale;
			int32 StartX;
			int32 StartY;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, StartY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, StartX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_Generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_OutTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize, bHideLatentWarnings" },
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a color texture by reading a color output from a generator, asynchronously\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09Generator\x09\x09\x09The generator to use\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a color output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_OutputName", "MyColor" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a color texture by reading a color output from a generator, asynchronously\n\n@param       OutTexture                      The result\n@param       Generator                       The generator to use\n@param       OutputName                      The output name to query. Must be a color output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "CreateColorTextureFromGeneratorAsync", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics
	{
		struct VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms
		{
			FVoxelFloatTexture OutTexture;
			UVoxelGeneratorInstanceWrapper* Generator;
			FName OutputName;
			int32 SizeX;
			int32 SizeY;
			float Scale;
			int32 StartX;
			int32 StartY;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, StartY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, StartX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_Generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_OutTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize" },
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a float texture by reading a float output from a generator\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09Generator\x09\x09\x09The generator to use\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a float output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 */" },
		{ "CPP_Default_OutputName", "Value" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a float texture by reading a float output from a generator\n\n@param       OutTexture                      The result\n@param       Generator                       The generator to use\n@param       OutputName                      The output name to query. Must be a float output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "CreateFloatTextureFromGenerator", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics
	{
		struct VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelFloatTexture OutTexture;
			UVoxelGeneratorInstanceWrapper* Generator;
			FName OutputName;
			int32 SizeX;
			int32 SizeY;
			float Scale;
			int32 StartX;
			int32 StartY;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, StartY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, StartX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_Generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_OutTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize, bHideLatentWarnings" },
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a float texture by reading a float output from a generator, asynchronously\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09Generator\x09\x09\x09The generator to use\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a float output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_OutputName", "Value" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a float texture by reading a float output from a generator, asynchronously\n\n@param       OutTexture                      The result\n@param       Generator                       The generator to use\n@param       OutputName                      The output name to query. Must be a float output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "CreateFloatTextureFromGeneratorAsync", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics
	{
		struct VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms
		{
			FVoxelGeneratorPicker GeneratorPicker;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratorPicker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_GeneratorPicker = { "GeneratorPicker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms, GeneratorPicker), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_GeneratorPicker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "IsValid_GeneratorPicker", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics
	{
		struct VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms
		{
			FVoxelTransformableGeneratorPicker GeneratorPicker;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratorPicker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_GeneratorPicker = { "GeneratorPicker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms, GeneratorPicker), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_GeneratorPicker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "IsValid_TransformableGeneratorPicker", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics
	{
		struct VoxelGeneratorTools_eventMakeGeneratorInstance_Parms
		{
			FVoxelGeneratorPicker GeneratorPicker;
			FVoxelGeneratorInit GeneratorInit;
			UVoxelGeneratorInstanceWrapper* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratorInit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratorPicker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_GeneratorInit = { "GeneratorInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorInstance_Parms, GeneratorInit), Z_Construct_UScriptStruct_FVoxelGeneratorInit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_GeneratorPicker = { "GeneratorPicker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorInstance_Parms, GeneratorPicker), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_GeneratorInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_GeneratorPicker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a new generator instance. Consider using VoxelWorld->GetGeneratorCache()->MakeGeneratorInstance instead\n\x09 * @param\x09GeneratorPicker\x09\x09The picker\n\x09 * @param\x09GeneratorInit\x09\x09The generator init. Use VoxelWorld->GetGeneratorInit to get it\n\x09 * @return\x09The generator instance\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a new generator instance. Consider using VoxelWorld->GetGeneratorCache()->MakeGeneratorInstance instead\n@param       GeneratorPicker         The picker\n@param       GeneratorInit           The generator init. Use VoxelWorld->GetGeneratorInit to get it\n@return      The generator instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeGeneratorInstance", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventMakeGeneratorInstance_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics
	{
		struct VoxelGeneratorTools_eventMakeGeneratorPickerFromClass_Parms
		{
			TSubclassOf<UVoxelGenerator>  GeneratorClass;
			FVoxelGeneratorPicker ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneratorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorPickerFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::NewProp_GeneratorClass = { "GeneratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorPickerFromClass_Parms, GeneratorClass), Z_Construct_UClass_UVoxelGenerator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::NewProp_GeneratorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * @see MakeGeneratorPickerFromObject\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@see MakeGeneratorPickerFromObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeGeneratorPickerFromClass", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventMakeGeneratorPickerFromClass_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics
	{
		struct VoxelGeneratorTools_eventMakeGeneratorPickerFromObject_Parms
		{
			UVoxelGenerator* Generator;
			FVoxelGeneratorPicker ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorPickerFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorPickerFromObject_Parms, Generator), Z_Construct_UClass_UVoxelGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::NewProp_Generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * @see MakeGeneratorPickerFromClass, MakeTransformableGeneratorPickerFromObject\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@see MakeGeneratorPickerFromClass, MakeTransformableGeneratorPickerFromObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeGeneratorPickerFromObject", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventMakeGeneratorPickerFromObject_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics
	{
		struct VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms
		{
			FVoxelTransformableGeneratorPicker GeneratorPicker;
			FVoxelGeneratorInit GeneratorInit;
			UVoxelTransformableGeneratorInstanceWrapper* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratorInit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratorPicker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_GeneratorInit = { "GeneratorInit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms, GeneratorInit), Z_Construct_UScriptStruct_FVoxelGeneratorInit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_GeneratorPicker = { "GeneratorPicker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms, GeneratorPicker), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_GeneratorInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_GeneratorPicker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a new transformable generator instance. Consider using VoxelWorld->GetGeneratorCache()->MakeTransformableGeneratorInstance instead\n\x09 * @param\x09GeneratorPicker\x09\x09The picker\n\x09 * @param\x09GeneratorInit\x09\x09The generator init. Use VoxelWorld->GetGeneratorInit to get it\n\x09 * @return\x09The generator instance\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a new transformable generator instance. Consider using VoxelWorld->GetGeneratorCache()->MakeTransformableGeneratorInstance instead\n@param       GeneratorPicker         The picker\n@param       GeneratorInit           The generator init. Use VoxelWorld->GetGeneratorInit to get it\n@return      The generator instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeTransformableGeneratorInstance", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics
	{
		struct VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromClass_Parms
		{
			TSubclassOf<UVoxelTransformableGenerator>  GeneratorClass;
			FVoxelTransformableGeneratorPicker ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneratorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::NewProp_GeneratorClass = { "GeneratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromClass_Parms, GeneratorClass), Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::NewProp_GeneratorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * @see MakeTransformableGeneratorPickerFromObject, MakeGeneratorPickerFromClass\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@see MakeTransformableGeneratorPickerFromObject, MakeGeneratorPickerFromClass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeTransformableGeneratorPickerFromClass", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromClass_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics
	{
		struct VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromObject_Parms
		{
			UVoxelTransformableGenerator* Generator;
			FVoxelTransformableGeneratorPicker ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromObject_Parms, Generator), Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::NewProp_Generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * @see MakeTransformableGeneratorPickerFromClass, MakeGeneratorPickerFromObject\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@see MakeTransformableGeneratorPickerFromClass, MakeGeneratorPickerFromObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeTransformableGeneratorPickerFromObject", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromObject_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics
	{
		struct VoxelGeneratorTools_eventSetGeneratorParameter_Parms
		{
			FVoxelGeneratorPicker Picker;
			FName UniqueName;
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Picker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGeneratorTools_eventSetGeneratorParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventSetGeneratorParameter_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetGeneratorParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetGeneratorParameter_Parms, UniqueName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Picker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetGeneratorParameter_Parms, Picker), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Picker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Picker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_UniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Set a voxel generator parameter\n\x09 * @param\x09Picker\x09\x09The generator picker, by ref\n\x09 * @param\x09UniqueName\x09The name of the parameter. Note that this is not the display name, but the parameter unique name.\n\x09 *\x09\x09\x09\x09\x09\x09You can get that unique name by checking the tooltip of the parameter in the picker details\n\x09 * @param\x09Value\x09\x09The value\n\x09 * @return\x09Success\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Set a voxel generator parameter\n@param       Picker          The generator picker, by ref\n@param       UniqueName      The name of the parameter. Note that this is not the display name, but the parameter unique name.\n                                             You can get that unique name by checking the tooltip of the parameter in the picker details\n@param       Value           The value\n@return      Success" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "SetGeneratorParameter", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventSetGeneratorParameter_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics
	{
		struct VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms
		{
			FVoxelTransformableGeneratorPicker Picker;
			FName UniqueName;
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Picker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Picker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms, UniqueName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Picker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms, Picker), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Picker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Picker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_UniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Picker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Set a voxel generator parameter\n\x09 * @param\x09Picker\x09\x09The generator picker, by ref\n\x09 * @param\x09UniqueName\x09The name of the parameter. Note that this is not the display name, but the parameter unique name.\n\x09 *\x09\x09\x09\x09\x09\x09You can get that unique name by checking the tooltip of the parameter in the picker details\n\x09 * @param\x09Value\x09\x09The value\n\x09 * @return\x09Success\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Set a voxel generator parameter\n@param       Picker          The generator picker, by ref\n@param       UniqueName      The name of the parameter. Note that this is not the display name, but the parameter unique name.\n                                             You can get that unique name by checking the tooltip of the parameter in the picker details\n@param       Value           The value\n@return      Success" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "SetTransformableGeneratorParameter", nullptr, nullptr, sizeof(VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms), Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelGeneratorTools_NoRegister()
	{
		return UVoxelGeneratorTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGeneratorTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGeneratorTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelGeneratorTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator, "CreateColorTextureFromGenerator" }, // 3838064130
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync, "CreateColorTextureFromGeneratorAsync" }, // 3128565480
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator, "CreateFloatTextureFromGenerator" }, // 2316085333
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync, "CreateFloatTextureFromGeneratorAsync" }, // 3176817415
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker, "IsValid_GeneratorPicker" }, // 1262520782
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker, "IsValid_TransformableGeneratorPicker" }, // 3583701163
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance, "MakeGeneratorInstance" }, // 3344472274
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass, "MakeGeneratorPickerFromClass" }, // 2481092030
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject, "MakeGeneratorPickerFromObject" }, // 1278721867
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance, "MakeTransformableGeneratorInstance" }, // 2860510907
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass, "MakeTransformableGeneratorPickerFromClass" }, // 393134111
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject, "MakeTransformableGeneratorPickerFromObject" }, // 234968468
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter, "SetGeneratorParameter" }, // 958086372
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter, "SetTransformableGeneratorParameter" }, // 3042524973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGeneratorTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGeneratorTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorTools_Statics::ClassParams = {
		&UVoxelGeneratorTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGeneratorTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGeneratorTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGeneratorTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGeneratorTools, 1501964777);
	template<> VOXEL_API UClass* StaticClass<UVoxelGeneratorTools>()
	{
		return UVoxelGeneratorTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGeneratorTools(Z_Construct_UClass_UVoxelGeneratorTools, &UVoxelGeneratorTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelGeneratorTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
