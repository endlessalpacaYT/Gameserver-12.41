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
// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.SetCATextFX
struct UFloatingInteraction_Indicator_Elevator_C_SetCATextFX_Params
{
public:
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x0(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.PreConstruct
struct UFloatingInteraction_Indicator_Elevator_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.OnObjectHoverBegin
struct UFloatingInteraction_Indicator_Elevator_C_OnObjectHoverBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.OnObjectHoverEnd
struct UFloatingInteraction_Indicator_Elevator_C_OnObjectHoverEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.TriggerLoopingHoverStateAnim
struct UFloatingInteraction_Indicator_Elevator_C_TriggerLoopingHoverStateAnim_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.SetBangState
struct UFloatingInteraction_Indicator_Elevator_C_SetBangState_Params
{
public:
	bool                                         bShowBang;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.Construct
struct UFloatingInteraction_Indicator_Elevator_C_Construct_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.ExecuteUbergraph_FloatingInteraction_Indicator_Elevator
struct UFloatingInteraction_Indicator_Elevator_C_ExecuteUbergraph_FloatingInteraction_Indicator_Elevator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_709A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowBang;                            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_709B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_3;         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_4;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_5;         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_6;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
