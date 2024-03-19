// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HypeRateHeartbeat/Public/BPHypeRateHeartbeat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPHypeRateHeartbeat() {}
// Cross Module References
	HYPERATEHEARTBEAT_API UClass* Z_Construct_UClass_UBPHypeRateHeartbeat_NoRegister();
	HYPERATEHEARTBEAT_API UClass* Z_Construct_UClass_UBPHypeRateHeartbeat();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HypeRateHeartbeat();
// End Cross Module References
	DEFINE_FUNCTION(UBPHypeRateHeartbeat::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPHypeRateHeartbeat::Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPHypeRateHeartbeat::execGetHeartBeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBPHypeRateHeartbeat::GetHeartBeat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPHypeRateHeartbeat::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Topic);
		P_GET_PROPERTY(FStrProperty,Z_Param_WebsocketKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPHypeRateHeartbeat::Connect(Z_Param_Topic,Z_Param_WebsocketKey);
		P_NATIVE_END;
	}
	void UBPHypeRateHeartbeat::StaticRegisterNativesUBPHypeRateHeartbeat()
	{
		UClass* Class = UBPHypeRateHeartbeat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UBPHypeRateHeartbeat::execConnect },
			{ "Disconnect", &UBPHypeRateHeartbeat::execDisconnect },
			{ "GetHeartBeat", &UBPHypeRateHeartbeat::execGetHeartBeat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics
	{
		struct BPHypeRateHeartbeat_eventConnect_Parms
		{
			FString Topic;
			FString WebsocketKey;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Topic;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WebsocketKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPHypeRateHeartbeat_eventConnect_Parms, Topic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::NewProp_WebsocketKey = { "WebsocketKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPHypeRateHeartbeat_eventConnect_Parms, WebsocketKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::NewProp_WebsocketKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hype Rate" },
		{ "ModuleRelativePath", "Public/BPHypeRateHeartbeat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPHypeRateHeartbeat, nullptr, "Connect", nullptr, nullptr, sizeof(BPHypeRateHeartbeat_eventConnect_Parms), Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hype Rate" },
		{ "ModuleRelativePath", "Public/BPHypeRateHeartbeat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPHypeRateHeartbeat, nullptr, "Disconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics
	{
		struct BPHypeRateHeartbeat_eventGetHeartBeat_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPHypeRateHeartbeat_eventGetHeartBeat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hype Rate" },
		{ "ModuleRelativePath", "Public/BPHypeRateHeartbeat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPHypeRateHeartbeat, nullptr, "GetHeartBeat", nullptr, nullptr, sizeof(BPHypeRateHeartbeat_eventGetHeartBeat_Parms), Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPHypeRateHeartbeat_NoRegister()
	{
		return UBPHypeRateHeartbeat::StaticClass();
	}
	struct Z_Construct_UClass_UBPHypeRateHeartbeat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HypeRateHeartbeat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect, "Connect" }, // 3513099371
		{ &Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect, "Disconnect" }, // 3326719879
		{ &Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat, "GetHeartBeat" }, // 1638557543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BPHypeRateHeartbeat.h" },
		{ "ModuleRelativePath", "Public/BPHypeRateHeartbeat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPHypeRateHeartbeat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::ClassParams = {
		&UBPHypeRateHeartbeat::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPHypeRateHeartbeat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPHypeRateHeartbeat, 2136260029);
	template<> HYPERATEHEARTBEAT_API UClass* StaticClass<UBPHypeRateHeartbeat>()
	{
		return UBPHypeRateHeartbeat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPHypeRateHeartbeat(Z_Construct_UClass_UBPHypeRateHeartbeat, &UBPHypeRateHeartbeat::StaticClass, TEXT("/Script/HypeRateHeartbeat"), TEXT("UBPHypeRateHeartbeat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPHypeRateHeartbeat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
