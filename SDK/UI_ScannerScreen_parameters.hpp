#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function UI_ScannerScreen.UI_ScannerScreen_C.EventFail
struct UUI_ScannerScreen_C_EventFail_Params
{
public:
	class FText                                  ScreenText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function UI_ScannerScreen.UI_ScannerScreen_C.EventSuccess
struct UUI_ScannerScreen_C_EventSuccess_Params
{
public:
	class FText                                  ScreenText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function UI_ScannerScreen.UI_ScannerScreen_C.EventScanning
struct UUI_ScannerScreen_C_EventScanning_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function UI_ScannerScreen.UI_ScannerScreen_C.EventTargetLost
struct UUI_ScannerScreen_C_EventTargetLost_Params
{
public:
	class FText                                  ScreenText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x110 (0x110 - 0x0)
// Function UI_ScannerScreen.UI_ScannerScreen_C.ExecuteUbergraph_UI_ScannerScreen
struct UUI_ScannerScreen_C_ExecuteUbergraph_UI_ScannerScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)()
	bool                                         Temp_bool_Variable_1;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x48(0x18)()
	class FText                                  K2Node_CustomEvent_ScreenText_2;                   // 0x60(0x18)()
	class FText                                  K2Node_CustomEvent_ScreenText_1;                   // 0x78(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DEF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x98(0x18)()
	class FText                                  K2Node_CustomEvent_ScreenText;                     // 0xB0(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue_2;                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0xD0(0x18)()
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0xF8(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
