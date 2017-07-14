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

// ScriptStruct Slate.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                              		// 0x0000(0x0018)
	unsigned char                                      bShift : 1;                                       		// 0x0018(0x0001)
	unsigned char                                      bCtrl : 1;                                        		// 0x0018(0x0001)
	unsigned char                                      bAlt : 1;                                         		// 0x0018(0x0001)
	unsigned char                                      bCmd : 1;                                         		// 0x0018(0x0001)
};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	class Vector2D                                     Minimum;                                          		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     Maximum;                                          		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
