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

// Function TslLobbyGameMode.TSLLobbyGameMode_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATSLLobbyGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslLobbyGameMode.TSLLobbyGameMode_C.UserConstructionScript");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif