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

// 0x9 (0xB81 - 0xB78)
// BlueprintGeneratedClass B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C
class AB_UtilityItem_Generic_Athena_C : public AB_UtilityItem_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         UseThrowConsumableHudKeyActions;                   // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_UtilityItem_Generic_Athena_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ThrowConsumableHudActionKey_Targeting(bool Targeting);
	void ThrowConsumableHudActionKey_Visible(bool Visible);
	void ExecuteUbergraph_B_UtilityItem_Generic_Athena(int32 EntryPoint, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility, bool K2Node_CustomEvent_Targeting, bool K2Node_CustomEvent_Visible, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_2, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_3, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_4, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_5, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_6, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_1, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_7, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_2, const struct FWeaponHudKeyActionVisibility& K2Node_MakeStruct_WeaponHudKeyActionVisibility_8, TArray<struct FWeaponHudKeyActionVisibility>& K2Node_MakeArray_Array_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
