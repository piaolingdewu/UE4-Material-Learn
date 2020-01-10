// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MateralLearn/MateralLearnGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMateralLearnGameModeBase() {}
// Cross Module References
	MATERALLEARN_API UClass* Z_Construct_UClass_AMateralLearnGameModeBase_NoRegister();
	MATERALLEARN_API UClass* Z_Construct_UClass_AMateralLearnGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MateralLearn();
// End Cross Module References
	void AMateralLearnGameModeBase::StaticRegisterNativesAMateralLearnGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMateralLearnGameModeBase_NoRegister()
	{
		return AMateralLearnGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMateralLearnGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMateralLearnGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MateralLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMateralLearnGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MateralLearnGameModeBase.h" },
		{ "ModuleRelativePath", "MateralLearnGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMateralLearnGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMateralLearnGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMateralLearnGameModeBase_Statics::ClassParams = {
		&AMateralLearnGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMateralLearnGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMateralLearnGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMateralLearnGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMateralLearnGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMateralLearnGameModeBase, 3330975);
	template<> MATERALLEARN_API UClass* StaticClass<AMateralLearnGameModeBase>()
	{
		return AMateralLearnGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMateralLearnGameModeBase(Z_Construct_UClass_AMateralLearnGameModeBase, &AMateralLearnGameModeBase::StaticClass, TEXT("/Script/MateralLearn"), TEXT("AMateralLearnGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMateralLearnGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
