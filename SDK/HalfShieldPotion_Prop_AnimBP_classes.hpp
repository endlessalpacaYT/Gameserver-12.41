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

// 0xF8 (0x368 - 0x270)
// AnimBlueprintGeneratedClass HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C
class UHalfShieldPotion_Prop_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2F0(0x78)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HalfShieldPotion_Prop_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif