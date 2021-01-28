// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemsUtilities() {}
// Cross Module References
	VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics
	{
		struct VoxelPlaceableItemsUtilities_eventAddWorm_Parms
		{
			FVector Start;
			FVector End;
			float Radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorm_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorm_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorm_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemsUtilities, nullptr, "AddWorm__DelegateSignature", nullptr, nullptr, sizeof(VoxelPlaceableItemsUtilities_eventAddWorm_Parms), Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00920000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FVoxelPerlinWormsSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPerlinWormsSettings"), sizeof(FVoxelPerlinWormsSettings), Get_Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPerlinWormsSettings>()
{
	return FVoxelPerlinWormsSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPerlinWormsSettings(FVoxelPerlinWormsSettings::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPerlinWormsSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPerlinWormsSettings
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPerlinWormsSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPerlinWormsSettings")),new UScriptStruct::TCppStructOps<FVoxelPerlinWormsSettings>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPerlinWormsSettings;
	struct Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWorms_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxWorms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseSegmentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseSegmentLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchSizeVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BranchSizeVariation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchMeanSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BranchMeanSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitProbabilityGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplitProbabilityGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplitProbability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAmplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAmplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPerlinWormsSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Perlin Worm" },
		{ "Comment", "// To avoid infinite loops\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "To avoid infinite loops" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms = { "MaxWorms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, MaxWorms), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Segment lengths to use for perlin noise\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Segment lengths to use for perlin noise" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength = { "NoiseSegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, NoiseSegmentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Perlin noise traversal direction\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Perlin noise traversal direction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection = { "NoiseDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, NoiseDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Controls the size of the branches after a split, relative to BranchMeanSize\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Controls the size of the branches after a split, relative to BranchMeanSize" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation = { "BranchSizeVariation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, BranchSizeVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Controls the size of the branches after a split\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Controls the size of the branches after a split" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize = { "BranchMeanSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, BranchMeanSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// How much SplitProbability is reduced when worms go deeper in the tree\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "How much SplitProbability is reduced when worms go deeper in the tree" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain = { "SplitProbabilityGain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, SplitProbabilityGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Probability of a worm to create 2 worms\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Probability of a worm to create 2 worms" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability = { "SplitProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, SplitProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Length of the worms in voxel\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Length of the worms in voxel" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength = { "SegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, SegmentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Max depth of the worms tree\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Max depth of the worms tree" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, NumSegments), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// The amplitude of the random rotation on each worm\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "The amplitude of the random rotation on each worm" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude = { "RotationAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, RotationAmplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Direction of the first worm\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Direction of the first worm" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Start of the worms, in voxel space\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Start of the worms, in voxel space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// The radius of the worms in voxel\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "The radius of the worms in voxel" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// The random seed to use\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "The random seed to use" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPerlinWormsSettings",
		sizeof(FVoxelPerlinWormsSettings),
		alignof(FVoxelPerlinWormsSettings),
		Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPerlinWormsSettings"), sizeof(FVoxelPerlinWormsSettings), Get_Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Hash() { return 3572680496U; }
	DEFINE_FUNCTION(UVoxelPlaceableItemsUtilities::execAddWorms)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AddWorm);
		P_GET_STRUCT(FVoxelPerlinWormsSettings,Z_Param_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelPlaceableItemsUtilities::AddWorms(FAddWorm(Z_Param_AddWorm),Z_Param_Settings);
		P_NATIVE_END;
	}
	void UVoxelPlaceableItemsUtilities::StaticRegisterNativesUVoxelPlaceableItemsUtilities()
	{
		UClass* Class = UVoxelPlaceableItemsUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWorms", &UVoxelPlaceableItemsUtilities::execAddWorms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics
	{
		struct VoxelPlaceableItemsUtilities_eventAddWorms_Parms
		{
			FScriptDelegate AddWorm;
			FVoxelPerlinWormsSettings Settings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AddWorm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, Settings), Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_AddWorm = { "AddWorm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, AddWorm), Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_AddWorm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "NoiseDir, NoiseSegmentLength" },
		{ "Category", "Voxel|Placeable Items" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemsUtilities, nullptr, "AddWorms", nullptr, nullptr, sizeof(VoxelPlaceableItemsUtilities_eventAddWorms_Parms), Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister()
	{
		return UVoxelPlaceableItemsUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature, "AddWorm__DelegateSignature" }, // 306001998
		{ &Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms, "AddWorms" }, // 633698473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPlaceableItemsUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::ClassParams = {
		&UVoxelPlaceableItemsUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelPlaceableItemsUtilities, 3555862667);
	template<> VOXEL_API UClass* StaticClass<UVoxelPlaceableItemsUtilities>()
	{
		return UVoxelPlaceableItemsUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelPlaceableItemsUtilities(Z_Construct_UClass_UVoxelPlaceableItemsUtilities, &UVoxelPlaceableItemsUtilities::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelPlaceableItemsUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPlaceableItemsUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
