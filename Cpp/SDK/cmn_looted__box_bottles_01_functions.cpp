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

// Function cmn_looted__box_bottles_01.cmn_looted__box_bottles_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Acmn_looted__box_bottles_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_looted__box_bottles_01.cmn_looted__box_bottles_01_C.UserConstructionScript");

	Acmn_looted__box_bottles_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
