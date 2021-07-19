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

// Class Occlusion.OcclusionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOcclusionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Occlusion.OcclusionInterface");
		return ptr;
	}



};

// Class Occlusion.OcclusionService
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UOcclusionService : public UObject
{
public:
	unsigned char                                      UnknownData_1B8S[0x68];                                    // 0x0028(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Occlusion.OcclusionService");
		return ptr;
	}



	void OnPrimaryActorEndPlay(class AActor* InActor);
	void OnIgnoredActorEndPlay(class AActor* InActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
