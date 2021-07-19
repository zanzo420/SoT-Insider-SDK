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
// Parameters
//---------------------------------------------------------------------------

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
struct UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
struct UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params
{
	TScriptInterface<class UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
struct UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params
{
	struct FServiceMessagingTestMessage                InMessage;                                                 // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
