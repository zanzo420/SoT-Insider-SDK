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

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Placement_HeightDrop_C::CreateComponentList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList");

	ABP_Placement_HeightDrop_C_CreateComponentList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Placement_HeightDrop_C::CreateParentBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds");

	ABP_Placement_HeightDrop_C_CreateParentBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Placement_HeightDrop_C::CheckMobilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState");

	ABP_Placement_HeightDrop_C_CheckMobilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Hit_Results                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Hit_Success                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*         Current_Component              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Impact_Position                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Impact_Normal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Placement_HeightDrop_C::Get_Valid_Collision(TArray<struct FHitResult>* Hit_Results, bool Hit_Success, class USceneComponent* Current_Component, bool* Return_Value, struct FVector* Impact_Position, struct FVector* Impact_Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision");

	ABP_Placement_HeightDrop_C_Get_Valid_Collision_Params params;
	params.Hit_Success = Hit_Success;
	params.Current_Component = Current_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hit_Results != nullptr)
		*Hit_Results = params.Hit_Results;
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Impact_Position != nullptr)
		*Impact_Position = params.Impact_Position;
	if (Impact_Normal != nullptr)
		*Impact_Normal = params.Impact_Normal;

}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Placement_HeightDrop_C::Drop_Components()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components");

	ABP_Placement_HeightDrop_C_Drop_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Placement_HeightDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript");

	ABP_Placement_HeightDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
