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

// BlueprintGeneratedClass BP_Projectile_VolcanoRockMini.BP_Projectile_VolcanoRockMini_C
// 0x0010 (FullSize[0x0648] - InheritedSize[0x0638])
class ABP_Projectile_VolcanoRockMini_C : public AVolcanicRock
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Collision;                                                 // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_VolcanoRockMini.BP_Projectile_VolcanoRockMini_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
