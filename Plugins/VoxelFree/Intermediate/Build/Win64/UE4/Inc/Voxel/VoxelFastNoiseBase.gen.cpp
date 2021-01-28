// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/FastNoise/VoxelFastNoiseBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFastNoiseBase() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularReturnType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation();
// End Cross Module References
	static UEnum* EVoxelCellularReturnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelCellularReturnType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelCellularReturnType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelCellularReturnType>()
	{
		return EVoxelCellularReturnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelCellularReturnType(EVoxelCellularReturnType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelCellularReturnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Hash() { return 2629594441U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularReturnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelCellularReturnType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelCellularReturnType::CellValue", (int64)EVoxelCellularReturnType::CellValue },
				{ "EVoxelCellularReturnType::Distance", (int64)EVoxelCellularReturnType::Distance },
				{ "EVoxelCellularReturnType::Distance2", (int64)EVoxelCellularReturnType::Distance2 },
				{ "EVoxelCellularReturnType::Distance2Add", (int64)EVoxelCellularReturnType::Distance2Add },
				{ "EVoxelCellularReturnType::Distance2Sub", (int64)EVoxelCellularReturnType::Distance2Sub },
				{ "EVoxelCellularReturnType::Distance2Mul", (int64)EVoxelCellularReturnType::Distance2Mul },
				{ "EVoxelCellularReturnType::Distance2Div", (int64)EVoxelCellularReturnType::Distance2Div },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CellValue.Name", "EVoxelCellularReturnType::CellValue" },
				{ "Distance.Name", "EVoxelCellularReturnType::Distance" },
				{ "Distance2.Name", "EVoxelCellularReturnType::Distance2" },
				{ "Distance2Add.Name", "EVoxelCellularReturnType::Distance2Add" },
				{ "Distance2Div.Name", "EVoxelCellularReturnType::Distance2Div" },
				{ "Distance2Mul.Name", "EVoxelCellularReturnType::Distance2Mul" },
				{ "Distance2Sub.Name", "EVoxelCellularReturnType::Distance2Sub" },
				{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelCellularReturnType",
				"EVoxelCellularReturnType",
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
	static UEnum* EVoxelCellularDistanceFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelCellularDistanceFunction"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelCellularDistanceFunction>()
	{
		return EVoxelCellularDistanceFunction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelCellularDistanceFunction(EVoxelCellularDistanceFunction_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelCellularDistanceFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Hash() { return 1577190326U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelCellularDistanceFunction"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelCellularDistanceFunction::Euclidean", (int64)EVoxelCellularDistanceFunction::Euclidean },
				{ "EVoxelCellularDistanceFunction::Manhattan", (int64)EVoxelCellularDistanceFunction::Manhattan },
				{ "EVoxelCellularDistanceFunction::Natural", (int64)EVoxelCellularDistanceFunction::Natural },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Euclidean.Name", "EVoxelCellularDistanceFunction::Euclidean" },
				{ "Manhattan.Name", "EVoxelCellularDistanceFunction::Manhattan" },
				{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
				{ "Natural.Name", "EVoxelCellularDistanceFunction::Natural" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelCellularDistanceFunction",
				"EVoxelCellularDistanceFunction",
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
	static UEnum* EVoxelNoiseFractalType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelNoiseFractalType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelNoiseFractalType>()
	{
		return EVoxelNoiseFractalType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelNoiseFractalType(EVoxelNoiseFractalType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelNoiseFractalType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Hash() { return 2552984700U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelNoiseFractalType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelNoiseFractalType::FBM", (int64)EVoxelNoiseFractalType::FBM },
				{ "EVoxelNoiseFractalType::Billow", (int64)EVoxelNoiseFractalType::Billow },
				{ "EVoxelNoiseFractalType::RigidMulti", (int64)EVoxelNoiseFractalType::RigidMulti },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Billow.Name", "EVoxelNoiseFractalType::Billow" },
				{ "BlueprintType", "true" },
				{ "FBM.Name", "EVoxelNoiseFractalType::FBM" },
				{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
				{ "RigidMulti.Name", "EVoxelNoiseFractalType::RigidMulti" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelNoiseFractalType",
				"EVoxelNoiseFractalType",
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
	static UEnum* EVoxelNoiseInterpolation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelNoiseInterpolation"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelNoiseInterpolation>()
	{
		return EVoxelNoiseInterpolation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelNoiseInterpolation(EVoxelNoiseInterpolation_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelNoiseInterpolation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Hash() { return 2850921986U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelNoiseInterpolation"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelNoiseInterpolation::Linear", (int64)EVoxelNoiseInterpolation::Linear },
				{ "EVoxelNoiseInterpolation::Hermite", (int64)EVoxelNoiseInterpolation::Hermite },
				{ "EVoxelNoiseInterpolation::Quintic", (int64)EVoxelNoiseInterpolation::Quintic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hermite.Name", "EVoxelNoiseInterpolation::Hermite" },
				{ "Linear.Name", "EVoxelNoiseInterpolation::Linear" },
				{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
				{ "Quintic.Name", "EVoxelNoiseInterpolation::Quintic" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelNoiseInterpolation",
				"EVoxelNoiseInterpolation",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
