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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C
class ICreative_Device_Effects_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Creative_Device_Effects_Interface_C");
		return Clss;
	}

	void Get_Creative_Effect_Data(struct FFCreativeEffectColorIndex* Effect_Color);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif