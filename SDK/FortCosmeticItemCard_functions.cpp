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


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortColorPalette           RarityColors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::HandleUpdateRarity(const struct FFortColorPalette& RarityColors, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "HandleUpdateRarity");

	Params::UFortCosmeticItemCard_C_HandleUpdateRarity_Params Parms;

	Parms.RarityColors = RarityColors;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsBorderAnimated                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsHero                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsReward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsShuffleItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    ItemDynamicMaterial                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem, class UMaterialInstanceDynamic* ItemDynamicMaterial, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_3, float CallFunc_Conv_BoolToFloat_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "HandleUpdateVisuals");

	Params::UFortCosmeticItemCard_C_HandleUpdateVisuals_Params Parms;

	Parms.bIsItem = bIsItem;
	Parms.bIsBorderAnimated = bIsBorderAnimated;
	Parms.IsHero = IsHero;
	Parms.IsReward = IsReward;
	Parms.IsShuffleItem = IsShuffleItem;
	Parms.ItemDynamicMaterial = ItemDynamicMaterial;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_2 = CallFunc_Conv_BoolToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_3 = CallFunc_Conv_BoolToFloat_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_4 = CallFunc_Conv_BoolToFloat_ReturnValue_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.UpdateVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsBorderAnimated                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsHero                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bReward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsShuffleItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortCosmeticItemCard_C::UpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "UpdateVisuals");

	Params::UFortCosmeticItemCard_C_UpdateVisuals_Params Parms;

	Parms.bIsItem = bIsItem;
	Parms.bIsBorderAnimated = bIsBorderAnimated;
	Parms.bIsHero = bIsHero;
	Parms.bReward = bReward;
	Parms.bIsShuffleItem = bIsShuffleItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnCardTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUseNewItemCard                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortCosmeticItemCard_C::OnCardTypeChanged(bool bUseNewItemCard)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "OnCardTypeChanged");

	Params::UFortCosmeticItemCard_C_OnCardTypeChanged_Params Parms;

	Parms.bUseNewItemCard = bUseNewItemCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateEnhanced
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnhanced                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortCosmeticItemCard_C::OnUpdateEnhanced(bool bEnhanced)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateEnhanced");

	Params::UFortCosmeticItemCard_C_OnUpdateEnhanced_Params Parms;

	Parms.bEnhanced = bEnhanced;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardMaterial
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::OnUpdateItemCardMaterial(class UMaterialInterface* Material)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateItemCardMaterial");

	Params::UFortCosmeticItemCard_C_OnUpdateItemCardMaterial_Params Parms;

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardIcon
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::OnUpdateItemCardIcon(TSoftObjectPtr<class UTexture2D>& Icon)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateItemCardIcon");

	Params::UFortCosmeticItemCard_C_OnUpdateItemCardIcon_Params Parms;

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateSeriesOrRarityColors
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortColorPalette           ColorPalette                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UFortCosmeticItemCard_C::OnUpdateSeriesOrRarityColors(struct FFortColorPalette& ColorPalette)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUpdateSeriesOrRarityColors");

	Params::UFortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors_Params Parms;

	Parms.ColorPalette = ColorPalette;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnSizeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InCardWidth                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::OnSizeChanged(float InCardWidth)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "OnSizeChanged");

	Params::UFortCosmeticItemCard_C_OnSizeChanged_Params Parms;

	Parms.InCardWidth = InCardWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnHover
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCosmeticItemCard_C::OnHover()
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "OnHover");

	Params::UFortCosmeticItemCard_C_OnHover_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUnhover
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCosmeticItemCard_C::OnUnhover()
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "OnUnhover");

	Params::UFortCosmeticItemCard_C_OnUnhover_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.ExecuteUbergraph_FortCosmeticItemCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUseNewItemCard                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bEnhanced                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Event_Material                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_Icon                                                (ConstParm, HasGetValueTypeHash)
// struct FFortColorPalette           K2Node_Event_ColorPalette                                        (ConstParm, NoDestructor)
// bool                               K2Node_Event_bIsItem                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsBorderAnimated                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsHero                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bReward                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsShuffleItem                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InCardWidth                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::ExecuteUbergraph_FortCosmeticItemCard(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_bUseNewItemCard, bool K2Node_Event_bEnhanced, class UMaterialInterface* K2Node_Event_Material, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, TSoftObjectPtr<class UTexture2D> K2Node_Event_Icon, const struct FFortColorPalette& K2Node_Event_ColorPalette, bool K2Node_Event_bIsItem, bool K2Node_Event_bIsBorderAnimated, bool K2Node_Event_bIsHero, bool K2Node_Event_bReward, bool K2Node_Event_bIsShuffleItem, float K2Node_Event_InCardWidth, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "ExecuteUbergraph_FortCosmeticItemCard");

	Params::UFortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_bUseNewItemCard = K2Node_Event_bUseNewItemCard;
	Parms.K2Node_Event_bEnhanced = K2Node_Event_bEnhanced;
	Parms.K2Node_Event_Material = K2Node_Event_Material;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_Event_Icon = K2Node_Event_Icon;
	Parms.K2Node_Event_ColorPalette = K2Node_Event_ColorPalette;
	Parms.K2Node_Event_bIsItem = K2Node_Event_bIsItem;
	Parms.K2Node_Event_bIsBorderAnimated = K2Node_Event_bIsBorderAnimated;
	Parms.K2Node_Event_bIsHero = K2Node_Event_bIsHero;
	Parms.K2Node_Event_bReward = K2Node_Event_bReward;
	Parms.K2Node_Event_bIsShuffleItem = K2Node_Event_bIsShuffleItem;
	Parms.K2Node_Event_InCardWidth = K2Node_Event_InCardWidth;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
