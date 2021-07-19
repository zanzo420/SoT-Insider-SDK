#pragma once

// Name: SoT Insider, Version: 1.103.4306.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GhostShipCaptain.BP_GhostShipCaptain_C
// 0x0010 (FullSize[0x05C0] - InheritedSize[0x05B0])
class ABP_GhostShipCaptain_C : public ANPC
{
public:
	class UActorPhasingComponent*                      ActorPhasing;                                              // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UNPCDialogComponent*                         NPCDialog;                                                 // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GhostShipCaptain.BP_GhostShipCaptain_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
