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

// 0x2CC (0xBD0 - 0x904)
// BlueprintGeneratedClass Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C
class APrj_Athena_FloppingRabbit_C : public AB_Prj_ThrownConsumable_C
{
public:
	uint8                                        Pad_5206[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       LineLoc;                                           // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        BigBob_BigDip_9789CB934FE6D3F1A956D993031B4307;    // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BigBob__Direction_9789CB934FE6D3F1A956D993031B4307; // 0x91C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5207[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BigBob;                                            // 0x920(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            NullHit;                                           // 0x928(0x8C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              WaterRotation;                                     // 0x9B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               MeshLocAfterHit;                                   // 0x9C0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChanceForBigBob;                                   // 0x9CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x9D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        DistanceCheckInterval;                             // 0x9E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5208[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Spawner;                                           // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingCatchBigBobChance;                         // 0x9F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delay_CatchWindow;                                 // 0x9F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanCatch;                                          // 0x9F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InWater;                                           // 0x9F9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5209[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Athena_FloppingRabbit_Wire_C*       Wire;                                              // 0xA08(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_Fire;                                        // 0xA10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_InWorld;                                     // 0xA18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDistanceFromPlayer;                             // 0xA20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultSpawner;                                    // 0xA24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_520A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IncreaseBigBobChanceAmount;                        // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_520B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_ChanceForBigBob;                               // 0xA30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_ChanceForBigBobIncrease;                       // 0xA50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_CatchWindow;                                   // 0xA70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                       FX_HitWater;                                       // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXScaleHitWater;                                   // 0xA98(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_520C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_HitWater;                                    // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       FX_WaterDip;                                       // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NS_FX_HitWater;                                    // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NS_FX_SpawnItems;                                  // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NS_FX_WaterDip;                                    // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NS_FX_WaterDip_HighTier;                           // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       FX_WaterDip_HighTier;                              // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXScaleWaterDip;                                   // 0xAE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_520D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_WaterDip;                                    // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_ProjDestroyed;                               // 0xAF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_DistanceCheck;                                 // 0xB00(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_DistanceCheckZ;                                // 0xB20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Dipping;                                           // 0xB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_520E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SpawnedDefaultSpawner;                             // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_BobChanceDelayMin;                             // 0xB50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_BobChanceDelayMax;                             // 0xB70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SpawnedItem;                                       // 0xB90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_520F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_FluidSim_FN_C*                     FluidSim;                                          // 0xB98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_WaterDip_HighTier;                           // 0xBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WorldSpawner;                                      // 0xBA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5210[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       FX_SpawnItems;                                     // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_SpawnItems;                                  // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ItemAttachMinDist;                                 // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ItemAttachDistanceRequirement;                     // 0xBC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStartedFishingSession;                            // 0xBC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5211[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BounceOutOfWaterDelay;                             // 0xBCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prj_Athena_FloppingRabbit_C");
		return Clss;
	}

	void GetSheetVals(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2);
	void BigBob__FinishedFunc();
	void BigBob__UpdateFunc();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void FullDip(bool InWorldSpawner);
	void CatchWindow();
	void TryCatch();
	void HideAndKill();
	void ReceiveBeginPlay();
	void DistanceCheck();
	void ForceKill();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void HitWater(bool FishSpawner);
	void ReceiveDestroyed();
	void CheckForDip();
	void CheckForHighTierSpawner();
	void SpawnItemsFX();
	void CustomPickupAttach(class AFortPickup* FortPickup);
	void WriteNothingCaughtFishingAnalytic();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody);
	void ExecuteUbergraph_Prj_Athena_FloppingRabbit(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, class ABGA_Athena_FlopperSpawn_Parent_C* K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_2, class AB_Athena_FloppingRabbit_Wire_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_DistanceBetweenTwoVectors_Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABGA_Athena_FlopperSpawn_Default_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool K2Node_CustomEvent_InWorldSpawner, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess_3, class AFortAthenaWater* K2Node_DynamicCast_AsFort_Athena_Water, bool K2Node_DynamicCast_bSuccess_4, class AFortWaterBodyActor* K2Node_DynamicCast_AsFort_Water_Body_Actor, bool K2Node_DynamicCast_bSuccess_5, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue_4, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_CustomEvent_FishSpawner, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, class APawn* CallFunc_GetInstigator_ReturnValue_2, bool Temp_bool_IsClosed_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_8, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsServer_ReturnValue_4, bool Temp_bool_IsClosed_Variable_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_9, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors, bool CallFunc_CapsuleOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABGA_Athena_FlopperSpawn_Default_C* K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Default, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, float CallFunc_GetValueAtLevel_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_8, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue, TMap<class FName, class FName> K2Node_MakeMap_Map, const struct FFluidForceSocketInfo& K2Node_MakeStruct_FluidForceSocketInfo, bool CallFunc_IsValid_ReturnValue_9, const struct FFluidForceDynamic& K2Node_MakeStruct_FluidForceDynamic, TArray<class ABP_FluidSim_FN_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_FluidSim_FN_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_IsClosed_Variable_4, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_10, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_IsServer_ReturnValue_5, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition_1, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth_1, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, class AFortPickup* K2Node_CustomEvent_FortPickup, class AActor* CallFunc_GetAttachParentActor_ReturnValue, float CallFunc_GetSquaredDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue_6, class APawn* CallFunc_GetInstigator_ReturnValue_3, float CallFunc_GetSquaredDistanceTo_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable, TArray<class AActor*>& Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_11, bool Temp_bool_Variable_1, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_11, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors_1, bool CallFunc_CapsuleOverlapActors_ReturnValue_1, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_5, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraSystem* K2Node_Select_Default_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, class AFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsLastBody, bool CallFunc_IsInWater_ReturnValue, bool CallFunc_IsServer_ReturnValue_7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif