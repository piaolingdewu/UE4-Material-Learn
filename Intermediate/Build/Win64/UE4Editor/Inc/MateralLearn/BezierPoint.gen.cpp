// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MateralLearn/DrawBezierActor/BezierPoint/BezierPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBezierPoint() {}
// Cross Module References
	MATERALLEARN_API UClass* Z_Construct_UClass_ABezierPoint_NoRegister();
	MATERALLEARN_API UClass* Z_Construct_UClass_ABezierPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MateralLearn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ABezierPoint::StaticRegisterNativesABezierPoint()
	{
	}
	UClass* Z_Construct_UClass_ABezierPoint_NoRegister()
	{
		return ABezierPoint::StaticClass();
	}
	struct Z_Construct_UClass_ABezierPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spherecmp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spherecmp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABezierPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MateralLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DrawBezierActor/BezierPoint/BezierPoint.h" },
		{ "ModuleRelativePath", "DrawBezierActor/BezierPoint/BezierPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierPoint_Statics::NewProp_PointColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "DrawBezierActor/BezierPoint/BezierPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABezierPoint_Statics::NewProp_PointColor = { "PointColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierPoint, PointColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ABezierPoint_Statics::NewProp_PointColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABezierPoint_Statics::NewProp_PointColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierPoint_Statics::NewProp_spherecmp_MetaData[] = {
		{ "Category", "Sphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DrawBezierActor/BezierPoint/BezierPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABezierPoint_Statics::NewProp_spherecmp = { "spherecmp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierPoint, spherecmp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABezierPoint_Statics::NewProp_spherecmp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABezierPoint_Statics::NewProp_spherecmp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABezierPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierPoint_Statics::NewProp_PointColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierPoint_Statics::NewProp_spherecmp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABezierPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABezierPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABezierPoint_Statics::ClassParams = {
		&ABezierPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABezierPoint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABezierPoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABezierPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABezierPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABezierPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABezierPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABezierPoint, 2543561848);
	template<> MATERALLEARN_API UClass* StaticClass<ABezierPoint>()
	{
		return ABezierPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABezierPoint(Z_Construct_UClass_ABezierPoint, &ABezierPoint::StaticClass, TEXT("/Script/MateralLearn"), TEXT("ABezierPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABezierPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
