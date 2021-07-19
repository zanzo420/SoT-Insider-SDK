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

// Function BP_PromptActor_EmissaryActivated_GH.BP_PromptActor_EmissaryActivated_GH_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_EmissaryActivated_GH_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryActivated_GH.BP_PromptActor_EmissaryActivated_GH_C.UserConstructionScript");

	ABP_PromptActor_EmissaryActivated_GH_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryActivated_GH.BP_PromptActor_EmissaryActivated_GH_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryActivated_GH_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryActivated_GH.BP_PromptActor_EmissaryActivated_GH_C.ReceiveEndPlay");

	ABP_PromptActor_EmissaryActivated_GH_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryActivated_GH.BP_PromptActor_EmissaryActivated_GH_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_PromptActor_EmissaryActivated_GH_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryActivated_GH.BP_PromptActor_EmissaryActivated_GH_C.ReceiveBeginPlay");

	ABP_PromptActor_EmissaryActivated_GH_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryActivated_GH.BP_PromptActor_EmissaryActivated_GH_C.ExecuteUbergraph_BP_PromptActor_EmissaryActivated_GH
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryActivated_GH_C::ExecuteUbergraph_BP_PromptActor_EmissaryActivated_GH(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryActivated_GH.BP_PromptActor_EmissaryActivated_GH_C.ExecuteUbergraph_BP_PromptActor_EmissaryActivated_GH");

	ABP_PromptActor_EmissaryActivated_GH_C_ExecuteUbergraph_BP_PromptActor_EmissaryActivated_GH_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
