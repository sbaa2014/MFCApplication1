#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AudioMixer.ESourceEffectFilter
enum class ESourceEffectFilter
{
	ESourceEffectFilter__LowPass   = 0,
	ESourceEffectFilter__HighPass  = 1,
	ESourceEffectFilter__BandPass  = 2,
	ESourceEffectFilter__LowShelf  = 3,
	ESourceEffectFilter__HighShelf = 4,
	ESourceEffectFilter__ESourceEffectFilter_MAX = 5
};



//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioMixer.SoundEffectLowPassFilter
// 0x0000 (0x0090 - 0x0090)
class USoundEffectLowPassFilter : public USoundEffectSource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SoundEffectLowPassFilter");
		return ptr;
	}

};


// Class AudioMixer.SoundEffectLowPassFilterPreset
// 0x0008 (0x0048 - 0x0040)
class USoundEffectLowPassFilterPreset : public USoundEffectSourcePreset
{
public:
	struct FSoundEffectLowPassFilterSettings           Settings;                                         		// 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SoundEffectLowPassFilterPreset");
		return ptr;
	}

};


// Class AudioMixer.SourceEffectFilter
// 0x0000 (0x0090 - 0x0090)
class USourceEffectFilter : public USoundEffectSource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SourceEffectFilter");
		return ptr;
	}

};


// Class AudioMixer.SoundEffectSourceFilterPreset
// 0x0010 (0x0050 - 0x0040)
class USoundEffectSourceFilterPreset : public USoundEffectSourcePreset
{
public:
	struct FSourceEffectFilterSettings                 Settings;                                         		// 0x0040(0x0010) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SoundEffectSourceFilterPreset");
		return ptr;
	}

};


// Class AudioMixer.SoundEffectSubmixEQ
// 0x0000 (0x0090 - 0x0090)
class USoundEffectSubmixEQ : public USoundEffectSource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SoundEffectSubmixEQ");
		return ptr;
	}

};


// Class AudioMixer.SoundEffectSubmixEQPreset
// 0x0008 (0x0048 - 0x0040)
class USoundEffectSubmixEQPreset : public USoundEffectSourcePreset
{
public:
	struct FSubmixEffectEQSettings                     Settings;                                         		// 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SoundEffectSubmixEQPreset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
