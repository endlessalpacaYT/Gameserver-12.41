#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x57 (0x408 - 0x3B1)
// BlueprintGeneratedClass CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C
class ACCPM_Parent_WatchCosmeticStat_C : public ACCPM_Base_C
{
public:
	uint8                                        Pad_713F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Allow_FULL_DEBUG;                                  // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7140[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Mid;                                               // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        Which_Stage_to_Debug;                              // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Allow_STAT_DEBUG;                                  // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7141[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortStatManagerTag                   Stat_01;                                           // 0x3D8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentActiveStage;                                // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7142[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                StatThresholds;                                    // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int32>                                PlayerLeft_Threshold;                              // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CCPM_Parent_WatchCosmeticStat_C");
		return Clss;
	}

	void IsStagePlayerLeftAliveReuirementsMet(int32 InStageNumberBeingTested, int32 InStageThreshold, int32 InStatValue, int32 CurrentActiveStageNumber, bool* PassedRequirements, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void IsStageStatReuirementsMet(int32 InStageNumberBeingTested, int32 InStageThreshold, int32 InStatValue, int32 CurrentActiveStageNumber, bool* PassedRequirements, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void PlayersLeftCheck(int32 Value_to_Check, TArray<int32>& Player_Left_Thresholds, class FName DEBUG___Stat_Checked, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsStagePlayerLeftAliveReuirementsMet_PassedRequirements);
	void Array_Is_Valid(TArray<class FName>& Name_Array, bool* Vaild, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Cosmetic_Stat_Check(int32 Value_to_Check, TArray<int32>& StatThresholds, class FName DEBUG___Stat_Checked, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsStageStatReuirementsMet_PassedRequirements, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnStatChanged_2FF2B90E4ECEA7F5E9202F98FFE39A48(class FName StatName, int32 StatValue);
	void ActivatingCosmeticState(int32 StageNumBeingActivated);
	void ReceiveBeginPlay();
	void TrackPlayersLeft(int32 NumPlayersLeft);
	void OnPawnAndPartChanged();
	void CosmeticStateChanged(int32 Stat_Value);
	void ExecuteUbergraph_CCPM_Parent_WatchCosmeticStat(int32 EntryPoint, int32 K2Node_CustomEvent_Stat_Value, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, int32 K2Node_CustomEvent_StageNumBeingActivated, int32 K2Node_CustomEvent_NumPlayersLeft, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, const struct FPlayersLeft& CallFunc_GetPlayersLeft_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
