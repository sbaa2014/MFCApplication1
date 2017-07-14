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

// Function HitEffectWidget.HitEffectWidget_C.GetVisibility_2
struct UHitEffectWidget_C_GetVisibility_2_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HitEffectWidget.HitEffectWidget_C.GetVisibility_1
struct UHitEffectWidget_C_GetVisibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HitEffectWidget.HitEffectWidget_C.GetColorAndOpacity_2
struct UHitEffectWidget_C_GetColorAndOpacity_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HitEffectWidget.HitEffectWidget_C.CalcAlphaOffset
struct UHitEffectWidget_C_CalcAlphaOffset_Params
{
	class UCurveFloat*                                 Curve;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Offset;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitEffectWidget.HitEffectWidget_C.GetColorAndOpacity_1
struct UHitEffectWidget_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HitEffectWidget.HitEffectWidget_C.SetTexture
struct UHitEffectWidget_C_SetTexture_Params
{
	class UTexture*                                    HitTexture;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitEffectWidget.HitEffectWidget_C.OnHit
struct UHitEffectWidget_C_OnHit_Params
{
	float                                              NewDamage;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitEffectWidget.HitEffectWidget_C.CustomEvent_1
struct UHitEffectWidget_C_CustomEvent_1_Params
{
};

// Function HitEffectWidget.HitEffectWidget_C.BrightStartEvent
struct UHitEffectWidget_C_BrightStartEvent_Params
{
};

// Function HitEffectWidget.HitEffectWidget_C.BrightToOriginEvent
struct UHitEffectWidget_C_BrightToOriginEvent_Params
{
};

// Function HitEffectWidget.HitEffectWidget_C.FadeOutEvent
struct UHitEffectWidget_C_FadeOutEvent_Params
{
};

// Function HitEffectWidget.HitEffectWidget_C.Tick
struct UHitEffectWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HitEffectWidget.HitEffectWidget_C.Construct
struct UHitEffectWidget_C_Construct_Params
{
};

// Function HitEffectWidget.HitEffectWidget_C.BrightStay
struct UHitEffectWidget_C_BrightStay_Params
{
};

// Function HitEffectWidget.HitEffectWidget_C.ExecuteUbergraph_HitEffectWidget
struct UHitEffectWidget_C_ExecuteUbergraph_HitEffectWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
