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

// BlueprintGeneratedClass BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C
// 0x0020 (FullSize[0x04E0] - InheritedSize[0x04C0])
class ABP_AILargeShipNetProxy_C : public AShipNetProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        LightsProxy;                                               // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Materials;                                         // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C");
		return ptr;
	}



	void Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value);
	void Apply_Bits_to_Lanterns(int Lantern_Bits);
	void Create_Dynamic_Materials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLanternStateChanged(int LanternStateBits);
	void ExecuteUbergraph_BP_AILargeShipNetProxy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
