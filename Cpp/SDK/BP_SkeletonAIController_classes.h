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

// BlueprintGeneratedClass BP_SkeletonAIController.BP_SkeletonAIController_C
// 0x0018 (FullSize[0x0B28] - InheritedSize[0x0B10])
class ABP_SkeletonAIController_C : public AAthenaAICharacterController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaAIAbilityHandlerComponent*            AthenaAIAbilityHandler;                                    // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class AWieldableItem*                              Item;                                                      // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkeletonAIController.BP_SkeletonAIController_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnPossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_BP_SkeletonAIController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
