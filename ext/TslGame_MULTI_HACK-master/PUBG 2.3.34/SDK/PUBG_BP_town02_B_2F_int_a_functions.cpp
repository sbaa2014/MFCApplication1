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

// Function BP_town02_B_2F_int_a.BP_town02_B_2F_int_a_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_town02_B_2F_int_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_town02_B_2F_int_a.BP_town02_B_2F_int_a_C.UserConstructionScript");

	ABP_town02_B_2F_int_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
