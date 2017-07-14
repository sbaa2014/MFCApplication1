#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function P_VehicleImpact_Wood_BP.P_VehicleImpact_Wood_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AP_VehicleImpact_Wood_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_VehicleImpact_Wood_BP.P_VehicleImpact_Wood_BP_C.UserConstructionScript");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_VehicleImpact_Wood_BP.P_VehicleImpact_Wood_BP_C.OnParameterUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AP_VehicleImpact_Wood_BP_C::OnParameterUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_VehicleImpact_Wood_BP.P_VehicleImpact_Wood_BP_C.OnParameterUpdated");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_VehicleImpact_Wood_BP.P_VehicleImpact_Wood_BP_C.ExecuteUbergraph_P_VehicleImpact_Wood_BP
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AP_VehicleImpact_Wood_BP_C::ExecuteUbergraph_P_VehicleImpact_Wood_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_VehicleImpact_Wood_BP.P_VehicleImpact_Wood_BP_C.ExecuteUbergraph_P_VehicleImpact_Wood_BP");

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
