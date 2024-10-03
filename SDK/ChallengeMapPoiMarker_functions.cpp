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


// Function ChallengeMapPoiMarker.ChallengeMapPoiMarker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeMapPoiMarker_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ChallengeMapPoiMarker_C", "PreConstruct");

	Params::UChallengeMapPoiMarker_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeMapPoiMarker.ChallengeMapPoiMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChallengeMapPoiMarker_C::Construct()
{
	static auto Func = Class->GetFunction("ChallengeMapPoiMarker_C", "Construct");

	Params::UChallengeMapPoiMarker_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeMapPoiMarker.ChallengeMapPoiMarker_C.HandleTextChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsRedacted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsSpybase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeMapPoiMarker_C::HandleTextChanged(bool bIsRedacted, bool bIsSpybase)
{
	static auto Func = Class->GetFunction("ChallengeMapPoiMarker_C", "HandleTextChanged");

	Params::UChallengeMapPoiMarker_C_HandleTextChanged_Params Parms;

	Parms.bIsRedacted = bIsRedacted;
	Parms.bIsSpybase = bIsSpybase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeMapPoiMarker.ChallengeMapPoiMarker_C.ExecuteUbergraph_ChallengeMapPoiMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsRedacted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSpybase                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default_2                                          ()
// struct FSlateColor                 K2Node_Select_Default_3                                          ()

void UChallengeMapPoiMarker_C::ExecuteUbergraph_ChallengeMapPoiMarker(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsRedacted, bool K2Node_Event_bIsSpybase, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FSlateFontInfo& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3)
{
	static auto Func = Class->GetFunction("ChallengeMapPoiMarker_C", "ExecuteUbergraph_ChallengeMapPoiMarker");

	Params::UChallengeMapPoiMarker_C_ExecuteUbergraph_ChallengeMapPoiMarker_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bIsRedacted = K2Node_Event_bIsRedacted;
	Parms.K2Node_Event_bIsSpybase = K2Node_Event_bIsSpybase;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
