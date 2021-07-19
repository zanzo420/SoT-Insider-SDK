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

// BlueprintGeneratedClass BP_MerchantCrate_GunpowderBarrel_Base.BP_MerchantCrate_GunpowderBarrel_Base_C
// 0x0018 (FullSize[0x07D8] - InheritedSize[0x07C0])
class ABP_MerchantCrate_GunpowderBarrel_Base_C : public AStaticMerchantCrate
{
public:
	class UItemHealthComponent*                        ItemHealth;                                                // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                            // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UFlammableWieldableComponent*                FlammableWieldable;                                        // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_GunpowderBarrel_Base.BP_MerchantCrate_GunpowderBarrel_Base_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
