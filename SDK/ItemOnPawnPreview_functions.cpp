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


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USpotLightComponent*> L_lights                                                         (Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)

void AItemOnPawnPreview_C::SwitchErebusLighting(bool Visibility, const TArray<class USpotLightComponent*>& L_lights)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "SwitchErebusLighting");

	Params::AItemOnPawnPreview_C_SwitchErebusLighting_Params Parms;

	Parms.Visibility = Visibility;
	Parms.L_lights = L_lights;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_Floor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemOnPawnPreview_C::SetFloorEnabled(bool Show_Floor, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "SetFloorEnabled");

	Params::AItemOnPawnPreview_C_SetFloorEnabled_Params Parms;

	Parms.Show_Floor = Show_Floor;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl
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

void AItemOnPawnPreview_C::LightControl(bool Active, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsErebus_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "LightControl");

	Params::AItemOnPawnPreview_C_LightControl_Params Parms;

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


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemOnPawnPreview_C::SwitchPCLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "SwitchPCLighting");

	Params::AItemOnPawnPreview_C_SwitchPCLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemOnPawnPreview_C::SwitchMobileLighting(bool NewParam)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "SwitchMobileLighting");

	Params::AItemOnPawnPreview_C_SwitchMobileLighting_Params Parms;

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AItemOnPawnPreview_C::UpdateSettings()
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "UpdateSettings");

	Params::AItemOnPawnPreview_C_UpdateSettings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          InMaterialInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemOnPawnPreview_C::OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "OnSetFloorMaterial");

	Params::AItemOnPawnPreview_C_OnSetFloorMaterial_Params Parms;

	Parms.InMaterialInstance = InMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:

void AItemOnPawnPreview_C::OnPreviewVisualsSpawned()
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "OnPreviewVisualsSpawned");

	Params::AItemOnPawnPreview_C_OnPreviewVisualsSpawned_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetPawnLocation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Event_InMaterialInstance                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemOnPawnPreview_C::ExecuteUbergraph_ItemOnPawnPreview(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_GetPawnLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* K2Node_Event_InMaterialInstance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsErebus_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "ExecuteUbergraph_ItemOnPawnPreview");

	Params::AItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetPawnLocation_ReturnValue = CallFunc_GetPawnLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Event_InMaterialInstance = K2Node_Event_InMaterialInstance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
