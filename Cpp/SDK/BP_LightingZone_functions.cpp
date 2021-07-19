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

// Function BP_LightingZone.BP_LightingZone_C.Update Lighting Zone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_LightingZone_C::Update_Lighting_Zone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightingZone.BP_LightingZone_C.Update Lighting Zone");

	ABP_LightingZone_C_Update_Lighting_Zone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LightingZone.BP_LightingZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LightingZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightingZone.BP_LightingZone_C.UserConstructionScript");

	ABP_LightingZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LightingZone.BP_LightingZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_LightingZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightingZone.BP_LightingZone_C.ReceiveBeginPlay");

	ABP_LightingZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LightingZone.BP_LightingZone_C.ExecuteUbergraph_BP_LightingZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LightingZone_C::ExecuteUbergraph_BP_LightingZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightingZone.BP_LightingZone_C.ExecuteUbergraph_BP_LightingZone");

	ABP_LightingZone_C_ExecuteUbergraph_BP_LightingZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
