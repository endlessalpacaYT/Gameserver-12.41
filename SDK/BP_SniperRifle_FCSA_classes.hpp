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

// 0x98 (0x308 - 0x270)
// AnimBlueprintGeneratedClass BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C
class UBP_SniperRifle_FCSA_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A8(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x2F0(0x18)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SniperRifle_FCSA_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_SniperRifle_FCSA(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
