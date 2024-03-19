// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HypeRateHeartbeat/Public/BPHypeRateHeartbeat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPHypeRateHeartbeat() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HYPERATEHEARTBEAT_API UClass* Z_Construct_UClass_UBPHypeRateHeartbeat();
	HYPERATEHEARTBEAT_API UClass* Z_Construct_UClass_UBPHypeRateHeartbeat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HypeRateHeartbeat();
// End Cross Module References
	DEFINE_FUNCTION(UBPHypeRateHeartbeat::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
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
			{ "IsConnected", &UBPHypeRateHeartbeat::execIsConnected },
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WebsocketKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPHypeRateHeartbeat_eventConnect_Parms, Topic), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::NewProp_WebsocketKey = { "WebsocketKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPHypeRateHeartbeat_eventConnect_Parms, WebsocketKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::NewProp_Topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::NewProp_WebsocketKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hype Rate" },
		{ "ModuleRelativePath", "Public/BPHypeRateHeartbeat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPHypeRateHeartbeat, nullptr, "Connect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::BPHypeRateHeartbeat_eventConnect_Parms), Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hype Rate" },
		{ "ModuleRelativePath", "Public/BPHypeRateHeartbeat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPHypeRateHeartbeat, nullptr, "Disconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics
	{
		struct BPHypeRateHeartbeat_eventGetHeartBeat_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPHypeRateHeartbeat_eventGetHeartBeat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hype Rate" },
		{ "ModuleRelativePath", "Public/BPHypeRateHeartbeat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPHypeRateHeartbeat, nullptr, "GetHeartBeat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::BPHypeRateHeartbeat_eventGetHeartBeat_Parms), Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics
	{
		struct BPHypeRateHeartbeat_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPHypeRateHeartbeat_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BPHypeRateHeartbeat_eventIsConnected_Parms), &Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hype Rate" },
		{ "ModuleRelativePath", "Public/BPHypeRateHeartbeat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPHypeRateHeartbeat, nullptr, "IsConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::BPHypeRateHeartbeat_eventIsConnected_Parms), Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPHypeRateHeartbeat);
	UClass* Z_Construct_UClass_UBPHypeRateHeartbeat_NoRegister()
	{
		return UBPHypeRateHeartbeat::StaticClass();
	}
	struct Z_Construct_UClass_UBPHypeRateHeartbeat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HypeRateHeartbeat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPHypeRateHeartbeat_Connect, "Connect" }, // 4008328749
		{ &Z_Construct_UFunction_UBPHypeRateHeartbeat_Disconnect, "Disconnect" }, // 2725902356
		{ &Z_Construct_UFunction_UBPHypeRateHeartbeat_GetHeartBeat, "GetHeartBeat" }, // 3086471068
		{ &Z_Construct_UFunction_UBPHypeRateHeartbeat_IsConnected, "IsConnected" }, // 3762490103
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BPHypeRateHeartbeat.h" },
		{ "ModuleRelativePath", "Public/BPHypeRateHeartbeat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPHypeRateHeartbeat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UBPHypeRateHeartbeat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPHypeRateHeartbeat.OuterSingleton, Z_Construct_UClass_UBPHypeRateHeartbeat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBPHypeRateHeartbeat.OuterSingleton;
	}
	template<> HYPERATEHEARTBEAT_API UClass* StaticClass<UBPHypeRateHeartbeat>()
	{
		return UBPHypeRateHeartbeat::StaticClass();
	}
	UBPHypeRateHeartbeat::UBPHypeRateHeartbeat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPHypeRateHeartbeat);
	UBPHypeRateHeartbeat::~UBPHypeRateHeartbeat() {}
	struct Z_CompiledInDeferFile_FID_KillerImpulse_Plugins_HypeRateHeartbeat_1_0_HypeRateHeartbeat_Source_HypeRateHeartbeat_Public_BPHypeRateHeartbeat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KillerImpulse_Plugins_HypeRateHeartbeat_1_0_HypeRateHeartbeat_Source_HypeRateHeartbeat_Public_BPHypeRateHeartbeat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBPHypeRateHeartbeat, UBPHypeRateHeartbeat::StaticClass, TEXT("UBPHypeRateHeartbeat"), &Z_Registration_Info_UClass_UBPHypeRateHeartbeat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPHypeRateHeartbeat), 3508180688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KillerImpulse_Plugins_HypeRateHeartbeat_1_0_HypeRateHeartbeat_Source_HypeRateHeartbeat_Public_BPHypeRateHeartbeat_h_3571535006(TEXT("/Script/HypeRateHeartbeat"),
		Z_CompiledInDeferFile_FID_KillerImpulse_Plugins_HypeRateHeartbeat_1_0_HypeRateHeartbeat_Source_HypeRateHeartbeat_Public_BPHypeRateHeartbeat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KillerImpulse_Plugins_HypeRateHeartbeat_1_0_HypeRateHeartbeat_Source_HypeRateHeartbeat_Public_BPHypeRateHeartbeat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
