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

// Function LifeGaugeWidget.LifeGaugeWidget_C.WaningCheck
struct ULifeGaugeWidget_C_WaningCheck_Params
{
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.GetGorryPercent
struct ULifeGaugeWidget_C_GetGorryPercent_Params
{
	float                                              GroggyPercent;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.IsGroggy
struct ULifeGaugeWidget_C_IsGroggy_Params
{
	bool                                               IsGroggy;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.Get_BarkGround_Visibility_1
struct ULifeGaugeWidget_C_Get_BarkGround_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.Get_BarkGround_ColorAndOpacity_1
struct ULifeGaugeWidget_C_Get_BarkGround_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.FinishHealEffect
struct ULifeGaugeWidget_C_FinishHealEffect_Params
{
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.Get_LifeGauage_Visibility_1
struct ULifeGaugeWidget_C_Get_LifeGauage_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.OnNotifyHeal
struct ULifeGaugeWidget_C_OnNotifyHeal_Params
{
	float                                              StartHealth;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHealth;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.CalcGoalHealthAmountPercent
struct ULifeGaugeWidget_C_CalcGoalHealthAmountPercent_Params
{
	float                                              GoalHealth;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthPercent;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.CheckUseFirstAidorMediKit
struct ULifeGaugeWidget_C_CheckUseFirstAidorMediKit_Params
{
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.GetShooterCharacterHealthPercent
struct ULifeGaugeWidget_C_GetShooterCharacterHealthPercent_Params
{
	float                                              HealthPercent;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.SetLifeProgressBar
struct ULifeGaugeWidget_C_SetLifeProgressBar_Params
{
	float                                              HealthPercent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.OnNotifyHealAmount
struct ULifeGaugeWidget_C_OnNotifyHealAmount_Params
{
	float                                              Heal;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.NotifyHit
struct ULifeGaugeWidget_C_NotifyHit_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.InitializeLIfeGauage
struct ULifeGaugeWidget_C_InitializeLIfeGauage_Params
{
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.Construct
struct ULifeGaugeWidget_C_Construct_Params
{
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.Tick
struct ULifeGaugeWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LifeGaugeWidget.LifeGaugeWidget_C.ExecuteUbergraph_LifeGaugeWidget
struct ULifeGaugeWidget_C_ExecuteUbergraph_LifeGaugeWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
