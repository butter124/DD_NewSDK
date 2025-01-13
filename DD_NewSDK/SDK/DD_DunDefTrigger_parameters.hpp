#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DunDefTrigger.DunDefTrigger.GetActivationOffset
struct ADunDefTrigger_GetActivationOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefTrigger.DunDefTrigger.GetActivationWeighting
struct ADunDefTrigger_GetActivationWeighting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefTrigger.DunDefTrigger.Client_Activate
struct ADunDefTrigger_Client_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefTrigger.DunDefTrigger.UpdateActivationTime
struct ADunDefTrigger_UpdateActivationTime_Params
{
};

// Function DunDefTrigger.DunDefTrigger.Server_Activate
struct ADunDefTrigger_Server_Activate_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	unsigned long                                      forceActivation;                                          // (OptionalParm, Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
};

// Function DunDefTrigger.DunDefTrigger.AllowActivation
struct ADunDefTrigger_AllowActivation_Params
{
	class ADunDefPlayerController*                     PC;                                                       // (Parm)
	int                                                activationType;                                           // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefTrigger.DunDefTrigger.GetToolTipPriority
struct ADunDefTrigger_GetToolTipPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefTrigger.DunDefTrigger.TakesToolTipPriority
struct ADunDefTrigger_TakesToolTipPriority_Params
{
	TScriptInterface<class UDunDefToolTipInterface>    otherToolTip;                                             // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefTrigger.DunDefTrigger.DrawToolTip
struct ADunDefTrigger_DrawToolTip_Params
{
	class UCanvas*                                     C;                                                        // (Parm)
	int                                                PosX;                                                     // (Parm)
	int                                                PosY;                                                     // (Parm)
	class ULocalPlayer*                                ForPlayer;                                                // (OptionalParm, Parm)
};

// Function DunDefTrigger.DunDefTrigger.ContinueDrawingToolTip
struct ADunDefTrigger_ContinueDrawingToolTip_Params
{
	unsigned long                                      ContinueDrawing;                                          // (Parm)
	unsigned long                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefTrigger.DunDefTrigger.PostBeginPlay
struct ADunDefTrigger_PostBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
