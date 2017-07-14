#pragma once

// PUBG (Beta) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct GaugeAlphaCurve.GaugeAlphaCurve
// 0x0010
struct FGaugeAlphaCurve
{
	float                                              DamageMin_16_E316E58C427D32E12875C3B3F6F8E1E9;    		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageMax_17_BF0238A54E09BEE37E1474B24A2E7A20;    		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                AlphaCurve_7_6233D152470F81271563E58AC9C1B3E0;    		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
