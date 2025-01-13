#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DunDefTrigger.DunDefTrigger
// 0x0064 (0x028C - 0x0228)
class ADunDefTrigger : public ATrigger
{
public:
	struct FColor                                      ToolTipDrawColor;                                         // 0x0228(0x0004) (Edit)
	struct FColor                                      ToolTipOutOfRangeColor;                                   // 0x022C(0x0004) (Edit)
	struct FString                                     ToolTipText;                                              // 0x0230(0x000C) (Edit, NeedCtorLink)
	struct FString                                     ActivationString;                                         // 0x023C(0x000C) (Edit, NeedCtorLink)
	float                                              ActivationDistance;                                       // 0x0248(0x0004) (Edit)
	float                                              ActivationInterval;                                       // 0x024C(0x0004) (Edit)
	float                                              ActivationWeighting;                                      // 0x0250(0x0004) (Edit)
	float                                              ActivationOffset;                                         // 0x0254(0x0004) (Edit)
	int                                                ActivationCost;                                           // 0x0258(0x0004) (Edit)
	TArray<int>                                        ActivationCostDifficultyMultipliers;                      // 0x025C(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        ActivationCostUsageMultipliers;                           // 0x0268(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bIncreaseCostPerUse : 1;                                  // 0x0274(0x0004) (Edit)
	unsigned long                                      bActivateOnlyInCombat : 1;                                // 0x0274(0x0004) (Edit)
	struct FString                                     ActivationBuildPhaseString;                               // 0x0278(0x000C) (Edit, NeedCtorLink)
	int                                                NumActivations;                                           // 0x0284(0x0004)
	float                                              LastActivationTime;                                       // 0x0288(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefTrigger.DunDefTrigger");
		return ptr;
	}


	float GetActivationOffset();
	float GetActivationWeighting();
	void Client_Activate(class ADunDefPlayerController* PC, int activationType);
	void UpdateActivationTime();
	void Server_Activate(class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType);
	int AllowActivation(class ADunDefPlayerController* PC, int activationType);
	int GetToolTipPriority();
	unsigned long TakesToolTipPriority(const TScriptInterface<class UDunDefToolTipInterface>& otherToolTip);
	void DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer);
	unsigned long ContinueDrawingToolTip(unsigned long ContinueDrawing);
	void PostBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
