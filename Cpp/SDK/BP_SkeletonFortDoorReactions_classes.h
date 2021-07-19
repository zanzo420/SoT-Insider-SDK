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

// BlueprintGeneratedClass BP_SkeletonFortDoorReactions.BP_SkeletonFortDoorReactions_C
// 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
class ABP_SkeletonFortDoorReactions_C : public AActor
{
public:
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_falling_dust;                       // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_riddle_MediumFallingStone;                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_impact;                             // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkeletonFortDoorReactions.BP_SkeletonFortDoorReactions_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
