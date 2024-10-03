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

// 0x20 (0x298 - 0x278)
// WidgetBlueprintGeneratedClass AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C
class UAthenaRewardItemTypeRarityTag_C : public UAthenaRewardItemTypeRarityTag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_ItemType;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          ItemTypeTextColor;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaRewardItemTypeRarityTag_C");
		return Clss;
	}

	void OnInitializeRarityWithSeries(class UFortItemSeriesDefinition* SeriesData);
	void OnInitializeRarityWithoutSeries(const struct FFortRarityItemData& RarityData);
	void ExecuteUbergraph_AthenaRewardItemTypeRarityTag(int32 EntryPoint, class UFortItemSeriesDefinition* K2Node_Event_SeriesData, const struct FFortRarityItemData& K2Node_Event_RarityData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
