#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SoundEffectLowPassFilterSettings
// 0x0008
struct FSoundEffectLowPassFilterSettings
{
	float                                              CutoffFrequency;                                  		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Q;                                                		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AudioMixer.SourceEffectFilterSettings
// 0x0010
struct FSourceEffectFilterSettings
{
	TEnumAsByte<enum class ESourceEffectFilter>        FilterType;                                       		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              GainDb;                                           		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CutoffFrequency;                                  		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Q;                                                		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AudioMixer.SubmixEffectEQSettings
// 0x0001
struct FSubmixEffectEQSettings
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
