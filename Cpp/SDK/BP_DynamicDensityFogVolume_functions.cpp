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

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.BlendParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendAmount                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFogVolume_C::BlendParams(float BlendAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.BlendParams");

	ABP_DynamicDensityFogVolume_C_BlendParams_Params params;
	params.BlendAmount = BlendAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState
// (BlueprintCallable, BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::OnRep_NextState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState");

	ABP_DynamicDensityFogVolume_C_OnRep_NextState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript");

	ABP_DynamicDensityFogVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc
// (BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::StateBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc");

	ABP_DynamicDensityFogVolume_C_StateBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc
// (BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::StateBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc");

	ABP_DynamicDensityFogVolume_C_StateBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay");

	ABP_DynamicDensityFogVolume_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFogVolume_C::UpdateCanvas(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas");

	ABP_DynamicDensityFogVolume_C_UpdateCanvas_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ChangeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFogVolume_C::ChangeState(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ChangeState");

	ABP_DynamicDensityFogVolume_C_ChangeState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState
// (BlueprintCallable, BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::SetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState");

	ABP_DynamicDensityFogVolume_C_SetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFogVolume_C::ExecuteUbergraph_BP_DynamicDensityFogVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume");

	ABP_DynamicDensityFogVolume_C_ExecuteUbergraph_BP_DynamicDensityFogVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
