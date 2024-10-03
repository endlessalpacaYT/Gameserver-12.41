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


// Function VaultRotator.VaultRotator_C.PlaySoundWhenEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSoundEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultRotator_C::PlaySoundWhenEnabled(class USoundBase* Sound, bool CallFunc_IsSoundEnabled_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "PlaySoundWhenEnabled");

	Params::AVaultRotator_C_PlaySoundWhenEnabled_Params Parms;

	Parms.Sound = Sound;
	Parms.CallFunc_IsSoundEnabled_ReturnValue = CallFunc_IsSoundEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                RGBA0                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                RGBA1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::SetBackgroundColor(const struct FLinearColor& RGBA0, const struct FLinearColor& RGBA1)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SetBackgroundColor");

	Params::AVaultRotator_C_SetBackgroundColor_Params Parms;

	Parms.RGBA0 = RGBA0;
	Parms.RGBA1 = RGBA1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.ToggleBackgroundText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDisplayText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultRotator_C::ToggleBackgroundText(bool bDisplayText)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "ToggleBackgroundText");

	Params::AVaultRotator_C_ToggleBackgroundText_Params Parms;

	Parms.bDisplayText = bDisplayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsErebus_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultRotator_C::LightControl(bool Active, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsErebus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "LightControl");

	Params::AVaultRotator_C_LightControl_Params Parms;

	Parms.Active = Active;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_IsErebus_ReturnValue_1 = CallFunc_IsErebus_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultRotator_C::SwitchPCLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SwitchPCLighting");

	Params::AVaultRotator_C_SwitchPCLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultRotator_C::SwitchPCLighting_LOWDetail(bool Visibility)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SwitchPCLighting_LOWDetail");

	Params::AVaultRotator_C_SwitchPCLighting_LOWDetail_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultRotator_C::SwitchMobileLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SwitchMobileLighting");

	Params::AVaultRotator_C_SwitchMobileLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SetBackgroundString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StringIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Background_Strings_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultRotator_C::SetBackgroundString(int32 StringIndex, class UUI_Background_Strings_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SetBackgroundString");

	Params::AVaultRotator_C_SetBackgroundString_Params Parms;

	Parms.StringIndex = StringIndex;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AVaultRotator_C::CameraTurn_180_to_360__FinishedFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "CameraTurn_180_to_360__FinishedFunc");

	Params::AVaultRotator_C_CameraTurn_180_to_360__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AVaultRotator_C::CameraTurn_180_to_360__UpdateFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "CameraTurn_180_to_360__UpdateFunc");

	Params::AVaultRotator_C_CameraTurn_180_to_360__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AVaultRotator_C::Timeline_Zoom__FinishedFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "Timeline_Zoom__FinishedFunc");

	Params::AVaultRotator_C_Timeline_Zoom__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AVaultRotator_C::Timeline_Zoom__UpdateFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "Timeline_Zoom__UpdateFunc");

	Params::AVaultRotator_C_Timeline_Zoom__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AVaultRotator_C::CameraTurn_0_to_180__FinishedFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "CameraTurn_0_to_180__FinishedFunc");

	Params::AVaultRotator_C_CameraTurn_0_to_180__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AVaultRotator_C::CameraTurn_0_to_180__UpdateFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "CameraTurn_0_to_180__UpdateFunc");

	Params::AVaultRotator_C_CameraTurn_0_to_180__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVaultRotator_C::UpdateSettings()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "UpdateSettings");

	Params::AVaultRotator_C_UpdateSettings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVaultRotator_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "ReceiveBeginPlay");

	Params::AVaultRotator_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.OnCameraTransitionReady
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bPrimaryToSecondary                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  PrimaryRequestedItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     Options                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AVaultRotator_C::OnCameraTransitionReady(bool bPrimaryToSecondary, class UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& Options)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "OnCameraTransitionReady");

	Params::AVaultRotator_C_OnCameraTransitionReady_Params Parms;

	Parms.bPrimaryToSecondary = bPrimaryToSecondary;
	Parms.PrimaryRequestedItem = PrimaryRequestedItem;
	Parms.Options = Options;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SetZoom
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bZoomedIn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultRotator_C::SetZoom(bool bZoomedIn)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SetZoom");

	Params::AVaultRotator_C_SetZoom_Params Parms;

	Parms.bZoomedIn = bZoomedIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETimelineDirection      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimelineDirection      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlaybackPosition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlaybackPosition_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInterpolatedTransitionCameraCallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue     (NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FInterpolatedTransitionCameraCallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1   (NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_1                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_Event_bPrimaryToSecondary                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  K2Node_Event_PrimaryRequestedItem                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     K2Node_Event_Options                                             (ConstParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bZoomedIn                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVaultRotator_C::ExecuteUbergraph_VaultRotator(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, enum class ETimelineDirection Temp_byte_Variable, enum class ETimelineDirection Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue_1, float CallFunc_GetPlaybackPosition_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FInterpolatedTransitionCamera& CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FInterpolatedTransitionCamera& CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool K2Node_Event_bPrimaryToSecondary, class UFortAccountItemDefinition* K2Node_Event_PrimaryRequestedItem, const struct FSceneTransitionOptions& K2Node_Event_Options, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_bZoomedIn)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "ExecuteUbergraph_VaultRotator");

	Params::AVaultRotator_C_ExecuteUbergraph_VaultRotator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue_1 = CallFunc_GetTimelineLength_ReturnValue_1;
	Parms.CallFunc_GetPlaybackPosition_ReturnValue = CallFunc_GetPlaybackPosition_ReturnValue;
	Parms.CallFunc_GetPlaybackPosition_ReturnValue_1 = CallFunc_GetPlaybackPosition_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue = CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1 = CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_1 = CallFunc_K2_SetRelativeTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.K2Node_Event_bPrimaryToSecondary = K2Node_Event_bPrimaryToSecondary;
	Parms.K2Node_Event_PrimaryRequestedItem = K2Node_Event_PrimaryRequestedItem;
	Parms.K2Node_Event_Options = K2Node_Event_Options;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_bZoomedIn = K2Node_Event_bZoomedIn;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
