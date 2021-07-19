﻿// Name: SoT Insider, Version: 1.103.4306.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameService.GameServiceMapFunctions.UnregisterService
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameServiceMapFunctions::STATIC_UnregisterService(struct FGameServiceMap* ServiceMap, class UObject* Service)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.UnregisterService");

	UGameServiceMapFunctions_UnregisterService_Params params;
	params.Service = Service;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

}


// Function GameService.GameServiceMapFunctions.RegisterService
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UGameServiceMapFunctions::STATIC_RegisterService(struct FGameServiceMap* ServiceMap, class UObject* Service, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.RegisterService");

	UGameServiceMapFunctions_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;

}


// Function GameService.GameServiceMapFunctions.GetService
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UObject* UGameServiceMapFunctions::STATIC_GetService(struct FGameServiceMap* ServiceMap, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.GetService");

	UGameServiceMapFunctions_GetService_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;


	return params.ReturnValue;
}


// Function GameService.GameServiceMapFunctions.GetNumServices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameServiceMap         ServiceMap                     (Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UGameServiceMapFunctions::STATIC_GetNumServices(struct FGameServiceMap* ServiceMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceMapFunctions.GetNumServices");

	UGameServiceMapFunctions_GetNumServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServiceMap != nullptr)
		*ServiceMap = params.ServiceMap;


	return params.ReturnValue;
}


// Function GameService.GameServiceProviderInterface.UnregisterService
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameServiceProviderInterface::UnregisterService(class UObject* Service)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.UnregisterService");

	UGameServiceProviderInterface_UnregisterService_Params params;
	params.Service = Service;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameService.GameServiceProviderInterface.RegisterService
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UGameServiceProviderInterface::RegisterService(class UObject* Service, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.RegisterService");

	UGameServiceProviderInterface_RegisterService_Params params;
	params.Service = Service;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameService.GameServiceProviderInterface.GetService
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UObject* UGameServiceProviderInterface::GetService(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameService.GameServiceProviderInterface.GetService");

	UGameServiceProviderInterface_GetService_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif