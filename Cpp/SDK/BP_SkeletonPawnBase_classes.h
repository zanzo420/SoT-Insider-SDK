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

// BlueprintGeneratedClass BP_SkeletonPawnBase.BP_SkeletonPawnBase_C
// 0x0048 (FullSize[0x1238] - InheritedSize[0x11F0])
class ABP_SkeletonPawnBase_C : public AAthenaAICharacter
{
public:
	class UChainLightningReceiverComponent*            ChainLightningReceiver;                                    // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBlinkStrafeComponent*                       BlinkStrafe;                                               // 0x11F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWaterInteractionComponent*                  WaterInteraction;                                          // 0x1200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x1208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAINameplateComponent*                       AINameplate;                                               // 0x1210(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBP_SkeletonAudioComponent_C*                BP_SkeletonAudioComponent;                                 // 0x1218(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UNoiseMakerComponent*                        NoiseMaker;                                                // 0x1220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBP_EnemyVFXComponent_C*                     BP_EnemyVFXComponent;                                      // 0x1228(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                       // 0x1230(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkeletonPawnBase.BP_SkeletonPawnBase_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
