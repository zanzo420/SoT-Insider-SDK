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

// Function BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_MerchantCrate_GunpowderBarrelProxy_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C.GetPxActorCapacityForPhysXAggregate");

	ABP_MerchantCrate_GunpowderBarrelProxy_C_GetPxActorCapacityForPhysXAggregate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MerchantCrate_GunpowderBarrelProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C.UserConstructionScript");

	ABP_MerchantCrate_GunpowderBarrelProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
