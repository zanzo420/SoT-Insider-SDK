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

// Class CustomMeshComponent.CustomMeshComponent
// 0x0018 (FullSize[0x05A0] - InheritedSize[0x0588])
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_OK37[0x8];                                     // 0x0588(0x0008) Fix Super Size
	unsigned char                                      UnknownData_NY9R[0x10];                                    // 0x0590(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomMeshComponent.CustomMeshComponent");
		return ptr;
	}



	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
