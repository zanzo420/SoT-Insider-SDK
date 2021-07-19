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

// BlueprintGeneratedClass BP_EnemyVFXComponent.BP_EnemyVFXComponent_C
// 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
class UBP_EnemyVFXComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      PlayerDeadHandle;                                          // 0x00D0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      PlayerDeadHandle_1;                                        // 0x0118(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemyVFXComponent.BP_EnemyVFXComponent_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_EnemyVFXComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
