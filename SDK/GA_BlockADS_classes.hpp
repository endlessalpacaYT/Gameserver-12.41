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

// 0x8 (0xA38 - 0xA30)
// BlueprintGeneratedClass GA_BlockADS.GA_BlockADS_C
class UGA_BlockADS_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_BlockADS_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BlockADS(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
