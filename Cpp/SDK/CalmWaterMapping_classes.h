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

// Class CalmWaterMapping.CalmWaterMappingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCalmWaterMappingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CalmWaterMapping.CalmWaterMappingInterface");
		return ptr;
	}



	float GetDampeningFactor(const struct FVector2D& InPosition);
	float GetChoppinessFactor(const struct FVector2D& InPosition);
};

// Class CalmWaterMapping.AthenaCalmWaterZone
// 0x0020 (FullSize[0x03F8] - InheritedSize[0x03D8])
class AAthenaCalmWaterZone : public ACalmWaterZone
{
public:
	unsigned char                                      UnknownData_XNUK[0x20];                                    // 0x03D8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CalmWaterMapping.AthenaCalmWaterZone");
		return ptr;
	}



};

// Class CalmWaterMapping.CalmWaterMappingService
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UCalmWaterMappingService : public UObject
{
public:
	unsigned char                                      UnknownData_TGVU[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CalmWaterMapping.CalmWaterMappingService");
		return ptr;
	}



	float STATIC_GetMaxWindSpeed();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
