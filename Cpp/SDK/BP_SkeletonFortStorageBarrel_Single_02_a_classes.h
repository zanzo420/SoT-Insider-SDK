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

// BlueprintGeneratedClass BP_SkeletonFortStorageBarrel_Single_02_a.BP_SkeletonFortStorageBarrel_Single_02_a_C
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class ABP_SkeletonFortStorageBarrel_Single_02_a_C : public AActor
{
public:
	class UChildActorComponent*                        BP_IslandStorageBarrel_01;                                 // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             SharedRoot;                                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkeletonFortStorageBarrel_Single_02_a.BP_SkeletonFortStorageBarrel_Single_02_a_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
