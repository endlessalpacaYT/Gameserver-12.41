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

// 0x110 (0x838 - 0x728)
// WidgetBlueprintGeneratedClass StoreMain_OfferDetails.StoreMain_OfferDetails_C
class UStoreMain_OfferDetails_C : public UFortRealMoneyOfferDetails
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x728(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BaseColor;                                         // 0x730(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BaseColorDetails;                                  // 0x738(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        BonusMTXArea;                                      // 0x740(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderDisclaimer;                                  // 0x748(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BaseQuantity;                           // 0x750(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BonusQuantity;                          // 0x758(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FounderPackLabelText;                              // 0x760(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x768(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        Image_CurrencyIcon;                                // 0x770(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      KeyArt;                                            // 0x778(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MTXArea;                                           // 0x780(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MTXButtonBox;                                      // 0x788(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradient;                                   // 0x790(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradientDetails;                            // 0x798(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlaySalePrice;                                  // 0x7A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute1;                  // 0x7A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute2;                  // 0x7B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescription;                                   // 0x7B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x7C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice;                             // 0x7C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOriginalPrice;                                 // 0x7D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxOfferInfo;                                     // 0x7D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VBuckHighlight;                                    // 0x7E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, class UFortMtxOfferData*>        ABAssetCollection;                                 // 0x7E8(0x50)(Edit, BlueprintVisible, ZeroConstructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreMain_OfferDetails_C");
		return Clss;
	}

	void SetupCurrencyImage(class UFortAccountItemDefinition* PriceItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, bool CallFunc_IsPriceInRealMoney_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdatePurchaseButton(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AreGrantedItemsOwned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default);
	void InitDetailAttributes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetPurchaseButtonText(class FText ButtonText, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
	bool IsGiftingStorefrontOffer(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsGiftingStorefrontOffer_ReturnValue);
	void GetCurrencyABAssetFromQuantity(int32 Quantity, class UFortMtxOfferData** DataAsset, class UFortMtxOfferData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void InitCurrency(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, int32 CallFunc_GetBonusQuantity_ReturnValue, int32 CallFunc_GetTotalQuantity_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, class FText CallFunc_GetDescription_ReturnValue, int32 CallFunc_GetBonusQuantity_ReturnValue_1, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_4, int32 CallFunc_GetTotalQuantity_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_2);
	void InitStoreTypeVisuals(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool Temp_bool_Variable_1, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void UnregisterInput();
	void RegisterInput(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void PopDetails();
	void Init(class UFortMtxOfferData* DisplayAsset, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMtxOfferData* CallFunc_GetOfferDisplayAsset_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, int32 CallFunc_GetTotalQuantity_ReturnValue, int32 CallFunc_GetTotalQuantity_ReturnValue_1, class UFortMtxOfferData* CallFunc_GetCurrencyABAssetFromQuantity_DataAsset, class UFortMtxOfferData* CallFunc_GetCurrencyABAssetFromQuantity_DataAsset_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, class UFortExperimentContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue, class UFortExperimentContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ShouldShowNewVBuckColorsJuly2019_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_GetName_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, bool Temp_bool_Variable_1, class UFortExperimentContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_ShouldShowNewVBuckCoinAssetsJuly2019_ReturnValue, class UMaterialInterface* K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3);
	void HandleBack(bool* PassThrough);
	void ResetPurchaseButtonText();
	void OnPurchasingStarted();
	void OnOfferSet();
	void ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
