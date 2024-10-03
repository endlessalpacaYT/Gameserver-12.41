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


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SpawnBGA_
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         HitComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Pos                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromWater                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SpawnBGA__ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_Athena_PurpleMouse_Jumper_C*K2Node_DynamicCast_AsBGA_Athena_Purple_Mouse_Jumper              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* AB_Prj_Athena_PurpleMouse_C::SpawnBGA_(const struct FVector& Normal, class AActor* HitActor, class UPrimitiveComponent* HitComp, const struct FVector& Pos, bool FromWater, class AActor* CallFunc_SpawnBGA__ReturnValue, class ABGA_Athena_PurpleMouse_Jumper_C* K2Node_DynamicCast_AsBGA_Athena_Purple_Mouse_Jumper, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Prj_Athena_PurpleMouse_C", "SpawnBGA_");

	Params::AB_Prj_Athena_PurpleMouse_C_SpawnBGA__Params Parms;

	Parms.Normal = Normal;
	Parms.HitActor = HitActor;
	Parms.HitComp = HitComp;
	Parms.Pos = Pos;
	Parms.FromWater = FromWater;
	Parms.CallFunc_SpawnBGA__ReturnValue = CallFunc_SpawnBGA__ReturnValue;
	Parms.K2Node_DynamicCast_AsBGA_Athena_Purple_Mouse_Jumper = K2Node_DynamicCast_AsBGA_Athena_Purple_Mouse_Jumper;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_PurpleMouse_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Prj_Athena_PurpleMouse_C", "ReceiveBeginPlay");

	Params::AB_Prj_Athena_PurpleMouse_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SetTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_PurpleMouse_C::SetTeam(uint8 Team)
{
	static auto Func = Class->GetFunction("B_Prj_Athena_PurpleMouse_C", "SetTeam");

	Params::AB_Prj_Athena_PurpleMouse_C_SetTeam_Params Parms;

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ExecuteUbergraph_B_Prj_Athena_PurpleMouse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_Team                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Athena_PurpleMouse_C::ExecuteUbergraph_B_Prj_Athena_PurpleMouse(int32 EntryPoint, uint8 K2Node_CustomEvent_Team, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_IsDead_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Prj_Athena_PurpleMouse_C", "ExecuteUbergraph_B_Prj_Athena_PurpleMouse");

	Params::AB_Prj_Athena_PurpleMouse_C_ExecuteUbergraph_B_Prj_Athena_PurpleMouse_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Team = K2Node_CustomEvent_Team;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
