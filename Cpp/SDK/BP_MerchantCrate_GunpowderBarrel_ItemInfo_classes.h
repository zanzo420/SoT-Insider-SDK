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

// BlueprintGeneratedClass BP_MerchantCrate_GunpowderBarrel_ItemInfo.BP_MerchantCrate_GunpowderBarrel_ItemInfo_C
// 0x0008 (FullSize[0x0720] - InheritedSize[0x0718])
class ABP_MerchantCrate_GunpowderBarrel_ItemInfo_C : public ABootyItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_GunpowderBarrel_ItemInfo.BP_MerchantCrate_GunpowderBarrel_ItemInfo_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
