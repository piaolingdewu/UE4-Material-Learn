// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MateralLearn/DrawBezierActor/BezierMoveActor/BezierMoveActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBezierMoveActor() {}
// Cross Module References
	MATERALLEARN_API UClass* Z_Construct_UClass_ABezierMoveActor_NoRegister();
	MATERALLEARN_API UClass* Z_Construct_UClass_ABezierMoveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MateralLearn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABezierMoveActor::StaticRegisterNativesABezierMoveActor()
	{
	}
	UClass* Z_Construct_UClass_ABezierMoveActor_NoRegister()
	{
		return ABezierMoveActor::StaticClass();
	}
	struct Z_Construct_UClass_ABezierMoveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshcmp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshcmp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABezierMoveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MateralLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierMoveActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DrawBezierActor/BezierMoveActor/BezierMoveActor.h" },
		{ "ModuleRelativePath", "DrawBezierActor/BezierMoveActor/BezierMoveActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierMoveActor_Statics::NewProp_meshcmp_MetaData[] = {
		{ "Category", "Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawBezierActor/BezierMoveActor/BezierMoveActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABezierMoveActor_Statics::NewProp_meshcmp = { "meshcmp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierMoveActor, meshcmp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABezierMoveActor_Statics::NewProp_meshcmp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABezierMoveActor_Statics::NewProp_meshcmp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABezierMoveActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierMoveActor_Statics::NewProp_meshcmp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABezierMoveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABezierMoveActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABezierMoveActor_Statics::ClassParams = {
		&ABezierMoveActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABezierMoveActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABezierMoveActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABezierMoveActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABezierMoveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABezierMoveActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABezierMoveActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABezierMoveActor, 788150765);
	template<> MATERALLEARN_API UClass* StaticClass<ABezierMoveActor>()
	{
		return ABezierMoveActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABezierMoveActor(Z_Construct_UClass_ABezierMoveActor, &ABezierMoveActor::StaticClass, TEXT("/Script/MateralLearn"), TEXT("ABezierMoveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABezierMoveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
