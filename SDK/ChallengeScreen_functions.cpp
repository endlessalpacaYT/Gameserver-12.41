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


// Function ChallengeScreen.ChallengeScreen_C.HandleReplayCinematic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeScreen_C::HandleReplayCinematic(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "HandleReplayCinematic");

	Params::UChallengeScreen_C_HandleReplayCinematic_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ChallengeScreen.ChallengeScreen_C.PlayHolidayCinematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVideoConfig_Mono           K2Node_MakeStruct_VideoConfig_Mono                               ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActivatableMovieWidget_Monolithic_Native_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadStreamingVideo_bNoAutoPlay                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeScreen_C::PlayHolidayCinematic(class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, const struct FVideoConfig_Mono& K2Node_MakeStruct_VideoConfig_Mono, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActivatableMovieWidget_Monolithic_Native_C* CallFunc_Create_ReturnValue, bool CallFunc_LoadStreamingVideo_bNoAutoPlay)
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "PlayHolidayCinematic");

	Params::UChallengeScreen_C_PlayHolidayCinematic_Params Parms;

	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue_1 = CallFunc_GetRuntimeOptions_ReturnValue_1;
	Parms.K2Node_MakeStruct_VideoConfig_Mono = K2Node_MakeStruct_VideoConfig_Mono;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_LoadStreamingVideo_bNoAutoPlay = CallFunc_LoadStreamingVideo_bNoAutoPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeScreen.ChallengeScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeScreen_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "BP_OnActivated");

	Params::UChallengeScreen_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeScreen.ChallengeScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeScreen_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "BP_OnDeactivated");

	Params::UChallengeScreen_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeScreen.ChallengeScreen_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChallengeScreen_C::OnInitialized()
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "OnInitialized");

	Params::UChallengeScreen_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeScreen.ChallengeScreen_C.Play Party Assist Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UChallengeScreen_C::Play_Party_Assist_Audio()
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "Play Party Assist Audio");

	Params::UChallengeScreen_C_Play_Party_Assist_Audio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeScreen.ChallengeScreen_C.ExecuteUbergraph_ChallengeScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyAssistedChallengeSet_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeScreen_C::ExecuteUbergraph_ChallengeScreen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsPartyAssistedChallengeSet_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "ExecuteUbergraph_ChallengeScreen");

	Params::UChallengeScreen_C_ExecuteUbergraph_ChallengeScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsPartyAssistedChallengeSet_ReturnValue = CallFunc_IsPartyAssistedChallengeSet_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
