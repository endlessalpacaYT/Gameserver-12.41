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

// 0x28 (0xBF8 - 0xBD0)
// BlueprintGeneratedClass GA_Athena_ApplyCoolCarpet_Passive.GA_Athena_ApplyCoolCarpet_Passive_C
class UGA_Athena_ApplyCoolCarpet_Passive_C : public UGA_Athena_Apply_SneakySnowmanV2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 NotifyFirePressedTag;                              // 0xBD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_ApplyCoolCarpet_Passive_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_ApplyCoolCarpet_Passive(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, bool CallFunc_K2_AddLooseGameplayTags_ReturnValue, bool CallFunc_K2_RemoveLooseGameplayTags_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
