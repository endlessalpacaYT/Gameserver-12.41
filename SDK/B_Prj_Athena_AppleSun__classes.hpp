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

// 0x20 (0x900 - 0x8E0)
// BlueprintGeneratedClass B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C
class AB_Prj_Athena_AppleSun__C : public AB_Prj_Athena_BGASpawner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_AppleSun_Projectile_Trail;                       // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Apple_Sun;                                         // 0x8F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_AppleSun__C");
		return Clss;
	}

	void UserConstructionScript();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnStop(struct FHitResult& Hit);
	void ExecuteUbergraph_B_Prj_Athena_AppleSun_(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, const struct FHitResult& K2Node_Event_Hit, const struct FVector& CallFunc_ClampVectorSize_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
