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

// 0x178 (0xB20 - 0x9A8)
// WidgetBlueprintGeneratedClass AthenaArmoryTab.AthenaArmoryTab_C
class UAthenaArmoryTab_C : public UAthenaCustomizationScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ItemInfoIntroOutro;                                // 0x9B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              AccountOvr;                                        // 0x9B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* BackpackSlot;                                      // 0x9C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationBannerButton_C*    BannerSlot;                                        // 0x9C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* BattleBusSlot;                                     // 0x9D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* CallingCardSlot;                                   // 0x9D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* CharacterSlot;                                     // 0x9E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* ContrailSlot;                                      // 0x9E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot1;                                        // 0x9F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot2;                                        // 0x9F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot3;                                        // 0xA00(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot4;                                        // 0xA08(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot5;                                        // 0xA10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot6;                                        // 0xA18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              EmotesOvr;                                         // 0xA20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              GearOvr;                                           // 0xA28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* GliderSlot;                                        // 0xA30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* HarvestToolSlot;                                   // 0xA38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* HatSlot;                                           // 0xA40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*               ItemInfoHeaderWidget;                              // 0xA48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* ItemWrapSlot1;                                     // 0xA50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* ItemWrapSlot2;                                     // 0xA58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* ItemWrapSlot3;                                     // 0xA60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* ItemWrapSlot4;                                     // 0xA68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* ItemWrapSlot5;                                     // 0xA70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* ItemWrapSlot6;                                     // 0xA78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* ItemWrapSlot7;                                     // 0xA80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ItemWrapsOvr;                                      // 0xA88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* LoadScreenSlot;                                    // 0xA90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* MapMarkerSlot;                                     // 0xA98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* MusicPackSlot;                                     // 0xAA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShortDescriptionText;                              // 0xAA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StatsHeader;                                       // 0xAB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* TauntSlot;                                         // 0xAB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* VehicleSkinSlot;                                   // 0xAC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* VictoryPoseSlot;                                   // 0xAC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressModalWidget_C*                ProgressModal;                                     // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAthenaCustomizationSlotButtonWrapper_C*> AllSlots;                                          // 0xAD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	enum class EAthenaCustomizationCategory      CurrentCustomizationType;                          // 0xAE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentSubslotIndex;                               // 0xAEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaItemCustomizationSelector_C*    ItemCustomizationSelector;                         // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButton_C*      CustomizationSlotButtonToPlayConfirmationOn;       // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          AutoHideDetailsForDances;                          // 0xB00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* FirstSlotInMenu;                                   // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFirstSlotBannerSlot;                            // 0xB10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6FD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               LastHoveredSlot;                                   // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaArmoryTab_C");
		return Clss;
	}

	void ShowBannerLockerSlot(bool bCanShowEmpty, bool Temp_bool_Variable, enum class EAthenaCustomizationCategory Temp_byte_Variable, enum class EAthenaCustomizationCategory Temp_byte_Variable_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EAthenaCustomizationCategory K2Node_Select_Default);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue);
	void CheckOverrideCampaignHeroItemDetails(class UAthenaCustomizationSlotButtonWrapper_C* SlotButtonWrapper, class UFortItem* CallFunc_GetCampaignHeroPartItem_ReturnValue, class UAthenaCosmeticAccountItem* K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetLockerItemTypeText_ReturnValue, class UFortHero* CallFunc_GetHero_ReturnValue, class FText CallFunc_GetLockerDescriptionText_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PlaySlotAnimationAndCenterSlot(class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void SetupWarningForSlot(class UAthenaCustomizationSlotButtonWrapper_C* InSlot);
	void SetupNavigation(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PlayEquippedLockerMusic_STW(enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item);
	void EnableSlotsForSTW(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OkToReshowOnHover(enum class EAthenaCustomizationCategory Type, int32 Index, bool* Ok, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnyMontagePlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void PlaySlotClickedAnimation(class UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void CanShowEmptyForType(enum class EAthenaCustomizationCategory CustomizationType, bool* bCanShowEmpty, enum class EAthenaCustomizationCategory Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool K2Node_Select_Default);
	void SelectWidget(class UAthenaCustomizationSlotButtonWrapper_C* InSelection);
	void SetHeaderToBanner();
	void BeginPickingCustomization(class UCommonButton* WidgetToReturnFocusTo, const struct FAthenaCustomizationParams& CustomizationParams, class UAthenaCustomizationSlotButton_C* SlotButton, bool CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable, bool CallFunc_GetCustomizationSlotActiveState_bOutActive, class UAthenaCustomizationSlotButton_C* K2Node_DynamicCast_AsAthena_Customization_Slot_Button, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetItemDetailsToDisplay(class UFortItem* InputPin, bool CallFunc_IsValid_ReturnValue);
	void ShowVaultItemByCategory(enum class EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex, bool CanShowEmpty, class UFortItem* CallFunc_GetFavoriteItemForCategory_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UFortHero* CallFunc_GetSlottedPrimaryHero_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, const struct FFortAthenaLoadout& CallFunc_GetLoadoutForPlayer_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_4, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, class UAthenaCharacterItemDefinition* CallFunc_GetRandomDefaultAthenaCharacterDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_5);
	void HandleSlotHovered(class UAthenaCustomizationSlotButtonWrapper_C* HoveredSlot, enum class EAthenaCustomizationCategory Type, class FText HeaderText, class FText DescriptionText, int32 SubslotIndex, class UFortItem* CallFunc_GetCampaignHeroPartItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActivated_ReturnValue, class FText CallFunc_GetCategoryDisplayName_ReturnValue, class UFortItem* CallFunc_GetFavoriteItemForCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_OkToReshowOnHover_Ok, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_CanShowEmptyForType_bCanShowEmpty, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue);
	void SelectFirstWidget();
	void ShowSavingModal(class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue);
	void SelectInitialWidgetForGamepad();
	void RegisterInputActions();
	void OnInputModeChanged(bool bUsingGamepad);
	void BP_OnDeactivated();
	void Construct();
	void Destruct();
	void BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void HideDetailsForDances();
	void SetSlotToBannerSlot();
	void OnTransitionedBySwitcher();
	void BannerModalDeactivated();
	void PreConstruct(bool IsDesignTime);
	void OnLoadoutChanged();
	void ExecuteUbergraph_AthenaArmoryTab(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bUsingGamepad, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UAthenaBannerSelectModal_C* CallFunc_Create_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TArray<class UAthenaCustomizationSlotButtonWrapper_C*>& K2Node_MakeArray_Array, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
