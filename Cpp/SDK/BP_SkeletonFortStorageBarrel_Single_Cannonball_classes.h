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

// BlueprintGeneratedClass BP_SkeletonFortStorageBarrel_Single_Cannonball.BP_SkeletonFortStorageBarrel_Single_Cannonball_C
// 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
class ABP_SkeletonFortStorageBarrel_Single_Cannonball_C : public AActor
{
public:
	class UStaticMeshComponent*                        cmn_candle_01_d;                                           // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        cmn_candle_01_b;                                           // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        cmn_candle_01_a;                                           // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        cmn_bird_cage_01_a;                                        // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        BP_IslandStorageBarrel_01;                                 // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             SharedRoot;                                                // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkeletonFortStorageBarrel_Single_Cannonball.BP_SkeletonFortStorageBarrel_Single_Cannonball_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
