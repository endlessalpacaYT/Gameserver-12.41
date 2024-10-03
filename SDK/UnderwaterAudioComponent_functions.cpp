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


// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UUnderwaterAudioComponent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("UnderwaterAudioComponent_C", "ReceiveBeginPlay");

	Params::UUnderwaterAudioComponent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.On Camera Underwater State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsUnderWater                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              DepthUnderwater                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnderwaterAudioComponent_C::On_Camera_Underwater_State_Changed(bool bIsUnderWater, float DepthUnderwater)
{
	static auto Func = Class->GetFunction("UnderwaterAudioComponent_C", "On Camera Underwater State Changed");

	Params::UUnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed_Params Parms;

	Parms.bIsUnderWater = bIsUnderWater;
	Parms.DepthUnderwater = DepthUnderwater;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ExecuteUbergraph_UnderwaterAudioComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSplitScreen_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bIsUnderWater                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_DepthUnderwater                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWaterSubsystem*             CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAudioComponentPlayStateCallFunc_GetPlayState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnderwaterAudioComponent_C::ExecuteUbergraph_UnderwaterAudioComponent(int32 EntryPoint, bool CallFunc_IsSplitScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bIsUnderWater, float K2Node_CustomEvent_DepthUnderwater, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UWaterSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EAudioComponentPlayState CallFunc_GetPlayState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static auto Func = Class->GetFunction("UnderwaterAudioComponent_C", "ExecuteUbergraph_UnderwaterAudioComponent");

	Params::UUnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsSplitScreen_ReturnValue = CallFunc_IsSplitScreen_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bIsUnderWater = K2Node_CustomEvent_bIsUnderWater;
	Parms.K2Node_CustomEvent_DepthUnderwater = K2Node_CustomEvent_DepthUnderwater;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayState_ReturnValue = CallFunc_GetPlayState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
