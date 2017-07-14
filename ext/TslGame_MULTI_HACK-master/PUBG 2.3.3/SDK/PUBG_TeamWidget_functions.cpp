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

// Function TeamWidget.TeamWidget_C.On_TeamHeadMarkCanvas_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamWidget_C::On_TeamHeadMarkCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamWidget.TeamWidget_C.On_TeamHeadMarkCanvas_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamWidget.TeamWidget_C.UpdateTeamMarkWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamWidget_C::UpdateTeamMarkWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamWidget.TeamWidget_C.UpdateTeamMarkWidget");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamWidget.TeamWidget_C.RemoveTeamMarkWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class ATeam*>           Teams                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UTeamWidget_C::RemoveTeamMarkWidget(TArray<class ATeam*>* Teams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamWidget.TeamWidget_C.RemoveTeamMarkWidget");

	struct
	{
		TArray<class ATeam*>           Teams;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Teams != nullptr)
		*Teams = params.Teams;
}


// Function TeamWidget.TeamWidget_C.AddTeamMarkWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class ATeam*>           Teams                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UTeamWidget_C::AddTeamMarkWidget(TArray<class ATeam*>* Teams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamWidget.TeamWidget_C.AddTeamMarkWidget");

	struct
	{
		TArray<class ATeam*>           Teams;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Teams != nullptr)
		*Teams = params.Teams;
}


// Function TeamWidget.TeamWidget_C.ExecuteUbergraph_TeamWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamWidget_C::ExecuteUbergraph_TeamWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamWidget.TeamWidget_C.ExecuteUbergraph_TeamWidget");

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
