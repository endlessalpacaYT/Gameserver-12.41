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

// 0x8 (0xA38 - 0xA30)
// BlueprintGeneratedClass GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C
class UGA_Play_Swipe_Montage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Play_Swipe_Montage_C");
		return Clss;
	}

	void OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF();
	void OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF();
	void OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF();
	void OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Play_Swipe_Montage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
