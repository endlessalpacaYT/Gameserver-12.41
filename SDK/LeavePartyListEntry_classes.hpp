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

// 0xA8 (0xC40 - 0xB98)
// WidgetBlueprintGeneratedClass LeavePartyListEntry.LeavePartyListEntry_C
class ULeavePartyListEntry_C : public UFortLeavePartyListEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected;                                          // 0xBA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered;                                           // 0xBA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               AnimatedInputBorder;                               // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Arrow;                                             // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EmptyButtonToEatOneMouseUpEvent;                   // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EntryBorder;                                       // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Text_LeavePartyText;                               // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*          UserActionMenuInputButton;                         // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstance*                     InviteMaterial;                                    // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     DefaultMaterial;                                   // 0xBE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           InviteFontColor;                                   // 0xBF0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           DefaultFontColor;                                  // 0xC18(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeavePartyListEntry_C");
		return Clss;
	}

	void BP_OnUnhovered();
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void ExecuteUbergraph_LeavePartyListEntry(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsOpen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
