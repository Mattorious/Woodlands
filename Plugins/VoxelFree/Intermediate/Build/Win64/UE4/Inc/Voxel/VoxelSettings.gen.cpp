// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSettings() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelThreadPriority();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSettings_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	static UEnum* EVoxelThreadPriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelThreadPriority, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelThreadPriority"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelThreadPriority>()
	{
		return EVoxelThreadPriority_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelThreadPriority(EVoxelThreadPriority_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelThreadPriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelThreadPriority_Hash() { return 1439033838U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelThreadPriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelThreadPriority"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelThreadPriority_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelThreadPriority::Normal", (int64)EVoxelThreadPriority::Normal },
				{ "EVoxelThreadPriority::AboveNormal", (int64)EVoxelThreadPriority::AboveNormal },
				{ "EVoxelThreadPriority::BelowNormal", (int64)EVoxelThreadPriority::BelowNormal },
				{ "EVoxelThreadPriority::Highest", (int64)EVoxelThreadPriority::Highest },
				{ "EVoxelThreadPriority::Lowest", (int64)EVoxelThreadPriority::Lowest },
				{ "EVoxelThreadPriority::SlightlyBelowNormal", (int64)EVoxelThreadPriority::SlightlyBelowNormal },
				{ "EVoxelThreadPriority::TimeCritical", (int64)EVoxelThreadPriority::TimeCritical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AboveNormal.Name", "EVoxelThreadPriority::AboveNormal" },
				{ "BelowNormal.Name", "EVoxelThreadPriority::BelowNormal" },
				{ "BlueprintType", "true" },
				{ "Highest.Name", "EVoxelThreadPriority::Highest" },
				{ "Lowest.Name", "EVoxelThreadPriority::Lowest" },
				{ "ModuleRelativePath", "Public/VoxelSettings.h" },
				{ "Normal.Name", "EVoxelThreadPriority::Normal" },
				{ "SlightlyBelowNormal.Name", "EVoxelThreadPriority::SlightlyBelowNormal" },
				{ "TimeCritical.Name", "EVoxelThreadPriority::TimeCritical" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelThreadPriority",
				"EVoxelThreadPriority",
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
	void UVoxelSettings::StaticRegisterNativesUVoxelSettings()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSettings_NoRegister()
	{
		return UVoxelSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCompressionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultCompressionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoundBeforeSaving_MetaData[];
#endif
		static void NewProp_bRoundBeforeSaving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoundBeforeSaving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAutoPreview_MetaData[];
#endif
		static void NewProp_bDisableAutoPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAutoPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNotifications_MetaData[];
#endif
		static void NewProp_bShowNotifications_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNotifications;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreadPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThreadPriority;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThreadPriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PriorityDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfThreads_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfThreads;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Voxel Plugin" },
		{ "IncludePath", "VoxelSettings.h" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMax", "9" },
		{ "ClampMin", "-1" },
		{ "Comment", "// -1 = ZLib default compression\n// 0 = No compression\n// 1 = Best speed\n// 9 = Best compression\n// Used when compressing voxel save, heightmaps, data assets...\n// Compression speed is written to the log\n// In my tests a compression level of 1 was very fast without compromising too much compression\n" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "-1 = ZLib default compression\n0 = No compression\n1 = Best speed\n9 = Best compression\nUsed when compressing voxel save, heightmaps, data assets...\nCompression speed is written to the log\nIn my tests a compression level of 1 was very fast without compromising too much compression" },
		{ "UIMax", "9" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel = { "DefaultCompressionLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSettings, DefaultCompressionLevel), METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Round voxels that do not affect surface nor normals to improve compression\n// Takes a while when saving\n" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "Round voxels that do not affect surface nor normals to improve compression\nTakes a while when saving" },
	};
#endif
	void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_SetBit(void* Obj)
	{
		((UVoxelSettings*)Obj)->bRoundBeforeSaving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving = { "bRoundBeforeSaving", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_SetBit(void* Obj)
	{
		((UVoxelSettings*)Obj)->bDisableAutoPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview = { "bDisableAutoPreview", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_SetBit(void* Obj)
	{
		((UVoxelSettings*)Obj)->bShowNotifications = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications = { "bShowNotifications", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_ThreadPriority_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "// The priority of the voxel threads\n// Changing this requires a restart\n// Can be set using voxel.threading.ThreadPriority\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "voxel.threading.ThreadPriority" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "The priority of the voxel threads\nChanging this requires a restart\nCan be set using voxel.threading.ThreadPriority" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_ThreadPriority = { "ThreadPriority", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSettings, ThreadPriority), Z_Construct_UEnum_Voxel_EVoxelThreadPriority, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_ThreadPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_ThreadPriority_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_ThreadPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_PriorityDuration_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "0" },
		{ "Comment", "// Time, in seconds, during which a task priority is valid and does not need to be recomputed\n// Lowering this will increase async cost to recompute priorities, but will lead to more precise scheduling\n// Increasing this will decreasing async cost to recompute priorities, but might lead to imprecise scheduling if the invokers are moving fast\n// Can be set using voxel.threading.PriorityDuration\n" },
		{ "ConsoleVariable", "voxel.threading.PriorityDuration" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "Time, in seconds, during which a task priority is valid and does not need to be recomputed\nLowering this will increase async cost to recompute priorities, but will lead to more precise scheduling\nIncreasing this will decreasing async cost to recompute priorities, but might lead to imprecise scheduling if the invokers are moving fast\nCan be set using voxel.threading.PriorityDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_PriorityDuration = { "PriorityDuration", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSettings, PriorityDuration), METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_PriorityDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_PriorityDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_NumberOfThreads_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "1" },
		{ "Comment", "// Number of threads allocated for the voxel background processing. Setting it too high may impact performance\n// The threads are shared across all voxel worlds\n// Can be set using voxel.threading.NumThreads\n" },
		{ "ConsoleVariable", "voxel.threading.NumThreads" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "Number of threads allocated for the voxel background processing. Setting it too high may impact performance\nThe threads are shared across all voxel worlds\nCan be set using voxel.threading.NumThreads" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_NumberOfThreads = { "NumberOfThreads", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSettings, NumberOfThreads), METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_NumberOfThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_NumberOfThreads_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_ThreadPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_ThreadPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_PriorityDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_NumberOfThreads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSettings_Statics::ClassParams = {
		&UVoxelSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSettings, 3828417765);
	template<> VOXEL_API UClass* StaticClass<UVoxelSettings>()
	{
		return UVoxelSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSettings(Z_Construct_UClass_UVoxelSettings, &UVoxelSettings::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
