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
// Function FloatingInteraction_Indicator_BattlePass.FloatingInteraction_Indicator_BattlePass_C.SetCATextFX
struct UFloatingInteraction_Indicator_BattlePass_C_SetCATextFX_Params
{
public:
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x0(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function FloatingInteraction_Indicator_BattlePass.FloatingInteraction_Indicator_BattlePass_C.PreConstruct
struct UFloatingInteraction_Indicator_BattlePass_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FloatingInteraction_Indicator_BattlePass.FloatingInteraction_Indicator_BattlePass_C.OnObjectHoverBegin
struct UFloatingInteraction_Indicator_BattlePass_C_OnObjectHoverBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FloatingInteraction_Indicator_BattlePass.FloatingInteraction_Indicator_BattlePass_C.OnObjectHoverEnd
struct UFloatingInteraction_Indicator_BattlePass_C_OnObjectHoverEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FloatingInteraction_Indicator_BattlePass.FloatingInteraction_Indicator_BattlePass_C.TriggerLoopingHoverStateAnim
struct UFloatingInteraction_Indicator_BattlePass_C_TriggerLoopingHoverStateAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FloatingInteraction_Indicator_BattlePass.FloatingInteraction_Indicator_BattlePass_C.Construct
struct UFloatingInteraction_Indicator_BattlePass_C_Construct_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function FloatingInteraction_Indicator_BattlePass.FloatingInteraction_Indicator_BattlePass_C.ExecuteUbergraph_FloatingInteraction_Indicator_BattlePass
struct UFloatingInteraction_Indicator_BattlePass_C_ExecuteUbergraph_FloatingInteraction_Indicator_BattlePass_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_709F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
