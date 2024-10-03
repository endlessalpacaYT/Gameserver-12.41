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


// Function F_MED_ASN_Sarah_Head_01_Dyn_AnimBP.F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C", "AnimGraph");

	Params::UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function F_MED_ASN_Sarah_Head_01_Dyn_AnimBP.F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C", "BlueprintInitializeAnimation");

	Params::UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C_BlueprintInitializeAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function F_MED_ASN_Sarah_Head_01_Dyn_AnimBP.F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C.ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C::ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C", "ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP");

	Params::UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
