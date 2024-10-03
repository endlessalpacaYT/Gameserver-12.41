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

// 0x1228 (0x1658 - 0x430)
// AnimBlueprintGeneratedClass M_LRG_Henchman_Tough_AnimBP.M_LRG_Henchman_Tough_AnimBP_C
class UM_LRG_Henchman_Tough_AnimBP_C : public UCustomCharacterPartAnimInstance_HenchmanTough
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x438(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x468(0x140)(ContainsInstancedReference)
	uint8                                        Pad_596A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x5B0(0x5A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xB50(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xB70(0x20)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xB90(0x5A0)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x1130(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1238(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1340(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1448(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1550(0x108)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_LRG_Henchman_Tough_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnParachuteOpened();
	void OnBeginSkydiving();
	void OnEndSkydiving();
	void OnEndCrouching();
	void OnEndJumping();
	void ExecuteUbergraph_M_LRG_Henchman_Tough_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
