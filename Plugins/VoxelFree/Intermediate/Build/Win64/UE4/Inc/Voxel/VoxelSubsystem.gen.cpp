// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSubsystem() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSubsystemProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDynamicSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDynamicSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelRendererSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelRendererSubsystemProxy();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLODSubsystemProxy_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLODSubsystemProxy();
// End Cross Module References
	void UVoxelSubsystemProxy::StaticRegisterNativesUVoxelSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSubsystemProxy_NoRegister()
	{
		return UVoxelSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSubsystem.h" },
		{ "ModuleRelativePath", "Public/VoxelSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSubsystemProxy_Statics::ClassParams = {
		&UVoxelSubsystemProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSubsystemProxy, 293361645);
	template<> VOXEL_API UClass* StaticClass<UVoxelSubsystemProxy>()
	{
		return UVoxelSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSubsystemProxy(Z_Construct_UClass_UVoxelSubsystemProxy, &UVoxelSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSubsystemProxy);
	void UVoxelStaticSubsystemProxy::StaticRegisterNativesUVoxelStaticSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy_NoRegister()
	{
		return UVoxelStaticSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelStaticSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelStaticSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelStaticSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Any class deriving from this will be created if ShouldCreateSubsystem returns true\n" },
		{ "IncludePath", "VoxelSubsystem.h" },
		{ "ModuleRelativePath", "Public/VoxelSubsystem.h" },
		{ "ToolTip", "Any class deriving from this will be created if ShouldCreateSubsystem returns true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelStaticSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelStaticSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelStaticSubsystemProxy_Statics::ClassParams = {
		&UVoxelStaticSubsystemProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelStaticSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelStaticSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelStaticSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelStaticSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelStaticSubsystemProxy, 654740591);
	template<> VOXEL_API UClass* StaticClass<UVoxelStaticSubsystemProxy>()
	{
		return UVoxelStaticSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelStaticSubsystemProxy(Z_Construct_UClass_UVoxelStaticSubsystemProxy, &UVoxelStaticSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelStaticSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelStaticSubsystemProxy);
	void UVoxelDynamicSubsystemProxy::StaticRegisterNativesUVoxelDynamicSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDynamicSubsystemProxy_NoRegister()
	{
		return UVoxelDynamicSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDynamicSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDynamicSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDynamicSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Only one of these will be created per subclass, according to what's picked in the UI\n// eg you could define multiple renderers, but only one will be created\n" },
		{ "IncludePath", "VoxelSubsystem.h" },
		{ "ModuleRelativePath", "Public/VoxelSubsystem.h" },
		{ "ToolTip", "Only one of these will be created per subclass, according to what's picked in the UI\neg you could define multiple renderers, but only one will be created" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDynamicSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDynamicSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDynamicSubsystemProxy_Statics::ClassParams = {
		&UVoxelDynamicSubsystemProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDynamicSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDynamicSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDynamicSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDynamicSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDynamicSubsystemProxy, 1970687184);
	template<> VOXEL_API UClass* StaticClass<UVoxelDynamicSubsystemProxy>()
	{
		return UVoxelDynamicSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDynamicSubsystemProxy(Z_Construct_UClass_UVoxelDynamicSubsystemProxy, &UVoxelDynamicSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelDynamicSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDynamicSubsystemProxy);
	void UVoxelRendererSubsystemProxy::StaticRegisterNativesUVoxelRendererSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelRendererSubsystemProxy_NoRegister()
	{
		return UVoxelRendererSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelRendererSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelRendererSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelDynamicSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelRendererSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelSubsystem.h" },
		{ "ModuleRelativePath", "Public/VoxelSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelRendererSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelRendererSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelRendererSubsystemProxy_Statics::ClassParams = {
		&UVoxelRendererSubsystemProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelRendererSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRendererSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelRendererSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelRendererSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelRendererSubsystemProxy, 4274262198);
	template<> VOXEL_API UClass* StaticClass<UVoxelRendererSubsystemProxy>()
	{
		return UVoxelRendererSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelRendererSubsystemProxy(Z_Construct_UClass_UVoxelRendererSubsystemProxy, &UVoxelRendererSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelRendererSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelRendererSubsystemProxy);
	void UVoxelLODSubsystemProxy::StaticRegisterNativesUVoxelLODSubsystemProxy()
	{
	}
	UClass* Z_Construct_UClass_UVoxelLODSubsystemProxy_NoRegister()
	{
		return UVoxelLODSubsystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLODSubsystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLODSubsystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelDynamicSubsystemProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLODSubsystemProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSubsystem.h" },
		{ "ModuleRelativePath", "Public/VoxelSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLODSubsystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLODSubsystemProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLODSubsystemProxy_Statics::ClassParams = {
		&UVoxelLODSubsystemProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLODSubsystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODSubsystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLODSubsystemProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelLODSubsystemProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelLODSubsystemProxy, 464055635);
	template<> VOXEL_API UClass* StaticClass<UVoxelLODSubsystemProxy>()
	{
		return UVoxelLODSubsystemProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelLODSubsystemProxy(Z_Construct_UClass_UVoxelLODSubsystemProxy, &UVoxelLODSubsystemProxy::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelLODSubsystemProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLODSubsystemProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
