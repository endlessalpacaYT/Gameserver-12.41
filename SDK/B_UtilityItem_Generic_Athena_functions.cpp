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


// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_UtilityItem_Generic_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_UtilityItem_Generic_Athena_C", "ReceiveBeginPlay");

	Params::AB_UtilityItem_Generic_Athena_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Targeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Targeting                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_UtilityItem_Generic_Athena_C::ThrowConsumableHudActionKey_Targeting(bool Targeting)
{
	static auto Func = Class->GetFunction("B_UtilityItem_Generic_Athena_C", "ThrowConsumableHudActionKey_Targeting");

	Params::AB_UtilityItem_Generic_Athena_C_ThrowConsumableHudActionKey_Targeting_Params Parms;

	Parms.Targeting = Targeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Visible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_UtilityItem_Generic_Athena_C::ThrowConsumableHudActionKey_Visible(bool Visible)
{
	static auto Func = Class->GetFunction("B_UtilityItem_Generic_Athena_C", "ThrowConsumableHudActionKey_Visible");

	Params::AB_UtilityItem_Generic_Athena_C_ThrowConsumableHudActionKey_Visible_Params Parms;

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ExecuteUbergraph_B_UtilityItem_Generic_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility                   (NoDestructor)
// bool                               K2Node_CustomEvent_Targeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Visible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_1                 (NoDestructor)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_2                 (NoDestructor)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_3                 (NoDestructor)
// TArray<struct FWeaponHudKeyActionVisibility>K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_4                 (NoDestructor)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_5                 (NoDestructor)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_6                 (NoDestructor)
// TArray<struct FWeaponHudKeyActionVisibility>K2Node_MakeArray_Array_1                                         (ConstParm, ZeroConstructor, ReferenceParm)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_7                 (NoDestructor)
// TArray<struct FWeaponHudKeyActionVisibility>K2Node_MakeArray_Array_2                                         (ConstParm, ZeroConstructor, ReferenceParm)
// struct FWeaponHudKeyActionVisibilityK2Node_MakeStruct_WeaponHudKeyActionVisibility_8                 (NoDestructor)
// TArray<struct FWeaponHudKeyActionVisibility>K2Node_MakeArray_Array_3                                         (ConstParm, ZeroConstructor, ReferenceParm)

void AB_UtilityItem_Generic_Athena_C::ExecuteUbergraph_B_UtilityItem_Generic_Athena(int32 EntryPoint, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility, bool K2Node_CustomEvent_Targeting, bool K2Node_CustomEvent_Visible, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_2, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_3, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_4, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_5, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_6, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_7, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_2, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_8, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_3)
{
	static auto Func = Class->GetFunction("B_UtilityItem_Generic_Athena_C", "ExecuteUbergraph_B_UtilityItem_Generic_Athena");

	Params::AB_UtilityItem_Generic_Athena_C_ExecuteUbergraph_B_UtilityItem_Generic_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility = K2Node_MakeStruct_WeaponHudKeyActionVisibility;
	Parms.K2Node_CustomEvent_Targeting = K2Node_CustomEvent_Targeting;
	Parms.K2Node_CustomEvent_Visible = K2Node_CustomEvent_Visible;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_1 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_1;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_2 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_2;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_3 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_4 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_4;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_5 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_5;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_6 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_6;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_7 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_7;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeStruct_WeaponHudKeyActionVisibility_8 = K2Node_MakeStruct_WeaponHudKeyActionVisibility_8;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
