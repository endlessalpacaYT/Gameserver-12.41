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

// 0x20 (0x48 - 0x28)
// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	uint8                                        Pad_19A6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlays*                             SourceSubtitles;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A7[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMediaSubtitlesPlayer");
		return Clss;
	}

	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};

// 0x330 (0x438 - 0x108)
// Class SubtitlesWidgets.SubtitleDisplay
class USubtitleDisplay : public UWidget
{
public:
	struct FSubtitleFormat                       Format;                                            // 0x108(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubtitleDisplayOptions*               Options;                                           // 0x110(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreviewMode;                                      // 0x11C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PreviewText;                                       // 0x120(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       GeneratedStyle;                                    // 0x138(0x268)(Transient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           GeneratedBackgroundBorder;                         // 0x3A0(0x88)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19B3[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubtitleDisplay");
		return Clss;
	}

	bool HasSubtitles();
};

// 0x130 (0x160 - 0x30)
// Class SubtitlesWidgets.SubtitleDisplayOptions
class USubtitleDisplayOptions : public UDataAsset
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x30(0x50)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplayTextSizes[0x5];                             // 0x80(0x14)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DisplayTextColors[0x2];                            // 0x94(0x20)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayBorderSize[0x3];                            // 0xB4(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayBackgroundOpacity[0x5];                     // 0xC0(0x14)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundBrush;                                   // 0xD8(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubtitleDisplayOptions");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class SubtitlesWidgets.SubtitleDisplaySubsystem
class USubtitleDisplaySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_19BE[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubtitleFormat                       SubtitleFormat;                                    // 0x48(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubtitleDisplaySubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
