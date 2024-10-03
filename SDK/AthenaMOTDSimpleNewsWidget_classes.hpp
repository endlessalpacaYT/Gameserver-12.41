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

// 0x54 (0x364 - 0x310)
// WidgetBlueprintGeneratedClass AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C
class UAthenaMOTDSimpleNewsWidget_C : public UFortAthenaMOTDSimpleNewsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Backplate;                                         // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GlowBackground;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Border;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ColorFade;                                   // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxButtonSize;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FColor                                DarkDefaultColor;                                  // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                LightDefaultColor;                                 // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                PreviewDarkColor;                                  // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TestPreviewColors;                                 // 0x35C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6AD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                PreviewLightColor;                                 // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMOTDSimpleNewsWidget_C");
		return Clss;
	}

	void SetDynamicColors(const struct FColor& Dark, const struct FColor& Light, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2);
	void PreConstruct(bool IsDesignTime);
	void OnPopulateNews(struct FAthenaNewsEntry& NewsEntry);
	void BP_OnActivated();
	void ExecuteUbergraph_AthenaMOTDSimpleNewsWidget(int32 EntryPoint, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Event_IsDesignTime, const struct FColor& K2Node_Select_Default, const struct FAthenaNewsEntry& K2Node_Event_NewsEntry, const struct FColor& K2Node_Select_Default_1, const struct FColor& K2Node_Select_Default_2, const struct FColor& K2Node_Select_Default_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif