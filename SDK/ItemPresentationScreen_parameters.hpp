#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.HandleFadeAnimFinished
struct UItemPresentationScreen_C_HandleFadeAnimFinished_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.HandlePaidItemIntro
struct UItemPresentationScreen_C_HandlePaidItemIntro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.StartFade
struct UItemPresentationScreen_C_StartFade_Params
{
public:
	bool                                         bCloseScreen;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6CAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.PlayIntro
struct UItemPresentationScreen_C_PlayIntro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.HandleAnimationInitialState
struct UItemPresentationScreen_C_HandleAnimationInitialState_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.BP_OnActivated
struct UItemPresentationScreen_C_BP_OnActivated_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateHeaderInformation
struct UItemPresentationScreen_C_OnUpdateHeaderInformation_Params
{
public:
	struct FFortItemHeaderInformation            HeaderInformation;                                 // 0x0(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemInformation
struct UItemPresentationScreen_C_OnUpdateItemInformation_Params
{
public:
	class UFortItem*                             FortItem;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateOwnedItemText
struct UItemPresentationScreen_C_OnUpdateOwnedItemText_Params
{
public:
	bool                                         bShowText;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemEquipped
struct UItemPresentationScreen_C_OnUpdateItemEquipped_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnInitialIconAnimation
struct UItemPresentationScreen_C_OnInitialIconAnimation_Params
{
public:
	bool                                         bUsingListView;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayEquipButton
struct UItemPresentationScreen_C_OnDisplayEquipButton_Params
{
public:
	bool                                         bCanEquip;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnCloseScreen
struct UItemPresentationScreen_C_OnCloseScreen_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateNextButtonText
struct UItemPresentationScreen_C_OnUpdateNextButtonText_Params
{
public:
	bool                                         bShowNext;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnFinishDisplayingHotItems
struct UItemPresentationScreen_C_OnFinishDisplayingHotItems_Params
{
public:
	bool                                         bShowOtherRewards;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayItemsCollectedText
struct UItemPresentationScreen_C_OnDisplayItemsCollectedText_Params
{
public:
	bool                                         bCloseScreen;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.SwitchToPaidItems
struct UItemPresentationScreen_C_SwitchToPaidItems_Params
{
public:
};

// 0x281 (0x281 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.ExecuteUbergraph_ItemPresentationScreen
struct UItemPresentationScreen_C_ExecuteUbergraph_ItemPresentationScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInfoPresentationWidget_C*         K2Node_DynamicCast_AsItem_Info_Presentation_Widget; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetDisplayedEntryWidgets_ReturnValue;     // 0x20(0x10)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetAllEntries_ReturnValue;                // 0x38(0x10)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemPresentationEntry_C*              K2Node_DynamicCast_AsItem_Presentation_Entry;      // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header; // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1; // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CB6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemInfoPresentationWidget_C*         K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1; // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemHeaderInformation            K2Node_Event_HeaderInformation;                    // 0xA8(0x98)(ConstParm)
	class UFortItem*                             K2Node_Event_FortItem;                             // 0x140(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowText;                            // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bUsingListView;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bCanEquip;                            // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bShowNext;                            // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CB9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoloButton_C*                         K2Node_DynamicCast_AsSolo_Button;                  // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bShowOtherRewards;                    // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bCloseScreen;                         // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CBA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CBC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoloButton_C*                         K2Node_DynamicCast_AsSolo_Button_1;                // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x1A0(0x10)(NoDestructor)
	class UItemInfoPresentationWidget_C*         K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2; // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassTracker_C*                  K2Node_DynamicCast_AsBattle_Pass_Tracker;          // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassTracker_C*                  K2Node_DynamicCast_AsBattle_Pass_Tracker_1;        // 0x1D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker;     // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1;   // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2;   // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassTracker_C*                  K2Node_DynamicCast_AsBattle_Pass_Tracker_2;        // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassTracker_C*                  K2Node_DynamicCast_AsBattle_Pass_Tracker_3;        // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3;   // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item_1;                         // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemPresentationEntry_C*              K2Node_DynamicCast_AsItem_Presentation_Entry_1;    // 0x268(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoloButton_WinterFest_C*              K2Node_DynamicCast_AsSolo_Button_Winter_Fest;      // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_17;                    // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif