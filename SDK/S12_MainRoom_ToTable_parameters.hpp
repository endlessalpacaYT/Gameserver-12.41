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

// 0x0 (0x0 - 0x0)
// Function S12_MainRoom_ToTable.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function S12_MainRoom_ToTable.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function S12_MainRoom_ToTable.SequenceDirector_C.Audio Camera Move Event
struct USequenceDirector_C_Audio_Camera_Move_Event_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function S12_MainRoom_ToTable.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
struct USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_623C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_CustomEvent_Sound;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
