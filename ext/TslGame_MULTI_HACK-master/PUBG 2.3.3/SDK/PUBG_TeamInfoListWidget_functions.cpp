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

// Function TeamInfoListWidget.TeamInfoListWidget_C.On_TeamListLayer_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoListWidget_C::On_TeamListLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoListWidget.TeamInfoListWidget_C.On_TeamListLayer_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoListWidget.TeamInfoListWidget_C.RefeshList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamInfoListWidget_C::RefeshList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoListWidget.TeamInfoListWidget_C.RefeshList");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoListWidget.TeamInfoListWidget_C.UpdateTeamInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamInfoListWidget_C::UpdateTeamInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoListWidget.TeamInfoListWidget_C.UpdateTeamInfo");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamInfoListWidget.TeamInfoListWidget_C.Get_TeamList_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<enum class ESlateVisibility> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<enum class ESlateVisibility> UTeamInfoListWidget_C::Get_TeamList_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoListWidget.TeamInfoListWidget_C.Get_TeamList_Visibility_1");

	struct
	{
		TEnumAsByte<enum class ESlateVisibility> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TeamInfoListWidget.TeamInfoListWidget_C.ExecuteUbergraph_TeamInfoListWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTeamInfoListWidget_C::ExecuteUbergraph_TeamInfoListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInfoListWidget.TeamInfoListWidget_C.ExecuteUbergraph_TeamInfoListWidget");

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
