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


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodyOverride                                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFullBodyOverride");

	Params::UHeldObjectLayerAnimBP_C_ItemFullBodyOverride_Params Parms;

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = Parms.ItemFullBodyOverride;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemAimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_AimOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              AimOffsetAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   InPose_UpperLowerPreMeleeAO                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemAimOffset                                                    (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemAimOffset");

	Params::UHeldObjectLayerAnimBP_C_ItemAimOffset_Params Parms;

	Parms.InPose_AimOffset = InPose_AimOffset;
	Parms.AimOffsetAlpha = AimOffsetAlpha;
	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = InPose_UpperLowerPreMeleeAO;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAimOffset != nullptr)
		*ItemAimOffset = Parms.ItemAimOffset;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemUpperBody");

	Params::UHeldObjectLayerAnimBP_C_ItemUpperBody_Params Parms;

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = Parms.ItemUpperBody;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodySprint                                               (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFullBodySprint");

	Params::UHeldObjectLayerAnimBP_C_ItemFullBodySprint_Params Parms;

	Parms.InPoseSprint = InPoseSprint;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = Parms.ItemFullBodySprint;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemIdleAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemIdleAdditive_Params Parms;

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = Parms.ItemIdleAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemCrouchTurningAdditive                                        (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemCrouchTurningAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemCrouchTurningAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = Parms.ItemCrouchTurningAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSlopeSliding                                                 (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSlopeSliding");

	Params::UHeldObjectLayerAnimBP_C_ItemSlopeSliding_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = Parms.ItemSlopeSliding;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJumpUpAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemJumpUpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = Parms.ItemJumpUpAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJumpLoopAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemJumpLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = Parms.ItemJumpLoopAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFallAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemFallAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = Parms.ItemFallAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFallLandAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemFallLandAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = Parms.ItemFallLandAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJetPackStartAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemJetPackStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = Parms.ItemJetPackStartAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJetPackJumpAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemJetPackJumpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = Parms.ItemJetPackJumpAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemZipLineStartAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemZipLineStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = Parms.ItemZipLineStartAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeStartAdditive                                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFlyModeStartAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemFlyModeStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = Parms.ItemFlyModeStartAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeLoopAdditive                                          (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemFlyModeLoopAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemFlyModeLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = Parms.ItemFlyModeLoopAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStartAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStartAdditive                                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJogStartAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemJogStartAdditive_Params Parms;

	Parms.InPoseJogStartAdditive = InPoseJogStartAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = Parms.ItemJogStartAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStopAdditive                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStopAdditive                                              (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJogStopAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemJogStopAdditive_Params Parms;

	Parms.InPoseJogStopAdditive = InPoseJogStopAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = Parms.ItemJogStopAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePrePivotAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPrePivotAdditive                                          (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJogPrePivotAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemJogPrePivotAdditive_Params Parms;

	Parms.InPosePrePivotAdditive = InPosePrePivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = Parms.ItemJogPrePivotAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostPivotAdditive                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPostPivotAdditive                                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemJogPostPivotAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemJogPostPivotAdditive_Params Parms;

	Parms.InPosePostPivotAdditive = InPosePostPivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = Parms.ItemJogPostPivotAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyMovement");

	Params::UHeldObjectLayerAnimBP_C_ItemLowerBodyMovement_Params Parms;

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = Parms.ItemLowerBodyMovement;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyLeanAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyLeanAdditive                                        (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyLeanAdditive");

	Params::UHeldObjectLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params Parms;

	Parms.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = Parms.ItemLowerBodyLeanAdditive;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStart                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStart                                            (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyJogStart");

	Params::UHeldObjectLayerAnimBP_C_ItemLowerBodyJogStart_Params Parms;

	Parms.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = Parms.ItemLowerBodyJogStart;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStop                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStop                                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyJogStop");

	Params::UHeldObjectLayerAnimBP_C_ItemLowerBodyJogStop_Params Parms;

	Parms.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = Parms.ItemLowerBodyJogStop;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPrePivot                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPrePivot                                         (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyJogPrePivot");

	Params::UHeldObjectLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params Parms;

	Parms.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = Parms.ItemLowerBodyJogPrePivot;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPostPivot                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPostPivot                                        (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemLowerBodyJogPostPivot");

	Params::UHeldObjectLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params Parms;

	Parms.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = Parms.ItemLowerBodyJogPostPivot;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemRelaxedEntry");

	Params::UHeldObjectLayerAnimBP_C_ItemRelaxedEntry_Params Parms;

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = Parms.ItemRelaxedEntry;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStart                                                (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpStart");

	Params::UHeldObjectLayerAnimBP_C_ItemSwimJumpStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = Parms.ItemSwimJumpStart;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStartLoop                                            (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpStartLoop");

	Params::UHeldObjectLayerAnimBP_C_ItemSwimJumpStartLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = Parms.ItemSwimJumpStartLoop;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpFallLoop                                             (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpFallLoop");

	Params::UHeldObjectLayerAnimBP_C_ItemSwimJumpFallLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = Parms.ItemSwimJumpFallLoop;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceLoop                                          (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpSurfaceLoop");

	Params::UHeldObjectLayerAnimBP_C_ItemSwimJumpSurfaceLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = Parms.ItemSwimJumpSurfaceLoop;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceEnd                                           (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSwimJumpSurfaceEnd");

	Params::UHeldObjectLayerAnimBP_C_ItemSwimJumpSurfaceEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = Parms.ItemSwimJumpSurfaceEnd;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemSkeletalControl                                              (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ItemSkeletalControl");

	Params::UHeldObjectLayerAnimBP_C_ItemSkeletalControl_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = Parms.ItemSkeletalControl;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHeldObjectLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "AnimGraph");

	Params::UHeldObjectLayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HeldObjectLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_C2A887E04220180AB9CD6384FDB74E4E
// (BlueprintEvent)
// Parameters:

void UHeldObjectLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HeldObjectLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_C2A887E04220180AB9CD6384FDB74E4E()
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_HeldObjectLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_C2A887E04220180AB9CD6384FDB74E4E");

	Params::UHeldObjectLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HeldObjectLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_C2A887E04220180AB9CD6384FDB74E4E_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.AnimNotify_HeldObjectPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeldObjectLayerAnimBP_C::AnimNotify_HeldObjectPlace()
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "AnimNotify_HeldObjectPlace");

	Params::UHeldObjectLayerAnimBP_C_AnimNotify_HeldObjectPlace_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.AnimNotify_HeldObjectPickUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeldObjectLayerAnimBP_C::AnimNotify_HeldObjectPickUp()
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "AnimNotify_HeldObjectPickUp");

	Params::UHeldObjectLayerAnimBP_C_AnimNotify_HeldObjectPickUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UHeldObjectLayerAnimBP_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "BlueprintInitializeAnimation");

	Params::UHeldObjectLayerAnimBP_C_BlueprintInitializeAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ExecuteUbergraph_HeldObjectLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeldObjectLayerAnimBP_C::ExecuteUbergraph_HeldObjectLayerAnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HeldObjectLayerAnimBP_C", "ExecuteUbergraph_HeldObjectLayerAnimBP");

	Params::UHeldObjectLayerAnimBP_C_ExecuteUbergraph_HeldObjectLayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
