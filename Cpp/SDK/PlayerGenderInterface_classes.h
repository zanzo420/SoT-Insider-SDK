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

// BlueprintGeneratedClass PlayerGenderInterface.PlayerGenderInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPlayerGenderInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerGenderInterface.PlayerGenderInterface_C");
		return ptr;
	}



	void CheckIsFemale(bool* IsFemale);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
