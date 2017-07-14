#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys
{
	ECoherentUIGTKeys__LeftMouseButton = 0,
	ECoherentUIGTKeys__RightMouseButton = 1,
	ECoherentUIGTKeys__MiddleMouseButton = 2,
	ECoherentUIGTKeys__ThumbMouseButton = 3,
	ECoherentUIGTKeys__ThumbMouseButton2 = 4,
	ECoherentUIGTKeys__BackSpace   = 5,
	ECoherentUIGTKeys__Tab         = 6,
	ECoherentUIGTKeys__Enter       = 7,
	ECoherentUIGTKeys__Pause       = 8,
	ECoherentUIGTKeys__CapsLock    = 9,
	ECoherentUIGTKeys__Escape      = 10,
	ECoherentUIGTKeys__SpaceBar    = 11,
	ECoherentUIGTKeys__PageUp      = 12,
	ECoherentUIGTKeys__PageDown    = 13,
	ECoherentUIGTKeys__End         = 14,
	ECoherentUIGTKeys__Home        = 15,
	ECoherentUIGTKeys__Left        = 16,
	ECoherentUIGTKeys__Up          = 17,
	ECoherentUIGTKeys__Right       = 18,
	ECoherentUIGTKeys__Down        = 19,
	ECoherentUIGTKeys__Insert      = 20,
	ECoherentUIGTKeys__Delete      = 21,
	ECoherentUIGTKeys__Zero        = 22,
	ECoherentUIGTKeys__One         = 23,
	ECoherentUIGTKeys__Two         = 24,
	ECoherentUIGTKeys__Three       = 25,
	ECoherentUIGTKeys__Four        = 26,
	ECoherentUIGTKeys__Five        = 27,
	ECoherentUIGTKeys__Six         = 28,
	ECoherentUIGTKeys__Seven       = 29,
	ECoherentUIGTKeys__Eight       = 30,
	ECoherentUIGTKeys__Nine        = 31,
	ECoherentUIGTKeys__A           = 32,
	ECoherentUIGTKeys__B           = 33,
	ECoherentUIGTKeys__C           = 34,
	ECoherentUIGTKeys__D           = 35,
	ECoherentUIGTKeys__E           = 36,
	ECoherentUIGTKeys__F           = 37,
	ECoherentUIGTKeys__G           = 38,
	ECoherentUIGTKeys__H           = 39,
	ECoherentUIGTKeys__I           = 40,
	ECoherentUIGTKeys__J           = 41,
	ECoherentUIGTKeys__K           = 42,
	ECoherentUIGTKeys__L           = 43,
	ECoherentUIGTKeys__M           = 44,
	ECoherentUIGTKeys__N           = 45,
	ECoherentUIGTKeys__O           = 46,
	ECoherentUIGTKeys__P           = 47,
	ECoherentUIGTKeys__Q           = 48,
	ECoherentUIGTKeys__R           = 49,
	ECoherentUIGTKeys__S           = 50,
	ECoherentUIGTKeys__T           = 51,
	ECoherentUIGTKeys__U           = 52,
	ECoherentUIGTKeys__V           = 53,
	ECoherentUIGTKeys__W           = 54,
	ECoherentUIGTKeys__X           = 55,
	ECoherentUIGTKeys__Y           = 56,
	ECoherentUIGTKeys__Z           = 57,
	ECoherentUIGTKeys__NumPadZero  = 58,
	ECoherentUIGTKeys__NumPadOne   = 59,
	ECoherentUIGTKeys__NumPadTwo   = 60,
	ECoherentUIGTKeys__NumPadThree = 61,
	ECoherentUIGTKeys__NumPadFour  = 62,
	ECoherentUIGTKeys__NumPadFive  = 63,
	ECoherentUIGTKeys__NumPadSix   = 64,
	ECoherentUIGTKeys__NumPadSeven = 65,
	ECoherentUIGTKeys__NumPadEight = 66,
	ECoherentUIGTKeys__NumPadNine  = 67,
	ECoherentUIGTKeys__Multiply    = 68,
	ECoherentUIGTKeys__Add         = 69,
	ECoherentUIGTKeys__Subtract    = 70,
	ECoherentUIGTKeys__Decimal     = 71,
	ECoherentUIGTKeys__Divide      = 72,
	ECoherentUIGTKeys__F1          = 73,
	ECoherentUIGTKeys__F2          = 74,
	ECoherentUIGTKeys__F3          = 75,
	ECoherentUIGTKeys__F4          = 76,
	ECoherentUIGTKeys__F5          = 77,
	ECoherentUIGTKeys__F6          = 78,
	ECoherentUIGTKeys__F7          = 79,
	ECoherentUIGTKeys__F8          = 80,
	ECoherentUIGTKeys__F9          = 81,
	ECoherentUIGTKeys__F10         = 82,
	ECoherentUIGTKeys__F11         = 83,
	ECoherentUIGTKeys__F12         = 84,
	ECoherentUIGTKeys__NumLock     = 85,
	ECoherentUIGTKeys__ScrollLock  = 86,
	ECoherentUIGTKeys__LeftShift   = 87,
	ECoherentUIGTKeys__RightShift  = 88,
	ECoherentUIGTKeys__LeftControl = 89,
	ECoherentUIGTKeys__RightControl = 90,
	ECoherentUIGTKeys__LeftAlt     = 91,
	ECoherentUIGTKeys__RightAlt    = 92,
	ECoherentUIGTKeys__LeftCommand = 93,
	ECoherentUIGTKeys__RightCommand = 94,
	ECoherentUIGTKeys__Semicolon   = 95,
	ECoherentUIGTKeys__Equals      = 96,
	ECoherentUIGTKeys__Comma       = 97,
	ECoherentUIGTKeys__Underscore  = 98,
	ECoherentUIGTKeys__Period      = 99,
	ECoherentUIGTKeys__Slash       = 100,
	ECoherentUIGTKeys__Tilde       = 101,
	ECoherentUIGTKeys__LeftBracket = 102,
	ECoherentUIGTKeys__Backslash   = 103,
	ECoherentUIGTKeys__RightBracket = 104,
	ECoherentUIGTKeys__Quote       = 105,
	ECoherentUIGTKeys__Unknown     = 106,
	ECoherentUIGTKeys__ECoherentUIGTKeys_MAX = 107
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour
{
	ECoherentUIGTInputPropagationBehaviour__None = 0,
	ECoherentUIGTInputPropagationBehaviour__Keyboard = 1,
	ECoherentUIGTInputPropagationBehaviour__Joystick = 2,
	ECoherentUIGTInputPropagationBehaviour__KeyboardAndJoystick = 3,
	ECoherentUIGTInputPropagationBehaviour__ECoherentUIGTInputPropagationBehaviour_MAX = 4
};


// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost
{
	ResetState                     = 0,
	UseCurrentState                = 1,
	UseStateBeforeReset            = 2,
	EGamepadBehaviourOnFocusLost_MAX = 3
};


// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode
{
	GTInputLineTrace_Single        = 0,
	GTInputLineTrace_Multi         = 1,
	GTInputLineTrace_MAX           = 2
};


// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality
{
	RaycastQuality_Fast            = 0,
	RaycastQuality_Balanced        = 1,
	RaycastQuality_Accurate        = 2,
	RaycastQuality_MAX             = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA
{
	ECoherentUIGTMSAA__MSAA_1x     = 0,
	ECoherentUIGTMSAA__MSAA_2x     = 1,
	ECoherentUIGTMSAA__MSAA_4x     = 2,
	ECoherentUIGTMSAA__MSAA_MAX    = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity
{
	ECoherentUIGTSettingsSeverity__Trace = 0,
	ECoherentUIGTSettingsSeverity__Debug = 1,
	ECoherentUIGTSettingsSeverity__Info = 2,
	ECoherentUIGTSettingsSeverity__Warning = 3,
	ECoherentUIGTSettingsSeverity__AssertFailure = 4,
	ECoherentUIGTSettingsSeverity__Error = 5,
	ECoherentUIGTSettingsSeverity__ECoherentUIGTSettingsSeverity_MAX = 6
};



//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoherentUIGTPlugin.CoherentUIGTWidget
// 0x0338 (0x0460 - 0x0128)
class UCoherentUIGTWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                              		// 0x0128(0x0018) MISSED OFFSET
	class AActor*                                      Owner;                                            		// 0x0140(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                 		// 0x0148(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                 		// 0x0158(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                       		// 0x0168(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                         		// 0x0178(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                     		// 0x0188(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                       		// 0x0198(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                  		// 0x01A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                               		// 0x01B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x78];                              		// 0x01C8(0x0078) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                          		// 0x0240(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class TextureFilter>              Filter;                                           		// 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInput : 1;                                		// 0x0249(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInputWhenTransparent : 1;                 		// 0x024A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGammaCorrectedMaterial : 1;                      		// 0x024B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowPerformanceWarnings : 1;                     		// 0x024C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x024D(0x0003) MISSED OFFSET
	float                                              ExecuteJSTimersThresholdMs;                       		// 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                 		// 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;               		// 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PaintWarningThresholdMs;                          		// 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayersCountThreshold;                             		// 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerWidthThreshold;                              		// 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerHeightThreshold;                             		// 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableAdditionalDefaultStyles : 1;               		// 0x026C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1D3];                             		// 0x026D(0x01D3) MISSED OFFSET
	struct FString                                     URL;                                              		// 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              ClickThroughAlphaThreshold;                       		// 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Transparent : 1;                                  		// 0x0454(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                               		// 0x0455(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTWidget");
		return ptr;
	}


	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* eventData);
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float threshold);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	class UCoherentUIGTJSEvent* CreateJSEvent();
};


// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTAssetReferencer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTSystem
// 0x0040 (0x03C8 - 0x0388)
class ACoherentUIGTSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                              		// 0x0388(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSystem");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// 0x0080 (0x00A8 - 0x0028)
class UCoherentUIGTJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                              		// 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSEvent");
		return ptr;
	}


	void AddStructArg(class UStructProperty* Arg);
	void AddString(const struct FString& str);
	void AddObject(class UObject* Object);
	void AddInt32(int integer);
	void AddFloat(float FL);
	void AddByte(unsigned char byte);
	void AddBool(bool B);
	void AddArray(TArray<int> Array);
};


// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// 0x0018 (0x0040 - 0x0028)
class UCoherentUIGTJSPayload : public UObject
{
public:
	struct FString                                     EventName;                                        		// 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSPayload");
		return ptr;
	}


	void ReadObject(int Index, class UObject* Object);
	struct FString GetString(int Index);
	float GetNumber(int Index);
	int GetInt32(int Index);
	bool GetBool(int Index);
};


// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTEventHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTEventHelpers");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// 0x02D0 (0x03C0 - 0x00F0)
class UCoherentUIGTBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReadyForBindings;                                 		// 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                 		// 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                       		// 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                         		// 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                     		// 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                       		// 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                  		// 0x0150(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                               		// 0x0160(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptDelegate                             LiveViewSizeRequested;                            		// 0x0170(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x70];                              		// 0x0180(0x0070) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                          		// 0x01F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class TextureFilter>              Filter;                                           		// 0x01F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInput : 1;                                		// 0x01F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInputWhenTransparent : 1;                 		// 0x01FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowPerformanceWarnings : 1;                     		// 0x01FB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExecuteJSTimersThresholdMs;                       		// 0x01FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                 		// 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;               		// 0x0204(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PaintWarningThresholdMs;                          		// 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayersCountThreshold;                             		// 0x020C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerWidthThreshold;                              		// 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerHeightThreshold;                             		// 0x0214(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableAdditionalDefaultStyles : 1;               		// 0x0218(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDelayedUpdate : 1;                               		// 0x0219(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1A6];                             		// 0x021A(0x01A6) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBaseComponent");
		return ptr;
	}


	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* eventData);
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float threshold);
	void Resize(int Width, int Height);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	void EnableDelayedUpdate(bool bEnabled);
	class UCoherentUIGTJSEvent* CreateJSEvent();
};


// Class CoherentUIGTPlugin.CoherentUIGTComponent
// 0x0040 (0x0400 - 0x03C0)
class UCoherentUIGTComponent : public UCoherentUIGTBaseComponent
{
public:
	struct FString                                     URL;                                              		// 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Width;                                            		// 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                           		// 0x03D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ManualTexture : 1;                                		// 0x03D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x03D9(0x0003) MISSED OFFSET
	float                                              ClickThroughAlphaThreshold;                       		// 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Transparent : 1;                                  		// 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                              		// 0x03E1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTComponent");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTHUD
// 0x0030 (0x03F0 - 0x03C0)
class UCoherentUIGTHUD : public UCoherentUIGTBaseComponent
{
public:
	struct FStringAssetReference                       HUDMaterialName;                                  		// 0x03C0(0x0010) (CPF_ZeroConstructor)
	class UMaterial*                                   HUDMaterial;                                      		// 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                              		// 0x03D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTHUD");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const struct FString& EventName, class UCoherentUIGTJSEvent* JSEvent);
	void STATIC_PurgeCoherentDiskCache();
	class UCoherentUIGTJSEvent* STATIC_CreateJSEvent(class UObject* WorldContextObject);
	void STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg);
	void STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const struct FString& Arg);
	void STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg);
	void STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg);
	void STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg);
	void STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg);
	void STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg);
	void STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg);
	void STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType);
};


// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// 0x0088 (0x04F8 - 0x0470)
class ACoherentUIGTGameHUD : public AHUD
{
public:
	class UCoherentUIGTHUD*                            CoherentUIGTHUD;                                  		// 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                              		// 0x0478(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTGameHUD");
		return ptr;
	}


	void SetupUIGTView(const struct FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate);
};


// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// 0x0058 (0x03E0 - 0x0388)
class ACoherentUIGTInputActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonDown;          		// 0x0388(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonUp;            		// 0x0398(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyDown;                  		// 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyUp;                    		// 0x03B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                              		// 0x03C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTInputActor");
		return ptr;
	}


	void ToggleCoherentUIGTInputFocus();
	void SetLineTraceMode(TEnumAsByte<enum class EGTInputWidgetLineTraceMode> Mode);
	void SetInputPropagationBehaviour(TEnumAsByte<enum class ECoherentUIGTInputPropagationBehaviour> Propagation);
	void SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView);
	void SetCoherentUIGTInputFocus(bool FocusUI);
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED();
	bool IsCoherentUIGTFocused();
	void Initialize(TEnumAsByte<enum class ECollisionChannel> CollisionChannel, TEnumAsByte<enum class TextureAddress> AddressMode, TEnumAsByte<enum class EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel);
	TEnumAsByte<enum class ECoherentUIGTInputPropagationBehaviour> GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow);
};


// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// 0x0030 (0x0120 - 0x00F0)
class UCoherentUIGTLiveView : public UActorComponent
{
public:
	struct FString                                     LinkName;                                         		// 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UTextureRenderTarget2D*                      Texture;                                          		// 0x0100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                              		// 0x0108(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTLiveView");
		return ptr;
	}


	void OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* baseComponent, const struct FString& Name, int* Width, int* Height);
};


// Class CoherentUIGTPlugin.CoherentUIGTSettings
// 0x0040 (0x0068 - 0x0028)
class UCoherentUIGTSettings : public UObject
{
public:
	unsigned char                                      EnableLiveReload : 1;                             		// 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0029(0x0003) MISSED OFFSET
	int                                                InspectorPort;                                    		// 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      EnableWebSecurity : 1;                            		// 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      EnableLocalization : 1;                           		// 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      RunAsynchronous : 1;                              		// 0x0032(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bRecursivelyBindUStructs : 1;                     		// 0x0033(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      AllowPerformanceWarningsInEditor : 1;             		// 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      ShowWarningsOnScreen : 1;                         		// 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECoherentUIGTSettingsSeverity> LogSeverity;                                      		// 0x0036(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bRespectTitleSafeZone : 1;                        		// 0x0037(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bRespectLetterboxing : 1;                         		// 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x0039(0x0007) MISSED OFFSET
	struct FString                                     HUDMaterialName;                                  		// 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     CoUIResourcesRoot;                                		// 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      TickWhileGameIsPaused : 1;                        		// 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECoherentUIGTMSAA>          MSAA;                                             		// 0x0061(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
