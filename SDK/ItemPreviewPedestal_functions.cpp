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


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortItemPreviewActor*       Preview                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWrapPreview_C*              K2Node_DynamicCast_AsWrap_Preview                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AItemOnPawnPreview_C*        K2Node_DynamicCast_AsItem_on_Pawn_Preview                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemPreviewPedestal_C::Remove_Floor(class AFortItemPreviewActor* Preview, class AWrapPreview_C* K2Node_DynamicCast_AsWrap_Preview, bool K2Node_DynamicCast_bSuccess, class AItemOnPawnPreview_C* K2Node_DynamicCast_AsItem_on_Pawn_Preview, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("ItemPreviewPedestal_C", "Remove Floor");

	Params::AItemPreviewPedestal_C_Remove_Floor_Params Parms;

	Parms.Preview = Preview;
	Parms.K2Node_DynamicCast_AsWrap_Preview = K2Node_DynamicCast_AsWrap_Preview;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsItem_on_Pawn_Preview = K2Node_DynamicCast_AsItem_on_Pawn_Preview;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed
// (Event, Protected, BlueprintEvent)
// Parameters:

void AItemPreviewPedestal_C::OnItemDisplayed()
{
	static auto Func = Class->GetFunction("ItemPreviewPedestal_C", "OnItemDisplayed");

	Params::AItemPreviewPedestal_C_OnItemDisplayed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemPreviewPedestal_C::ExecuteUbergraph_ItemPreviewPedestal(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemPreviewPedestal_C", "ExecuteUbergraph_ItemPreviewPedestal");

	Params::AItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
