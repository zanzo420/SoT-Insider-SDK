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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DebugMenu.DebugMenuDataAssetEntry
// 0x0038
struct FDebugMenuDataAssetEntry
{
	struct FString                                     MenuPath;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConsoleCommand;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	bool                                               CloseMenuWhenExecuted;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AvailableInShippingBuilds;                                 // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AddToCommonlyUsedMenu;                                     // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_58PX[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct DebugMenu.DebugMenuButtonShortcut
// 0x0040
struct FDebugMenuButtonShortcut
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConsoleCommand;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FKey>                                Buttons;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor)
	float                                              RequiredHoldTime;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AvailableInShippingBuilds;                                 // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H2PT[0xB];                                     // 0x0035(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct DebugMenu.DebugMenuUserItem
// 0x0020
struct FDebugMenuUserItem
{
	struct FString                                     path;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Command;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

};

// ScriptStruct DebugMenu.DebugMenuOptionExecutedEvent
// 0x0020
struct FDebugMenuOptionExecutedEvent
{
	struct FString                                     DebugMenuItemName;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConsoleCommand;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
