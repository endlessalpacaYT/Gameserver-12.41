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
// Function BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C.OnObjectHoverBegin
struct UBPS12MainRoomInteractionIndicator_C_OnObjectHoverBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C.OnObjectHoverEnd
struct UBPS12MainRoomInteractionIndicator_C_OnObjectHoverEnd_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C.ExecuteUbergraph_BPS12MainRoomInteractionIndicator
struct UBPS12MainRoomInteractionIndicator_C_ExecuteUbergraph_BPS12MainRoomInteractionIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7082[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
