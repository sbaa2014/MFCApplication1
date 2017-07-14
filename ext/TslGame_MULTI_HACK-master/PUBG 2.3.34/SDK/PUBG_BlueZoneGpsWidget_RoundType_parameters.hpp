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

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.On_SubPrepass
struct UBlueZoneGpsWidget_RoundType_C_On_SubPrepass_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.On_BluezoneGauge_Prepass_1
struct UBlueZoneGpsWidget_RoundType_C_On_BluezoneGauge_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetBluezoneTimeColor
struct UBlueZoneGpsWidget_RoundType_C_GetBluezoneTimeColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetBluezoneTime
struct UBlueZoneGpsWidget_RoundType_C_GetBluezoneTime_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetIsStateBluezoneReady_Pending
struct UBlueZoneGpsWidget_RoundType_C_GetIsStateBluezoneReady_Pending_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.GetPlayerPositoin
struct UBlueZoneGpsWidget_RoundType_C_GetPlayerPositoin_Params
{
	float                                              PlayerPosition;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.TickReset_Pending
struct UBlueZoneGpsWidget_RoundType_C_TickReset_Pending_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.UpdatePlayerPosition
struct UBlueZoneGpsWidget_RoundType_C_UpdatePlayerPosition_Params
{
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.Get_BluezoneGPSGauge_ColorAndOpacity_1
struct UBlueZoneGpsWidget_RoundType_C_Get_BluezoneGPSGauge_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.Construct
struct UBlueZoneGpsWidget_RoundType_C_Construct_Params
{
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.MainPrepassWidgetVisibilitySetting
struct UBlueZoneGpsWidget_RoundType_C_MainPrepassWidgetVisibilitySetting_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.ChildUpdateGauge
struct UBlueZoneGpsWidget_RoundType_C_ChildUpdateGauge_Params
{
	float*                                             Gauge;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.OnWarning
struct UBlueZoneGpsWidget_RoundType_C_OnWarning_Params
{
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.OnEnterNextPlayzone
struct UBlueZoneGpsWidget_RoundType_C_OnEnterNextPlayzone_Params
{
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.OnLeaveNextPlayzone
struct UBlueZoneGpsWidget_RoundType_C_OnLeaveNextPlayzone_Params
{
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.CustomEvent_1
struct UBlueZoneGpsWidget_RoundType_C_CustomEvent_1_Params
{
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.CustomEvent_2
struct UBlueZoneGpsWidget_RoundType_C_CustomEvent_2_Params
{
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.Destruct
struct UBlueZoneGpsWidget_RoundType_C_Destruct_Params
{
};

// Function BlueZoneGpsWidget_RoundType.BlueZoneGpsWidget_RoundType_C.ExecuteUbergraph_BlueZoneGpsWidget_RoundType
struct UBlueZoneGpsWidget_RoundType_C_ExecuteUbergraph_BlueZoneGpsWidget_RoundType_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
