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

// BlueprintGeneratedClass BP_SkeletonFortStorageBarrel_Cannonball.BP_SkeletonFortStorageBarrel_Cannonball_C
// 0x0018 (FullSize[0x04D8] - InheritedSize[0x04C0])
class ABP_SkeletonFortStorageBarrel_Cannonball_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                             // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UIslandTelemetrySubjectComponent*            IslandTelemetrySubject;                                    // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStorageContainerComponent*                  StorageContainer;                                          // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkeletonFortStorageBarrel_Cannonball.BP_SkeletonFortStorageBarrel_Cannonball_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
