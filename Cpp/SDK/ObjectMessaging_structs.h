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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ObjectMessaging.ObjectMessagingObjectScoper
// 0x0050
struct FObjectMessagingObjectScoper
{
	unsigned char                                      UnknownData_GAKQ[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct ObjectMessaging.ObjectMessagingDispatcherHandle
// 0x0008
struct FObjectMessagingDispatcherHandle
{
	unsigned char                                      UnknownData_FX3Y[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct ObjectMessaging.ObjectMessagingHandle
// 0x0048
struct FObjectMessagingHandle
{
	unsigned char                                      UnknownData_8KUJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStruct*                                     EventType;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_74GG[0x38];                                    // 0x0010(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct ObjectMessaging.ObjectMessagingDispatcher
// 0x00A0
struct FObjectMessagingDispatcher
{
	unsigned char                                      UnknownData_DSKX[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
