#pragma once

// PUBG (Beta) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0030
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                         		// 0x0000(0x0018) (CPF_Transient)
	struct FString                                     ValidationStr;                                    		// 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	float                                              ElapsedTime;                                      		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0030
struct FPartyReservation
{
	int                                                TeamNum;                                          		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            PartyLeader;                                      		// 0x0008(0x0018) (CPF_Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                     		// 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040
struct FPIELoginSettingsInternal
{
	struct FString                                     ID;                                               		// 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Token;                                            		// 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient)
	struct FString                                     Type;                                             		// 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<unsigned char>                              TokenBytes;                                       		// 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0xB8];                              		// 0x0000(0x00B8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
