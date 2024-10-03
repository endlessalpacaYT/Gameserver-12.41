#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BattlePass_Door_XP_Progress.BattlePass_Door_XP_Progress_C.InitXpValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentXp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              XpToLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePass_Door_XP_Progress_C::InitXpValues(int32 CurrentXp, int32 XpToLevel, int32 NextLevel)
{
	static auto Func = Class->GetFunction("BattlePass_Door_XP_Progress_C", "InitXpValues");

	Params::UBattlePass_Door_XP_Progress_C_InitXpValues_Params Parms;

	Parms.CurrentXp = CurrentXp;
	Parms.XpToLevel = XpToLevel;
	Parms.NextLevel = NextLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePass_Door_XP_Progress.BattlePass_Door_XP_Progress_C.ExecuteUbergraph_BattlePass_Door_XP_Progress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CurrentXp                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_XpToLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NextLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UBattlePass_Door_XP_Progress_C::ExecuteUbergraph_BattlePass_Door_XP_Progress(int32 EntryPoint, int32 K2Node_CustomEvent_CurrentXp, int32 K2Node_CustomEvent_XpToLevel, int32 K2Node_CustomEvent_NextLevel, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePass_Door_XP_Progress_C", "ExecuteUbergraph_BattlePass_Door_XP_Progress");

	Params::UBattlePass_Door_XP_Progress_C_ExecuteUbergraph_BattlePass_Door_XP_Progress_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CurrentXp = K2Node_CustomEvent_CurrentXp;
	Parms.K2Node_CustomEvent_XpToLevel = K2Node_CustomEvent_XpToLevel;
	Parms.K2Node_CustomEvent_NextLevel = K2Node_CustomEvent_NextLevel;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
