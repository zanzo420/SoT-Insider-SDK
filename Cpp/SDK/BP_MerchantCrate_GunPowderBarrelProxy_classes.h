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

// BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C
// 0x0040 (FullSize[0x0818] - InheritedSize[0x07D8])
class ABP_MerchantCrate_GunpowderBarrelProxy_C : public ABP_MerchantCrate_GunpowderProxy_Base_C
{
public:
	class UWaterHeightProviderComponent*               WaterHeightProvider;                                       // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UExplosiveTriggerRammableComponent*          ExplosiveTriggerRammable;                                  // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UFuseComponent*                              Fuse;                                                      // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UExplosiveComponent*                         ExplosiveComponent;                                        // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UActorDamageableComponent*                   ActorDamageable;                                           // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               AttackHitVolume;                                           // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UExplosionComponent*                         ExplosionComponent;                                        // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C");
		return ptr;
	}



	unsigned char GetPxActorCapacityForPhysXAggregate();
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
