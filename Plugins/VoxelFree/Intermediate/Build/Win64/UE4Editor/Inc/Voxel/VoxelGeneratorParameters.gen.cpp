// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorParameters() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameter();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType();
// End Cross Module References
	static UEnum* EVoxelGeneratorParameterPropertyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelGeneratorParameterPropertyType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterPropertyType>()
	{
		return EVoxelGeneratorParameterPropertyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelGeneratorParameterPropertyType(EVoxelGeneratorParameterPropertyType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelGeneratorParameterPropertyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Hash() { return 1619721330U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelGeneratorParameterPropertyType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelGeneratorParameterPropertyType::Float", (int64)EVoxelGeneratorParameterPropertyType::Float },
				{ "EVoxelGeneratorParameterPropertyType::Int", (int64)EVoxelGeneratorParameterPropertyType::Int },
				{ "EVoxelGeneratorParameterPropertyType::Bool", (int64)EVoxelGeneratorParameterPropertyType::Bool },
				{ "EVoxelGeneratorParameterPropertyType::Name", (int64)EVoxelGeneratorParameterPropertyType::Name },
				{ "EVoxelGeneratorParameterPropertyType::Object", (int64)EVoxelGeneratorParameterPropertyType::Object },
				{ "EVoxelGeneratorParameterPropertyType::Struct", (int64)EVoxelGeneratorParameterPropertyType::Struct },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bool.Name", "EVoxelGeneratorParameterPropertyType::Bool" },
				{ "Float.Name", "EVoxelGeneratorParameterPropertyType::Float" },
				{ "Int.Name", "EVoxelGeneratorParameterPropertyType::Int" },
				{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
				{ "Name.Name", "EVoxelGeneratorParameterPropertyType::Name" },
				{ "Object.Name", "EVoxelGeneratorParameterPropertyType::Object" },
				{ "Struct.Name", "EVoxelGeneratorParameterPropertyType::Struct" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelGeneratorParameterPropertyType",
				"EVoxelGeneratorParameterPropertyType",
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
	static UEnum* EVoxelGeneratorParameterContainerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelGeneratorParameterContainerType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterContainerType>()
	{
		return EVoxelGeneratorParameterContainerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelGeneratorParameterContainerType(EVoxelGeneratorParameterContainerType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelGeneratorParameterContainerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Hash() { return 2197704062U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelGeneratorParameterContainerType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelGeneratorParameterContainerType::None", (int64)EVoxelGeneratorParameterContainerType::None },
				{ "EVoxelGeneratorParameterContainerType::Array", (int64)EVoxelGeneratorParameterContainerType::Array },
				{ "EVoxelGeneratorParameterContainerType::Set", (int64)EVoxelGeneratorParameterContainerType::Set },
				{ "EVoxelGeneratorParameterContainerType::Map", (int64)EVoxelGeneratorParameterContainerType::Map },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Name", "EVoxelGeneratorParameterContainerType::Array" },
				{ "Map.Name", "EVoxelGeneratorParameterContainerType::Map" },
				{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
				{ "None.Name", "EVoxelGeneratorParameterContainerType::None" },
				{ "Set.Name", "EVoxelGeneratorParameterContainerType::Set" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelGeneratorParameterContainerType",
				"EVoxelGeneratorParameterContainerType",
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
class UScriptStruct* FVoxelGeneratorParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorParameter, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorParameter"), sizeof(FVoxelGeneratorParameter), Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorParameter>()
{
	return FVoxelGeneratorParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGeneratorParameter(FVoxelGeneratorParameter::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelGeneratorParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorParameter
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGeneratorParameter")),new UScriptStruct::TCppStructOps<FVoxelGeneratorParameter>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorParameter;
	struct Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaData_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "// Not consistent with vs without editor\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "ToolTip", "Not consistent with vs without editor" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Type), Z_Construct_UScriptStruct_FVoxelGeneratorParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelGeneratorParameter",
		sizeof(FVoxelGeneratorParameter),
		alignof(FVoxelGeneratorParameter),
		Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGeneratorParameter"), sizeof(FVoxelGeneratorParameter), Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Hash() { return 165818491U; }
class UScriptStruct* FVoxelGeneratorParameterType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorParameterType"), sizeof(FVoxelGeneratorParameterType), Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorParameterType>()
{
	return FVoxelGeneratorParameterType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGeneratorParameterType(FVoxelGeneratorParameterType::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelGeneratorParameterType"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorParameterType
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorParameterType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGeneratorParameterType")),new UScriptStruct::TCppStructOps<FVoxelGeneratorParameterType>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorParameterType;
	struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorParameterType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "// For maps\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "ToolTip", "For maps" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameterType, ValueType), Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameterType, ContainerType), Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType,
		&NewStructOps,
		"VoxelGeneratorParameterType",
		sizeof(FVoxelGeneratorParameterType),
		alignof(FVoxelGeneratorParameterType),
		Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGeneratorParameterType"), sizeof(FVoxelGeneratorParameterType), Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Hash() { return 2549087585U; }
class UScriptStruct* FVoxelGeneratorParameterTerminalType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorParameterTerminalType"), sizeof(FVoxelGeneratorParameterTerminalType), Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelGeneratorParameterTerminalType>()
{
	return FVoxelGeneratorParameterTerminalType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGeneratorParameterTerminalType(FVoxelGeneratorParameterTerminalType::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelGeneratorParameterTerminalType"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorParameterTerminalType
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorParameterTerminalType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGeneratorParameterTerminalType")),new UScriptStruct::TCppStructOps<FVoxelGeneratorParameterTerminalType>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelGeneratorParameterTerminalType;
	struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorParameterTerminalType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameterTerminalType, PropertyClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGeneratorParameterTerminalType, PropertyType), Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelGeneratorParameterTerminalType",
		sizeof(FVoxelGeneratorParameterTerminalType),
		alignof(FVoxelGeneratorParameterTerminalType),
		Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGeneratorParameterTerminalType"), sizeof(FVoxelGeneratorParameterTerminalType), Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Hash() { return 4145727916U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
