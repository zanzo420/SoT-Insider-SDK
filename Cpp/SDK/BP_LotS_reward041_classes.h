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

// BlueprintGeneratedClass BP_LotS_reward041.BP_LotS_reward041_C
// 0x0020 (FullSize[0x0418] - InheritedSize[0x03F8])
class ABP_LotS_reward041_C : public AInteractableBase
{
public:
	class UNPCDialogComponent*                         InspectDialog;                                             // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      InteractionRegion;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UDecalComponent*                             Decal;                                                     // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LotS_reward041.BP_LotS_reward041_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
