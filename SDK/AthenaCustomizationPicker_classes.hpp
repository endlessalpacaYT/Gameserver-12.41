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

// 0xA0 (0x478 - 0x3D8)
// WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C
class UAthenaCustomizationPicker_C : public UAthenaCustomizationPicker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Contract;                                          // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Expand;                                            // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UPanelButton_C*                        Button_TextSearch;                                 // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilteredTextEntryWidget_C*            EditableText_Search;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_TextSearch;                                // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_FilterName;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  TextBlock_NoItemAvailable;                         // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SearchBar;                             // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_DisplayItemAvailability;            // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDisableSaveButton;                               // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEnableSaveButton;                                // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTextSearchSelectedChanged;                       // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAthenaCustomizationPickerTileButton_C* TileButton;                                        // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TextEntryTimer;                                    // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationPicker_C");
		return Clss;
	}

	void NavigateDownFromSearch(enum class EUINavigation Navigation, class UWidget** NewParam, bool K2Node_SwitchEnum_CmpSuccess);
	void ResetTextSearchFilter();
	void HandleTextEntryTimer(class FText CallFunc_GetCurrentText_Text, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void HandleSearchTextFilterChanged(class FText Text, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class FText CallFunc_GetCurrentText_Text, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void GetTextFilterSelectedState(bool* bIsSelected, bool CallFunc_GetSelected_ReturnValue);
	void SetTextFilterSelectedState(bool bIsSelected, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Select_Default);
	void SetTextFilter(class FText InText, bool Clear, class FText CallFunc_GetEmptyText_ReturnValue);
	void OnNoItemsAvailableInFilter(class FText& EmptyDisplayText);
	void OnItemsAvailableInFilter();
	void OnSearchEnabled(bool bEnabled);
	void OnInitialized();
	void HandleTextChanged(class FText& Text);
	void HandleDifferentFilterSetBP();
	void BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_Text_Committed(class FText& Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_AthenaCustomizationPicker(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_GetQualifiedFilterDisplayName_ReturnValue, class FText K2Node_Event_EmptyDisplayText, bool K2Node_Event_bEnabled, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_CustomEvent_Text_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText K2Node_CustomEvent_Text, enum class ETextCommit K2Node_CustomEvent_CommitMethod);
	void OnTextChanged__DelegateSignature(class FText NewText);
	void OnTextSearchSelectedChanged__DelegateSignature(bool bIsSelected);
	void OnEnableSaveButton__DelegateSignature();
	void OnDisableSaveButton__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
