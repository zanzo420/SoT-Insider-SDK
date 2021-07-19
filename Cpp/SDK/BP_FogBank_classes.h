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

// BlueprintGeneratedClass BP_FogBank.BP_FogBank_C
// 0x0008 (FullSize[0x0540] - InheritedSize[0x0538])
class ABP_FogBank_C : public AFogBank
{
public:
	class UAthenaPlayerZonePenetrationTrackerComponent* AthenaPlayerZonePenetrationTracker;                        // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FogBank.BP_FogBank_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
