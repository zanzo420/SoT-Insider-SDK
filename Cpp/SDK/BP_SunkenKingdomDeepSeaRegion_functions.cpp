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

// Function BP_SunkenKingdomDeepSeaRegion.BP_SunkenKingdomDeepSeaRegion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SunkenKingdomDeepSeaRegion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SunkenKingdomDeepSeaRegion.BP_SunkenKingdomDeepSeaRegion_C.UserConstructionScript");

	ABP_SunkenKingdomDeepSeaRegion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
