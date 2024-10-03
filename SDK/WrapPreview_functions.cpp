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


// Function WrapPreview.WrapPreview_C.SwitchErebusLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWrapPreview_C::SwitchErebusLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "SwitchErebusLighting");

	Params::AWrapPreview_C_SwitchErebusLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.UpdateFloorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingVehicle_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWrapPreview_C::UpdateFloorVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsShowingVehicle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "UpdateFloorVisibility");

	Params::AWrapPreview_C_UpdateFloorVisibility_Params Parms;

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsShowingVehicle_ReturnValue = CallFunc_IsShowingVehicle_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.SetFloorEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Floor_Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWrapPreview_C::SetFloorEnabled(bool Floor_Enabled)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "SetFloorEnabled");

	Params::AWrapPreview_C_SetFloorEnabled_Params Parms;

	Parms.Floor_Enabled = Floor_Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWrapPreview_C::LightControl(bool Active, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsErebus_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "LightControl");

	Params::AWrapPreview_C_LightControl_Params Parms;

	Parms.Active = Active;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWrapPreview_C::SwitchPCLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "SwitchPCLighting");

	Params::AWrapPreview_C_SwitchPCLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWrapPreview_C::SwitchMobileLighting(bool NewParam)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "SwitchMobileLighting");

	Params::AWrapPreview_C_SwitchMobileLighting_Params Parms;

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.HandleLightingScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::HandleLightingScale(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "HandleLightingScale");

	Params::AWrapPreview_C_HandleLightingScale_Params Parms;

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWrapPreview_C::UpdateSettings()
{
	static auto Func = Class->GetFunction("WrapPreview_C", "UpdateSettings");

	Params::AWrapPreview_C_UpdateSettings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.OnSetFloorMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          InMaterialInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "OnSetFloorMaterial");

	Params::AWrapPreview_C_OnSetFloorMaterial_Params Parms;

	Parms.InMaterialInstance = InMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWrapPreview_C::OnPreviewVisualsSpawned()
{
	static auto Func = Class->GetFunction("WrapPreview_C", "OnPreviewVisualsSpawned");

	Params::AWrapPreview_C_OnPreviewVisualsSpawned_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Event_InMaterialInstance                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWrapPreview_C::ExecuteUbergraph_WrapPreview(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UMaterialInterface* K2Node_Event_InMaterialInstance, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsErebus_ReturnValue)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "ExecuteUbergraph_WrapPreview");

	Params::AWrapPreview_C_ExecuteUbergraph_WrapPreview_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_Event_InMaterialInstance = K2Node_Event_InMaterialInstance;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
