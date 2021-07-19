﻿#pragma once

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

// BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C
// 0x0008 (FullSize[0x0A68] - InheritedSize[0x0A60])
class ABP_Cutlass_Item_C : public APlayerMeleeWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C");
		return ptr;
	}



	void DoBlockEffect();
	void UserConstructionScript();
	void OnBlockedAttack(const struct FEventBlocked& Event);
	void ExecuteUbergraph_BP_Cutlass_Item(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
