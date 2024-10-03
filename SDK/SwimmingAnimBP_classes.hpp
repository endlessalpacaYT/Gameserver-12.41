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

// 0x5839 (0x5E19 - 0x5E0)
// AnimBlueprintGeneratedClass SwimmingAnimBP.SwimmingAnimBP_C
class USwimmingAnimBP_C : public UFortSwimmingLayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x5E8(0x30)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0x618(0xA0)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_3;          // 0x6B8(0x188)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x840(0x188)()
	float                                        MainInstanceDiveJumpLayerAlpha;                    // 0x9C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHidingInPropLayer2;                              // 0x9CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x9D0(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0xA40(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0xA68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0xA90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0xAB8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0xAE0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0xB58(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0xB88(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0xC00(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0xC30(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0xCA8(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0xCD8(0xB0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0xD88(0xB8)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0xE40(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0xEE0(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0xF08(0xC0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0xFC8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0xFF0(0x78)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_7;                       // 0x1068(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1130(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0x1160(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x11D0(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x1200(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x1228(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x1250(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x1278(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x12A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x12C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x12F0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x1318(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x1340(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x1368(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1390(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x1408(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_13;                 // 0x1438(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x1518(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_12;                 // 0x1548(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x1628(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1658(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x16D0(0x30)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x1700(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x1728(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_11;                 // 0x1758(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x1838(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x1868(0xB0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x1918(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x1988(0xB8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x1A40(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x1AB0(0xA0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x1B50(0xC0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x1C10(0x18)()
	float                                        MainInstanceAdditiveLayerAlpha;                    // 0x1C28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocomotionAdditiveAlphaLayer;                      // 0x1C2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableIKRootAdditiveCurveAlphaLayer;              // 0x1C30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableArmsHeadAdditiveCurveAlphaLayer;            // 0x1C34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayMeleeAttackAOLayer;                            // 0x1C38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x1C40(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x1CB0(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x1D68(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x1D90(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x1E48(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x1E70(0xC0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x1F30(0x18)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x1F48(0xC0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x2008(0x18)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x2020(0xC8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x20E8(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x2158(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x2210(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x2238(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x2260(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x2288(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x22B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x22D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x2300(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x2328(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x2350(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x2378(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x23A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x23C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x23F0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x2418(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x2440(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x2468(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x2490(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x24B8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x24D8(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x25E0(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x2600(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x2628(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x2650(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x2678(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x26A0(0x78)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x2718(0xA0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x27B8(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x2830(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_10;                 // 0x2860(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x2940(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x2970(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x29E8(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x2A18(0xB0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x2AC8(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x2AF8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x2B20(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x2B98(0x30)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x2BC8(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x2BF0(0x30)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x2C20(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x2C48(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x2C78(0xB0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x2D28(0xB8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x2DE0(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x2E50(0xB8)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_6;                       // 0x2F08(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x2FD0(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x3000(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x3028(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x3050(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x3078(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x30A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x30C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x30F0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x3118(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x3140(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x3168(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3190(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x3208(0x30)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x3238(0x188)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x33C0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x33E0(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x34E8(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0x3508(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x35E8(0x30)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x3618(0x188)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x37A0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x37C0(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x38C8(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x38E8(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x39C8(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x39F8(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x3A70(0x30)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x3AA0(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x3BA8(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x3BC8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x3BE8(0x108)()
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x3CF0(0x58)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x3D48(0x28)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_5;                       // 0x3D70(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x3E38(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x3E60(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3F00(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x3F28(0xA0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x3FC8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x3FE8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x4008(0x108)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x4110(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x4138(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x4168(0xB0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x4218(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x4288(0xB8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x4340(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x43B0(0xB8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x4468(0xE0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x4548(0xA0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x45E8(0x70)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_4;                       // 0x4658(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x4720(0x30)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x4750(0x48)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x4798(0x70)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_3;                       // 0x4808(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x48D0(0x30)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x4900(0x48)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x4948(0x70)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x49B8(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x4A80(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x4AB0(0xE0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x4B90(0xE0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x4C70(0xA0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x4D10(0x70)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x4D80(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x4E48(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x4E78(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x4EA0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x4EC8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4EF0(0x28)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x4F18(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x4FF8(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x5028(0xE0)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x5108(0xB0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x51B8(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x5298(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x52C8(0xE0)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x53A8(0xB0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x5458(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x5538(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x5568(0xB0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5618(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x5638(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5740(0x20)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x5760(0xA0)()
	bool                                         IsHidingInPropLayer;                               // 0x5800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x5808(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x5878(0xB8)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x5930(0xC0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x59F0(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x5A18(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x5AB8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x5AE0(0x78)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x5B58(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x5C20(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x5C50(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x5CC0(0xA0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5D60(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5DD8(0x30)()
	bool                                         AllowSprintStop;                                   // 0x5E08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SwimSprintSlow_EnoughTimePassed;                   // 0x5E09(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChangeMovementToVelocityFromAccel;                 // 0x5E0A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50F4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LocalAccelYawAngleAtStart;                         // 0x5E0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayMeleeAttackAO;                                 // 0x5E10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PivotAngle;                                        // 0x5E14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortWeaponCoreAnimation          WeaponCoreAnim;                                    // 0x5E18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SwimmingAnimBP_C");
		return Clss;
	}

	void SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, bool IsHidingInPropLayer2, float MainInstanceDiveJumpLayerAlpha, struct FPoseLink* SwimmingDiveJumpingLayer);
	void SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer);
	void SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, float MainInstanceAdditiveLayerAlpha, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer);
	void SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer);
	void SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer);
	void SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer);
	void SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose);
	void SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, bool IsHidingInPropLayer, struct FPoseLink* SwimmingSprintLayer);
	void SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TwoWayBlend_A3561BB7441E2419F698A6B2E1226C55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_BlendListByBool_BC6595924B39D86BBB429B983FEC9301();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_BlendListByBool_AA47084445E70A3E11A826864AB2B47C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_C388B2744DEBBC320E1531A5C9E40B17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_2035F1904C072BE5887B8D9A25E4BE52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_ApplyAdditive_D15630094D91FB09EC4581BBC47EFBF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36();
	void AnimNotify_SwimSprintStart_Entered_Layer();
	void AnimNotify_SwimSprintStart_Exited_Layer();
	void AnimNotify_SwimSprint_Entered_Layer();
	void AnimNotify_SwimSprintSlow_Entered_Layer();
	void AnimNotify_SwimStartAdditive_Entered_Layer();
	void AnimNotify_SwimMovementAccelAdditive_Exited_Layer();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TwoWayBlend_9A20F4564EAD615E503C6F9118FBEE57();
	void ExecuteUbergraph_SwimmingAnimBP(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_GetRelevantAnimTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetRelevantAnimTime_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
