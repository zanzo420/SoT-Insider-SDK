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

// Function Interface_Bomb.Interface_Bomb_C.Interface Trigger
// (Public, BlueprintCallable, BlueprintEvent)
void UInterface_Bomb_C::Interface_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Bomb.Interface_Bomb_C.Interface Trigger");

	UInterface_Bomb_C_Interface_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interface_Bomb.Interface_Bomb_C.Set Bomb Parameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterface_Bomb_C::Set_Bomb_Parameters(float Radius, int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Bomb.Interface_Bomb_C.Set Bomb Parameters");

	UInterface_Bomb_C_Set_Bomb_Parameters_Params params;
	params.Radius = Radius;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
