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

// 0x60 (0x260 - 0x200)
// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AmbientMixA;                                       // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbientMixB;                                       // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CheckFrequency;                                    // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInsidePrevious;                                 // 0x21C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsInsideCurrent;                                  // 0x21D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AmbientMixIndoor;                                  // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetLPFFreq;                                     // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentLPFFreq;                                    // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InsideLPFFreq;                                     // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutsideLPFFreq;                                    // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentMPCValueInterp;                             // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAboveSnowAltitude;                                // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPOIAmbientAudioBank*              WinterAudioBank;                                   // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSnowAltitudeEnabled;                              // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPOIAmbientAudioBank*              StormAudioBank;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AmbientAudioInsideTag;                             // 0x258(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AmbientAudioController_C");
		return Clss;
	}

	void UpdateSnowSetupBP(float CallFunc_GetGlobalSnowAltitude_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetTargetLPFFreq(float Target);
	bool Trace(const struct FVector& Start, const struct FVector& Direction, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnCheckIfSurrounded();
	void Evaluate_Inside_State();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AmbientAudioController(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetViewTarget_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Trace_ReturnValue, bool CallFunc_Trace_ReturnValue_1, bool CallFunc_Trace_ReturnValue_2, bool CallFunc_Trace_ReturnValue_3, bool CallFunc_Trace_ReturnValue_4, float K2Node_Event_DeltaSeconds, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Conv_BoolToFloat_ReturnValue_2, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
