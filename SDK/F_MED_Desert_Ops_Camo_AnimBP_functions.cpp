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


// Function F_MED_Desert_Ops_Camo_AnimBP.F_MED_Desert_Ops_Camo_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_MED_Desert_Ops_Camo_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("F_MED_Desert_Ops_Camo_AnimBP_C", "AnimGraph");

	Params::UF_MED_Desert_Ops_Camo_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function F_MED_Desert_Ops_Camo_AnimBP.F_MED_Desert_Ops_Camo_AnimBP_C.OnCharacterCustomizationLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UF_MED_Desert_Ops_Camo_AnimBP_C::OnCharacterCustomizationLoaded()
{
	static auto Func = Class->GetFunction("F_MED_Desert_Ops_Camo_AnimBP_C", "OnCharacterCustomizationLoaded");

	Params::UF_MED_Desert_Ops_Camo_AnimBP_C_OnCharacterCustomizationLoaded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function F_MED_Desert_Ops_Camo_AnimBP.F_MED_Desert_Ops_Camo_AnimBP_C.ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UF_MED_Desert_Ops_Camo_AnimBP_C::ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP(int32 EntryPoint, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue)
{
	static auto Func = Class->GetFunction("F_MED_Desert_Ops_Camo_AnimBP_C", "ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP");

	Params::UF_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue = CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
