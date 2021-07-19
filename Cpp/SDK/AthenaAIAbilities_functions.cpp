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

// Function AthenaAIAbilities.BurrowHealVFXComponent.OnRep_IsVFXActive
// (Final, Native, Private)
void UBurrowHealVFXComponent::OnRep_IsVFXActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.BurrowHealVFXComponent.OnRep_IsVFXActive");

	UBurrowHealVFXComponent_OnRep_IsVFXActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive
// (Final, Native, Public)
void UElectricShieldBuffComponent::OnRep_IsShieldActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive");

	UElectricShieldBuffComponent_OnRep_IsShieldActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield
// (Native, Public)
void UElectricShieldBuffComponent::DeactivateShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield");

	UElectricShieldBuffComponent_DeactivateShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
