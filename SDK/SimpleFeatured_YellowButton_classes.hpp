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

// 0x58 (0xBE8 - 0xB90)
// WidgetBlueprintGeneratedClass SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C
class USimpleFeatured_YellowButton_C : public UFortSimpleFeaturedYellowButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Pressed;                                           // 0xB98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TextBounce;                                        // 0xBA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0xBA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Container;                                  // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ButtonBacking;                                     // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ButtonAction;                                 // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_SecondaryText;                                // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Button_Description;                                // 0xBD0(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SimpleFeatured_YellowButton_C");
		return Clss;
	}

	void HandleSize(bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_Select_Default, int32 K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void SetText(class FText& NewText);
	void ChangeSecondaryText(class FText& NewText);
	void RefreshUI();
	void ExecuteUbergraph_SimpleFeatured_YellowButton(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText K2Node_Event_NewText_1, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class FText K2Node_Event_NewText, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
