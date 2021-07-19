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

// BlueprintGeneratedClass BP_SkeletonFortDoor.BP_SkeletonFortDoor_C
// 0x0020 (FullSize[0x0570] - InheritedSize[0x0550])
class ABP_SkeletonFortDoor_C : public ASkeletonFortDoor
{
public:
	class UParticleSystemComponent*                    vfx_riddle_MediumFallingStone;                             // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_glow;                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_impact;                             // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_falling_dust;                       // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkeletonFortDoor.BP_SkeletonFortDoor_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
