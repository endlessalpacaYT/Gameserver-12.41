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

// 0x10 (0x11C0 - 0x11B0)
// BlueprintGeneratedClass B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C
class AB_RocketLauncher_Generic_Athena_HighTier_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              RearMuzzle;                                        // 0x11B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_RocketLauncher_Generic_Athena_HighTier_C");
		return Clss;
	}

	void Muzzle_Flash_FX(bool Persistent_Fire);
	void ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier(int32 EntryPoint, bool K2Node_Event_Persistent_Fire);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
