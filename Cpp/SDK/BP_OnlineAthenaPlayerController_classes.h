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

// BlueprintGeneratedClass BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C
// 0x0008 (FullSize[0x1528] - InheritedSize[0x1520])
class ABP_OnlineAthenaPlayerController_C : public AOnlineAthenaPlayerController
{
public:
	class UBP_Component_Tutorial2019_C*                VisitShopkeepersTutorialComponent;                         // 0x1520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
