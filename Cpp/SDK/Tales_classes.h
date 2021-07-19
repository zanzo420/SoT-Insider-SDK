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

// Class Tales.TaleQuestStep
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UTaleQuestStep : public UObject
{
public:
	unsigned char                                      UnknownData_2Q2E[0x40];                                    // 0x0028(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestStep");
		return ptr;
	}



};

// Class Tales.TaleQuestService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UTaleQuestService : public UObject
{
public:
	unsigned char                                      UnknownData_GT8W[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestService");
		return ptr;
	}



};

// Class Tales.TaleQuestServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestServiceDesc : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestServiceDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestStepDesc
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTaleQuestStepDesc : public UObject
{
public:
	bool                                               Fork;                                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BU1F[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestStepDesc");
		return ptr;
	}



};

// Class Tales.TaleMigrationAction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleMigrationAction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleMigrationAction");
		return ptr;
	}



};

// Class Tales.TaleQuestFramedStep
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UTaleQuestFramedStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_XOML[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTaleQuestService*>                   Services;                                                  // 0x0070(0x0010) (ZeroConstructor, Protected)
	class UTaleQuestFramedStepDesc*                    FrameDesc;                                                 // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2BDX[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScriptStruct*                               StructForCollector;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_57C1[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestFramedStep");
		return ptr;
	}



};

// Class Tales.TaleQuestFramedStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestFramedStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<class UTaleQuestServiceDesc*>               Services;                                                  // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)
	class UScriptStruct*                               Variables;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestFramedStepDesc");
		return ptr;
	}



};

// Class Tales.ContendedResourceServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UContendedResourceServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.ContendedResourceServiceInterface");
		return ptr;
	}



};

// Class Tales.WorldResourceRegistryInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWorldResourceRegistryInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.WorldResourceRegistryInterface");
		return ptr;
	}



};

// Class Tales.ContendedResourceComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UContendedResourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_JASV[0x38];                                    // 0x00C8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.ContendedResourceComponent");
		return ptr;
	}



};

// Class Tales.EnvQueryContext_TaleContextBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_TaleContextBase : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.EnvQueryContext_TaleContextBase");
		return ptr;
	}



};

// Class Tales.IslandTypeWeightsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UIslandTypeWeightsDataAsset : public UDataAsset
{
public:
	TArray<struct FIslandTypeWeights>                  IslandTypeWeightsForDifficultyRanks;                       // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.IslandTypeWeightsDataAsset");
		return ptr;
	}



};

// Class Tales.SplineFootprintPathComponent
// 0x0028 (FullSize[0x0620] - InheritedSize[0x05F8])
class USplineFootprintPathComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData_0NAD[0x8];                                     // 0x05F8(0x0008) Fix Super Size
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0600(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSplineFootprintPathTool                    PathTool;                                                  // 0x0608(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F99U[0x3];                                     // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DecalYaw;                                                  // 0x060C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DecalUniformScale;                                         // 0x0610(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TTZA[0x4];                                     // 0x061C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.SplineFootprintPathComponent");
		return ptr;
	}



};

// Class Tales.StartTallTaleConditionalStatTrigger
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStartTallTaleConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.StartTallTaleConditionalStatTrigger");
		return ptr;
	}



};

// Class Tales.TaleQuestArrayEntrySelectionStrategy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestArrayEntrySelectionStrategy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestArrayEntrySelectionStrategy");
		return ptr;
	}



};

// Class Tales.FixedArrayEntrySelectionStrategy
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UFixedArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:
	int                                                IndexToSelect;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IWSV[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.FixedArrayEntrySelectionStrategy");
		return ptr;
	}



};

// Class Tales.RandomArrayEntrySelectionStrategy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URandomArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.RandomArrayEntrySelectionStrategy");
		return ptr;
	}



};

// Class Tales.SequentialArrayEntrySelectionStrategy
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USequentialArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:
	unsigned char                                      UnknownData_H6WL[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.SequentialArrayEntrySelectionStrategy");
		return ptr;
	}



};

// Class Tales.TaleQuestCargoRunContract
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UTaleQuestCargoRunContract : public UObject
{
public:
	unsigned char                                      UnknownData_F0PE[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCompleted;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDelivered;                                               // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollected;                                               // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FTaleQuestCargoRunContractItem>      ItemsToCollect;                                            // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData_XCX6[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      DeliverToNPC;                                              // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      CollectFromNPC;                                            // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L40B[0x18];                                    // 0x0098(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestCargoRunContract");
		return ptr;
	}



};

// Class Tales.TaleQuestCargoRunContractsService
// 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
class UTaleQuestCargoRunContractsService : public UTaleQuestService
{
public:
	TArray<class UTaleQuestCargoRunContract*>          Contracts;                                                 // 0x0040(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_8AXB[0x38];                                    // 0x0050(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestCargoRunContractsService");
		return ptr;
	}



	class UTaleQuestCargoRunContract* GetContract(const struct FGuid& Guid);
	struct FGuid AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes);
};

// Class Tales.TaleQuestMerchantContract
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UTaleQuestMerchantContract : public UObject
{
public:
	unsigned char                                      UnknownData_GONS[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCompleted;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExpired;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDelivered;                                               // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollected;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllocated;                                               // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestMerchantContract");
		return ptr;
	}



};

// Class Tales.TaleQuestMerchantContractsService
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UTaleQuestMerchantContractsService : public UTaleQuestService
{
public:
	TArray<class UTaleQuestMerchantContract*>          Contracts;                                                 // 0x0040(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestMerchantContractsService");
		return ptr;
	}



	class UTaleQuestMerchantContract* GetContract(const struct FGuid& Guid);
	struct FGuid AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit);
};

// Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestSelectorServiceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_SetDebugVoyageSeed(int Seed);
	void STATIC_ResetVoyageDebugSeed();
};

// Class Tales.CutsceneResponsesTaleService
// 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
class UCutsceneResponsesTaleService : public UTaleQuestService
{
public:
	TArray<class UCutsceneResponseCoordinator*>        TrackedResponseCoordinators;                               // 0x0040(0x0010) (ZeroConstructor)
	TArray<class UCutsceneResponseComponent*>          TrackedResponseComponents;                                 // 0x0050(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	TArray<class AActor*>                              ResponseRelevantActors;                                    // 0x0060(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.CutsceneResponsesTaleService");
		return ptr;
	}



	void TrackResponseCoordinator(class UCutsceneResponseCoordinator* Coordinator);
	class UCutsceneResponseSheet* StartCutsceneResponseSheet(class AActor* TargetActor, const TScriptInterface<class UCutsceneResponsePlayerInterface>& CutsceneResponsePlayer, class UClass* ResponseSheetClass);
	void ClearAllActiveResponseSheets();
	void AddResponseSheetRelevantActor(class AActor* Actor);
};

// Class Tales.GameEventExclusionZoneTaleService
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UGameEventExclusionZoneTaleService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_BHDX[0x28];                                    // 0x0040(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.GameEventExclusionZoneTaleService");
		return ptr;
	}



};

// Class Tales.TaleQuestActorService
// 0x00D0 (FullSize[0x0110] - InheritedSize[0x0040])
class UTaleQuestActorService : public UTaleQuestService
{
public:
	TArray<struct FTrackedActorData>                   TrackedActors;                                             // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FCriticalActorDelegateData>          CriticalActors;                                            // 0x0050(0x0010) (ZeroConstructor)
	class UTaleQuestActorServiceDesc*                  Desc;                                                      // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APhasedClusterRoot*                          PhasedClusterRoot;                                         // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPhasedActor>                        PhasedActors;                                              // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FPhasedItem>                         PhasedItems;                                               // 0x0080(0x0010) (ZeroConstructor)
	struct FText                                       CriticalActorHandedInByAnotherCrewFailureMessage;          // 0x0090(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_I4ES[0x20];                                    // 0x0090(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_29DZ[0x48];                                    // 0x00C8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestActorService");
		return ptr;
	}



};

// Class Tales.TaleQuestEQSService
// 0x00C8 (FullSize[0x0108] - InheritedSize[0x0040])
class UTaleQuestEQSService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_XD7O[0xC8];                                    // 0x0040(0x00C8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestEQSService");
		return ptr;
	}



};

// Class Tales.TaleQuestFlameOfFateService
// 0x0060 (FullSize[0x00A0] - InheritedSize[0x0040])
class UTaleQuestFlameOfFateService : public UTaleQuestService
{
public:
	class UTaleQuestFlameOfFateServiceDesc*            ServiceDesc;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HY5V[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestFlameOfFateService");
		return ptr;
	}



};

// Class Tales.TaleQuestSelectorService
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UTaleQuestSelectorService : public UTaleQuestService
{
public:
	class UTaleQuestSelectorServiceDesc*               Desc;                                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2WJM[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestSelectorService");
		return ptr;
	}



	int GetRandomIntegerInRange(int Minimum, int Maximum);
};

// Class Tales.TaleResourceBrokerService
// 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
class UTaleResourceBrokerService : public UTaleQuestService
{
public:
	TScriptInterface<class UContendedResourceServiceInterface> ContendedResourceService;                                  // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class UWorldResourceRegistryInterface> ResourceRegistry;                                          // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TArray<struct FMigrationActionPair>                MigrationActions;                                          // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_DOU2[0x18];                                    // 0x0070(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleResourceBrokerService");
		return ptr;
	}



};

// Class Tales.CutsceneResponsesTaleServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCutsceneResponsesTaleServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.CutsceneResponsesTaleServiceDesc");
		return ptr;
	}



};

// Class Tales.GameEventExclusionZoneTaleServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameEventExclusionZoneTaleServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.GameEventExclusionZoneTaleServiceDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestActorServiceDesc
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTaleQuestActorServiceDesc : public UTaleQuestServiceDesc
{
public:
	class UClass*                                      ItemLostFailureRunnable;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestActorServiceDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestCargoRunContractsServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestCargoRunContractsServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestCargoRunContractsServiceDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestEQSServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestEQSServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestEQSServiceDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestFlameOfFateServiceDesc
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UTaleQuestFlameOfFateServiceDesc : public UTaleQuestServiceDesc
{
public:
	class UClass*                                      LanternItemCategory;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Athena_EFlameOfFateType>               FlameOfFateTypeToSet;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetFlameOnStart;                                           // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0REA[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestFlameOfFateServiceDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestMerchantContractsServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestMerchantContractsServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestMerchantContractsServiceDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestSelectorServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestSelectorServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestSelectorServiceDesc");
		return ptr;
	}



};

// Class Tales.AddGameEventExclusionZoneStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UAddGameEventExclusionZoneStep : public UTaleQuestStep
{
public:
	class UAddGameEventExclusionZoneStepDesc*          Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.AddGameEventExclusionZoneStep");
		return ptr;
	}



};

// Class Tales.DebugTaleAddInstancedLevelStep
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UDebugTaleAddInstancedLevelStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_7XIU[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDebugTaleAddInstancedLevelStepDesc*         StepDesc;                                                  // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     InstancedLevelPath;                                        // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KD6K[0x18];                                    // 0x0088(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.DebugTaleAddInstancedLevelStep");
		return ptr;
	}



};

// Class Tales.DebugTaleAddInstancedLevelStepDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UDebugTaleAddInstancedLevelStepDesc : public UTaleQuestStepDesc
{
public:
	struct FText                                       InstancedLevelKeyword;                                     // 0x0030(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_8VE5[0x20];                                    // 0x0030(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint32_t                                           InstancedLevelIndex;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_90XV[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.DebugTaleAddInstancedLevelStepDesc");
		return ptr;
	}



};

// Class Tales.DestroySpawnedActorStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UDestroySpawnedActorStep : public UTaleQuestStep
{
public:
	class UDestroySpawnedActorStepDesc*                Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.DestroySpawnedActorStep");
		return ptr;
	}



};

// Class Tales.DoEQSQueryStep
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UDoEQSQueryStep : public UTaleQuestStep
{
public:
	class UDoEQSQueryStepDesc*                         Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTaleQuestEQSService*                        CachedTaleEQSService;                                      // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.DoEQSQueryStep");
		return ptr;
	}



};

// Class Tales.FindNamedPointStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UFindNamedPointStep : public UTaleQuestStep
{
public:
	class UFindNamedPointStepDesc*                     StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.FindNamedPointStep");
		return ptr;
	}



};

// Class Tales.FindNamedPointAsVectorStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UFindNamedPointAsVectorStep : public UTaleQuestStep
{
public:
	class UFindNamedPointAsVectorStepDesc*             StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.FindNamedPointAsVectorStep");
		return ptr;
	}



};

// Class Tales.FindNamedPointAsTransformStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UFindNamedPointAsTransformStep : public UTaleQuestStep
{
public:
	class UFindNamedPointAsTransformStepDesc*          StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.FindNamedPointAsTransformStep");
		return ptr;
	}



};

// Class Tales.GenerateDigLocationInRadiusStep
// 0x0050 (FullSize[0x00B8] - InheritedSize[0x0068])
class UGenerateDigLocationInRadiusStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_V9UA[0x50];                                    // 0x0068(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.GenerateDigLocationInRadiusStep");
		return ptr;
	}



};

// Class Tales.GetVoyageDifficultyFromRankStep
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UGetVoyageDifficultyFromRankStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_UX5R[0x18];                                    // 0x0068(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.GetVoyageDifficultyFromRankStep");
		return ptr;
	}



};

// Class Tales.LinkEQSContextWithVariableStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class ULinkEQSContextWithVariableStep : public UTaleQuestStep
{
public:
	class ULinkEQSContextWithVariableStepDesc*         Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.LinkEQSContextWithVariableStep");
		return ptr;
	}



};

// Class Tales.LoadSequencerAnimationStep
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class ULoadSequencerAnimationStep : public UTaleQuestStep
{
public:
	class ULoadSequencerAnimationStepDesc*             StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                    // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TargetToSpawnActor;                                        // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.LoadSequencerAnimationStep");
		return ptr;
	}



};

// Class Tales.ParticipantRadiusTrackerStep
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UParticipantRadiusTrackerStep : public UTaleQuestStep
{
public:
	class UParticipantRadiusTrackerStepDesc*           Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TVY9[0x18];                                    // 0x0070(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.ParticipantRadiusTrackerStep");
		return ptr;
	}



};

// Class Tales.PlaySequencerAnimationOnCutsceneActorStep
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UPlaySequencerAnimationOnCutsceneActorStep : public UTaleQuestStep
{
public:
	class UPlaySequencerAnimationOnCutsceneActorStepDesc* StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                    // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPossessableSequence>                PossessableSequences;                                      // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_WF49[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationOnCutsceneActorStep");
		return ptr;
	}



};

// Class Tales.PlaySequencerAnimationStep
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UPlaySequencerAnimationStep : public UTaleQuestStep
{
public:
	class UPlaySequencerAnimationStepDesc*             StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                    // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z90F[0x28];                                    // 0x0078(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationStep");
		return ptr;
	}



};

// Class Tales.RemoveGameEventExclusionZoneStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class URemoveGameEventExclusionZoneStep : public UTaleQuestStep
{
public:
	class URemoveGameEventExclusionZoneStepDesc*       Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.RemoveGameEventExclusionZoneStep");
		return ptr;
	}



};

// Class Tales.SetEQSNamedContextStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class USetEQSNamedContextStep : public UTaleQuestStep
{
public:
	class USetEQSNamedContextStepDesc*                 Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.SetEQSNamedContextStep");
		return ptr;
	}



};

// Class Tales.SpawnPhasedActorWithTransformStep
// 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
class USpawnPhasedActorWithTransformStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_CGCD[0xA8];                                    // 0x0068(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.SpawnPhasedActorWithTransformStep");
		return ptr;
	}



};

// Class Tales.SpawnPhasedItemStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class USpawnPhasedItemStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.SpawnPhasedItemStep");
		return ptr;
	}



};

// Class Tales.StartSuppressingCutsceneResponsesStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UStartSuppressingCutsceneResponsesStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.StartSuppressingCutsceneResponsesStep");
		return ptr;
	}



};

// Class Tales.StopSuppressingCutsceneResponsesStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UStopSuppressingCutsceneResponsesStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.StopSuppressingCutsceneResponsesStep");
		return ptr;
	}



};

// Class Tales.TaleQuestChooseIslandFromWeightsStep
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UTaleQuestChooseIslandFromWeightsStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_VHWX[0x30];                                    // 0x0068(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UIslandTypeWeightsDataAsset*                 IslandTypeWeights;                                         // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestChooseIslandFromWeightsStep");
		return ptr;
	}



};

// Class Tales.TaleQuestClearTaleProposalsStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestClearTaleProposalsStep : public UTaleQuestStep
{
public:
	class UTaleQuestClearTaleProposalsStepDesc*        Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestClearTaleProposalsStep");
		return ptr;
	}



};

// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestEmissaryCompanyActionRewardBoostStep : public UTaleQuestStep
{
public:
	class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc* Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep");
		return ptr;
	}



};

// Class Tales.TaleQuestGrantRewardStep
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UTaleQuestGrantRewardStep : public UTaleQuestStep
{
public:
	class UTaleQuestGrantRewardStepDesc*               Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UJ0M[0x30];                                    // 0x0070(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestGrantRewardStep");
		return ptr;
	}



};

// Class Tales.TaleQuestPermanentPromptStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestPermanentPromptStep : public UTaleQuestStep
{
public:
	class UTaleQuestPermanentPromptStepDesc*           Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestPermanentPromptStep");
		return ptr;
	}



};

// Class Tales.TaleQuestSelectEntryFromArrayStep
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UTaleQuestSelectEntryFromArrayStep : public UTaleQuestStep
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                         // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_18H1[0x20];                                    // 0x0070(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestSelectEntryFromArrayStep");
		return ptr;
	}



};

// Class Tales.TaleQuestUpdateCheckpointStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestUpdateCheckpointStep : public UTaleQuestStep
{
public:
	class UTaleQuestUpdateCheckpointStepDesc*          Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestUpdateCheckpointStep");
		return ptr;
	}



};

// Class Tales.TaleQuestWaitForHandInStep
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UTaleQuestWaitForHandInStep : public UTaleQuestStep
{
public:
	class UTaleQuestWaitForHandInStepDesc*             Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7EPK[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestWaitForHandInStep");
		return ptr;
	}



};

// Class Tales.TrackResponseCoordinatorStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTrackResponseCoordinatorStep : public UTaleQuestStep
{
public:
	class UTrackResponseCoordinatorStepDesc*           StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TrackResponseCoordinatorStep");
		return ptr;
	}



};

// Class Tales.WaitForItemPickupStep
// 0x0090 (FullSize[0x00F8] - InheritedSize[0x0068])
class UWaitForItemPickupStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_10BZ[0x90];                                    // 0x0068(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.WaitForItemPickupStep");
		return ptr;
	}



};

// Class Tales.AddGameEventExclusionZoneStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UAddGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              Radius;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ASTP[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        Location;                                                  // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.AddGameEventExclusionZoneStepDesc");
		return ptr;
	}



};

// Class Tales.DestroySpawnedActorStepDesc
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDestroySpawnedActorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ActorVar;                                                  // 0x0030(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.DestroySpawnedActorStepDesc");
		return ptr;
	}



};

// Class Tales.DoEQSQueryStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UDoEQSQueryStepDesc : public UTaleQuestStepDesc
{
public:
	class UEnvQuery*                                   EQSQuery;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableArray                         OutPoints;                                                 // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.DoEQSQueryStepDesc");
		return ptr;
	}



};

// Class Tales.FindNamedPointStepDescBase
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UFindNamedPointStepDescBase : public UTaleQuestStepDesc
{
public:
	unsigned char                                      UnknownData_89HG[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableActor                         ActorToSearch;                                             // 0x0050(0x0010) (Edit)
	struct FQuestVariableName                          GroupNamePin;                                              // 0x0060(0x0010) (Edit)
	struct FName                                       PointGroupName;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EPointSelectionMethod>          SearchMethod;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_ESpaceType>                     ReturnInSpace;                                             // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IV6R[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.FindNamedPointStepDescBase");
		return ptr;
	}



};

// Class Tales.FindNamedPointStepDesc
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UFindNamedPointStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableOrientedPoint                 OutputOrientedPoint;                                       // 0x0080(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.FindNamedPointStepDesc");
		return ptr;
	}



};

// Class Tales.FindNamedPointAsVectorStepDesc
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UFindNamedPointAsVectorStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableVector                        OutputVectorLocation;                                      // 0x0080(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.FindNamedPointAsVectorStepDesc");
		return ptr;
	}



};

// Class Tales.FindNamedPointAsTransformStepDesc
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class UFindNamedPointAsTransformStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableTransform                     OutputTransform;                                           // 0x0080(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.FindNamedPointAsTransformStepDesc");
		return ptr;
	}



};

// Class Tales.GenerateDigLocationInRadiusStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UGenerateDigLocationInRadiusStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                                // 0x0030(0x0010) (Edit)
	struct FQuestVariableVector                        Center;                                                    // 0x0040(0x0010) (Edit)
	float                                              RadiusInCm;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K1DH[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        DigLocation;                                               // 0x0058(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.GenerateDigLocationInRadiusStepDesc");
		return ptr;
	}



};

// Class Tales.LinkEQSContextWithVariableStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class ULinkEQSContextWithVariableStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      Context;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FQuestVariableSetEQSTaleContextValue        Variable;                                                  // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.LinkEQSContextWithVariableStepDesc");
		return ptr;
	}



};

// Class Tales.LoadSequencerAnimationStepDesc
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class ULoadSequencerAnimationStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<class ULevelSequence*>                      LevelSequencesToLoad;                                      // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FQuestVariableActor                         TargetActorToSpawn;                                        // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         LevelSequenceActorSpawnLocation;                           // 0x0050(0x0010) (Edit)
	struct FQuestVariableActor                         SequencerCutSceneActor;                                    // 0x0060(0x0010) (Edit)
	bool                                               AttachToTargetActor;                                       // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3XOR[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachSocketName;                                          // 0x0074(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayGlobally;                                              // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y8QM[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.LoadSequencerAnimationStepDesc");
		return ptr;
	}



};

// Class Tales.ParticipantRadiusTrackerStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UParticipantRadiusTrackerStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              DurationBetweenChecks;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YMFB[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        Location;                                                  // 0x0038(0x0010) (Edit)
	struct FQuestVariableFloat                         Radius;                                                    // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.ParticipantRadiusTrackerStepDesc");
		return ptr;
	}



};

// Class Tales.WaitUntilAllParticipantsEnterRadiusStep
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UWaitUntilAllParticipantsEnterRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.WaitUntilAllParticipantsEnterRadiusStep");
		return ptr;
	}



};

// Class Tales.WaitUntilAllParticipantsLeaveRadiusStep
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UWaitUntilAllParticipantsLeaveRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.WaitUntilAllParticipantsLeaveRadiusStep");
		return ptr;
	}



};

// Class Tales.WaitUntilAnyParticipantEntersRadiusStep
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UWaitUntilAnyParticipantEntersRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.WaitUntilAnyParticipantEntersRadiusStep");
		return ptr;
	}



};

// Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UPlaySequencerAnimationOnCutsceneActorStepDesc : public UTaleQuestStepDesc
{
public:
	class ULevelSequence*                              LevelSequence;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delay;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DW3H[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableActor                         DockableBaseActor;                                         // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         SequencerCutSceneActor;                                    // 0x0050(0x0010) (Edit)
	struct FQuestVariableActor                         ActorToPossess;                                            // 0x0060(0x0010) (Edit)
	struct FQuestVariableArray                         AdditionalPossessables;                                    // 0x0070(0x0010) (Edit)
	struct FQuestVariableActor                         InteractingActor;                                          // 0x0080(0x0010) (Edit)
	struct FString                                     PossessableName;                                           // 0x0090(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	class USceneDialogueData*                          DialogueData;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               LocalisableNames;                                          // 0x00A8(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLevelSequenceActorAlwaysRelevant;                        // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsLooping;                                                 // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5AY8[0x2];                                     // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SubtitleSphereRadiusInCm;                                  // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                              FemaleLevelSequence;                                       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc");
		return ptr;
	}



};

// Class Tales.PlaySequencerAnimationStepDesc
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UPlaySequencerAnimationStepDesc : public UTaleQuestStepDesc
{
public:
	class ULevelSequence*                              LevelSequenceToPlay;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableActor                         TargetActorToSpawn;                                        // 0x0038(0x0010) (Edit)
	struct FQuestVariableActor                         LevelSequenceActorSpawnLocation;                           // 0x0048(0x0010) (Edit)
	struct FQuestVariableActor                         DockableBaseActor;                                         // 0x0058(0x0010) (Edit)
	struct FQuestVariableActor                         InteractingActor;                                          // 0x0068(0x0010) (Edit)
	bool                                               PlayGlobally;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsLevelSequenceActorAlawaysRelevant;                       // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_67JA[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneDialogueData*                          DialogueData;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               LocalisableNames;                                          // 0x0088(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLooping;                                                 // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TG10[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SubtitleSphereRadiusInCm;                                  // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                              FemaleLevelSequenceToPlay;                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationStepDesc");
		return ptr;
	}



};

// Class Tales.RemoveGameEventExclusionZoneStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class URemoveGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              Radius;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ONYN[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        Location;                                                  // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.RemoveGameEventExclusionZoneStepDesc");
		return ptr;
	}



};

// Class Tales.SetEQSNamedContextStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class USetEQSNamedContextStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       Name;                                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableLinkEQSContext                Value;                                                     // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.SetEQSNamedContextStepDesc");
		return ptr;
	}



};

// Class Tales.SpawnPhasedActorWithTransformStepBaseDesc
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class USpawnPhasedActorWithTransformStepBaseDesc : public UTaleQuestStepDesc
{
public:
	TAssetPtr<class UClass>                            Actor;                                                     // 0x0030(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K1RV[0x4];                                     // 0x0030(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               MarkAsCritical;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JQJ6[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CriticalActorLostMessage;                                  // 0x0058(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_8IJ9[0x20];                                    // 0x0051(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FQuestVariableActor                         ActorVar;                                                  // 0x0090(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.SpawnPhasedActorWithTransformStepBaseDesc");
		return ptr;
	}



};

// Class Tales.SpawnPhasedActorAtLocationStepDesc
// 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
class USpawnPhasedActorAtLocationStepDesc : public USpawnPhasedActorWithTransformStepBaseDesc
{
public:
	struct FQuestVariableTransform                     Location;                                                  // 0x00A0(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.SpawnPhasedActorAtLocationStepDesc");
		return ptr;
	}



};

// Class Tales.SpawnPhasedItemStepDesc
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class USpawnPhasedItemStepDesc : public UTaleQuestStepDesc
{
public:
	bool                                               TrackItem;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MarkItemAsCritical;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZP2T[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CriticalActorLostMessage;                                  // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_FK3L[0x20];                                    // 0x0032(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SocketName;                                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableItemDescType                  Item;                                                      // 0x0078(0x0010) (Edit)
	struct FQuestVariableActor                         LocatorVar;                                                // 0x0088(0x0010) (Edit)
	struct FQuestVariableItemInfo                      SpawnedItemVar;                                            // 0x0098(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.SpawnPhasedItemStepDesc");
		return ptr;
	}



};

// Class Tales.StartSuppressingCutsceneResponsesStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStartSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.StartSuppressingCutsceneResponsesStepDesc");
		return ptr;
	}



};

// Class Tales.StopSuppressingCutsceneResponsesStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStopSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.StopSuppressingCutsceneResponsesStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestChooseIslandFromWeightsStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UTaleQuestChooseIslandFromWeightsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableNameArray                     IslandsToChooseFrom;                                       // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           DifficultyRank;                                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableName                          ChosenIsland;                                              // 0x0050(0x0010) (Edit)
	class UIslandTypeWeightsDataAsset*                 IslandTypeWeights;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestChooseIslandFromWeightsStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestClearTaleProposalsStepDesc
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTaleQuestClearTaleProposalsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       CampaignId;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestClearTaleProposalsStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<EmissaryFramework_EEmisaryCompanyActionType> CompanyActionType;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XNBK[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestGrantRewardStepDesc
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UTaleQuestGrantRewardStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardId;                                                  // 0x0030(0x0008) (Edit)
	class UClass*                                      Company;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGuid                                       Id;                                                        // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldGrantToAlliedCrews;                                  // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U6OO[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Feature;                                                   // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LDW4[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestGrantRewardStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestPermanentPromptStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestPermanentPromptStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariablePrioritisedPrompt             Prompt;                                                    // 0x0030(0x0010) (Edit)
	TEnumAsByte<PrioritisedPrompts_EPromptStartStop>   StartOrStop;                                               // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1FCL[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestPermanentPromptStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestSelectEntryFromArrayStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestSelectEntryFromArrayStepDesc : public UTaleQuestStepDesc
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                         // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQuestVariableArray                         InputArray;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableAny                           OutputEntry;                                               // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestSelectEntryFromArrayStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestUpdateCheckpointStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestUpdateCheckpointStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardIdToAward;                                           // 0x0030(0x0008) (Edit)
	struct FName                                       CampaignIdToRemove;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Feature;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestUpdateCheckpointStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestWaitForHandInStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestWaitForHandInStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         HandInActor;                                               // 0x0030(0x0010) (Edit)
	class UClass*                                      SpecificItem;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FQuestVariableItemDescType                  HandInItem;                                                // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestWaitForHandInStepDesc");
		return ptr;
	}



};

// Class Tales.TrackResponseCoordinatorStepDesc
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UTrackResponseCoordinatorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableUObject                       CutsceneResponseCoordinator;                               // 0x0030(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TrackResponseCoordinatorStepDesc");
		return ptr;
	}



};

// Class Tales.WaitForItemPickupStepDesc
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UWaitForItemPickupStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Item;                                                      // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         PickerUpper;                                               // 0x0040(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.WaitForItemPickupStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep
// 0x0160 (FullSize[0x01C8] - InheritedSize[0x0068])
class UTaleQuestSelectShipwreckLocationFromValidCandidatesStep : public UTaleQuestStep
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                         // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J15E[0x38];                                    // 0x0070(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTaleQuestSelectorService*                   CachedSelectorService;                                     // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_45E4[0x118];                                   // 0x00B0(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep");
		return ptr;
	}



};

// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc : public UTaleQuestStepDesc
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                         // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQuestVariableVectorArray                   InputArray;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableVector                        OutputEntry;                                               // 0x0048(0x0010) (Edit)
	struct FQuestVariableBool                          ShuffleLists;                                              // 0x0058(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAddBountyMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestAddBountyMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddBountyMapStepDesc*              Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddBountyMapStep");
		return ptr;
	}



};

// Class Tales.TaleQuestAddBountyMapStepDesc
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UTaleQuestAddBountyMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableText                          Location;                                                  // 0x0048(0x0010) (Edit)
	struct FQuestVariableTextArray                     Description;                                               // 0x0058(0x0010) (Edit)
	struct FQuestVariableBountyTargetArray             CaptainTargets;                                            // 0x0068(0x0010) (Edit)
	struct FQuestVariableBountyTargetArray             CrewTargets;                                               // 0x0078(0x0010) (Edit)
	class UBountyMapLayout*                            CustomLayout;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      OverrideTreasureMapItemDesc;                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddBountyMapStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAddCargoRunMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestAddCargoRunMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddCargoRunMapStepDesc*            Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddCargoRunMapStep");
		return ptr;
	}



};

// Class Tales.TaleQuestAddCircleMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestAddCircleMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddCircleMapStepDesc*              Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddCircleMapStep");
		return ptr;
	}



};

// Class Tales.TaleQuestAddMerchantMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestAddMerchantMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddMerchantMapStepDesc*            Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddMerchantMapStep");
		return ptr;
	}



};

// Class Tales.TaleQuestAddRiddleMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestAddRiddleMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddRiddleMapBaseStepDesc*          Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapStep");
		return ptr;
	}



};

// Class Tales.TaleQuestAddXMarksMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestAddXMarksMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddXMarksMapStepDesc*              Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddXMarksMapStep");
		return ptr;
	}



};

// Class Tales.TaleQuestAdvanceRiddleMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestAdvanceRiddleMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAdvanceRiddleMapStepDesc*          Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAdvanceRiddleMapStep");
		return ptr;
	}



};

// Class Tales.TaleQuestMapService
// 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
class UTaleQuestMapService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_AFJD[0x90];                                    // 0x0040(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestMapService");
		return ptr;
	}



	void UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable);
	void AdvanceRiddleMap(const struct FName& MapId);
};

// Class Tales.TaleQuestMapServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestMapServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestMapServiceDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAddCargoRunMapStepDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UTaleQuestAddCargoRunMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableInt                           NumItems;                                                  // 0x0048(0x0010) (Edit)
	struct FQuestVariableGuid                          NPCId;                                                     // 0x0058(0x0010) (Edit)
	class UCargoRunMapLayout*                          Layout;                                                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddCargoRunMapStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAddCircleMapStepDesc
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UTaleQuestAddCircleMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableVector                        Location;                                                  // 0x0048(0x0010) (Edit)
	float                                              CircleScale;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EQuestMapIcon>                  RadialMiniIcon;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BF2H[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddCircleMapStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAddMerchantMapStepDesc
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UTaleQuestAddMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableText                          DeliveryLocation;                                          // 0x0048(0x0010) (Edit)
	struct FQuestVariableText                          DeliverByTime;                                             // 0x0058(0x0010) (Edit)
	struct FQuestVariableMerchantItemArray             Items;                                                     // 0x0068(0x0010) (Edit)
	class UMerchantMapLayout*                          Layout;                                                    // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddMerchantMapStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAddRiddleMapBaseStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestAddRiddleMapBaseStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapBaseStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAddRiddleMapStepDesc
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UTaleQuestAddRiddleMapStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	TArray<struct FText>                               Text;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UTaleQuestAddRiddleMapUsingVariableStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	struct FQuestVariableTextArray                     TextVariable;                                              // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAddXMarksMapStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestAddXMarksMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableName                          IslandName;                                                // 0x0038(0x0010) (Edit)
	struct FQuestVariableVector                        Location;                                                  // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAddXMarksMapStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestAdvanceRiddleMapStepDesc
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTaleQuestAdvanceRiddleMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestAdvanceRiddleMapStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestRemoveMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestRemoveMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestRemoveMapStepDesc*                 StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestRemoveMapStep");
		return ptr;
	}



};

// Class Tales.TaleQuestRemoveMapStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestRemoveMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableVector                        Location;                                                  // 0x0038(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestRemoveMapStepDesc");
		return ptr;
	}



};

// Class Tales.TaleQuestUpdateMerchantMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestUpdateMerchantMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestUpdateMerchantMapStepDesc*         Desc;                                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestUpdateMerchantMapStep");
		return ptr;
	}



};

// Class Tales.TaleQuestUpdateMerchantMapStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestUpdateMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableMerchantItem                  Item;                                                      // 0x0038(0x0010) (Edit)
	struct FQuestVariableInt                           Index;                                                     // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tales.TaleQuestUpdateMerchantMapStepDesc");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
