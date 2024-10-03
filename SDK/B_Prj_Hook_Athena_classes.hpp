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

// 0x148 (0xA70 - 0x928)
// BlueprintGeneratedClass B_Prj_Hook_Athena.B_Prj_Hook_Athena_C
class AB_Prj_Hook_Athena_C : public AFortAttachableProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x928(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x930(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh3;                                       // 0x938(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             Target;                                            // 0x940(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HookStopped;                                       // 0x950(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x954(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AirControl;                                        // 0x960(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            StickSound;                                        // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StuckToPlayerSound;                                // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceFromInstigator;                            // 0x978(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            TravelSound;                                       // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FToyAngleSelectorInfo>         LaunchAngleVariations;                             // 0x988(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AB_Hookgun_Athena_C*                   Weapon_Actor;                                      // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_HookGunRope_C*                      Rope;                                              // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PreLaunchVelocity;                                 // 0x9A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireAImPitch;                                      // 0x9B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DownPitchMin;                                      // 0x9B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DownPitchMax;                                      // 0x9BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalZ;                                       // 0x9C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            YankBackSound;                                     // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            RopeDestroySound;                                  // 0x9D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RopeActiveTag;                                     // 0x9D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BlockIncomingPickups;                              // 0x9E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactNormal;                                      // 0x9E8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D28[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            StickSound2D;                                      // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Distance_from_Physics_Mesh;                 // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OffsetDistanceFromBone;                            // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                StruckActor;                                       // 0xA08(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Momentum;                                          // 0xA10(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         Launchpad;                                         // 0xA1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               VehicleVelocity;                                   // 0xA20(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ConsumesAmmo;                                      // 0xA2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VehicleArc;                                        // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JackalArc;                                         // 0xA34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInHoverboard;                                     // 0xA38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VehicleForceMultiplier;                            // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JackalForceMultiplier;                             // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lifespan_on_Hit;                                   // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBadgerGrape_;                                    // 0xA48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_VehicleIgnorePull;                              // 0xA50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Hook_Athena_C");
		return Clss;
	}

	void JackalCheck(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class AFortAthenaJackalVehicle* K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void HandleLaunch(bool* JumpPadding_, bool CallFunc_GetPendingSkydiveLaunch_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnRep_Momentum();
	void HandleMomentum(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInVehicle_ReturnValue, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_GetVehicleVelocity_ReturnValue);
	void HandleStuckProjectiles(class UObject* Object, class UPrimitiveComponent* Component);
	void OnRep_StruckActor();
	void HandleStuckSupplyDrop(class UObject* Object, class UPrimitiveComponent* Component, class AAthenaSupplyDropBalloon_C* K2Node_DynamicCast_AsAthena_Supply_Drop_Balloon, bool K2Node_DynamicCast_bSuccess, class AAthenaSupplyDrop_C* K2Node_DynamicCast_AsAthena_Supply_Drop, bool K2Node_DynamicCast_bSuccess_1);
	void HandleStuckBuilding(class UObject* Object, class UPrimitiveComponent* Component, class ABuildingWall* LocalWall, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class ABuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDoorComponent_ReturnValue);
	void HandleStuckVehicle(class UObject* Object, class UPrimitiveComponent* Component, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess);
	void HandleSticks(class UObject* Object, class UPrimitiveComponent* Component);
	void PickGrappleMontage(float PitchAngle, bool InHoverboard, class FName* SectionName, float CleanedAngle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_ClampAngle_ReturnValue, const struct FToyAngleSelectorInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void PickGrappleMontageSection(float PitchAngle, class FName* SectionName, float CleanedAngle, int32 Temp_int_Array_Index_Variable, float CallFunc_ClampAngle_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FToyAngleSelectorInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_HookStopped();
	void OnRep_Target();
	void Grapple(const struct FVector& Mo_, class AFortPlayerPawn* Player, class AFortAthenaVehicle* Vehicle, bool PawnInVehicle, const struct FVector& Temp_struct_Variable, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_IsFalling_ReturnValue, class AEmitterCameraLensEffectBase* CallFunc_SpawnCameraLensEffect_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_1, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_1, class AEmitterCameraLensEffectBase* CallFunc_SpawnCameraLensEffect_ReturnValue_1, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2);
	void CalculateYankForce(enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1);
	void IncapacitateTarget(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue);
	void HandleHits(const struct FHitResult& Hit, class AActor** Target, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue);
	void PlayStickSounds(const struct FVector& Location, class AActor* HitActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1);
	void UserConstructionScript();
	void OnNotifyEnd_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnNotifyBegin_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnInterrupted_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnBlendOut_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnCompleted_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName);
	void OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName);
	void OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName);
	void OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName);
	void OnCompleted_93AE81F64BBD13E0E55C399F05E160E3(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Travel(const struct FVector& HitLocation);
	void WeaponCheck();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void GrappleVehicle();
	void LaunchCheck();
	void OnEnterWaterEvent_Event_0(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void ExecuteUbergraph_B_Prj_Hook_Athena(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, TArray<class AFortPlayerPawn*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_7, TArray<class AFortPlayerPawn*>& Temp_object_Variable_1, class FName K2Node_CustomEvent_NotifyName_12, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPlayerPawn* CallFunc_Array_Get_Item, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& K2Node_CustomEvent_HitLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AB_Hookgun_Athena_C* K2Node_DynamicCast_AsB_Hookgun_Athena, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, class FName K2Node_CustomEvent_NotifyName_13, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, float CallFunc_GetBaseAimPitchQuantized_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AController* CallFunc_GetInstigatorController_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class FName K2Node_CustomEvent_NotifyName_14, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, class AActor* CallFunc_GetVehicleActorPtr_ReturnValue, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_2, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, class AFortAthenaJackalVehicle* K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle, bool K2Node_DynamicCast_bSuccess_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class FName CallFunc_PickGrappleMontage_SectionName, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsInVehicle_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class USoundBase* K2Node_Select_Default, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AActor* CallFunc_HandleHits_Target, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool CallFunc_HandleLaunch_JumpPadding_, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_HandleLaunch_JumpPadding__1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_2, const struct FVector& CallFunc_GetVehicleVelocity_ReturnValue, const struct FVector& CallFunc_GetOwnerLocation_ReturnValue, class AActor* CallFunc_GetVehicleActorPtr_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetGameplayTags_ReturnValue, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_1, bool K2Node_DynamicCast_bSuccess_5, class AFortAthenaJackalVehicle* K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle_1, bool K2Node_DynamicCast_bSuccess_6, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_15, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_HasInfiniteAmmo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class FName Temp_name_Variable_2, float K2Node_Select_Default_1, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float K2Node_Select_Default_2, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_1, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default_3, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_2, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_2, const struct FVector& K2Node_Select_Default_4, float K2Node_Select_Default_5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsZiplining_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, class FName K2Node_CustomEvent_NotifyName_10, bool CallFunc_IsValid_ReturnValue_18, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_HookGunRope_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity, class AFortWaterBodyActor* K2Node_CustomEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_CustomEvent_WaterInteractionComponent, bool K2Node_CustomEvent_bIsFirstBody, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class FName K2Node_CustomEvent_NotifyName_11);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
