// Name: SoT Insider, Version: 1.103.4306.0

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

// Function BP_ghostship_candle_01_a.BP_ghostship_candle_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ghostship_candle_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ghostship_candle_01_a.BP_ghostship_candle_01_a_C.UserConstructionScript");

	ABP_ghostship_candle_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
