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

// 0x1 (0x1 - 0x0)
// Function BattlePassPagePipButton.BattlePassPagePipButton_C.PreConstruct
struct UBattlePassPagePipButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPagePipButton.BattlePassPagePipButton_C.Construct
struct UBattlePassPagePipButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnHovered
struct UBattlePassPagePipButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnUnhovered
struct UBattlePassPagePipButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnClicked
struct UBattlePassPagePipButton_C_BP_OnClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnSelected
struct UBattlePassPagePipButton_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPagePipButton.BattlePassPagePipButton_C.BP_OnDeselected
struct UBattlePassPagePipButton_C_BP_OnDeselected_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function BattlePassPagePipButton.BattlePassPagePipButton_C.ExecuteUbergraph_BattlePassPagePipButton
struct UBattlePassPagePipButton_C_ExecuteUbergraph_BattlePassPagePipButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6EC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
