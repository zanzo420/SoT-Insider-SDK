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

// BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C
// 0x0040 (FullSize[0x0818] - InheritedSize[0x07D8])
class ABP_MerchantCrate_GunpowderBarrel_C : public ABP_MerchantCrate_GunpowderBarrel_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFlammableWieldableComponent*                FlammableWieldable_1;                                      // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager_1;                          // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UFuseComponent*                              Fuse;                                                      // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               AttackHitVolume;                                           // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UExplosionComponent*                         Explosion;                                                 // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UExplosiveComponent*                         Explosive;                                                 // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UActorDamageableComponent*                   ActorDamageable;                                           // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MerchantCrate_GunpowderBarrel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
