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

// BlueprintGeneratedClass BP_gho_mast_fore.BP_gho_mast_fore_C
// 0x0038 (FullSize[0x0408] - InheritedSize[0x03D0])
class ABP_gho_mast_fore_C : public AActor
{
public:
	class UStaticMeshComponent*                        shp_gho_flag_01_a;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      shp_gho_sail_mid_01_a;                                     // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      shp_gho_sail_lower_01_a;                                   // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_gho_mast_crossbeam_mid_01_a;                           // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_gho_mast_crossbeam_01_a;                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_gho_mast_01_a;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_gho_mast_fore.BP_gho_mast_fore_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
