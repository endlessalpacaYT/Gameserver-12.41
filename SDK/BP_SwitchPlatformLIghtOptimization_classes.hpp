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

// 0x38 (0x250 - 0x218)
// BlueprintGeneratedClass BP_SwitchPlatformLIghtOptimization.BP_SwitchPlatformLIghtOptimization_C
class ABP_SwitchPlatformLIghtOptimization_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_184[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Spotlights_PC;                                     // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                        Spotlights_Switch;                                 // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SwitchPlatformLIghtOptimization_C");
		return Clss;
	}

	void SwitchLights(bool EnableSwitchPlatform, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APointLight* K2Node_DynamicCast_AsPoint_Light, bool K2Node_DynamicCast_bSuccess, class ASpotLight* K2Node_DynamicCast_AsSpot_Light, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APointLight* K2Node_DynamicCast_AsPoint_Light_1, bool K2Node_DynamicCast_bSuccess_2, class ASpotLight* K2Node_DynamicCast_AsSpot_Light_1, bool K2Node_DynamicCast_bSuccess_3);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SwitchPlatformLIghtOptimization(int32 EntryPoint, bool CallFunc_IsErebus_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
