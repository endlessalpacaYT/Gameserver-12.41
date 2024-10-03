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

// 0x8C1 (0xBA1 - 0x2E0)
// WidgetBlueprintGeneratedClass FIlteredTextEntryWidget.FilteredTextEntryWidget_C
class UFilteredTextEntryWidget_C : public UFortEditableFilteredCountedTextBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Error;                                             // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_Prompt;                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ErrorText;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Info;                                // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_119;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selected;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputActionWidget;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_InputAction;                               // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WarningImage;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUseOverrideStyle;                                 // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_6C23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextBoxStyle                 OverrideStyle;                                     // 0x338(0x7F0)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bHideValidationInfo;                               // 0xB28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class ETextJustify                      Justification;                                     // 0xB29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowTextPrompt;                                    // 0xB2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_6C24[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PromptTextStyle;                                   // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  PromptText;                                        // 0xB38(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0xB50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bUseHintText;                                      // 0xB60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HintText;                                          // 0xB68(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            OnSanitizedTextReady;                              // 0xB80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTextCommitByEnter;                               // 0xB90(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         SanitizedTextReady;                                // 0xBA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FilteredTextEntryWidget_C");
		return Clss;
	}

	void GetErrorText(bool Additional_Validator_Failed, class FText* Appropriate_Text, class FText Result, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetCurrentText(class FText* Text, class FText CallFunc_GetText_ReturnValue);
	void HandleShowPrompt(class FText& CurrentText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetTextFocus();
	void UpdateConfiguration(bool bOverrideStyle, bool bHideValidation, enum class ETextJustify TextJustification, bool bShouldShowTextPrompt, class FText PromptDisplayText, class UClass* TextStyle, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_FilteredTextEntryWidget(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_bIsBadText, bool K2Node_Event_bAdditionalValidationFailed, class FText CallFunc_GetErrorText_Appropriate_Text, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility Temp_byte_Variable, class FText K2Node_ComponentBoundEvent_Text_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class FText CallFunc_GetCurrentText_Text, enum class ESlateVisibility Temp_byte_Variable_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnTextCommitByEnter__DelegateSignature();
	void OnSanitizedTextReady__DelegateSignature(class FText Text);
	void OnTextChanged__DelegateSignature(class FText Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
