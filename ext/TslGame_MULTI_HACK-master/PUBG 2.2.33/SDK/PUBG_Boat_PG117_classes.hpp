#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Boat_PG117.Boat_PG117_C
// 0x000C (0x04F0 - 0x04E4)
class ABoat_PG117_C : public ABoatBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                               		// 0x04E4(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh;                                       		// 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Boat_PG117.Boat_PG117_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
