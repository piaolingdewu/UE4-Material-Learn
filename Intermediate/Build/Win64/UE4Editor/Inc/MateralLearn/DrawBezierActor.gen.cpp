// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MateralLearn/DrawBezierActor/DrawBezierActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawBezierActor() {}
// Cross Module References
	MATERALLEARN_API UClass* Z_Construct_UClass_ADrawBezierActor_NoRegister();
	MATERALLEARN_API UClass* Z_Construct_UClass_ADrawBezierActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MateralLearn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ADrawBezierActor::StaticRegisterNativesADrawBezierActor()
	{
	}
	UClass* Z_Construct_UClass_ADrawBezierActor_NoRegister()
	{
		return ADrawBezierActor::StaticClass();
	}
	struct Z_Construct_UClass_ADrawBezierActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPointNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutPointNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrawBezierActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MateralLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrawBezierActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DrawBezierActor/DrawBezierActor.h" },
		{ "ModuleRelativePath", "DrawBezierActor/DrawBezierActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPoints_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "DrawBezierActor/DrawBezierActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADrawBezierActor, OutPoints), METADATA_PARAMS(Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Points" },
		{ "Comment", "//????\xc4\xbf?????\xc4\xbe\xdc\xbe?????\n" },
		{ "ModuleRelativePath", "DrawBezierActor/DrawBezierActor.h" },
		{ "ToolTip", "????\xc4\xbf?????\xc4\xbe\xdc\xbe?????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADrawBezierActor, Distance), METADATA_PARAMS(Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPointNum_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "DrawBezierActor/DrawBezierActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPointNum = { "OutPointNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADrawBezierActor, OutPointNum), METADATA_PARAMS(Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPointNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPointNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "DrawBezierActor/DrawBezierActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Points, ADrawBezierActor), STRUCT_OFFSET(ADrawBezierActor, Points), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Points_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrawBezierActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_OutPointNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawBezierActor_Statics::NewProp_Points,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrawBezierActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrawBezierActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADrawBezierActor_Statics::ClassParams = {
		&ADrawBezierActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADrawBezierActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADrawBezierActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADrawBezierActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADrawBezierActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADrawBezierActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADrawBezierActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADrawBezierActor, 2731947373);
	template<> MATERALLEARN_API UClass* StaticClass<ADrawBezierActor>()
	{
		return ADrawBezierActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADrawBezierActor(Z_Construct_UClass_ADrawBezierActor, &ADrawBezierActor::StaticClass, TEXT("/Script/MateralLearn"), TEXT("ADrawBezierActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrawBezierActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
