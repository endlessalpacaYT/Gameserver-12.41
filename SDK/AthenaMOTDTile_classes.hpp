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

// 0x88 (0xC48 - 0xBC0)
// WidgetBlueprintGeneratedClass AthenaMOTDTile.AthenaMOTDTile_C
class UAthenaMOTDTile_C : public UFortAthenaMOTDTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHovered;                                         // 0xBC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0xBD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Details;                                    // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_PipDisplay;                                 // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      CommonLoadGuard_0;                                 // 0xBE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Fill;                                              // 0xBF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_196;                                         // 0xBF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ClickCatcher;                                // 0xC00(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LoadingImage;                                      // 0xC08(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LoadingImageOvr;                                   // 0xC10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 LoadSwitcher;                                      // 0xC18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             NewsItemScale;                                     // 0xC20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Tile;                                      // 0xC28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bShowImageOnly;                                    // 0xC30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreviewPipCount;                                   // 0xC34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHoveredChanged;                                  // 0xC38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMOTDTile_C");
		return Clss;
	}

	void UpdateDisplay(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void ShowImageOnly(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaMOTDTile(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default);
	void OnHoveredChanged__DelegateSignature(bool NewIsHovered);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
