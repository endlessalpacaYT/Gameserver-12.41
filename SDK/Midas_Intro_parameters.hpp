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

// 0x8 (0x8 - 0x0)
// Function Midas_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params
{
public:
	class ABP_Battlepass_LightSwitcher_C*        BP_Battlepass_LightSwitcher_Maproom;               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Midas_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params
{
public:
	class ABP_Battlepass_LightSwitcher_C*        BP_Battlepass_LightSwitcher_Midas;                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Midas_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params
{
public:
	class AFrontend_EventLevel_Camera_C*         Camera_Root_Movement;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Midas_Intro.SequenceDirector_C.Camera_Root_Movement_Event_0
struct USequenceDirector_C_Camera_Root_Movement_Event_0_Params
{
public:
	class AFrontend_EventLevel_Camera_C*         Camera_Root_Movement;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStreamIn;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Midas_Intro.SequenceDirector_C.BP_Battlepass_LightSwitcher_Midas_Event_0
struct USequenceDirector_C_BP_Battlepass_LightSwitcher_Midas_Event_0_Params
{
public:
	class ABP_Battlepass_LightSwitcher_C*        BP_Battlepass_LightSwitcher_Midas;                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Midas_Intro.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_0
struct USequenceDirector_C_BP_Battlepass_LightSwitcher_Maproom_Event_0_Params
{
public:
	class ABP_Battlepass_LightSwitcher_C*        BP_Battlepass_LightSwitcher_Maproom;               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Midas_Intro.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
struct USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Battlepass_LightSwitcher_C*        K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFrontend_EventLevel_Camera_C*         K2Node_CustomEvent_Camera_Root_Movement;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bStreamIn;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Battlepass_LightSwitcher_C*        K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Midas; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
