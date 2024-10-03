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


// Function GA_Athena_Flopper.GA_Athena_Flopper_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Athena_Flopper_C::K2_CommitExecute()
{
	static auto Func = Class->GetFunction("GA_Athena_Flopper_C", "K2_CommitExecute");

	Params::UGA_Athena_Flopper_C_K2_CommitExecute_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Flopper.GA_Athena_Flopper_C.ExecuteUbergraph_GA_Athena_Flopper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_1  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SendComplexCustomStatEvent_QuestActive                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SendComplexCustomStatEvent_QuestCompleted               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Flopper_C::ExecuteUbergraph_GA_Athena_Flopper(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_1, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_1, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted)
{
	static auto Func = Class->GetFunction("GA_Athena_Flopper_C", "ExecuteUbergraph_GA_Athena_Flopper");

	Params::UGA_Athena_Flopper_C_ExecuteUbergraph_GA_Athena_Flopper_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_1 = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_1;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_1 = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_1;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_1 = CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestActive = CallFunc_SendComplexCustomStatEvent_QuestActive;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestCompleted = CallFunc_SendComplexCustomStatEvent_QuestCompleted;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif