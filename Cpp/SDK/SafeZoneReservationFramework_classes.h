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

// Class SafeZoneReservationFramework.SafeZoneComponent
// 0x0140 (FullSize[0x06E0] - InheritedSize[0x05A0])
class USafeZoneComponent : public UCapsuleComponent
{
public:
	struct FScriptMulticastDelegate                    OnSafeZoneIsEmptyDelegate;                                 // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ExclusionRadius;                                           // 0x05B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CR8U[0x4];                                     // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExclusionHeight;                                           // 0x05B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SafeZoneEmptyCollisionProfile;                             // 0x05BC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoActivateSafeZone;                                      // 0x05C4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DeactivateSafeZoneAfterExclusionRadiusIsEmpty;             // 0x05C5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerTeleport;                                         // 0x05C6(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1ZPM[0x1];                                     // 0x05C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayerTeleportRadius;                                      // 0x05C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YLGR[0x4];                                     // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               UseRepelForce;                                             // 0x05D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JX65[0x3];                                     // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RepelForceRadius;                                          // 0x05D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CIFT[0x4];                                     // 0x05D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RepelForceExtents;                                         // 0x05DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RepelForceMin;                                             // 0x05E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RepelForceMax;                                             // 0x05E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ApplyRepelForceAtCentreOfMass;                             // 0x05E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0G2W[0x7];                                     // 0x05E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          RepelForceGradientCurve;                                   // 0x05F0(0x0080) (Edit, DisableEditOnInstance)
	bool                                               UseAngularImpulse;                                         // 0x0670(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BUSH[0x3];                                     // 0x0671(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularImpulseRadius;                                      // 0x0674(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8NXA[0x4];                                     // 0x0678(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularImpulseForce;                                       // 0x067C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetDeflectionAngle;                                     // 0x0680(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSafeZoneEmpty;                                           // 0x0684(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               StopAISpawning;                                            // 0x0685(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CNDT[0x2];                                     // 0x0686(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CurrentCollisionProfile;                                   // 0x0688(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SafeZoneReservationFramework_ESafeZoneState> SafeZoneState;                                             // 0x0690(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1PF1[0x4F];                                    // 0x0691(0x004F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SafeZoneReservationFramework.SafeZoneComponent");
		return ptr;
	}



	void SafeZoneIsEmpty__DelegateSignature();
	void OnRep_UpdateCollisionProfile();
	void OnRep_EmptyStateChanged();
	void DeactivateSafeZone();
	void DeactivateCollider();
	void ActivateSafeZone();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
