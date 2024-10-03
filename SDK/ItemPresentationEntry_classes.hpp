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

// 0x2A (0xC7A - 0xC50)
// WidgetBlueprintGeneratedClass ItemPresentationEntry.ItemPresentationEntry_C
class UItemPresentationEntry_C : public UFortItemPresentationEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected;                                          // 0xC58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0xC60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered;                                           // 0xC68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Content;                                   // 0xC70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsSelected;                                       // 0xC78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bCanHover;                                         // 0xC79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemPresentationEntry_C");
		return Clss;
	}

	void PlayIntro(float TimeBeforeStart, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void HandelDeselectedAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleSelectedAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleUnhover(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void HandleHover(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void BP_OnUnhovered();
	void DelayIntroAnimation();
	void BP_OnHovered();
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void BP_OnSelected();
	void BP_OnDeselected();
	void ExecuteUbergraph_ItemPresentationEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
