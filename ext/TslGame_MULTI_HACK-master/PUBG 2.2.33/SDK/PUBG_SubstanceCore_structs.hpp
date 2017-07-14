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

// ScriptStruct SubstanceCore.SubstanceInputDesc
// 0x0018
struct FSubstanceInputDesc
{
	struct FString                                     Name;                                             		// 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TEnumAsByte<enum class ESubstanceInputType>        Type;                                             		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct SubstanceCore.SubstanceInstanceDesc
// 0x0020
struct FSubstanceInstanceDesc
{
	struct FString                                     Name;                                             		// 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FSubstanceInputDesc>                 Inputs;                                           		// 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct SubstanceCore.SubstanceFloatInputDesc
// 0x0030 (0x0048 - 0x0018)
struct FSubstanceFloatInputDesc : public FSubstanceInputDesc
{
	TArray<float>                                      Min;                                              		// 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<float>                                      Max;                                              		// 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<float>                                      Default;                                          		// 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct SubstanceCore.SubstanceIntInputDesc
// 0x0030 (0x0048 - 0x0018)
struct FSubstanceIntInputDesc : public FSubstanceInputDesc
{
	TArray<int>                                        Min;                                              		// 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<int>                                        Max;                                              		// 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<int>                                        Default;                                          		// 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
