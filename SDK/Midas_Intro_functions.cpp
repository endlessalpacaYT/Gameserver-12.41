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


// Function Midas_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Maproom                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom)
{
	static auto Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_2");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params Parms;

	Parms.BP_Battlepass_LightSwitcher_Maproom = BP_Battlepass_LightSwitcher_Maproom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Midas_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Midas                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Midas)
{
	static auto Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params Parms;

	Parms.BP_Battlepass_LightSwitcher_Midas = BP_Battlepass_LightSwitcher_Midas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Midas_Intro.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement)
{
	static auto Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params Parms;

	Parms.Camera_Root_Movement = Camera_Root_Movement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Midas_Intro.SequenceDirector_C.Camera_Root_Movement_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFrontend_EventLevel_Camera_C*Camera_Root_Movement                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bStreamIn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::Camera_Root_Movement_Event_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn)
{
	static auto Func = Class->GetFunction("SequenceDirector_C", "Camera_Root_Movement_Event_0");

	Params::USequenceDirector_C_Camera_Root_Movement_Event_0_Params Parms;

	Parms.Camera_Root_Movement = Camera_Root_Movement;
	Parms.bStreamIn = bStreamIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Midas_Intro.SequenceDirector_C.BP_Battlepass_LightSwitcher_Midas_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Midas                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher_Midas_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Midas)
{
	static auto Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher_Midas_Event_0");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher_Midas_Event_0_Params Parms;

	Parms.BP_Battlepass_LightSwitcher_Midas = BP_Battlepass_LightSwitcher_Midas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Midas_Intro.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Battlepass_LightSwitcher_C*BP_Battlepass_LightSwitcher_Maproom                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::BP_Battlepass_LightSwitcher_Maproom_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom)
{
	static auto Func = Class->GetFunction("SequenceDirector_C", "BP_Battlepass_LightSwitcher_Maproom_Event_0");

	Params::USequenceDirector_C_BP_Battlepass_LightSwitcher_Maproom_Event_0_Params Parms;

	Parms.BP_Battlepass_LightSwitcher_Maproom = BP_Battlepass_LightSwitcher_Maproom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Midas_Intro.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontend_EventLevel_Camera_C*K2Node_CustomEvent_Camera_Root_Movement                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bStreamIn                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Battlepass_LightSwitcher_C*K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Midas             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement, bool K2Node_CustomEvent_bStreamIn, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Midas)
{
	static auto Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom;
	Parms.K2Node_CustomEvent_Camera_Root_Movement = K2Node_CustomEvent_Camera_Root_Movement;
	Parms.K2Node_CustomEvent_bStreamIn = K2Node_CustomEvent_bStreamIn;
	Parms.K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Midas = K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Midas;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
