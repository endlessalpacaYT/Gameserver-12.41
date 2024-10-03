#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientGameplayTag
struct UAmbientAudioStatics_RemoveAmbientGameplayTag_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTag;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientEntry
struct UAmbientAudioStatics_RemoveAmbientEntry_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AmbientName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AmbientAudio.AmbientAudioStatics.PlaySoundAtLocation
struct UAmbientAudioStatics_PlaySoundAtLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1977[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AmbientAudio.AmbientAudioStatics.CreateAudioComponent
struct UAmbientAudioStatics_CreateAudioComponent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AmbientAudio.AmbientAudioStatics.AddAmbientGameplayTag
struct UAmbientAudioStatics_AddAmbientGameplayTag_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTag;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AmbientAudio.AmbientAudioStatics.AddAmbientEntry
struct UAmbientAudioStatics_AddAmbientEntry_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AmbientName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAmbientAudioDataAsset*                Asset;                                             // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1982[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function AmbientAudio.AmbientVolume.SetPriority
struct AAmbientVolume_SetPriority_Params
{
public:
	int32                                        NewPriority;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AmbientAudio.AmbientVolume.SetEnabled
struct AAmbientVolume_SetEnabled_Params
{
public:
	bool                                         bNewEnabled;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AmbientAudio.AmbientVolume.SetAmbientAsset
struct AAmbientVolume_SetAmbientAsset_Params
{
public:
	class UAmbientAudioDataAsset*                NewAmbientAsset;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AmbientAudio.AmbientVolume.OnRep_bEnabled
struct AAmbientVolume_OnRep_bEnabled_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
