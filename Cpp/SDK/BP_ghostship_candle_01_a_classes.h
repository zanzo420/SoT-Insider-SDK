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

// BlueprintGeneratedClass BP_ghostship_candle_01_a.BP_ghostship_candle_01_a_C
// 0x0070 (FullSize[0x0440] - InheritedSize[0x03D0])
class ABP_ghostship_candle_01_a_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_tavern_candle_looping_014;                             // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_tavern_candle_looping_013;                             // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_tavern_candle_looping_012;                             // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_tavern_candle_looping_011;                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_tavern_candle_looping_01;                              // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMeshComponent04;                                     // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMeshComponent03;                                     // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMeshComponent02;                                     // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMeshComponent01;                                     // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMeshComponent0;                                      // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             SharedRoot;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ghostship_candle_01_a.BP_ghostship_candle_01_a_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
