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
// Function AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C.SetStatValueAsText
struct UAthenaStatsRowLeaderboard_C_SetStatValueAsText_Params
{
public:
	class FText                                  StatValue;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C.PreConstruct
struct UAthenaStatsRowLeaderboard_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C.ExecuteUbergraph_AthenaStatsRowLeaderboard
struct UAthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
