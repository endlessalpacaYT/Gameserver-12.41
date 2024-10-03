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

// 0x280 (0x7A0 - 0x520)
// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
class UOptionsMenu_C : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         BackgroundBorder;                                  // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderBackground;                                  // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                        CloseButton;                                       // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Message;                                           // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OverlayText;                                       // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            SavingLayer;                                       // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsAccept;                               // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsCancel;                               // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedOption;                                    // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Current_Tab;                                       // 0x574(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Video_Tab_Selected;                                // 0x57C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Apply_Visible;                                     // 0x57D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DBE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortOptionsTab*>               AllTabWidgets;                                     // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UProgressModalWidget_C*                SavingModal;                                       // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                VideoTabClass;                                     // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AccountTabClass;                                   // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GamepadTabClass;                                   // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                InputTabClass;                                     // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LoadCount;                                         // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UObject>                 TabGamePad;                                        // 0x5C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabAccountV2;                                      // 0x5E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabVideoOptionsV2;                                 // 0x610(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ToggleModeAction;                                  // 0x638(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ApplyAction;                                       // 0x648(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ResetToDefault;                                    // 0x658(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Back;                                              // 0x668(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	TSoftClassPtr<class UObject>                 TabInputOptionsV2;                                 // 0x678(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                          ResetVideoOptionsTimer;                            // 0x6A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortTabButtonLabelInfo>       TabLabels;                                         // 0x6A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                          TabIds;                                            // 0x6B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSettingsApplied;                                 // 0x6C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   ChoosePreset;                                      // 0x6D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftClassPtr<class UUserWidget>             NewControllerSettingsTab;                          // 0x6E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateBrush                           ControllerSensitivity;                             // 0x710(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                ControllerSensitivityTabClass;                     // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenu_C");
		return Clss;
	}

	void ResetGameOptionsToDefault(class UFortOptionsTab* InputPin);
	void CreateMobileBackButton();
	void NotifyTabsOfActivationState(class UFortOptionsTab* ActivatedTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortOptionsTab* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void HandleResetAvailableActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, enum class EInputActionState K2Node_Select_Default);
	void Update_Header_Text_by_Tab_ID(class FName TabId, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void UpdateAllOptionsTabs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortOptionsTab* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1);
	void BP_ApplySettings(class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void HandleTabGamepadConfigActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, enum class EInputActionState K2Node_Select_Default, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UTabGamePadConfig_v3_C* K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3, bool K2Node_DynamicCast_bSuccess);
	void CenterOnActiveTab(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess);
	void SetBackground(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsInZone_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void AddTabs(class UClass* WidgetClass, class FText DisplayName, class FName NameId, const struct FSlateBrush& Icon, enum class ESettingTab Tab_Type, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortOptionsTab* CallFunc_Create_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void HandleCursorModeChanging(bool IsEnabled);
	void Handle_Toggle_Mode(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UFortGamepadInputOptions* K2Node_DynamicCast_AsFort_Gamepad_Input_Options, bool K2Node_DynamicCast_bSuccess);
	void HandleBack();
	void Handle_Reset(bool* PassThrough);
	void Handle_Apply(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue_1, bool CallFunc_NeedsVideoChangeConfirmation_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue);
	void Initialize(const struct FSlateBrush& TouchIcon, const struct FSlateBrush& MKB_Icon, const struct FSlateBrush& HUD_Icon, const struct FSlateBrush& Game_Normal, const struct FSlateBrush& Accounts_Normal, const struct FSlateBrush& Keys_Normal, const struct FSlateBrush& Controller_Normal, const struct FSlateBrush& Color_Normal, const struct FSlateBrush& Brightness_Normal, const struct FSlateBrush& Audio_Normal, const struct FSlateBrush& Video_Normal, class FText Temp_text_Variable, bool CallFunc_ShowTouchAndMotionOptions_ReturnValue, bool CallFunc_ShowInputOptions_ReturnValue, class FText Temp_text_Variable_1, bool CallFunc_ShowNewControllerSenseOptions_ReturnValue, bool Temp_bool_Variable, class FName CallFunc_GetTabIdAtIndex_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_ShowAccountOptions_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_ShowControllerOptions_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_HasWidgets_ReturnValue, class FText K2Node_Select_Default, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable_2, bool CallFunc_ShowInputOptions_ReturnValue_1, class FText Temp_text_Variable_3, bool CallFunc_ShowVideoOptions_ReturnValue);
	void OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded);
	void OnLoaded_56F757014AB176CE2140009FB54D0D23(class UClass* Loaded);
	void OnLoaded_488EE90943BFF7AA4DB2049A7D72238C(class UClass* Loaded);
	void OnLoaded_598823E641B8288CD371F0B50BE07C91(class UClass* Loaded);
	void DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_505313CB4EC9E510DD07E6B544334958(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_826C59EC4C294BC872A644878B35A13B(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_B31FF5BD4C0772716F27509EA83B418E(enum class EFortDialogResult Result, class FName ResultName);
	void OnLoaded_8C5A9E8C42027607DE7ED0B10409E5CE(class UClass* Loaded);
	void DialogResult_2757852D46593FD0C2380D8F102C53DD(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void Tab_Setting_Changed();
	void BP_OnActivated();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleBenchmarkComplete();
	void BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleSettingsErrorMessageClosed();
	void OnHandleBack();
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Construct();
	void HandleSettingsSaveComplete();
	void BP_OnDeactivated();
	void LoadTabClasses();
	void ResetVideoOptionsTimerDelegate();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature(class FName TabId);
	void ShowLangaugeConfirmation();
	void HandleTabGamePadActionsNeedBinds(TArray<class FText>& ScreenLabels);
	void OnBack();
	void OnToggleMode();
	void OnApplySettings();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnResetToDefault();
	void ExecuteUbergraph_OptionsMenu(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result_3, class FName K2Node_CustomEvent_ResultName_3, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName Temp_name_Variable, bool CallFunc_BooleanAND_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result_2, class FName K2Node_CustomEvent_ResultName_2, class FName Temp_name_Variable_1, enum class EFortDialogResult Temp_byte_Variable_1, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable_2, enum class EFortDialogResult Temp_byte_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab, bool K2Node_ClassDynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, enum class ESubGame CallFunc_GetSubGame_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable_3, enum class EFortDialogResult Temp_byte_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UTabVideoOptions_New_C* K2Node_DynamicCast_AsTab_Video_Options_New, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UTabGamePadConfig_v3_C* K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3, bool K2Node_DynamicCast_bSuccess_2, class FName K2Node_ComponentBoundEvent_TabId_1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Handle_Reset_PassThrough, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue_2, enum class EFortDialogResult Temp_byte_Variable_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, class FName Temp_name_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_ShowVideoOptions_ReturnValue, bool CallFunc_ShowAccountOptions_ReturnValue, bool CallFunc_ShowControllerOptions_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_ShowInputOptions_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result_4, class FName K2Node_CustomEvent_ResultName_4, bool CallFunc_IsVisible_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, class UClass* Temp_class_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_1, bool K2Node_ClassDynamicCast_bSuccess_1, TArray<class FText>& K2Node_CustomEvent_ScreenLabels, class FText CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UClass* K2Node_CustomEvent_Loaded_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_1, class UTabGamePadConfig_v3_C* K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3_1, bool K2Node_DynamicCast_bSuccess_4, class UClass* Temp_class_Variable_2, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_2, bool K2Node_ClassDynamicCast_bSuccess_2, class UClass* K2Node_CustomEvent_Loaded_2, class UClass* Temp_class_Variable_3, class UClass* K2Node_CustomEvent_Loaded_3, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_3, bool K2Node_ClassDynamicCast_bSuccess_3, bool CallFunc_ShowNewControllerSenseOptions_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UClass* Temp_class_Variable_4, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab_4, bool K2Node_ClassDynamicCast_bSuccess_4, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UClass* K2Node_CustomEvent_Loaded_4, class UWidget* CallFunc_GetActiveWidget_ReturnValue_2, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab_1, bool K2Node_DynamicCast_bSuccess_5, class UFortHUDContext* CallFunc_GetContext_ReturnValue_3);
	void OnSettingsApplied__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
