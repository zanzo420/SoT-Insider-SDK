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

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UVoiceChatEmitterInterface::GetVoiceLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation");

	UVoiceChatEmitterInterface_GetVoiceLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           EmitterProxy                   (Parm, OutParm)
void UVoiceChatEmitterInterface::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy");

	UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EmitterProxy != nullptr)
		*EmitterProxy = params.EmitterProxy;

}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UVoiceChatEmitterInterface::GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler");

	UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params params;
	params.RelativeToThisEmitter = RelativeToThisEmitter;

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
