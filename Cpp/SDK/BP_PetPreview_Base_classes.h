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

// BlueprintGeneratedClass BP_PetPreview_Base.BP_PetPreview_Base_C
// 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
class ABP_PetPreview_Base_C : public APreviewPet
{
public:
	class UCosmeticItemAnimationComponent*             CosmeticItemAnimation;                                     // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PetPreview_Base.BP_PetPreview_Base_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
