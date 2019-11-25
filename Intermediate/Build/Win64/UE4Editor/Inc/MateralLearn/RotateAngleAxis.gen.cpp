// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MateralLearn/RotateAngleAxis/RotateAngleAxis.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateAngleAxis() {}
// Cross Module References
	MATERALLEARN_API UClass* Z_Construct_UClass_ARotateAngleAxis_NoRegister();
	MATERALLEARN_API UClass* Z_Construct_UClass_ARotateAngleAxis();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MateralLearn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ARotateAngleAxis::StaticRegisterNativesARotateAngleAxis()
	{
	}
	UClass* Z_Construct_UClass_ARotateAngleAxis_NoRegister()
	{
		return ARotateAngleAxis::StaticClass();
	}
	struct Z_Construct_UClass_ARotateAngleAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotateAngleAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MateralLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateAngleAxis_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotateAngleAxis/RotateAngleAxis.h" },
		{ "ModuleRelativePath", "RotateAngleAxis/RotateAngleAxis.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotateAngleAxis/RotateAngleAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateAngleAxis, Multiplier), METADATA_PARAMS(Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Multiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AxisVector_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotateAngleAxis/RotateAngleAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AxisVector = { "AxisVector", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateAngleAxis, AxisVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AxisVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AxisVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotateAngleAxis/RotateAngleAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateAngleAxis, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Dimensions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AngleAxis_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotateAngleAxis/RotateAngleAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AngleAxis = { "AngleAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateAngleAxis, AngleAxis), METADATA_PARAMS(Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AngleAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AngleAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotateAngleAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AxisVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_Dimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateAngleAxis_Statics::NewProp_AngleAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotateAngleAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotateAngleAxis>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotateAngleAxis_Statics::ClassParams = {
		&ARotateAngleAxis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARotateAngleAxis_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ARotateAngleAxis_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARotateAngleAxis_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARotateAngleAxis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotateAngleAxis()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotateAngleAxis_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotateAngleAxis, 3113778702);
	template<> MATERALLEARN_API UClass* StaticClass<ARotateAngleAxis>()
	{
		return ARotateAngleAxis::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotateAngleAxis(Z_Construct_UClass_ARotateAngleAxis, &ARotateAngleAxis::StaticClass, TEXT("/Script/MateralLearn"), TEXT("ARotateAngleAxis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateAngleAxis);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
