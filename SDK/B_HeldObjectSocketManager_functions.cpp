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


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnRep_CombinationCorrect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_HeldObjectSocketManager_C::OnRep_CombinationCorrect()
{
	static auto Func = Class->GetFunction("B_HeldObjectSocketManager_C", "OnRep_CombinationCorrect");

	Params::AB_HeldObjectSocketManager_C_OnRep_CombinationCorrect_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.CheckTagMatches
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_VerifyHeldObjectTags_IsValidMatch                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HeldObjectSocketManager_C::CheckTagMatches(bool CallFunc_VerifyHeldObjectTags_IsValidMatch)
{
	static auto Func = Class->GetFunction("B_HeldObjectSocketManager_C", "CheckTagMatches");

	Params::AB_HeldObjectSocketManager_C_CheckTagMatches_Params Parms;

	Parms.CallFunc_VerifyHeldObjectTags_IsValidMatch = CallFunc_VerifyHeldObjectTags_IsValidMatch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.VerifyHeldObjectTags
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTagContainer>CorrectTags                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGameplayTagContainer>CurrentTags                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               OrderMatters                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsValidMatch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TagsAreInOrder                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       ConcatenatedCurrentTags                                          (Edit, BlueprintVisible)
// struct FGameplayTagContainer       ConcatenatedCorrectTags                                          (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_Array_Get_Item_1                                        ()
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAllTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_Array_Get_Item_2                                        ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllTags_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HeldObjectSocketManager_C::VerifyHeldObjectTags(TArray<struct FGameplayTagContainer>& CorrectTags, TArray<struct FGameplayTagContainer>& CurrentTags, bool OrderMatters, bool* IsValidMatch, bool TagsAreInOrder, const struct FGameplayTagContainer& ConcatenatedCurrentTags, const struct FGameplayTagContainer& ConcatenatedCorrectTags, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, const struct FGameplayTagContainer& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FGameplayTagContainer& CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_HasAllTags_ReturnValue, const struct FGameplayTagContainer& CallFunc_Array_Get_Item_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasAllTags_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("B_HeldObjectSocketManager_C", "VerifyHeldObjectTags");

	Params::AB_HeldObjectSocketManager_C_VerifyHeldObjectTags_Params Parms;

	Parms.CorrectTags = CorrectTags;
	Parms.CurrentTags = CurrentTags;
	Parms.OrderMatters = OrderMatters;
	Parms.TagsAreInOrder = TagsAreInOrder;
	Parms.ConcatenatedCurrentTags = ConcatenatedCurrentTags;
	Parms.ConcatenatedCorrectTags = ConcatenatedCorrectTags;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_HasAllTags_ReturnValue = CallFunc_HasAllTags_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_HasAllTags_ReturnValue_1 = CallFunc_HasAllTags_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidMatch != nullptr)
		*IsValidMatch = Parms.IsValidMatch;

}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.UpdateHeldObjectTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_HeldObjectSocket_C*       ChangedSocket                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       ()
// struct FGameplayTagContainer       Temp_struct_Variable                                             (ConstParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HeldObjectSocketManager_C::UpdateHeldObjectTags(class AB_HeldObjectSocket_C* ChangedSocket, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, const struct FGameplayTagContainer& Temp_struct_Variable, int32 CallFunc_Array_Find_ReturnValue)
{
	static auto Func = Class->GetFunction("B_HeldObjectSocketManager_C", "UpdateHeldObjectTags");

	Params::AB_HeldObjectSocketManager_C_UpdateHeldObjectTags_Params Parms;

	Parms.ChangedSocket = ChangedSocket;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_HeldObjectSocketManager_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_HeldObjectSocketManager_C", "ReceiveBeginPlay");

	Params::AB_HeldObjectSocketManager_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnCombinationCorrect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_HeldObjectSocketManager_C::OnCombinationCorrect()
{
	static auto Func = Class->GetFunction("B_HeldObjectSocketManager_C", "OnCombinationCorrect");

	Params::AB_HeldObjectSocketManager_C_OnCombinationCorrect_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ExecuteUbergraph_B_HeldObjectSocketManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_HeldObjectSocket_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HeldObjectSocketManager_C::ExecuteUbergraph_B_HeldObjectSocketManager(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AB_HeldObjectSocket_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_HeldObjectSocketManager_C", "ExecuteUbergraph_B_HeldObjectSocketManager");

	Params::AB_HeldObjectSocketManager_C_ExecuteUbergraph_B_HeldObjectSocketManager_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
