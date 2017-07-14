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

// Function TslItemDragWidget.TslItemDragWidget_C.On_ErrorIcon_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::On_ErrorIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.On_ErrorIcon_Prepass_1");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.IsEnable
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsEnable                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::IsEnable(bool* IsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.IsEnable");

	struct
	{
		bool                           IsEnable;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnable != nullptr)
		*IsEnable = params.IsEnable;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateBackgroundImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::UpdateBackgroundImage(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.UpdateBackgroundImage");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GettslItemDragDropOperation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTslItemDragDropOperation_C* AsTsl_Item_Drag_Drop_Operation (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::GettslItemDragDropOperation(class UTslItemDragDropOperation_C** AsTsl_Item_Drag_Drop_Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GettslItemDragDropOperation");

	struct
	{
		class UTslItemDragDropOperation_C* AsTsl_Item_Drag_Drop_Operation;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsTsl_Item_Drag_Drop_Operation != nullptr)
		*AsTsl_Item_Drag_Drop_Operation = params.AsTsl_Item_Drag_Drop_Operation;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetActionName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::GetActionName(struct FName* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GetActionName");

	struct
	{
		struct FName                   ActionName;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AInventory*              Inventory                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::GetInventory(class AInventory** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GetInventory");

	struct
	{
		class AInventory*              Inventory;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetAdditionalMaxStackCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::GetAdditionalMaxStackCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GetAdditionalMaxStackCount");

	struct
	{
		int                            Count;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function TslItemDragWidget.TslItemDragWidget_C.GetShooterPlayerController
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslPlayerController*    ShooterPlayerController        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::GetShooterPlayerController(class ATslPlayerController** ShooterPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.GetShooterPlayerController");

	struct
	{
		class ATslPlayerController*    ShooterPlayerController;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterPlayerController != nullptr)
		*ShooterPlayerController = params.ShooterPlayerController;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::UpdateStackCount(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCount");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCountVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::UpdateStackCountVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.UpdateStackCountVisibility");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.UpdateIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::UpdateIcon(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.UpdateIcon");

	struct
	{
		class UWidget*                 BoundWidget;
	} params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTslItemDragWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTslItemDragWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.Destruct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslItemDragWidget.TslItemDragWidget_C.ExecuteUbergraph_TslItemDragWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslItemDragWidget_C::ExecuteUbergraph_TslItemDragWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslItemDragWidget.TslItemDragWidget_C.ExecuteUbergraph_TslItemDragWidget");

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
