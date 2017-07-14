#pragma once

// PUBG (Beta) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleBase.VehicleBase_C.TickIndicators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TickIndicators");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickDynamicCamera
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickDynamicCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TickDynamicCamera");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickBrakeSoundTest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickBrakeSoundTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TickBrakeSoundTest");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickThrottleSoundTest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickThrottleSoundTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TickThrottleSoundTest");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickBoostSoundTest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickBoostSoundTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TickBoostSoundTest");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickFuelConsumption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::TickFuelConsumption(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TickFuelConsumption");

	struct
	{
		float                          DeltaSeconds;
	} params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickBasicInfoCaching
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickBasicInfoCaching()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TickBasicInfoCaching");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickWheelCaching
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickWheelCaching()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TickWheelCaching");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TickWheelSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::TickWheelSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TickWheelSound");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.OnRep_IsBrakeEngaged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::OnRep_IsBrakeEngaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.OnRep_IsBrakeEngaged");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.OnRep_isLightsOn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::OnRep_isLightsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.OnRep_isLightsOn");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.UserConstructionScript");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpActEvt_Handbrake_K2Node_InputActionEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AVehicleBase_C::InpActEvt_Handbrake_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.InpActEvt_Handbrake_K2Node_InputActionEvent_4");

	struct
	{
		struct FKey                    Key;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpActEvt_Handbrake_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void AVehicleBase_C::InpActEvt_Handbrake_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.InpActEvt_Handbrake_K2Node_InputActionEvent_3");

	struct
	{
		struct FKey                    Key;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ToggleLights
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::ToggleLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.ToggleLights");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.BrakeLampOn
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::BrakeLampOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.BrakeLampOn");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.BrakeLampOff
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::BrakeLampOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.BrakeLampOff");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.ReceiveTick");

	struct
	{
		float*                         DeltaSeconds;
	} params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8");

	struct
	{
		float                          AxisValue;
	} params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AVehicleBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.ReceiveBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.TurnOffLight
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          KillingDamage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class ATslPlayerState*         PlayerInstigator               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::TurnOffLight(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.TurnOffLight");

	struct
	{
		float                          KillingDamage;
		struct FDamageEvent            DamageEvent;
		class ATslPlayerState*         PlayerInstigator;
		class AActor*                  DamageCauser;
	} params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.PlayerInstigator = PlayerInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16");

	struct
	{
		float                          AxisValue;
	} params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.EventFuelConsumption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVehicleBase_C::EventFuelConsumption()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.EventFuelConsumption");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVehicleBase_C::ExecuteUbergraph_VehicleBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase");

	struct
	{
		int                            EntryPoint;
	} params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
