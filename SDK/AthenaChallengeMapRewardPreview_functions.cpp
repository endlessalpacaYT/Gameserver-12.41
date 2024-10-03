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


// Function AthenaChallengeMapRewardPreview.AthenaChallengeMapRewardPreview_C.SetPreviewVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengeMapRewardPreview_C::SetPreviewVisible(bool bVisible)
{
	static auto Func = Class->GetFunction("AthenaChallengeMapRewardPreview_C", "SetPreviewVisible");

	Params::UAthenaChallengeMapRewardPreview_C_SetPreviewVisible_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeMapRewardPreview.AthenaChallengeMapRewardPreview_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeMapRewardPreview_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("AthenaChallengeMapRewardPreview_C", "OnAnimationFinished");

	Params::UAthenaChallengeMapRewardPreview_C_OnAnimationFinished_Params Parms;

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeMapRewardPreview.AthenaChallengeMapRewardPreview_C.ExecuteUbergraph_AthenaChallengeMapRewardPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bVisible                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengeMapRewardPreview_C::ExecuteUbergraph_AthenaChallengeMapRewardPreview(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, bool K2Node_CustomEvent_bVisible, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWidgetAnimation* K2Node_Event_Animation, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengeMapRewardPreview_C", "ExecuteUbergraph_AthenaChallengeMapRewardPreview");

	Params::UAthenaChallengeMapRewardPreview_C_ExecuteUbergraph_AthenaChallengeMapRewardPreview_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_CustomEvent_bVisible = K2Node_CustomEvent_bVisible;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
