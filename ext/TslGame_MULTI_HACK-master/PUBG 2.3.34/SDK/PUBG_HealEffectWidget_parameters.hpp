#pragma once

// PUBG (Beta) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HealEffectWidget.HealEffectWidget_C.SetColor
struct UHealEffectWidget_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HealEffectWidget.HealEffectWidget_C.SetScalaParameterValue
struct UHealEffectWidget_C_SetScalaParameterValue_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HealEffectWidget.HealEffectWidget_C.EnableUpdate
struct UHealEffectWidget_C_EnableUpdate_Params
{
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HealEffectWidget.HealEffectWidget_C.Tick
struct UHealEffectWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HealEffectWidget.HealEffectWidget_C.Construct
struct UHealEffectWidget_C_Construct_Params
{
};

// Function HealEffectWidget.HealEffectWidget_C.ExecuteUbergraph_HealEffectWidget
struct UHealEffectWidget_C_ExecuteUbergraph_HealEffectWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HealEffectWidget.HealEffectWidget_C.FnishHealEffect__DelegateSignature
struct UHealEffectWidget_C_FnishHealEffect__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
