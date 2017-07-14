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

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsInventoryShow
struct UWeaponSlotHudWidget_C_IsInventoryShow_Params
{
	bool                                               bShow;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnPrepass_1
struct UWeaponSlotHudWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnUnarmWeapon
struct UWeaponSlotHudWidget_C_OnUnarmWeapon_Params
{
	bool                                               bIsUnarmed;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnWeaponProcessorArmed
struct UWeaponSlotHudWidget_C_OnWeaponProcessorArmed_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.DoseSelectingWeaon
struct UWeaponSlotHudWidget_C_DoseSelectingWeaon_Params
{
	bool                                               bSelect;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnWeaponSlotFadeOutFinished
struct UWeaponSlotHudWidget_C_OnWeaponSlotFadeOutFinished_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnChangeWeapon
struct UWeaponSlotHudWidget_C_OnChangeWeapon_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.SetSlotVisibility
struct UWeaponSlotHudWidget_C_SetSlotVisibility_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      InVisibility;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnHiddenFinished
struct UWeaponSlotHudWidget_C_OnHiddenFinished_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.GetVisibility_1
struct UWeaponSlotHudWidget_C_GetVisibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsHiddenPlay
struct UWeaponSlotHudWidget_C_IsHiddenPlay_Params
{
	bool                                               IsPlay;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnHiddenStart
struct UWeaponSlotHudWidget_C_OnHiddenStart_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowFinished
struct UWeaponSlotHudWidget_C_OnShowFinished_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnShowStart
struct UWeaponSlotHudWidget_C_OnShowStart_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsShowPlay
struct UWeaponSlotHudWidget_C_IsShowPlay_Params
{
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.HiddenSlot
struct UWeaponSlotHudWidget_C_HiddenSlot_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.ShowSlot
struct UWeaponSlotHudWidget_C_ShowSlot_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveTick
struct UWeaponSlotHudWidget_C_MoveTick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.GetSelectedWidgetSlot
struct UWeaponSlotHudWidget_C_GetSelectedWidgetSlot_Params
{
	class UWeaponSlotWidget_C*                         WeaponSlot;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.SetWaepon
struct UWeaponSlotHudWidget_C_SetWaepon_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMove;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.CheckChanged
struct UWeaponSlotHudWidget_C_CheckChanged_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.InitializeWeaponSlot
struct UWeaponSlotHudWidget_C_InitializeWeaponSlot_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnRefleshWeaponSlot
struct UWeaponSlotHudWidget_C_OnRefleshWeaponSlot_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.IsFirstArmWeapon
struct UWeaponSlotHudWidget_C_IsFirstArmWeapon_Params
{
	bool                                               IsFrist;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.OnArmWeapon
struct UWeaponSlotHudWidget_C_OnArmWeapon_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMove;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.Construct
struct UWeaponSlotHudWidget_C_Construct_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.Tick
struct UWeaponSlotHudWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveFinished
struct UWeaponSlotHudWidget_C_MoveFinished_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.MoveStart
struct UWeaponSlotHudWidget_C_MoveStart_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.StartMoveThorwableWeapon
struct UWeaponSlotHudWidget_C_StartMoveThorwableWeapon_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.FinishMoveThrowableWeapon
struct UWeaponSlotHudWidget_C_FinishMoveThrowableWeapon_Params
{
};

// Function WeaponSlotHudWidget.WeaponSlotHudWidget_C.ExecuteUbergraph_WeaponSlotHudWidget
struct UWeaponSlotHudWidget_C_ExecuteUbergraph_WeaponSlotHudWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
