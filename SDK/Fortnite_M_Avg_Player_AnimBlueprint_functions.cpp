#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionFullBodyLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughCustomFullBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CustomLocomotionFullBodyLayer                                    (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "CustomLocomotionFullBodyLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_CustomLocomotionFullBodyLayer_Params Parms;

	Parms.PassThroughCustomFullBody = PassThroughCustomFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomLocomotionFullBodyLayer != nullptr)
		*CustomLocomotionFullBodyLayer = Parms.CustomLocomotionFullBodyLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharacterSkeletalControlPostLegIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostLegIK                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CharacterSkeletalControlPostLegIK                                (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "CharacterSkeletalControlPostLegIK");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK_Params Parms;

	Parms.InPosePostLegIK = InPosePostLegIK;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSkeletalControlPostLegIK != nullptr)
		*CharacterSkeletalControlPostLegIK = Parms.CharacterSkeletalControlPostLegIK;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyOverride                                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "FullBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride_Params Parms;

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = Parms.FullBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingDiveJumpingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingDiveJumping                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               IsHidingInPropLayer2                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              MainInstanceDiveJumpLayerAlpha                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   SwimmingDiveJumpingLayer                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, bool IsHidingInPropLayer2, float MainInstanceDiveJumpLayerAlpha, struct FPoseLink* SwimmingDiveJumpingLayer)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SwimmingDiveJumpingLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingDiveJumpingLayer_Params Parms;

	Parms.PassThroughSwimmingDiveJumping = PassThroughSwimmingDiveJumping;
	Parms.IsHidingInPropLayer2 = IsHidingInPropLayer2;
	Parms.MainInstanceDiveJumpLayerAlpha = MainInstanceDiveJumpLayerAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingDiveJumpingLayer != nullptr)
		*SwimmingDiveJumpingLayer = Parms.SwimmingDiveJumpingLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingFullBodyAdditiveLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingFullBodyAdditiveLayer                                    (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SwimmingFullBodyAdditiveLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingFullBodyAdditiveLayer_Params Parms;

	Parms.PassThroughFullBodyAdditive = PassThroughFullBodyAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingFullBodyAdditiveLayer != nullptr)
		*SwimmingFullBodyAdditiveLayer = Parms.SwimmingFullBodyAdditiveLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingAdditiveLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   IdleAdditive_Cache                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementAdditiveLayerPose_Cache                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBody                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              PlayMeleeAttackAOLayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DisableArmsHeadAdditiveCurveAlphaLayer                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DisableIKRootAdditiveCurveAlphaLayer                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocomotionAdditiveAlphaLayer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MainInstanceAdditiveLayerAlpha                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   UpperAndLowerBody_Cache                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SprintingPose_PostMask_Cache                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingAdditiveLayer                                            (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, float MainInstanceAdditiveLayerAlpha, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SwimmingAdditiveLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingAdditiveLayer_Params Parms;

	Parms.IdleAdditive_Cache = IdleAdditive_Cache;
	Parms.MovementAdditiveLayerPose_Cache = MovementAdditiveLayerPose_Cache;
	Parms.FullBody = FullBody;
	Parms.PlayMeleeAttackAOLayer = PlayMeleeAttackAOLayer;
	Parms.DisableArmsHeadAdditiveCurveAlphaLayer = DisableArmsHeadAdditiveCurveAlphaLayer;
	Parms.DisableIKRootAdditiveCurveAlphaLayer = DisableIKRootAdditiveCurveAlphaLayer;
	Parms.LocomotionAdditiveAlphaLayer = LocomotionAdditiveAlphaLayer;
	Parms.MainInstanceAdditiveLayerAlpha = MainInstanceAdditiveLayerAlpha;
	Parms.UpperAndLowerBody_Cache = UpperAndLowerBody_Cache;
	Parms.SprintingPose_PostMask_Cache = SprintingPose_PostMask_Cache;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingAdditiveLayer != nullptr)
		*SwimmingAdditiveLayer = Parms.SwimmingAdditiveLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLowerBodyLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperBody_Cache                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PreUpperBodySlot_Cache                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PassThroughSwimmingLowerBody                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingLowerBodyLayer                                           (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SwimmingLowerBodyLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingLowerBodyLayer_Params Parms;

	Parms.UpperBody_Cache = UpperBody_Cache;
	Parms.PreUpperBodySlot_Cache = PreUpperBodySlot_Cache;
	Parms.PassThroughSwimmingLowerBody = PassThroughSwimmingLowerBody;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingLowerBodyLayer != nullptr)
		*SwimmingLowerBodyLayer = Parms.SwimmingLowerBodyLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseNonTargetingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingUpperBodyPoseNonTargeting                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingUpperBodyPoseNonTargetingLayer                           (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SwimmingUpperBodyPoseNonTargetingLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingUpperBodyPoseNonTargetingLayer_Params Parms;

	Parms.PassThroughSwimmingUpperBodyPoseNonTargeting = PassThroughSwimmingUpperBodyPoseNonTargeting;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingUpperBodyPoseNonTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseNonTargetingLayer = Parms.SwimmingUpperBodyPoseNonTargetingLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseTargetingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingUpperBodyPoseTargeting                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingUpperBodyPoseTargetingLayer                              (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SwimmingUpperBodyPoseTargetingLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingUpperBodyPoseTargetingLayer_Params Parms;

	Parms.PassThroughSwimmingUpperBodyPoseTargeting = PassThroughSwimmingUpperBodyPoseTargeting;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingUpperBodyPoseTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseTargetingLayer = Parms.SwimmingUpperBodyPoseTargetingLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingMovementAdditiveLayerPose
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingMovementAdditive                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingMovementAdditiveLayerPose                                (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SwimmingMovementAdditiveLayerPose");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingMovementAdditiveLayerPose_Params Parms;

	Parms.PassThroughSwimmingMovementAdditive = PassThroughSwimmingMovementAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingMovementAdditiveLayerPose != nullptr)
		*SwimmingMovementAdditiveLayerPose = Parms.SwimmingMovementAdditiveLayerPose;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingSprintLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingSprint                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               IsHidingInPropLayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                   SwimmingSprintLayer                                              (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, bool IsHidingInPropLayer, struct FPoseLink* SwimmingSprintLayer)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SwimmingSprintLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingSprintLayer_Params Parms;

	Parms.PassThroughSwimmingSprint = PassThroughSwimmingSprint;
	Parms.IsHidingInPropLayer = IsHidingInPropLayer;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingSprintLayer != nullptr)
		*SwimmingSprintLayer = Parms.SwimmingSprintLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   MainPlayerAnimBP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingLayer                                                    (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SwimmingLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingLayer_Params Parms;

	Parms.MainPlayerAnimBP = MainPlayerAnimBP;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingLayer != nullptr)
		*SwimmingLayer = Parms.SwimmingLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOCarriedLeansOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseDBNOCarried                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleDBNOCarriedLeansOverride                                  (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleDBNOCarriedLeansOverride(const struct FPoseLink& InPoseDBNOCarried, struct FPoseLink* VehicleDBNOCarriedLeansOverride)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "VehicleDBNOCarriedLeansOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleDBNOCarriedLeansOverride_Params Parms;

	Parms.InPoseDBNOCarried = InPoseDBNOCarried;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleDBNOCarriedLeansOverride != nullptr)
		*VehicleDBNOCarriedLeansOverride = Parms.VehicleDBNOCarriedLeansOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOJoggingOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   VehicleDBNOJoggingOverride                                       (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleDBNOJoggingOverride(struct FPoseLink* VehicleDBNOJoggingOverride)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "VehicleDBNOJoggingOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleDBNOJoggingOverride_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (VehicleDBNOJoggingOverride != nullptr)
		*VehicleDBNOJoggingOverride = Parms.VehicleDBNOJoggingOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemPreIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_PreIK                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemPreIK                                                        (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemPreIK");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK_Params Parms;

	Parms.InPose_PreIK = InPose_PreIK;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemPreIK != nullptr)
		*ItemPreIK = Parms.ItemPreIK;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodyOverride                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFullBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride_Params Parms;

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = Parms.ItemFullBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemAimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_AimOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              AimOffsetAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   InPose_UpperLowerPreMeleeAO                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemAimOffset                                                    (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemAimOffset");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset_Params Parms;

	Parms.InPose_AimOffset = InPose_AimOffset;
	Parms.AimOffsetAlpha = AimOffsetAlpha;
	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = InPose_UpperLowerPreMeleeAO;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAimOffset != nullptr)
		*ItemAimOffset = Parms.ItemAimOffset;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemSkeletalControl                                              (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSkeletalControl");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = Parms.ItemSkeletalControl;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceEnd                                           (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSwimJumpSurfaceEnd");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = Parms.ItemSwimJumpSurfaceEnd;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceLoop                                          (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSwimJumpSurfaceLoop");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = Parms.ItemSwimJumpSurfaceLoop;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpFallLoop                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSwimJumpFallLoop");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = Parms.ItemSwimJumpFallLoop;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStartLoop                                            (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSwimJumpStartLoop");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = Parms.ItemSwimJumpStartLoop;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStart                                                (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSwimJumpStart");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = Parms.ItemSwimJumpStart;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyLeanAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyLeanAdditive                                        (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemLowerBodyLeanAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyLeanAdditive_Params Parms;

	Parms.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = Parms.ItemLowerBodyLeanAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemUpperBody");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody_Params Parms;

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = Parms.ItemUpperBody;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodySprint                                               (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFullBodySprint");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodySprint_Params Parms;

	Parms.InPoseSprint = InPoseSprint;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = Parms.ItemFullBodySprint;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemIdleAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive_Params Parms;

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = Parms.ItemIdleAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemCrouchTurningAdditive                                        (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemCrouchTurningAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemCrouchTurningAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = Parms.ItemCrouchTurningAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSlopeSliding                                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSlopeSliding");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSlopeSliding_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = Parms.ItemSlopeSliding;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJumpUpAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = Parms.ItemJumpUpAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJumpLoopAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = Parms.ItemJumpLoopAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFallAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = Parms.ItemFallAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFallLandAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = Parms.ItemFallLandAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJetPackStartAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = Parms.ItemJetPackStartAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJetPackJumpAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = Parms.ItemJetPackJumpAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemZipLineStartAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = Parms.ItemZipLineStartAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeStartAdditive                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFlyModeStartAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFlyModeStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = Parms.ItemFlyModeStartAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeLoopAdditive                                          (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFlyModeLoopAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFlyModeLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = Parms.ItemFlyModeLoopAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStartAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStartAdditive                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJogStartAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogStartAdditive_Params Parms;

	Parms.InPoseJogStartAdditive = InPoseJogStartAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = Parms.ItemJogStartAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStopAdditive                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStopAdditive                                              (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJogStopAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogStopAdditive_Params Parms;

	Parms.InPoseJogStopAdditive = InPoseJogStopAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = Parms.ItemJogStopAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePrePivotAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPrePivotAdditive                                          (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJogPrePivotAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogPrePivotAdditive_Params Parms;

	Parms.InPosePrePivotAdditive = InPosePrePivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = Parms.ItemJogPrePivotAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostPivotAdditive                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPostPivotAdditive                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJogPostPivotAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogPostPivotAdditive_Params Parms;

	Parms.InPosePostPivotAdditive = InPosePostPivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = Parms.ItemJogPostPivotAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemLowerBodyMovement");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement_Params Parms;

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = Parms.ItemLowerBodyMovement;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStart                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStart                                            (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemLowerBodyJogStart");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogStart_Params Parms;

	Parms.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = Parms.ItemLowerBodyJogStart;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStop                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStop                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemLowerBodyJogStop");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogStop_Params Parms;

	Parms.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = Parms.ItemLowerBodyJogStop;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPrePivot                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPrePivot                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemLowerBodyJogPrePivot");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogPrePivot_Params Parms;

	Parms.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = Parms.ItemLowerBodyJogPrePivot;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPostPivot                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPostPivot                                        (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemLowerBodyJogPostPivot");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogPostPivot_Params Parms;

	Parms.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = Parms.ItemLowerBodyJogPostPivot;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemRelaxedEntry");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry_Params Parms;

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = Parms.ItemRelaxedEntry;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleSplitBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSplitBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBody                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_TurnInPlace  TurnInPlace                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink                   InPoseUpperAndLowerBodyRemoveRoot                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleSplitBodyOverride                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "VehicleSplitBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride_Params Parms;

	Parms.InPoseSplitBody = InPoseSplitBody;
	Parms.InPoseUpperAndLowerBody = InPoseUpperAndLowerBody;
	Parms.TurnInPlace = TurnInPlace;
	Parms.InPoseUpperAndLowerBodyRemoveRoot = InPoseUpperAndLowerBodyRemoveRoot;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleSplitBodyOverride != nullptr)
		*VehicleSplitBodyOverride = Parms.VehicleSplitBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerCachePose                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFullBodyOverride                                          (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, const struct FPoseLink& InPoseUpperAndLowerCachePose, struct FPoseLink* VehicleFullBodyOverride)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "VehicleFullBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride_Params Parms;

	Parms.InPoseFullBody = InPoseFullBody;
	Parms.InPoseUpperAndLowerCachePose = InPoseUpperAndLowerCachePose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFullBodyOverride != nullptr)
		*VehicleFullBodyOverride = Parms.VehicleFullBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleLowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyDefault                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBodyOverride                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "VehicleLowerBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride_Params Parms;

	Parms.InPoseLowerBodyDefault = InPoseLowerBodyDefault;
	Parms.InPoseUpperBody = InPoseUpperBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBodyOverride != nullptr)
		*VehicleLowerBodyOverride = Parms.VehicleLowerBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimGraph");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ValidateDBNONativize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_3                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_4                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_5                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ValidateDBNONativize(const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue_3, bool CallFunc_NotEqual_BoolBool_ReturnValue_4, bool CallFunc_NotEqual_BoolBool_ReturnValue_5, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue_2, bool CallFunc_NotEqual_FloatFloat_ReturnValue_3, bool CallFunc_NotEqual_FloatFloat_ReturnValue_4, bool CallFunc_NotEqual_FloatFloat_ReturnValue_5, const class FString& CallFunc_Conv_FloatToString_ReturnValue_4, bool CallFunc_NotEqual_FloatFloat_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Conv_FloatToString_ReturnValue_5, bool CallFunc_NotEqual_FloatFloat_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_10)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ValidateDBNONativize");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ValidateDBNONativize_Params Parms;

	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_1 = CallFunc_NotEqual_BoolBool_ReturnValue_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_2 = CallFunc_NotEqual_BoolBool_ReturnValue_2;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_3 = CallFunc_NotEqual_BoolBool_ReturnValue_3;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_4 = CallFunc_NotEqual_BoolBool_ReturnValue_4;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_5 = CallFunc_NotEqual_BoolBool_ReturnValue_5;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_3 = CallFunc_Conv_FloatToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = CallFunc_NotEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_2 = CallFunc_NotEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_3 = CallFunc_NotEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_4 = CallFunc_NotEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_5 = CallFunc_NotEqual_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_4 = CallFunc_Conv_FloatToString_ReturnValue_4;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_6 = CallFunc_NotEqual_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_5 = CallFunc_Conv_FloatToString_ReturnValue_5;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_7 = CallFunc_NotEqual_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_L");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_R");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharPartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAnimInstance*     CharPart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CharPartEvent(class UFortPlayerAnimInstance* CharPart)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "CharPartEvent");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent_Params Parms;

	Parms.CharPart = CharPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_playFacialAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_playFacialAnim()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_playFacialAnim");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_playFacialAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_IndigoLaunch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_IndigoLaunch()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_IndigoLaunch");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_IndigoLaunch_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L_End()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_L_End");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_End_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R_End()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_R_End");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_End_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L_2()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_L_2");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_2_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R_2()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_R_2");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_2_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceEnd_Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimJumpSurfaceEnd_Exit()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_SwimJumpSurfaceEnd_Exit");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpSurfaceEnd_Exit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpStart_Exited
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimJumpStart_Exited()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_SwimJumpStart_Exited");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpStart_Exited_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintSlow_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimSprintSlow_Entered()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_SwimSprintSlow_Entered");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintSlow_Entered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprint_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimSprint_Entered()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_SwimSprint_Entered");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprint_Entered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Exited
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimSprintStart_Exited()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_SwimSprintStart_Exited");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintStart_Exited_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimSprintStart_Entered()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_SwimSprintStart_Entered");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintStart_Entered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimStartAdditive_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimStartAdditive_Entered()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_SwimStartAdditive_Entered");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimStartAdditive_Entered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimMovementAccelAdditive_Exited
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimMovementAccelAdditive_Exited()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_SwimMovementAccelAdditive_Exited");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimMovementAccelAdditive_Exited_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceLoop_Exited
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimJumpSurfaceLoop_Exited()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_SwimJumpSurfaceLoop_Exited");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpSurfaceLoop_Exited_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeLoop_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_CreateToolFlyModeLoop_Entered()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_CreateToolFlyModeLoop_Entered");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeLoop_Entered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeStart_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_CreateToolFlyModeStart_Entered()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_CreateToolFlyModeStart_Entered");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeStart_Entered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_OpenGlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_OpenGlider()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_OpenGlider");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_OpenGlider_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_HeldObjectPlace()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_HeldObjectPlace");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_HeldObjectPlace_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPickUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_HeldObjectPickUp()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_HeldObjectPickUp");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_HeldObjectPickUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.PlayFallFarAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::PlayFallFarAnims()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "PlayFallFarAnims");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_PlayFallFarAnims_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.StopFallFarAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::StopFallFarAnims()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "StopFallFarAnims");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_StopFallFarAnims_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerAnimInstance*     K2Node_CustomEvent_CharPart                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_4, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_3, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_3, bool K2Node_DynamicCast_bSuccess_7, class UFortPlayerAnimInstance* K2Node_CustomEvent_CharPart, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess_8, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_4, bool K2Node_DynamicCast_bSuccess_9, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_5, TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_4, bool K2Node_DynamicCast_bSuccess_10, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_5, bool K2Node_DynamicCast_bSuccess_11, TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_5, bool K2Node_DynamicCast_bSuccess_12, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn = K2Node_DynamicCast_AsInterface_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_1 = K2Node_DynamicCast_AsInterface_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_2 = CallFunc_TryGetPawnOwner_ReturnValue_2;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_3 = CallFunc_TryGetPawnOwner_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFort_Pawn_2 = K2Node_DynamicCast_AsFort_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsFort_Pawn_3 = K2Node_DynamicCast_AsFort_Pawn_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_2 = K2Node_DynamicCast_AsInterface_Player_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_3 = K2Node_DynamicCast_AsInterface_Player_Pawn_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_CharPart = K2Node_CustomEvent_CharPart;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_4 = CallFunc_TryGetPawnOwner_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsFort_Pawn_4 = K2Node_DynamicCast_AsFort_Pawn_4;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_5 = CallFunc_TryGetPawnOwner_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_4 = K2Node_DynamicCast_AsInterface_Player_Pawn_4;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsFort_Pawn_5 = K2Node_DynamicCast_AsFort_Pawn_5;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_5 = K2Node_DynamicCast_AsInterface_Player_Pawn_5;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.Indigo_Boost__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::Indigo_Boost__DelegateSignature()
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "Indigo_Boost__DelegateSignature");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_Indigo_Boost__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MenuScreenDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAnimInstance*     CharPart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MenuScreenDispatcher__DelegateSignature(class UFortPlayerAnimInstance* CharPart)
{
	static auto Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MenuScreenDispatcher__DelegateSignature");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_MenuScreenDispatcher__DelegateSignature_Params Parms;

	Parms.CharPart = CharPart;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
