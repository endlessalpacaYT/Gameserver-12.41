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

// 0x4C (0xA7C - 0xA30)
// BlueprintGeneratedClass GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C
class UGA_Athena_ZipLine_Smash_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpdateIntervalForSmashVolume;                      // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                StructureDamageGE;                                 // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ZipLine_Athena_Harness_C*          ZiplineHarness;                                    // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Athena_Environmental_ZipLine_C*    Zipline;                                           // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomMovement               DrivingCustomMovementMode;                         // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           FallImmunityGEFX;                                  // 0xA64(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AttachVFXCue;                                      // 0xA6C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SmashCue;                                          // 0xA74(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_ZipLine_Smash_C");
		return Clss;
	}

	void CheckForQuestProgress(class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted);
	void CheckMotor(bool HasHarness, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, class ABP_ZipLine_Athena_Harness_C* K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SpawnMotor(class AActor* PlayerPawn, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, class ABP_ZipLine_Athena_Harness_Yellow_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
	void BreakNearbyStructures(class AFortPlayerPawn* PlayerPawn, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, class AFortAthenaSupplyDropBalloon* K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class ABuildingProp* K2Node_DynamicCast_AsBuilding_Prop, bool K2Node_DynamicCast_bSuccess_2, class UFortHeldObjectComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_3);
	void OnChange_BF54003849C4B2FC73936CB3158F0A16(enum class EMovementMode NewMovementMode);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnPawnLanded_Bind(struct FHitResult& Hit);
	void HandleZiplineStateChanged(bool bIsZiplining);
	void RemoveFallDamageImmunity();
	void OnEnterVehicle_Bind();
	void ZipliningComplete();
	void OnPawnDied_Bind(class AActor* NewParam, float NewParam2, class AController* NewParam3, class AActor* NewParam4, const struct FVector& NewParam5, class UPrimitiveComponent* NewParam6, class FName NewParam7, const struct FVector& NewParam8);
	void OnEnteredAircraft_Bind();
	void OnBeginSkydiving_Bind();
	void DelaySpawnMotor();
	void SurroundingsCheck();
	void ExecuteUbergraph_GA_Athena_ZipLine_Smash(int32 EntryPoint, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FHitResult& K2Node_CustomEvent_Hit, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_Event_EventData, class ABP_Athena_Environmental_ZipLine_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line, bool K2Node_DynamicCast_bSuccess_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool K2Node_CustomEvent_bIsZiplining, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_2, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AActor* K2Node_CustomEvent_NewParam, float K2Node_CustomEvent_NewParam2, class AController* K2Node_CustomEvent_NewParam3, class AActor* K2Node_CustomEvent_NewParam4, const struct FVector& K2Node_CustomEvent_NewParam5, class UPrimitiveComponent* K2Node_CustomEvent_NewParam6, class FName K2Node_CustomEvent_NewParam7, const struct FVector& K2Node_CustomEvent_NewParam8, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_3, uint8 CallFunc_GetValidValue_ReturnValue_1, class UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, enum class EMovementMode Temp_byte_Variable, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
