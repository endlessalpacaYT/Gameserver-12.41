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

// 0x48 (0xA78 - 0xA30)
// BlueprintGeneratedClass GA_Athena_Track_SneakySnowman.GA_Athena_Track_SneakySnowman_C
class UGA_Athena_Track_SneakySnowman_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TrackGroupTag;                                     // 0xA40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        SnowmenActors;                                     // 0xA48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScalableFloat                        MaxPropsInWorld;                                   // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Track_SneakySnowman_C");
		return Clss;
	}

	void OnRep_SnowmenActors();
	void EventReceived_3E66B31E47CEABBB2B2B24B29B395028(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnPlayerDeath(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_GA_Athena_Track_SneakySnowman(int32 EntryPoint, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayEventData& K2Node_CustomEvent_Payload, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, TArray<class AActor*>& CallFunc_GetTrackedGroupedActors_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
