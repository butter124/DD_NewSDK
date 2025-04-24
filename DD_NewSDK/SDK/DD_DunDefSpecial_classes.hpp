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

// Class DunDefSpecial.DunDefBuff_Harbinger
// 0x0034 (0x0334 - 0x0300)
class UDunDefBuff_Harbinger : public UDunDefBuff
{
public:
	TArray<int>                                        DifficultyTickDamageArray;                                // 0x0300(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      DifficultyTickDamageMultiplierArray;                      // 0x030C(0x000C) (Edit, NeedCtorLink)
	float                                              HarbingerTimeoutRange;                                    // 0x0318(0x0004) (Edit)
	float                                              TickDamageMultiplier;                                     // 0x031C(0x0004) (Transient)
	float                                              Damage;                                                   // 0x0320(0x0004) (Edit)
	class UParticleSystem*                             BeamEmitterTemplate;                                      // 0x0324(0x0004) (Edit)
	class UParticleSystemComponent*                    beamInstance;                                             // 0x0328(0x0004) (ExportObject, Transient, Component, EditInline)
	class UClass*                                      TickDamageType;                                           // 0x032C(0x0004) (Edit)
	unsigned long                                      bDoLineOfSightCheck : 1;                                  // 0x0330(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefBuff_Harbinger");
		return ptr;
	}


	void DeactivateBuff();
	void BuffEffect();
	void Tick(float DeltaTime);
	void Initialize();
};


// Class DunDefSpecial.DunDefTower_SummonEnemy
// 0x015A (0x098A - 0x0830)
class ADunDefTower_SummonEnemy : public ADunDefTower
{
public:
	struct FSummonedBoosts                             resistanceBoosting;                                       // 0x0830(0x0024) (Edit, NeedCtorLink)
	struct FSummonedBoosts                             movementSpeedBoosting;                                    // 0x0854(0x0024) (Edit, NeedCtorLink)
	struct FSummonedBoosts                             attackAnimSpeedBoosting;                                  // 0x0878(0x0024) (Edit, NeedCtorLink)
	TArray<TEnumAsByte<EPawnBoostType>>                allowedScalingTypes;                                      // 0x089C(0x000C) (Edit, NeedCtorLink)
	class ADunDefEnemy*                                myEnemyTemplate;                                          // 0x08A8(0x0004) (Edit)
	class UTexture2D*                                  SelectedIcon;                                             // 0x08AC(0x0004) (Edit)
	class UTexture2D*                                  PendingSelectionIcon;                                     // 0x08B0(0x0004) (Edit)
	class UTexture2D*                                  CmdIcon_MoveDef;                                          // 0x08B4(0x0004) (Edit)
	class UTexture2D*                                  CmdIcon_MoveOf;                                           // 0x08B8(0x0004) (Edit)
	class UTexture2D*                                  CmdIcon_Attack;                                           // 0x08BC(0x0004) (Edit)
	class UTexture2D*                                  CmdIcon_Follow;                                           // 0x08C0(0x0004) (Edit)
	class UTexture2D*                                  CmdIcon_HoldDef;                                          // 0x08C4(0x0004) (Edit)
	class UTexture2D*                                  CmdIcon_HoldOff;                                          // 0x08C8(0x0004) (Edit)
	class UTexture2D*                                  currentAttackTargetIcon;                                  // 0x08CC(0x0004) (Edit)
	class UTexture2D*                                  currentFollowTargetIcon;                                  // 0x08D0(0x0004) (Edit)
	class ADunDefEnemy*                                myEnemyReference;                                         // 0x08D4(0x0004) (Net, Transient)
	class ADunDefEnemyController*                      myEnemyControllerReference;                               // 0x08D8(0x0004) (Transient)
	class AActor*                                      currentTargetActor;                                       // 0x08DC(0x0004) (Net, Transient)
	class AActor*                                      pendingTargetActor;                                       // 0x08E0(0x0004) (Transient)
	unsigned long                                      bFollowOwner : 1;                                         // 0x08E4(0x0004) (Transient)
	unsigned long                                      bCheckForFollowReturn : 1;                                // 0x08E4(0x0004) (Transient)
	unsigned long                                      bAllowSelection : 1;                                      // 0x08E4(0x0004) (Edit)
	unsigned long                                      bDisableCommandIconDrawing : 1;                           // 0x08E4(0x0004) (Edit)
	unsigned long                                      bIsSelected : 1;                                          // 0x08E4(0x0004)
	unsigned long                                      bPendingSelection : 1;                                    // 0x08E4(0x0004)
	float                                              SelectedIconSize;                                         // 0x08E8(0x0004) (Edit)
	float                                              UpdateCommandRate;                                        // 0x08EC(0x0004) (Edit)
	struct FVector                                     SelectedIconOffset;                                       // 0x08F0(0x000C) (Edit)
	float                                              ResistanceMultiplier;                                     // 0x08FC(0x0004) (Net)
	float                                              AttackRangeMultiplier;                                    // 0x0900(0x0004)
	float                                              MovementSpeedMult;                                        // 0x0904(0x0004) (Net)
	float                                              AnimAttackSpeedMult;                                      // 0x0908(0x0004) (Net)
	float                                              ReplicatedDmgValue;                                       // 0x090C(0x0004) (Net)
	float                                              ReplicatedAtkRange;                                       // 0x0910(0x0004) (Net)
	struct FString                                     ResistanceString;                                         // 0x0914(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     MovementSpeedString;                                      // 0x0920(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     AnimSpeedString;                                          // 0x092C(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     AttackAnimSpeedString;                                    // 0x0938(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              HoldOffensive_TargetableRange;                            // 0x0944(0x0004) (Edit)
	float                                              HoldDefensive_TargetableRange;                            // 0x0948(0x0004) (Edit)
	float                                              followIconZOffset;                                        // 0x094C(0x0004) (Edit)
	float                                              attackIconZOffset;                                        // 0x0950(0x0004) (Edit)
	class USoundCue*                                   AcceptOrderSound;                                         // 0x0954(0x0004) (Edit)
	class UParticleSystemComponent*                    SelectedParticle;                                         // 0x0958(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    pendingSelectedParticle;                                  // 0x095C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    otherSelectedParticle;                                    // 0x0960(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<class AActor*>                              commandInstigators;                                       // 0x0964(0x000C) (NeedCtorLink)
	struct FVector                                     currentCommandPoint;                                      // 0x0970(0x000C)
	struct FVector                                     pendingCommandPoint;                                      // 0x097C(0x000C)
	TEnumAsByte<ESummonedCommand>                      currentCommand;                                           // 0x0988(0x0001) (Net)
	TEnumAsByte<ESummonedCommand>                      previousCommand;                                          // 0x0989(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_SummonEnemy");
		return ptr;
	}


	void UpdateBuffValues();
	float GetAttackDamage();
	void SpawnDefaultBuffs();
	void ClientDisableMovementReplication(const struct FVector& endedLoc);
	void TransferTowerOwnership(class APawn* toPawn);
	unsigned long ForceSingleMove(const struct FVector& NewLoc, const struct FRotator& NewRot, unsigned long bShouldCollideWorld);
	unsigned long ForceMoveActor(class AActor* Mover, const struct FVector& NewLoc);
	void GetAlternateAggroActor(TScriptInterface<class UDunDefTargetableInterface>* AltActor);
	float GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer);
	float GetTowerTargetingDesirability(class ADunDefTower* forTower);
	float GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController);
	void DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer);
	void DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY);
	struct FString GetBoostString(TEnumAsByte<EPawnBoostType> boostType);
	void GetBoostedTargets(TArray<class APawn*>* boostedTargets);
	void NotifyOfBoostedRemoval(class APawn* removedBoostee);
	float GetToolTipStatValue(TEnumAsByte<EPawnBoostType> boostType);
	float GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType);
	unsigned long HasPawnBoostingType(TEnumAsByte<EPawnBoostType> boostType);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	class AActor* GetAlternateActor();
	int GetHealth(unsigned long bGetMax);
	unsigned long HealDamage(int Amount, class AController* Healer, class UClass* DamageType);
	void AddHealth(int howMuch, unsigned long bDontDisplayFloatingNumber);
	float GetHealthPercent();
	void StartRepair();
	struct FString GetToolTipText();
	void ScaleForHeroModifiers(unsigned long IsFirstTime);
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	void UpdateCommand();
	unsigned long HandleCommand(class AActor* Target, TEnumAsByte<ESummonedCommand> NewCommand, const struct FVector& commandPoint);
	unsigned long SetCommand(const struct FVector& commandPoint, TEnumAsByte<ESummonedCommand> NewCommand, class AActor* commandInstigator, class AActor* targetedActor);
	void SetSelected(unsigned long bWantsSelected, class AActor* selectingActor);
	void SetPendingSelection(unsigned long bIsPending);
	void CleanUpSummon();
	void Destroyed();
	void BaseChange();
	void SetUpEnemyValues(unsigned long bInitialSetup);
	void SpawnMyEnemy();
	void InitializeForInstigator(class APawn* Pawn);
	float GetLastDamageTime();
	unsigned long HasBeenRendered();
	void UpdateEnemyCollisionValues();
	void UpdateReplicatedStatValues();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefEmitterDamage
// 0x005C (0x0330 - 0x02D4)
class ADunDefEmitterDamage : public ADunDefEmitterSpawnable
{
public:
	float                                              MaximumMassMomentumScale;                                 // 0x02D4(0x0004) (Edit)
	float                                              MassMomentumBaseScale;                                    // 0x02D8(0x0004) (Edit)
	float                                              MassMomentumScaleExponent;                                // 0x02DC(0x0004) (Edit)
	int                                                Damage;                                                   // 0x02E0(0x0004) (Edit, Net)
	float                                              Radius;                                                   // 0x02E4(0x0004) (Edit, Net)
	float                                              EffectRadius;                                             // 0x02E8(0x0004) (Edit)
	class UClass*                                      MyDamageType;                                             // 0x02EC(0x0004) (Edit)
	float                                              MyMomentum;                                               // 0x02F0(0x0004) (Edit, Net)
	float                                              DamageDelay;                                              // 0x02F4(0x0004) (Edit)
	float                                              ScalingHeroStatExponentDamage;                            // 0x02F8(0x0004) (Edit)
	float                                              ScalingHeroStatExponentRadius;                            // 0x02FC(0x0004) (Edit)
	float                                              DamageFalloffExponent;                                    // 0x0300(0x0004) (Edit)
	TEnumAsByte<ELevelUpValueType>                     ScalingHeroStatType;                                      // 0x0304(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	unsigned long                                      bUseAngleForDamage : 1;                                   // 0x0308(0x0004) (Edit)
	unsigned long                                      bUseOwnerAsInstigator : 1;                                // 0x0308(0x0004) (Edit)
	unsigned long                                      bScaleDrawScale : 1;                                      // 0x0308(0x0004) (Edit)
	unsigned long                                      bUseSelfAsDamageCauser : 1;                               // 0x0308(0x0004) (Edit)
	float                                              MaxTargetDeltaPitch;                                      // 0x030C(0x0004) (Edit, Net)
	float                                              MaxTargetDeltaYaw;                                        // 0x0310(0x0004) (Edit, Net)
	TArray<class UDunDefBuff*>                         BuffsToApplyOnHit;                                        // 0x0314(0x000C) (Edit, NeedCtorLink)
	class UDunDefBuff*                                 FirstTargetBuff;                                          // 0x0320(0x0004) (Edit)
	TScriptInterface<class UIActorModifierInterface>   MyActorStatModifier;                                      // 0x0324(0x0008) (Transient)
	float                                              PowerMult;                                                // 0x032C(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefEmitterDamage");
		return ptr;
	}


	class AActor* GetDamageCauser();
	unsigned long CheckValidAngle(class AActor* Victim, const struct FVector& Origin);
	TScriptInterface<class UIActorModifierInterface> GetStatModifierObject();
	float GetStatValueByTag(float initalValue, const struct FString& StatTag, const TScriptInterface<class UIActorModifierInterface>& TagActor, TEnumAsByte<ELevelUpValueType> statType, unsigned long bBaseValueOnly);
	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly);
	unsigned long STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot);
	unsigned long HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage);
	void DoDamage();
	void InitDamageEmitter(int BaseDamage, float BaseRange, const TScriptInterface<class UIActorModifierInterface>& aActorStatModifier);
	void PostBeginPlay();
};


// Class DunDefSpecial.CTF_PlayerAbility_PickupFlag
// 0x0008 (0x0470 - 0x0468)
class ACTF_PlayerAbility_PickupFlag : public ADunDefPlayerAbility_GenericSpellTimer
{
public:
	class ACTF_Flag*                                   PickUpFlag;                                               // 0x0468(0x0004) (Net)
	class USoundCue*                                   StartPickingupSound;                                      // 0x046C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_PlayerAbility_PickupFlag");
		return ptr;
	}


	void RequestPickup(class ACTF_Flag* newFlag);
};


// Class DunDefSpecial.CTF_Flag
// 0x00B4 (0x02D8 - 0x0224)
class ACTF_Flag : public ADunDefDroppedItem
{
public:
	float                                              PickupOffset;                                             // 0x0224(0x0004) (Edit)
	float                                              PickupWeighting;                                          // 0x0228(0x0004) (Edit)
	struct FColor                                      ToolTipDrawColor;                                         // 0x022C(0x0004) (Edit)
	struct FString                                     PickUpString;                                             // 0x0230(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              ScorePerSecond;                                           // 0x023C(0x0004) (Edit)
	float                                              HoldTimeForScore;                                         // 0x0240(0x0004) (Edit)
	float                                              MaxPickupDistance;                                        // 0x0244(0x0004) (Edit)
	float                                              DamageMultiplierIncreaseSpeed;                            // 0x0248(0x0004) (Edit)
	float                                              HeldDamageMultiplier;                                     // 0x024C(0x0004) (Edit)
	float                                              MaxDamageMultiplier;                                      // 0x0250(0x0004) (Edit)
	float                                              DroppedAutoTeleportTime;                                  // 0x0254(0x0004) (Edit)
	float                                              WaypointIconOffscreenScale;                               // 0x0258(0x0004) (Edit)
	float                                              WaypointIconCenterScale;                                  // 0x025C(0x0004) (Edit)
	float                                              WaypointCenterYOffset;                                    // 0x0260(0x0004) (Edit)
	class USoundCue*                                   AllyPickedUpFlagSound;                                    // 0x0264(0x0004) (Edit)
	class USoundCue*                                   EnemyPickedUpFlagSound;                                   // 0x0268(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     PickedUpFlagEffects[0x2];                                 // 0x026C(0x0004) (Edit)
	class UParticleSystemComponent*                    DroppedParticleComponent;                                 // 0x0274(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    PickedUpParticleComponent;                                // 0x0278(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystem*                             TeamFlagEffects[0x2];                                     // 0x027C(0x0004) (Edit)
	float                                              MiniMapIconSize;                                          // 0x0284(0x0004) (Edit)
	float                                              MinimumTowerDistance;                                     // 0x0288(0x0004) (Edit)
	float                                              OverlappingTowerCheckRadius;                              // 0x028C(0x0004) (Edit)
	float                                              HolderJumpZMultiplier;                                    // 0x0290(0x0004) (Edit)
	class UTexture2D*                                  MiniMapIcon;                                              // 0x0294(0x0004) (Edit)
	class UTexture2D*                                  OnScreenWaypointTexture;                                  // 0x0298(0x0004) (Edit)
	class UTexture2D*                                  OffScreenWaypointTexture;                                 // 0x029C(0x0004) (Edit)
	struct FColor                                      MiniMapDefaultColor;                                      // 0x02A0(0x0004) (Edit)
	class ADunDefPlayer*                               FlagHolder;                                               // 0x02A4(0x0004) (Net)
	float                                              currentScoreAccumulation;                                 // 0x02A8(0x0004)
	unsigned long                                      bIsPickedUp : 1;                                          // 0x02AC(0x0004)
	unsigned long                                      bGivePointsForPossesion : 1;                              // 0x02AC(0x0004) (Edit)
	unsigned long                                      bTeamBasedFlag : 1;                                       // 0x02AC(0x0004) (Edit)
	unsigned long                                      bAllowTeamReset : 1;                                      // 0x02AC(0x0004) (Edit)
	unsigned long                                      bAtBase : 1;                                              // 0x02AC(0x0004) (Net)
	class ACTF_FlagBase*                               myBase;                                                   // 0x02B0(0x0004) (Transient)
	int                                                myTeamIndex;                                              // 0x02B4(0x0004) (Edit, Net)
	int                                                CapturePoints;                                            // 0x02B8(0x0004) (Edit)
	struct FName                                       TeamParticleColorParam;                                   // 0x02BC(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     CapturedFlagEffects[0x2];                                 // 0x02C4(0x0004) (Edit)
	struct FString                                     flagCapturedMessage;                                      // 0x02CC(0x000C) (Edit, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_Flag");
		return ptr;
	}


	void SetAtBase(unsigned long bIsAtBase);
	void SetDroppedParticleColor();
	void SetTeam(int NewTeam);
	void InitFlag(int NewTeam, class ACTF_FlagBase* NewBase);
	void AutoTeleport();
	void AdjustDamage(int* Damage);
	unsigned long PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius);
	unsigned long AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point);
	unsigned long CheckAllowance();
	void PhysicsVolumeChange(class APhysicsVolume* NewVolume);
	void FellOutOfWorld(class UClass* dmgType);
	void ResetCollision();
	void DisableCollision();
	unsigned long IsInAuraOrTrap(const struct FVector& Loc);
	void CaptureFlag();
	void ReturnToBase();
	void DropFlag(unsigned long bForceRandomizedPosition, unsigned long bForceDroppedMessage);
	void PickUpFlag(class ADunDefPlayer* newHolder);
	void BeginBeingPickedUp(class ADunDefPlayerController* newHolder);
	unsigned long CanBePickedUp(class ADunDefPlayerController* PC);
	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	float GetActivationOffset();
	float GetActivationWeighting();
	void Client_Activate(class ADunDefPlayerController* PC, int activationType);
	void Server_Activate(class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType);
	int AllowActivation(class ADunDefPlayerController* PC, int activationType);
	int GetToolTipPriority();
	unsigned long TakesToolTipPriority(const TScriptInterface<class UDunDefToolTipInterface>& otherToolTip);
	unsigned long ContinueDrawingToolTip(unsigned long ContinueDrawing);
	void DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer);
	void Destroyed();
	void PostBeginPlay();
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	unsigned long OnlyDrawHUDForOwner();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.CTF_UIGlobalHUD
// 0x0030 (0x0738 - 0x0708)
class UCTF_UIGlobalHUD : public UUI_GlobalHUD
{
public:
	class UUILabel*                                    MyTeamNameLabel;                                          // 0x0708(0x0004) (Edit)
	class UUIPanel*                                    ScorePanel_2;                                             // 0x070C(0x0004) (Edit)
	class UUIPanel*                                    ScorePanel_3;                                             // 0x0710(0x0004) (Edit)
	class UUILabel*                                    Team1PlayerList;                                          // 0x0714(0x0004) (Edit)
	class UUILabel*                                    Team2PlayerList;                                          // 0x0718(0x0004) (Edit)
	class UUILabel*                                    TeamName_2;                                               // 0x071C(0x0004) (Edit)
	class UUILabel*                                    TeamName_3;                                               // 0x0720(0x0004) (Edit)
	class UUILabel*                                    Team1ScoreList;                                           // 0x0724(0x0004) (Edit)
	class UUILabel*                                    Team2ScoreList;                                           // 0x0728(0x0004) (Edit)
	class UUILabel*                                    Team1KillList;                                            // 0x072C(0x0004) (Edit)
	class UUILabel*                                    Team2KillList;                                            // 0x0730(0x0004) (Edit)
	struct FColor                                      LocalPlayerHighLightColor;                                // 0x0734(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_UIGlobalHUD");
		return ptr;
	}


	void GetUITeamLists(int TeamOnlyCheck, struct FString* tList, struct FString* kList, struct FString* sList);
	struct FString GetColorString(const struct FColor& aColor);
	void UpdateTeamPanels();
	void Update(float DeltaTime);
	void UpdateCompetitive(float DeltaTime);
};


// Class DunDefSpecial.CTF_DDPRI
// 0x0010 (0x0380 - 0x0370)
class ACTF_DDPRI : public ADunDefPlayerReplicationInfo
{
public:
	int                                                CTF_MyCurrentTowerUnits;                                  // 0x0370(0x0004) (Net)
	int                                                CTF_MyMaxTowerUnits;                                      // 0x0374(0x0004) (Net)
	unsigned long                                      IsReadyToSpawn : 1;                                       // 0x0378(0x0004) (Net)
	int                                                MatchKills;                                               // 0x037C(0x0004) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_DDPRI");
		return ptr;
	}


	unsigned long IsFriendlyToLocal();
	void PrintHeroLevelUpMessage();
	void PrintNewHeroMessage();
	void SetReadyToSpawn(unsigned long bIsReady);
	struct FString GetTeamName();
	struct FColor GetTeamColor();
	void Destroyed();
	void AddToTeam(int TeamIndex);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.CTF_DDGRI
// 0x00EC (0x0918 - 0x082C)
class ACTF_DDGRI : public ADDGRI_Competitive
{
public:
	struct FCTFTeamData                                CTFTeamDatas[0x2];                                        // 0x082C(0x0034) (Net, NeedCtorLink)
	struct FColor                                      NeutralColor;                                             // 0x0894(0x0004)
	class ACTF_PlayerAbility_PickupFlag*               CTFPickupFlagAbilityTemplate;                             // 0x0898(0x0004)
	class UTexture2D*                                  TeamIconTexture;                                          // 0x089C(0x0004)
	class UTexture2D*                                  FlagIcon;                                                 // 0x08A0(0x0004)
	class ACTF_Flag*                                   TheFlag;                                                  // 0x08A4(0x0004) (Net)
	class ACTF_Flag*                                   TheSecondFlag;                                            // 0x08A8(0x0004) (Net)
	struct FString                                     FlagIconPath;                                             // 0x08AC(0x000C) (NeedCtorLink)
	int                                                WinningTeam;                                              // 0x08B8(0x0004) (Net)
	unsigned long                                      bAutoBalanceTeams : 1;                                    // 0x08BC(0x0004) (Net)
	unsigned long                                      bIsGameReady : 1;                                         // 0x08BC(0x0004) (Net)
	unsigned long                                      bUsePersonalTowerUnits : 1;                               // 0x08BC(0x0004)
	unsigned long                                      bAllowCountDown : 1;                                      // 0x08BC(0x0004)
	unsigned long                                      bPrintWinningPlayerMessage : 1;                           // 0x08BC(0x0004)
	unsigned long                                      bDisplayPlayerScore : 1;                                  // 0x08BC(0x0004)
	float                                              GameStartTime;                                            // 0x08C0(0x0004) (Net)
	float                                              FlagHoldingGroundSpeed;                                   // 0x08C4(0x0004)
	int                                                LastSentGameTime;                                         // 0x08C8(0x0004) (Transient)
	struct FString                                     EndGameLabelString;                                       // 0x08CC(0x000C) (Localized, NeedCtorLink)
	int                                                WinCTFManaBonus[0x8];                                     // 0x08D8(0x0004)
	int                                                WinExpBonus[0x8];                                         // 0x08F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_DDGRI");
		return ptr;
	}


	unsigned long AllowedToTeleport(class APawn* Teleportee);
	void DoDeathNotification(class ADunDefPlayerReplicationInfo* Killer, class ADunDefPlayerReplicationInfo* Victim, int damageTypeIndex);
	float GetJumpZMultiplier(class ADunDefPawn* aPawn);
	void ExtraDrawHUDInterface(class ADunDefHUD* H, const TScriptInterface<class UDunDefHUDInterface>& hudint);
	void CustomUpdatePlayerScoreLabel(class ULocalPlayer* ForPlayer, class UUILabel_ScoreIndicator* ScoreLabel);
	unsigned long AllowDeathSpectatorMode(class ADunDefPlayerController* PC);
	float ModifyPlayerGroundSpeed(class ADunDefPlayer* aPlayer, float theGroundSpeed);
	struct FColor GetGameOverLabelColor();
	struct FColor GetVictoryLabelColor();
	struct FString GetGameOverLabelString(class APlayerReplicationInfo* myPlayer);
	struct FString GetVictoryLabelString(class APlayerReplicationInfo* myPlayer);
	unsigned long OverrideEndGameLabel();
	class ADunDefPlayerReplicationInfo* GetWinningPRI();
	TArray<TScriptInterface<class UDataListEntryInterface>> GetDataListEntries(int dataSetType, int PlayerIndex, int FolderID);
	void GetTeamIcon(int TeamIndex, class USurface** theTeamIcon, struct FColor* theTeamColor);
	unsigned long IsTeamCompetitive();
	unsigned long AllowChatBetween(class APlayerReplicationInfo* myPlayer, class APlayerReplicationInfo* TheirPlayer);
	int GetTeamThatHasFlag();
	void DoLevelVictory();
	void GiveWinningBonus();
	void WonGame(class ADunDefPlayerReplicationInfo* theWinningPlayer, int WinningTeamIndex);
	void CheckAllReady();
	unsigned long CheckReadyPlayers();
	void SetAllowCountDown(unsigned long setAllow);
	unsigned long AllowGameCountDown();
	void SetGameReady();
	void SetGameTime(float NewTime);
	void UpdateGameTime();
	void Tick(float DeltaTime);
	void FilloutTeams();
	void FlushTeams();
	void AutoBalanceTeams();
	void AutoSortTeams();
	int GetLowestBalancedTeam();
	void IncrementTeamScore(int ScoringTeam, int Score);
	void PostBeginPlay();
	void ModifyCustomColors(class ADunDefPlayerController* aController, class ADunDefPlayer* aPlayer);
	void DrawExtraPlayerFloatingHUD(class ADunDefPlayer* aPlayer, class ADunDefHUD* H);
	struct FString GetTeamScores();
	void Server_AddGRIHeroAbilities(class ADunDefPlayerController* PC);
	struct FString GetColorString(const struct FColor& aColor);
	struct FString GetTeamLists(int TeamOnlyCheck, unsigned long bWantsReadyCheck);
	struct FString GetCompetitivePlayerList();
	unsigned long DestroyTowerOnOwnerLeft(class ADunDefTower* aTower);
	int GetMaxTowerUnits(class ADunDefPlayerReplicationInfo* ddPRI);
	int GetAltCurrentTowerUnits(class ADunDefPlayerReplicationInfo* ddPRI);
	int GetCurrentTowerUnits(class ADunDefPlayerReplicationInfo* ddPRI);
	unsigned long CanPlaceTowerUnitCost(int Cost, class ADunDefPlayerController* ForPlayer, class ADunDefTower* Tower);
	void RemovedTower(class ADunDefTower* Tower);
	void AddedTower(class ADunDefTower* Tower);
	void RemovePlayerFromTeam(class ACTF_DDPRI* aPRI, int TeamIndex);
	void AddPlayerToTeam(class ACTF_DDPRI* aPRI, int TeamIndex);
	void RemoveFromAnyTeams(class ACTF_DDPRI* aPRI);
	int GetSmallestTeam();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.CTF_DDPC
// 0x0008 (0x0B40 - 0x0B38)
class ACTF_DDPC : public ADunDefPlayerController
{
public:
	class UUI_TeamSelect*                              TeamSelectUITemplate;                                     // 0x0B38(0x0004) (Edit)
	class ACTF_Flag*                                   myHeldFlag;                                               // 0x0B3C(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_DDPC");
		return ptr;
	}


	void AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum);
	void PawnDied(class APawn* inPawn);
	void GiveFlag(class ACTF_Flag* newFlag);
	void SetIsReady(unsigned long bIsReady);
	void SetDesiredTeam(int desiredTeam);
	void CreateHUD();
	void LocalAttemptSpawn();
	void ServerRestartPlayer();
	void ShowTeamSelectionUI();
};


// Class DunDefSpecial.CTD_DDGRI
// 0x000C (0x0924 - 0x0918)
class ACTD_DDGRI : public ACTF_DDGRI
{
public:
	TArray<float>                                      MoveRepSizes;                                             // 0x0918(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTD_DDGRI");
		return ptr;
	}


	unsigned long AllowedToTeleport(class APawn* Teleportee);
	void DoLevelVictory();
	void Tick(float DeltaTime);
	struct FString GetSkipBuildPhaseString();
	void DrawExtraPlayerFloatingHUD(class ADunDefPlayer* aPlayer, class ADunDefHUD* H);
	void Server_AddGRIHeroAbilities(class ADunDefPlayerController* PC);
	unsigned long DestroyTowerOnOwnerLeft(class ADunDefTower* aTower);
	unsigned long AllowActivatingCrystal();
	void SetGameReady();
};


// Class DunDefSpecial.UI_TeamSelect
// 0x002C (0x0668 - 0x063C)
class UUI_TeamSelect : public UDunDefUIScene
{
public:
	class UUIScriptWidget_Button*                      ReadyButton;                                              // 0x063C(0x0004) (Edit)
	class UUIButton_Scripted*                          SwapTeamButton;                                           // 0x0640(0x0004) (Edit)
	class UUIButton_Scripted*                          AutoSetTeams;                                             // 0x0644(0x0004) (Edit)
	class UUIButton_Scripted*                          TeamButton_2;                                             // 0x0648(0x0004) (Edit)
	class UUIButton_Scripted*                          TeamButton_3;                                             // 0x064C(0x0004) (Edit)
	class UUILabel*                                    GameStartCountdown;                                       // 0x0650(0x0004) (Edit)
	class UUILabel*                                    Team1PlayerList;                                          // 0x0654(0x0004) (Edit)
	class UUILabel*                                    Team2PlayerList;                                          // 0x0658(0x0004) (Edit)
	class UUILabel*                                    TeamName_2;                                               // 0x065C(0x0004) (Edit)
	class UUILabel*                                    TeamName_3;                                               // 0x0660(0x0004) (Edit)
	float                                              GameStartTime;                                            // 0x0664(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.UI_TeamSelect");
		return ptr;
	}


	unsigned long OnInterceptedInputKey(struct FInputEventParameters* EventParms);
	unsigned long NotifyWidgetClicked(class UUIObject* Widget);
	void Update(float DeltaTime);
	void SceneActivated(unsigned long bInitialActivation);
};


// Class DunDefSpecial.CTF_GameInfo
// 0x0008 (0x0548 - 0x0540)
class ACTF_GameInfo : public AGameInfo_Competitive
{
public:
	int                                                TeamPointsForKill;                                        // 0x0540(0x0004)
	unsigned long                                      bPreventCompetitivePlayerDamage : 1;                      // 0x0544(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_GameInfo");
		return ptr;
	}


	void AdjustDTDamage(class ADunDefDamageableTarget* forDT, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, int* inDamage, struct FVector* Momentum);
	void AdjustPawnDamage(class ADunDefPawn* forPawn, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, int* inDamage, struct FVector* Momentum);
	unsigned char GetPlayerTeamForStart(class AController* Player, unsigned char InTeam);
	unsigned long CheckScore(class APlayerReplicationInfo* Scorer);
	void ScoreKill(class AController* Killer, class AController* Other);
	void ScoreObjective(class APlayerReplicationInfo* Scorer, int Score);
	void AddObjectiveScore(class APlayerReplicationInfo* Scorer, int Score);
	void PlayerReplicationInfoInitialized(class ADunDefPlayerController* PC);
	void DoPlayerLeaving(class ADunDefPlayerController* PC, unsigned long bForceLocal);
	class APlayerController* SpawnPlayerController(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
};


// Class DunDefSpecial.CTD_GameInfo
// 0x000C (0x0554 - 0x0548)
class ACTD_GameInfo : public ACTF_GameInfo
{
public:
	TArray<float>                                      OgreDifficultyOffsets;                                    // 0x0548(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTD_GameInfo");
		return ptr;
	}


	class ADunDefEnemy* WaveSpawnerCreateEnemy(class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	float RatePlayerStart(class APlayerStart* P, unsigned char Team, class AController* Player);
	void PostBeginPlay();
};


// Class DunDefSpecial.CTF_FlagBase
// 0x0068 (0x0284 - 0x021C)
class ACTF_FlagBase : public AActor
{
public:
	int                                                myTeamIndex;                                              // 0x021C(0x0004) (Edit, Net)
	class ADunDefEmitterSpawnable*                     CaptureEmitterTemplate[0x2];                              // 0x0220(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     FlagStoleEmitterTemplate[0x2];                            // 0x0228(0x0004) (Edit)
	class UParticleSystemComponent*                    MyParticleComponent;                                      // 0x0230(0x0004) (Edit, ExportObject, Component, EditInline)
	class ACTF_Flag*                                   myFlagTemplate;                                           // 0x0234(0x0004) (Edit)
	struct FName                                       ParticleColorName;                                        // 0x0238(0x0008) (Edit)
	TArray<class APlayerStart*>                        myAssociatedStarts;                                       // 0x0240(0x000C) (Edit, NeedCtorLink)
	TArray<class ADunDefTeamTowerVolume*>              myAssociatedVolumes;                                      // 0x024C(0x000C) (Edit, NeedCtorLink)
	class ACTF_Flag*                                   myFlag;                                                   // 0x0258(0x0004) (Transient)
	unsigned long                                      bBaseInited : 1;                                          // 0x025C(0x0004) (Net)
	class UCylinderComponent*                          myCollisionComponent;                                     // 0x0260(0x0004) (ExportObject, Component, EditInline)
	float                                              MiniMapIconSize;                                          // 0x0264(0x0004) (Edit)
	float                                              MinimumTowerDistance;                                     // 0x0268(0x0004) (Edit)
	class UTexture2D*                                  MiniMapIcon;                                              // 0x026C(0x0004) (Edit)
	TArray<class UMaterialInstanceConstant*>           ZoneMICs;                                                 // 0x0270(0x000C) (Edit, NeedCtorLink)
	struct FName                                       ZoneMICParamName;                                         // 0x027C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_FlagBase");
		return ptr;
	}


	unsigned long PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius);
	unsigned long AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point);
	unsigned long CheckAllowance();
	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	void SpawnFlag();
	void FlagTaken();
	void FlagReturned();
	void DoCaptureEffects();
	void ScoreFlag(class ACTF_Flag* scoredFlag);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void InitBase();
	void SetTeamIndex(int NewTeam);
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.CTF_MultiFlag_GameInfo
// 0x0004 (0x054C - 0x0548)
class ACTF_MultiFlag_GameInfo : public ACTF_GameInfo
{
public:
	unsigned long                                      bSetRandomTeamSides : 1;                                  // 0x0548(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_MultiFlag_GameInfo");
		return ptr;
	}


	float RatePlayerStart(class APlayerStart* P, unsigned char Team, class AController* Player);
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefTeamTowerVolume
// 0x0004 (0x025C - 0x0258)
class ADunDefTeamTowerVolume : public AVolume
{
public:
	int                                                myTeamIndex;                                              // 0x0258(0x0004) (Edit, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTeamTowerVolume");
		return ptr;
	}


	void SetMyTeam(int NewTeam);
	void Destroyed();
	void PostBeginPlay();
	unsigned long AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point);
	unsigned long PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius);
	unsigned long CheckAllowance();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.CTFM_DDGRI
// 0x0000 (0x0918 - 0x0918)
class ACTFM_DDGRI : public ACTF_DDGRI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTFM_DDGRI");
		return ptr;
	}

};


// Class DunDefSpecial.CTF_UIGameStats
// 0x0024 (0x0FE4 - 0x0FC0)
class UCTF_UIGameStats : public UUI_GameStats
{
public:
	class UUILabel*                                    Team1PlayerList;                                          // 0x0FC0(0x0004) (Edit)
	class UUILabel*                                    Team2PlayerList;                                          // 0x0FC4(0x0004) (Edit)
	class UUILabel*                                    TeamName_2;                                               // 0x0FC8(0x0004) (Edit)
	class UUILabel*                                    TeamName_3;                                               // 0x0FCC(0x0004) (Edit)
	class UUILabel*                                    Team1ScoreList;                                           // 0x0FD0(0x0004) (Edit)
	class UUILabel*                                    Team2ScoreList;                                           // 0x0FD4(0x0004) (Edit)
	class UUILabel*                                    Team1KillList;                                            // 0x0FD8(0x0004) (Edit)
	class UUILabel*                                    Team2KillList;                                            // 0x0FDC(0x0004) (Edit)
	struct FColor                                      LocalPlayerHighLightColor;                                // 0x0FE0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_UIGameStats");
		return ptr;
	}


	void GetUITeamLists(int TeamOnlyCheck, struct FString* tList, struct FString* kList, struct FString* sList);
	struct FString GetColorString(const struct FColor& aColor);
	void UpdateTeamPanels();
	void CustomInit(int CustomInitIndex);
};


// Class DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover
// 0x0000 (0x00E8 - 0x00E8)
class UDunDef_SeqAct_AddPlatformToVerticalTowerMover : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDef_VerticalTowerMover
// 0x0014 (0x0230 - 0x021C)
class ADunDef_VerticalTowerMover : public AActor
{
public:
	unsigned long                                      bBuildPhaseOnly : 1;                                      // 0x021C(0x0004) (Edit)
	TArray<struct FPlatformInfo>                       Platforms;                                                // 0x0220(0x000C) (Transient, NeedCtorLink)
	int                                                TicksSinceUpdate;                                         // 0x022C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_VerticalTowerMover");
		return ptr;
	}


	void Tick(float DeltaTime);
	void MoveTowers(const struct FPlatformInfo& Info);
	TArray<struct FTowerInfo> RebuildTowerCache(const struct FPlatformInfo& thePlatformInfo);
	void AddInterpActor(class AInterpActor* TheActor);
};


// Class DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements
// 0x0001 (0x00E9 - 0x00E8)
class UDunDef_SeqAct_CheckToUnlockAchievements : public USequenceAction
{
public:
	TEnumAsByte<EAchievementCheckSet>                  AchievementCheckSet;                                      // 0x00E8(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam
// 0x0004 (0x00EC - 0x00E8)
class UDunDef_SeqAct_CTDWinGameForTeam : public USequenceAction
{
public:
	int                                                WinningTeamIndex;                                         // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDef_SeqAct_GetMVP
// 0x0000 (0x00E8 - 0x00E8)
class UDunDef_SeqAct_GetMVP : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_GetMVP");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene
// 0x0008 (0x00F0 - 0x00E8)
class UDunDef_SeqAct_HideGlobalUIScene : public USequenceAction
{
public:
	class UDunDefUIScene*                              aUIScene;                                                 // 0x00E8(0x0004) (Edit)
	unsigned long                                      bForceClose : 1;                                          // 0x00EC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDefTower_TripWire
// 0x0100 (0x09FC - 0x08FC)
class ADunDefTower_TripWire : public ADunDefTower_DetonationType
{
public:
	TArray<struct FBeamTrippers>                       currentBeamTrippers;                                      // 0x08FC(0x000C) (Component, NeedCtorLink)
	TArray<class ADunDefTower_TripWire*>               ChildNodes;                                               // 0x0908(0x000C) (NeedCtorLink)
	class ADunDefTower_TripWire*                       ChildNode;                                                // 0x0914(0x0004) (Net)
	unsigned long                                      bIsChildNode : 1;                                         // 0x0918(0x0004) (Net)
	unsigned long                                      bUseDetonation : 1;                                       // 0x0918(0x0004) (Edit)
	unsigned long                                      bShowInactiveEffectOnDeactivate : 1;                      // 0x0918(0x0004) (Edit)
	unsigned long                                      bActiveDamage : 1;                                        // 0x0918(0x0004) (Net)
	unsigned long                                      bShutDown : 1;                                            // 0x0918(0x0004) (Net)
	unsigned long                                      bDoesStun : 1;                                            // 0x0918(0x0004) (Edit)
	unsigned long                                      bContinuousProcs : 1;                                     // 0x0918(0x0004) (Edit)
	unsigned long                                      bAllowTargeting : 1;                                      // 0x0918(0x0004) (Edit)
	unsigned long                                      bDoesTracing : 1;                                         // 0x0918(0x0004) (Edit)
	unsigned long                                      bActiveOnStart : 1;                                       // 0x0918(0x0004) (Edit)
	unsigned long                                      bWantsChildTodrawUpgradeOverlay : 1;                      // 0x0918(0x0004) (Edit)
	unsigned long                                      bSetFullCollisionForChild : 1;                            // 0x0918(0x0004) (Edit)
	unsigned long                                      bDoClientTrace : 1;                                       // 0x0918(0x0004) (Edit)
	unsigned long                                      bMoving : 1;                                              // 0x0918(0x0004) (Net)
	unsigned long                                      bDidSingleHit : 1;                                        // 0x0918(0x0004)
	class ADunDefTower_TripWire*                       ParentNode;                                               // 0x091C(0x0004) (Net)
	float                                              WireDistanceForMaxCost;                                   // 0x0920(0x0004) (Edit)
	float                                              WireDistanceForMinCost;                                   // 0x0924(0x0004) (Edit)
	int                                                TowerUnitCostMax;                                         // 0x0928(0x0004) (Edit)
	struct FVector                                     BeamTraceExtent;                                          // 0x092C(0x000C) (Edit)
	float                                              ActiveEffectLingerTime;                                   // 0x0938(0x0004) (Edit)
	class UParticleSystemComponent*                    BeamEffect;                                               // 0x093C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    InActiveBeamEffect;                                       // 0x0940(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    InActiveBeamEndPointEffect;                               // 0x0944(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    ActiveBeamEndPointEffect;                                 // 0x0948(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    PreDetonationEndPointEffect;                              // 0x094C(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       BeamSocketName;                                           // 0x0950(0x0008) (Edit)
	int                                                BaseDamagePerTick;                                        // 0x0958(0x0004) (Edit)
	float                                              DmgProcInterval;                                          // 0x095C(0x0004) (Edit)
	float                                              ActiveDuration;                                           // 0x0960(0x0004) (Edit)
	class UClass*                                      BeamDamageType;                                           // 0x0964(0x0004) (Edit)
	float                                              TimeTillDetonate;                                         // 0x0968(0x0004) (Edit)
	float                                              LifeEnergy;                                               // 0x096C(0x0004) (Edit, Net)
	float                                              LifeEnergyDecrease;                                       // 0x0970(0x0004) (Edit)
	float                                              LifeEnergyDecreasePerPawnAffected;                        // 0x0974(0x0004) (Edit)
	float                                              HealAmountMultiplier;                                     // 0x0978(0x0004) (Edit)
	float                                              NetUpdateFrequencyWhenRepairing;                          // 0x097C(0x0004) (Edit)
	float                                              LastRepairIncrementTime;                                  // 0x0980(0x0004)
	int                                                MaxLifeEnergy;                                            // 0x0984(0x0004) (Net)
	TArray<class UClass*>                              NoStunDamageTypes;                                        // 0x0988(0x000C) (Edit, NeedCtorLink)
	class UParticleSystem*                             StunnedEffect;                                            // 0x0994(0x0004) (Edit)
	float                                              BaseStunTime;                                             // 0x0998(0x0004) (Edit)
	float                                              MaxZHeight;                                               // 0x099C(0x0004) (Edit)
	float                                              MinZHeight;                                               // 0x09A0(0x0004) (Edit)
	class UTexture2D*                                  MiniMapBeamTexture;                                       // 0x09A4(0x0004) (Edit)
	float                                              MiniMapBeamWidth;                                         // 0x09A8(0x0004) (Edit)
	float                                              StunTimeExponent;                                         // 0x09AC(0x0004) (Edit)
	TEnumAsByte<ELevelUpValueType>                     StunStat;                                                 // 0x09B0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09B1(0x0003) MISSED OFFSET
	class USoundCue*                                   DetonateSound;                                            // 0x09B4(0x0004) (Edit)
	class USoundCue*                                   TripCue;                                                  // 0x09B8(0x0004) (Edit)
	float                                              LinearDUHealthScaleValue;                                 // 0x09BC(0x0004) (Edit)
	float                                              DUHealthExp;                                              // 0x09C0(0x0004) (Edit)
	struct FString                                     StunTimeString;                                           // 0x09C4(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     StunIntervalEndString;                                    // 0x09D0(0x000C) (Edit, Localized, NeedCtorLink)
	class UAudioComponent*                             AmbientSoundComponent;                                    // 0x09DC(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FColor                                      MiniMapBeamColor;                                         // 0x09E0(0x0004) (Edit)
	float                                              StunMultiplier;                                           // 0x09E4(0x0004) (Net)
	float                                              LastCleanUpTime;                                          // 0x09E8(0x0004)
	struct FVector                                     spawnInPoint;                                             // 0x09EC(0x000C) (Net)
	int                                                modifiedDUCost;                                           // 0x09F8(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_TripWire");
		return ptr;
	}


	float STATIC_StaticGetTowerScale(class UDunDefHero* hero, class ADunDefTower* Tower, float TowerRangeScaler);
	unsigned long AllowAbilityMove();
	void TransferTowerOwnership(class APawn* toPawn);
	void CheckAssociateWithHero(class UDunDefHero* hero, class ADunDefPawn* pawnInstigator, class ADunDefPlayerController* PC);
	unsigned long CanDetonate();
	unsigned long HasCharges();
	float GetSellWorth();
	float GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController);
	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	void HealDetonationStyle(int HealAmt, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers);
	class AActor* GetAlternateActor();
	unsigned long IsMultiActorTower();
	void DrawUpgradeOverlay(class ADunDefHUD* H, float Opacity, const struct FColor& upgradeOverlayColor);
	float GetGlobalTowerHealthMultiplier();
	void PerformFullHeal();
	void SetRadiusScale(float theRadiusScale);
	void DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY);
	struct FString GetToolTipText();
	void ScaleForHeroModifiers(unsigned long IsFirstTime);
	void ScaleHealthMultiplier();
	void ReportSummoned();
	void UpdateTowerRatingMaterial();
	unsigned long NeedsRepair(unsigned long requireFullHealth);
	float GetHealthPercent();
	unsigned long HealDamage(int Amount, class AController* Healer, class UClass* DamageType);
	void HealPctOfMaxHealth(float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers);
	int GetHealth(unsigned long bGetMax);
	float IncrementRepair(float CurrentMana, float DeltaTime);
	float IncrementDetonationRepair(float CurrentMana, float DeltaTime);
	float GetCurrentRepairPercentage(float StartRepairTime, float RepairSpeed);
	void StartRepair();
	float GetTimeToRepair();
	float GetCostToRepair();
	float GetTimeOfTotalRepair();
	void Died(class AController* EventInstigator, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser);
	void ReportedDeath();
	void ReportDeath();
	void DecreaseLifeEnergy(float X);
	unsigned long ContinueDrawingToolTip(unsigned long ContinueDrawing);
	void DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer);
	unsigned long Sell(class ADunDefPlayerController* PC);
	void Destroyed();
	void PlaySellFX();
	void Detonate(int SetDetonationsNumber);
	void ChildEndDetonate();
	void ChildDetonate();
	void RemoveStunnedActor(class AActor* stunRemoval, int removalIndex, unsigned long bDontReplicate);
	unsigned long CanStun(class ADunDefEnemy* stunTest);
	struct FBeamTrippers AddStunnedActor(class ADunDefEnemy* newStun);
	void ClearBeamTrippers(unsigned long bFullClear);
	float GetAttackDuration();
	void ResetTrip();
	void DeactivateTrip(unsigned long bShutDownEffects);
	void ActivateTrip();
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	float GetTrapDamageMultiplier();
	float GetDamageMultiplier();
	float GetAttackDamage();
	float GetStunTime();
	void RemoveTowerBooster(const TScriptInterface<class UTowerBoosterInterface>& aBooster, int indexOverride);
	void AddTowerBooster(const TScriptInterface<class UTowerBoosterInterface>& aBooster);
	void UpdateStuns();
	float GetAttackRate();
	void DoTracing(float dt, unsigned long bForceDamage);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SetDetonateTimer();
	struct FVector GetEndPoint();
	struct FVector GetBeamStartLoc();
	void UpdateMovementBeams();
	void Tick(float DeltaTime);
	void ClientSingleSetMovement(const struct FVector& endLoc, const struct FRotator& endRot, unsigned long bShouldCollideWorld);
	unsigned long ForceSingleMove(const struct FVector& NewLoc, const struct FRotator& NewRot, unsigned long bShouldCollideWorld);
	void DisableSingleMovementReplication();
	void EnableSingleMovementReplicationTimer(float Time);
	void DisableMovementReplication();
	void EnableMovementReplicationTimer(float Time);
	void SetDUCost(int newDUCost);
	int GetNextUpgradeLevel(unsigned long bForceBeyondMaxUpgrade);
	int GetTimeToUpgradeTower();
	int GetCostToUpgradeTower();
	int GetTowerUpgradeLevelStatModifier(TEnumAsByte<ELevelUpValueType> valueType);
	void ChildDoUpgrade();
	void ChildDoDowngrade();
	void DoDowngrade();
	void DoUpgrade();
	unsigned long CanBeUpgraded();
	void ShutDownBeamEffects();
	void ActivateBeamEffects(unsigned long bActive);
	void ActivateBeam();
	struct FVector GetBeamPoint();
	struct FVector GetCollisionPoint();
	void SetPlacementPoints(TArray<struct FVector> SpawnPoints, class ADunDefTower* NodeTemplate);
	void InitializeForInstigator(class APawn* Pawn);
	void SetUpCollisionMesh();
	void InitalizeStatObject();
	void OnDestroy_RemoveFromTargetableList();
	void OnPostBeginPlay_AddToTargetableList();
	void PostBeginPlay();
	void SetUseHealthBarMat();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefTower_TripPhysical
// 0x00B0 (0x0AAC - 0x09FC)
class ADunDefTower_TripPhysical : public ADunDefTower_TripWire
{
public:
	struct FVector                                     TargetingLocation;                                        // 0x09FC(0x000C)
	class UParticleSystemComponent*                    TopBeam;                                                  // 0x0A08(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    SideBeamA;                                                // 0x0A0C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    SideBeamB;                                                // 0x0A10(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    ParticlePlane;                                            // 0x0A14(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    TopPointA;                                                // 0x0A18(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    TopPointB;                                                // 0x0A1C(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       TopBoneControllerName;                                    // 0x0A20(0x0008) (Edit)
	struct FName                                       TopSocketName;                                            // 0x0A28(0x0008) (Edit)
	float                                              PlaneFadeTime;                                            // 0x0A30(0x0004) (Edit)
	float                                              CollisionWidth;                                           // 0x0A34(0x0004) (Edit)
	class UMaterialInterface*                          PlaneMaterial;                                            // 0x0A38(0x0004) (Edit)
	class USoundCue*                                   ExpandSound;                                              // 0x0A3C(0x0004) (Edit)
	struct FVector                                     MeshOffSet;                                               // 0x0A40(0x000C) (Edit)
	struct FName                                       BottomSocketName;                                         // 0x0A4C(0x0008) (Edit)
	unsigned long                                      bUseBottomSocket : 1;                                     // 0x0A54(0x0004) (Edit)
	unsigned long                                      bAllowAbilityMove : 1;                                    // 0x0A54(0x0004) (Net)
	unsigned long                                      bDoSpawnTick : 1;                                         // 0x0A54(0x0004)
	unsigned long                                      bBeamStarted : 1;                                         // 0x0A54(0x0004)
	unsigned long                                      bActivatedBeam : 1;                                       // 0x0A54(0x0004)
	unsigned long                                      bModifyActorLocation : 1;                                 // 0x0A54(0x0004)
	unsigned long                                      bSetCollisionMeshAsComponent : 1;                         // 0x0A54(0x0004)
	unsigned long                                      bClientRecievedLoc : 1;                                   // 0x0A54(0x0004)
	class UMaterialInstanceConstant*                   MyPlaneMIC;                                               // 0x0A58(0x0004)
	class USkelControlSingleBone*                      TopBoneController;                                        // 0x0A5C(0x0004)
	float                                              ScaleInTime;                                              // 0x0A60(0x0004) (Edit)
	float                                              StartScaleTime;                                           // 0x0A64(0x0004)
	struct FVector                                     topEndPointA;                                             // 0x0A68(0x000C)
	struct FVector                                     topEndPointB;                                             // 0x0A74(0x000C)
	struct FVector                                     currentPointA;                                            // 0x0A80(0x000C)
	struct FVector                                     currentPointB;                                            // 0x0A8C(0x000C)
	float                                              distanceBetween;                                          // 0x0A98(0x0004) (Transient)
	float                                              theTime;                                                  // 0x0A9C(0x0004)
	struct FVector                                     MeshTranslation;                                          // 0x0AA0(0x000C) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_TripPhysical");
		return ptr;
	}


	void DisableAbilityMove();
	unsigned long AllowAbilityMove();
	void ClientDisableMovementReplication(const struct FVector& endedLoc);
	void BaseChange();
	unsigned long ForceMoveActor(class AActor* Mover, const struct FVector& NewLoc);
	void GetSelectionLocation(class AActor* wantsLocation, struct FVector* bestLoc);
	unsigned long IsPhysicalTower();
	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	void UpdateMovementBeams();
	unsigned long IsPreviousToolTipActor(class ADunDefPlayerController* ownerCheck);
	void UpdateDamageFlashing();
	void PerformFullHeal();
	unsigned long HealDamage(int Amount, class AController* Healer, class UClass* DamageType);
	float IncrementRepair(float CurrentMana, float DeltaTime);
	float GetCurrentRepairPercentage(float StartRepairTime, float RepairSpeed);
	void StartRepair();
	float GetTimeToRepair();
	float GetCostToRepair();
	float GetTimeOfTotalRepair();
	struct FString GetToolTipText();
	float GetGlobalTowerHealthMultiplier();
	void Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	class UPrimitiveComponent* GetOverrideTargetComponent();
	void DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer);
	float GetHealthPercent();
	int GetHealth(unsigned long bGetMax);
	void AddHealth(int howMuch, unsigned long bDontDisplayFloatingNumber);
	void ActivateBeamEffects(unsigned long bActive);
	void ShutDownBeamEffects();
	void ActivateTrip();
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	unsigned long NeedsRepair(unsigned long requireFullHealth);
	void SubtractHealth(int DamageAmount);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	float GetAttackRangeOffset();
	struct FVector GetTargetingLocation(class AActor* RequestedBy);
	float GetPhysicalTowerDamageMultiplier();
	float GetPhysicalTowerHealthMultiplier();
	float GetAuraDamageMultiplier();
	unsigned long UseForTowerSelectionPassThrough();
	float GetTowerTargetingDesirability(class ADunDefTower* forTower);
	float GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer);
	void ActivatePlaneBeam();
	void ActivateBeam();
	void ModifyTranslation();
	void SetUpCollisionMesh();
	struct FVector GetCollisionPoint();
	struct FVector GetSecondBeamPoint();
	void ScaleInBeams(float DeltaTime);
	void StartBeams();
	void PostBeginPlay();
	void SetPlacementPoints(TArray<struct FVector> SpawnPoints, class ADunDefTower* NodeTemplate);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefPlayer_Hovering
// 0x002C (0x0DCC - 0x0DA0)
class ADunDefPlayer_Hovering : public ADunDefPlayer
{
public:
	struct FName                                       HoveringBlenderName;                                      // 0x0DA0(0x0008) (Edit)
	float                                              HoverOnBlendTime;                                         // 0x0DA8(0x0004) (Edit)
	float                                              HoverOffBlendTime;                                        // 0x0DAC(0x0004) (Edit)
	class USoundCue*                                   HoveringStartSound;                                       // 0x0DB0(0x0004) (Edit)
	class USoundCue*                                   HoveringStopSound;                                        // 0x0DB4(0x0004) (Edit)
	class UParticleSystemComponent*                    HoveringParticleSystem;                                   // 0x0DB8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UAudioComponent*                             HoveringLoopSound;                                        // 0x0DBC(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       HoveringParticleSystemAttachSocketName;                   // 0x0DC0(0x0008) (Edit)
	class UAnimNodeBlend*                              HoveringBlender;                                          // 0x0DC8(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_Hovering");
		return ptr;
	}


	void PostBeginPlay();
	void StopHovering();
	void StartHovering();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefPlayer_Summoner
// 0x00A8 (0x0E74 - 0x0DCC)
class ADunDefPlayer_Summoner : public ADunDefPlayer_Hovering
{
public:
	struct FName                                       WheelEntryToOpenOnFire;                                   // 0x0DCC(0x0008) (Edit)
	struct FName                                       AbilityToActivateOnFire;                                  // 0x0DD4(0x0008) (Edit)
	TArray<class ADunDefTower_SummonEnemy*>            currentSelectedTowers;                                    // 0x0DDC(0x000C) (NeedCtorLink)
	struct FLinearColor                                SummonBarTextColor;                                       // 0x0DE8(0x0010) (Edit)
	struct FLinearColor                                SummonBarColor;                                           // 0x0DF8(0x0010) (Edit)
	class UParticleSystemComponent*                    HoverEffect;                                              // 0x0E08(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    BookHoverEffect;                                          // 0x0E0C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    LeftHandGlow;                                             // 0x0E10(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    RightHandGlow;                                            // 0x0E14(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       RightHandSocket;                                          // 0x0E18(0x0008) (Edit)
	struct FName                                       LeftHandSocket;                                           // 0x0E20(0x0008) (Edit)
	struct FName                                       HoverSocket;                                              // 0x0E28(0x0008) (Edit)
	struct FName                                       BookHoverSocket;                                          // 0x0E30(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     RepairingTowerWeaponEmitterTemplate;                      // 0x0E38(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     UpgradingTowerWeaponEmitterTemplate;                      // 0x0E3C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     HealingSelfWeaponEmitterTemplate;                         // 0x0E40(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     SummoningTowerWeaponEmitterTemplate;                      // 0x0E44(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     DetonatingTrapsEmitterTemplate;                           // 0x0E48(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     SellTowerEmitterTemplate;                                 // 0x0E4C(0x0004) (Edit)
	class UTexture2D*                                  OverlordMiniMapIconTexture;                               // 0x0E50(0x0004) (Edit)
	TArray<class UMaterialInstanceConstant*>           phaseShiftMICoverride;                                    // 0x0E54(0x000C) (Edit, NeedCtorLink)
	float                                              cameraIconSize;                                           // 0x0E60(0x0004) (Edit)
	class UAudioComponent*                             OrderIssuedUnitCommand;                                   // 0x0E64(0x0004) (ExportObject, Component, EditInline)
	unsigned long                                      bIsPhased : 1;                                            // 0x0E68(0x0004) (Net)
	class ADunDefPlayerAbility_PhaseShift*             myPhaseShiftAbility;                                      // 0x0E6C(0x0004) (Net, Transient)
	class ADunDefEmitterSpawnable*                     castingSpellEmitter;                                      // 0x0E70(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_Summoner");
		return ptr;
	}


	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	TArray<class UMaterialInstanceConstant*> GetPhaseShiftMaterials();
	void IssuedCommand();
	class ADunDefEmitterSpawnable* GetSellTowerEmitter();
	class ADunDefEmitterSpawnable* GetTrapDetonationEmitter();
	class ADunDefEmitterSpawnable* GetUpgradingWeaponEmitter();
	class ADunDefEmitterSpawnable* GetWeaponRepairEmitter();
	class ADunDefEmitterSpawnable* GetHealingWeaponEmitter();
	class ADunDefEmitterSpawnable* GetSummoningTowerEmitter();
	void StopSpellEmitter();
	void StartSpellEmitter(class ADunDefEmitterSpawnable* Template, unsigned long DontSetAsPrimaryEffect, unsigned long IsSpawnEffect, unsigned long bForceSpawnOnWeapon);
	unsigned long AllowDropPickups();
	void SetOwnerNoSee(unsigned long ownerNoSee, unsigned long ownerNoSeeWeapon);
	unsigned long Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	float GetEnemyTargetingDesirability(class AEngineNativeDunDefAIController* forController);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	void PhaseScaleDown();
	void UsedAbility(class ADunDefPlayerAbility* ability);
	void CheckForTokens();
	unsigned long AllowFamiliarAbilities(class UHeroEquipment_Familiar* askingFamiliar);
	void AttachAllEquipment();
	void DetachAllEquipment();
	void SetPhased(unsigned long bNewPhaseState);
	unsigned long AllowEquipmentAttachment();
	void Destroyed();
	void StopFire(unsigned char FireModeNum);
	void StartFire(unsigned char FireModeNum);
	TArray<class ADunDefTower_SummonEnemy*> GetSelectedTowers();
	void RemoveSelectedTower(class ADunDefTower_SummonEnemy* RemoveTower);
	void ServerRemoveSelectedTower(class ADunDefTower_SummonEnemy* RemoveTower);
	void RemoveAllSelectedTowers();
	unsigned long HasSelectedTower(class ADunDefTower_SummonEnemy* chkTower);
	void AddSelectedTowerGroup(TArray<class ADunDefTower_SummonEnemy*> newTowers);
	void ServerAddSelectedTower(class ADunDefTower_SummonEnemy* newTower);
	void AddSelectedTower(class ADunDefTower_SummonEnemy* newTower);
	void ClientSetupColors();
	void SetMyCustomColors(class ADunDefPlayerController* aController, class UDunDefHero* usingHero);
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefDamageType_ProtoBeam
// 0x0000 (0x00D4 - 0x00D4)
class UDunDefDamageType_ProtoBeam : public UDunDefDamageType_Passive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefDamageType_ProtoBeam");
		return ptr;
	}

};


// Class DunDefSpecial.DunDefDecoyTarget
// 0x005C (0x0570 - 0x0514)
class ADunDefDecoyTarget : public ADunDefDamageableTarget
{
public:
	TEnumAsByte<ELevelUpValueType>                     AssociatedHeroStat;                                       // 0x0514(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	float                                              HealthExponent;                                           // 0x0518(0x0004) (Edit)
	float                                              HealthLinearFactor;                                       // 0x051C(0x0004) (Edit)
	float                                              TargetingDesirabilityExponent;                            // 0x0520(0x0004) (Edit)
	unsigned long                                      bDoPoke : 1;                                              // 0x0524(0x0004) (Edit)
	unsigned long                                      bFadedIn : 1;                                             // 0x0524(0x0004) (Transient)
	float                                              PokeRadius;                                               // 0x0528(0x0004) (Edit)
	float                                              PokeAggroAmount;                                          // 0x052C(0x0004) (Edit)
	float                                              ActiveTime;                                               // 0x0530(0x0004) (Edit)
	float                                              ActiveTimeExponent;                                       // 0x0534(0x0004) (Edit)
	float                                              NumAttackersExponent;                                     // 0x0538(0x0004) (Edit)
	TArray<class UClass*>                              NoPokeClasses;                                            // 0x053C(0x000C) (Edit, NeedCtorLink)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0548(0x0004) (Edit, ExportObject, Component, EditInline)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x054C(0x0004) (Edit, ExportObject, Component, EditInline)
	class ADunDefEmitterSpawnable*                     SpawnedEmitter;                                           // 0x0550(0x0004) (Edit)
	class UMaterialInterface*                          MyMaterial;                                               // 0x0554(0x0004) (Edit)
	struct FName                                       MaterialFadeInName;                                       // 0x0558(0x0008) (Edit)
	float                                              FadeInTime;                                               // 0x0560(0x0004) (Edit)
	class UTexture2D*                                  MiniMapIconTexture;                                       // 0x0564(0x0004) (Edit)
	float                                              MiniMapIconSize;                                          // 0x0568(0x0004) (Edit)
	class UMaterialInstanceConstant*                   myMIC;                                                    // 0x056C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefDecoyTarget");
		return ptr;
	}


	float DTGetEnemyTargetingDesirability(class ADunDefEnemyController* forController);
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	void PlayDeath();
	unsigned long AllowHeroGUID(int GUID1, int GUID2, int GUID3, int GUID4);
	unsigned long CanDetonate();
	void Detonate(int SetDetonationsNumber);
	void SelfDestruct();
	void ScaleForHeroModifiers(unsigned long IsFirstTime);
	unsigned long IsClassOnIgnoreList(class UClass* ActorClass);
	unsigned long SetMaxNumberOfAttackers();
	void SetActiveTime();
	void DoPoke();
	void SetDesirability();
	void SetHealth();
	void Tick(float DeltaTime);
	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	void Destroyed();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefDropOffPoint
// 0x01BC (0x06D0 - 0x0514)
class ADunDefDropOffPoint : public ADunDefDamageableTarget
{
public:
	class ADunDefPlayer*                               theDroppingOffActor;                                      // 0x0514(0x0004) (Net)
	TArray<class ADunDefPickupableItem*>               droppedOffItems;                                          // 0x0518(0x000C) (NeedCtorLink)
	class UDecalComponent*                             Decal;                                                    // 0x0524(0x0004) (Edit, ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      MyMesh;                                                   // 0x0528(0x0004) (Edit, ExportObject, Component, EditInline)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x052C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0530(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    DropOffParticleComponent;                                 // 0x0534(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    DropOffCompletedParticleComponent;                        // 0x0538(0x0004) (Edit, ExportObject, Component, EditInline)
	class UAudioComponent*                             DropOffSoundComp;                                         // 0x053C(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<struct FName>                               TakeHitAnims;                                             // 0x0540(0x000C) (Edit, NeedCtorLink)
	struct FName                                       CustomAnimName;                                           // 0x054C(0x0008) (Edit)
	class USoundCue*                                   DropOffFullSound;                                         // 0x0554(0x0004) (Edit)
	class USoundCue*                                   DroppedOffItemSound;                                      // 0x0558(0x0004) (Edit)
	class USoundCue*                                   DropOffPointDiedSound;                                    // 0x055C(0x0004) (Edit)
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                           // 0x0560(0x0004) (Transient)
	float                                              PushOutOffset;                                            // 0x0564(0x0004) (Edit)
	float                                              RotPlacementInc;                                          // 0x0568(0x0004) (Edit)
	float                                              FullOpacityValue;                                         // 0x056C(0x0004) (Edit)
	struct FColor                                      DropOffUnderAttackMessageColor;                           // 0x0570(0x0004) (Edit)
	struct FColor                                      DropOffDestroyedColor;                                    // 0x0574(0x0004) (Edit)
	struct FString                                     DropOffUnderAttackMessageString;                          // 0x0578(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     DropOffDestroyedString;                                   // 0x0584(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     DropOffString;                                            // 0x0590(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     BeganDroppingOffString;                                   // 0x059C(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              DropOffTime;                                              // 0x05A8(0x0004) (Edit)
	class ADunDefTouchForwardingActor*                 myTouchForwardingActor;                                   // 0x05AC(0x0004) (Edit)
	class UTexture2D*                                  ActiveDropsTexture;                                       // 0x05B0(0x0004) (Edit)
	class UTexture2D*                                  ActiveDropsBGTexture;                                     // 0x05B4(0x0004) (Edit)
	class UTexture2D*                                  IconBGTexture;                                            // 0x05B8(0x0004) (Edit)
	class UTexture2D*                                  IconTexture;                                              // 0x05BC(0x0004) (Edit)
	float                                              MiniMapScale;                                             // 0x05C0(0x0004) (Edit)
	float                                              MiniMapOpacity;                                           // 0x05C4(0x0004) (Edit)
	struct FVector                                     MiniMapOffset;                                            // 0x05C8(0x000C) (Edit)
	struct FVector                                     ActiveDisplayOffset;                                      // 0x05D4(0x000C) (Edit)
	float                                              TileTextOffsetY;                                          // 0x05E0(0x0004) (Edit)
	float                                              TileTextOffsetX;                                          // 0x05E4(0x0004) (Edit)
	float                                              ActiveDisplayScale;                                       // 0x05E8(0x0004) (Edit)
	float                                              IconBGScale;                                              // 0x05EC(0x0004) (Edit)
	float                                              IconBGSizeX;                                              // 0x05F0(0x0004) (Edit)
	float                                              IconBGSizeY;                                              // 0x05F4(0x0004) (Edit)
	float                                              IconBGOffsetX;                                            // 0x05F8(0x0004) (Edit)
	float                                              IconBGOffsetY;                                            // 0x05FC(0x0004) (Edit)
	float                                              ActiveDisplaySizeX;                                       // 0x0600(0x0004) (Edit)
	float                                              ActiveDisplaySizeY;                                       // 0x0604(0x0004) (Edit)
	float                                              ActiveDisplayTextScale;                                   // 0x0608(0x0004) (Edit)
	float                                              TileScale;                                                // 0x060C(0x0004) (Edit)
	float                                              ActiveDisplayOffsetX;                                     // 0x0610(0x0004) (Edit)
	float                                              ActiveDisplayOffsetY;                                     // 0x0614(0x0004) (Edit)
	float                                              TileOffsetY;                                              // 0x0618(0x0004) (Edit)
	float                                              TileOffsetX;                                              // 0x061C(0x0004) (Edit)
	float                                              TileSizeX;                                                // 0x0620(0x0004) (Edit)
	float                                              TileSizeY;                                                // 0x0624(0x0004) (Edit)
	float                                              ActiveDisplayTextOffsetX;                                 // 0x0628(0x0004) (Edit)
	float                                              ActiveDisplayTextOffsetY;                                 // 0x062C(0x0004) (Edit)
	struct FString                                     fullString;                                               // 0x0630(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     ActiveString;                                             // 0x063C(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     DroppingOffString;                                        // 0x0648(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              MinFadeDistance;                                          // 0x0654(0x0004) (Edit)
	float                                              FadeDistanceOffset;                                       // 0x0658(0x0004) (Edit)
	float                                              MinFadeOpacity;                                           // 0x065C(0x0004) (Edit)
	float                                              FadeDotExponent;                                          // 0x0660(0x0004) (Edit)
	struct FColor                                      ActiveDisplayTextColor;                                   // 0x0664(0x0004) (Edit)
	float                                              TowerPreventionRadius;                                    // 0x0668(0x0004) (Edit)
	float                                              DamageNotifyInterval;                                     // 0x066C(0x0004) (Edit)
	float                                              IndicateDamageTime;                                       // 0x0670(0x0004) (Edit)
	struct FName                                       ActiveScalarParamName;                                    // 0x0674(0x0008) (Edit)
	int                                                ActiveMICIndex;                                           // 0x067C(0x0004) (Edit)
	class UMaterialInstanceConstant*                   ActiveMIC;                                                // 0x0680(0x0004)
	int                                                MaxHoldableDropOffs;                                      // 0x0684(0x0004) (Edit, Net)
	int                                                currentDropOffTime;                                       // 0x0688(0x0004)
	float                                              accumulatedDropOffTime;                                   // 0x068C(0x0004)
	int                                                currentNumDropOffs;                                       // 0x0690(0x0004) (Net)
	unsigned long                                      bIsActive : 1;                                            // 0x0694(0x0004) (Net)
	unsigned long                                      bStartedDangerFadeIn : 1;                                 // 0x0694(0x0004) (Transient)
	unsigned long                                      bDropOffFilled : 1;                                       // 0x0694(0x0004) (Net)
	class UMaterialInterface*                          InDangerHUDWaypointMatHealthBar;                          // 0x0698(0x0004) (Edit)
	class UMaterialInterface*                          InDangerHUDWaypointMat;                                   // 0x069C(0x0004) (Edit)
	class UMaterialInstanceConstant*                   InDangerHUDWaypointMatHealthBarInst;                      // 0x06A0(0x0004) (Transient)
	float                                              InDangerHUDFadeOutTime;                                   // 0x06A4(0x0004) (Edit)
	float                                              InDangerHUDFadeInTime;                                    // 0x06A8(0x0004) (Edit)
	float                                              LastStartedDangerFadeInTime;                              // 0x06AC(0x0004) (Transient)
	float                                              WarningIconCenterYOffset;                                 // 0x06B0(0x0004) (Edit)
	float                                              WarningIconCenterScale;                                   // 0x06B4(0x0004) (Edit)
	struct FString                                     DropOffFilledMessage;                                     // 0x06B8(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      DifficultyHealthMultipliers;                              // 0x06C4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefDropOffPoint");
		return ptr;
	}


	unsigned long PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius);
	unsigned long AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point);
	unsigned long CheckAllowance();
	float DTGetEnemyTargetingDesirability(class ADunDefEnemyController* forController);
	void PostBeginPlay();
	void NotifyPackageDestroyed();
	void Died(class AController* EventInstigator, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser);
	void NotifyHealthChange();
	void PlayHitEffect(class UClass* DamageType, const struct FVector& HitLocation);
	void AdjustDamage(class UClass* DamageType, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FTraceHitInfo& HitInfo, int* DamageAmount, struct FVector* Momentum);
	unsigned long OnlyDrawHUDForOwner();
	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	void DrawActiveDisplay(class UCanvas* C, const struct FVector& ScreenPos, float Scale, float Opacity, unsigned long bIsMiniMap);
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	void DeactivatePoint();
	void TurnOffActiveEffects();
	void TurnOnActiveEffects();
	void ActivatePoint(int maxDropOffs);
	void ClearDropOffActor();
	void SetDropOffActor(class ADunDefPlayer* DoA);
	void NotifyPackageDropOff(class ADunDefPlayer* theDropper);
	void PlaceNewItem(class ADunDefPickupableItem* NewItem);
	unsigned long IsFull();
	void RemoveDropOffItem(class ADunDefPickupableItem* RemoveItem);
	void DropOffUnFilled();
	void DropOffFilled();
	void AddDropOffItem(class ADunDefPlayer* droppedOffActor);
	void UpdateDropOff(float DeltaTime);
	void Tick(float DeltaTime);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefPickupableItem
// 0x00A0 (0x02C4 - 0x0224)
class ADunDefPickupableItem : public ADunDefDroppedItem
{
public:
	class UParticleSystemComponent*                    DropOffParticleComponent;                                 // 0x0224(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    PickedUpParticleComponent;                                // 0x0228(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<class UStaticMesh*>                         myMeshes;                                                 // 0x022C(0x000C) (Edit, NeedCtorLink)
	int                                                myMeshIndex;                                              // 0x0238(0x0004) (Net)
	class UStaticMeshComponent*                        myActiveMesh;                                             // 0x023C(0x0004) (ExportObject, Component, EditInline)
	class ADunDefEmitterSpawnable*                     PackageDestroyTemplate;                                   // 0x0240(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     PickUpEmitter;                                            // 0x0244(0x0004) (Edit)
	float                                              MaxPickupDistance;                                        // 0x0248(0x0004) (Edit)
	float                                              PickupWeighting;                                          // 0x024C(0x0004) (Edit)
	float                                              PickupOffset;                                             // 0x0250(0x0004) (Edit)
	struct FColor                                      ToolTipDrawColor;                                         // 0x0254(0x0004) (Edit)
	struct FString                                     PickUpString;                                             // 0x0258(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     PickedUpHudMessage;                                       // 0x0264(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     LostPackageString;                                        // 0x0270(0x000C) (Edit, Localized, NeedCtorLink)
	unsigned long                                      bModifyTargetingDesirability : 1;                         // 0x027C(0x0004) (Edit)
	unsigned long                                      bAllowLonePickUp : 1;                                     // 0x027C(0x0004) (Edit)
	unsigned long                                      bIsPickedUp : 1;                                          // 0x027C(0x0004) (Net)
	unsigned long                                      bCanBePickedUp : 1;                                       // 0x027C(0x0004) (Net)
	unsigned long                                      bIsDroppingOff : 1;                                       // 0x027C(0x0004) (Net)
	float                                              ModifiedTargetingDesirability;                            // 0x0280(0x0004) (Edit)
	int                                                MaxAllowedPickUpHits;                                     // 0x0284(0x0004) (Edit)
	int                                                MaxDroppedHealth;                                         // 0x0288(0x0004) (Edit)
	int                                                currentHealth;                                            // 0x028C(0x0004)
	class UTexture2D*                                  OffScreenWaypointTexture;                                 // 0x0290(0x0004) (Edit)
	class UTexture2D*                                  OnScreenWaypointTexture;                                  // 0x0294(0x0004) (Edit)
	class UTexture2D*                                  WayPointToMe;                                             // 0x0298(0x0004) (Edit)
	float                                              WaypointIconOffscreenScale;                               // 0x029C(0x0004) (Edit)
	float                                              WaypointIconCenterScale;                                  // 0x02A0(0x0004) (Edit)
	float                                              WaypointCenterYOffset;                                    // 0x02A4(0x0004) (Edit)
	struct FColor                                      WayPtColor;                                               // 0x02A8(0x0004) (Edit)
	struct FColor                                      PickedUpColor;                                            // 0x02AC(0x0004) (Edit)
	class USoundCue*                                   PickupSound;                                              // 0x02B0(0x0004) (Edit)
	class ADunDefDropOffPoint*                         closestDropOffPoint;                                      // 0x02B4(0x0004)
	class ADunDefPickupableSpawner*                    myPickupSpawner;                                          // 0x02B8(0x0004) (Net)
	class ADunDefPlayer*                               ItemHolder;                                               // 0x02BC(0x0004)
	class ADunDefDropOffPoint*                         myDropOffPoint;                                           // 0x02C0(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPickupableItem");
		return ptr;
	}


	void SetDroppingOff(unsigned long IsDroppingOff, class ADunDefDropOffPoint* newDP);
	void Destroyed();
	void NotifyHolderLost(class ADunDefPlayer* lostHolder);
	void DoDestroyEffects();
	void DestroyPickUp(unsigned long bFromDamage);
	void PlaceAtPoint(const struct FVector& NewLoc);
	void DropOffItem(class ADunDefDropOffPoint* DropOffPoint);
	void DrawWaypointToMe(class ADunDefHUD* H);
	void GetDropOffWayPt();
	unsigned long OnlyDrawHUDForOwner();
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	unsigned long CanBePickedUp(class ADunDefPlayerController* PC);
	void PickupItem(class ADunDefPlayer* newHolder);
	void BeginBeingPickedUp(class ADunDefPlayerController* newHolder);
	void AttachToSpawner();
	void InitMesh(class ADunDefPickupableSpawner* MySpawner);
	int GetToolTipPriority();
	unsigned long TakesToolTipPriority(const TScriptInterface<class UDunDefToolTipInterface>& otherToolTip);
	unsigned long ContinueDrawingToolTip(unsigned long ContinueDrawing);
	void DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer);
	unsigned long AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point);
	unsigned long CheckAllowance();
	unsigned long PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius);
	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	float GetActivationOffset();
	float GetActivationWeighting();
	void Client_Activate(class ADunDefPlayerController* PC, int activationType);
	void Server_Activate(class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType);
	int AllowActivation(class ADunDefPlayerController* PC, int activationType);
	void SetMyActiveMesh(int MeshIndex);
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefTouchForwardingActor
// 0x0008 (0x0224 - 0x021C)
class ADunDefTouchForwardingActor : public AActor
{
public:
	class AActor*                                      TouchParent;                                              // 0x021C(0x0004) (Edit)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x0220(0x0004) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTouchForwardingActor");
		return ptr;
	}


	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SetTouchParent(class AActor* NewParent);
};


// Class DunDefSpecial.DunDefPlayerController_Delivery
// 0x0008 (0x0B40 - 0x0B38)
class ADunDefPlayerController_Delivery : public ADunDefPlayerController
{
public:
	class ADunDefPickupableItem*                       myCarriedItem;                                            // 0x0B38(0x0004)
	int                                                carriedHitsTaken;                                         // 0x0B3C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerController_Delivery");
		return ptr;
	}


	void PawnDied(class APawn* inPawn);
	void NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum);
	void DropCurrentItem();
	void PickupItem(class ADunDefPickupableItem* newPickup);
};


// Class DunDefSpecial.DunDefGRI_Delivery
// 0x0084 (0x07A8 - 0x0724)
class ADunDefGRI_Delivery : public ADunDefGameReplicationInfo
{
public:
	TArray<class ADunDefDropOffPoint*>                 worldDropOffPts;                                          // 0x0724(0x000C) (NeedCtorLink)
	TArray<class ADunDefDropOffPoint*>                 activeDropOffPoints;                                      // 0x0730(0x000C) (NeedCtorLink)
	int                                                NumFullPoints;                                            // 0x073C(0x0004) (Net)
	struct FColor                                      DeliveryTextColor;                                        // 0x0740(0x0004)
	struct FColor                                      DeliveryStatusTextColor;                                  // 0x0744(0x0004)
	class ADunDefPlayerAbility_PickUpItem*             PickupItemAbilityTemplate;                                // 0x0748(0x0004)
	unsigned long                                      bDoneDoingDelivery : 1;                                   // 0x074C(0x0004) (Net)
	unsigned long                                      bDisableTimer : 1;                                        // 0x074C(0x0004) (Net)
	unsigned long                                      bDisableTimerBySpeedBuild : 1;                            // 0x074C(0x0004)
	TArray<class ADunDefPlayer*>                       PackageHolders;                                           // 0x0750(0x000C) (NeedCtorLink)
	float                                              PackageHoldingGroundSpeed;                                // 0x075C(0x0004)
	float                                              DeliveryTimeLimit;                                        // 0x0760(0x0004) (Net)
	struct FString                                     TimeLimitString;                                          // 0x0764(0x000C) (Localized, NeedCtorLink)
	struct FString                                     DeliveryLimitString;                                      // 0x0770(0x000C) (Localized, NeedCtorLink)
	struct FString                                     DeliveryString;                                           // 0x077C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     DropOffString;                                            // 0x0788(0x000C) (Localized, NeedCtorLink)
	struct FString                                     PickUpString;                                             // 0x0794(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      TimeLimitTextColor;                                       // 0x07A0(0x0004)
	class ADunDefPickupableItem*                       currentDeliveryItem;                                      // 0x07A4(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_Delivery");
		return ptr;
	}


	unsigned long AllowedToTeleport(class APawn* Teleportee);
	void SetCurrentDeliveryItem(class ADunDefPickupableItem* NewItem);
	void RemovePackageHolder(class ADunDefPlayer* aPlayer);
	void AddPackageHolder(class ADunDefPlayer* aPlayer);
	float ModifyPlayerGroundSpeed(class ADunDefPlayer* aPlayer, float theGroundSpeed);
	unsigned long AllowPackageSpawn();
	void SetInCombatPhase(unsigned long inCombatPhase);
	void DrawMyHUD(class ADunDefHUD* H);
	void ClearDropPoints();
	void NotifyLostDropOffPoint(class ADunDefDropOffPoint* lostPoint);
	void NotifyFilledDropOffPoint(class ADunDefDropOffPoint* filledPoint);
	void SelectNewDropOffPoint();
	void Server_AddGRIHeroAbilities(class ADunDefPlayerController* PC);
	void EndBuildPhase();
	void Tick(float DeltaTime);
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefEnemyCrystalCore
// 0x0038 (0x054C - 0x0514)
class ADunDefEnemyCrystalCore : public ADunDefDamageableTarget
{
public:
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x0514(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    CoreParticleEffect;                                       // 0x0518(0x0004) (Edit, ExportObject, Component, EditInline)
	class UAudioComponent*                             MyAmbientSound;                                           // 0x051C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UPointLightComponent*                        CoreLight;                                                // 0x0520(0x0004) (Edit, ExportObject, Component, EditInline)
	class UTexture2D*                                  MiniMapIconTexture;                                       // 0x0524(0x0004) (Edit)
	float                                              MiniMapIconSize;                                          // 0x0528(0x0004) (Edit)
	TArray<float>                                      DifficultyHealthMultipliers;                              // 0x052C(0x000C) (Edit, NeedCtorLink)
	int                                                MaxDifficultySets;                                        // 0x0538(0x0004) (Edit)
	unsigned long                                      bScaleWithPlayerCount : 1;                                // 0x053C(0x0004) (Edit)
	TArray<float>                                      PlayerCountHealthMultipliers;                             // 0x0540(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefEnemyCrystalCore");
		return ptr;
	}


	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	void Destroyed();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefFlashHeal
// 0x0048 (0x031C - 0x02D4)
class ADunDefFlashHeal : public ADunDefEmitterSpawnable
{
public:
	float                                              HealthPercentToHeal;                                      // 0x02D4(0x0004) (Edit)
	float                                              HealthPercentToHealExp;                                   // 0x02D8(0x0004) (Edit)
	float                                              MaxHealPct;                                               // 0x02DC(0x0004) (Edit)
	float                                              HealRadius;                                               // 0x02E0(0x0004) (Edit)
	float                                              HealRadiusExp;                                            // 0x02E4(0x0004) (Edit)
	float                                              EffectRadius;                                             // 0x02E8(0x0004) (Edit)
	float                                              HealDelay;                                                // 0x02EC(0x0004) (Edit)
	TEnumAsByte<ELevelUpValueType>                     ScalingHeroStatType;                                      // 0x02F0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	unsigned long                                      bHealSameTeamOnly : 1;                                    // 0x02F4(0x0004) (Edit)
	class UClass*                                      HealDamageType;                                           // 0x02F8(0x0004) (Edit)
	TArray<class UClass*>                              AllowedHealClasses;                                       // 0x02FC(0x000C) (Edit, NeedCtorLink)
	class ADunDefEmitterSpawnable*                     HealEmitter;                                              // 0x0308(0x0004) (Edit)
	struct FString                                     DummyPercentHealingString;                                // 0x030C(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              HealRadiusMult;                                           // 0x0318(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefFlashHeal");
		return ptr;
	}


	void SpawnHealEmitter(class AActor* HealedActor);
	unsigned long STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot);
	void FlashHeal();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefGRI_Assault
// 0x0058 (0x077C - 0x0724)
class ADunDefGRI_Assault : public ADunDefGameReplicationInfo
{
public:
	int                                                LivesRemaining;                                           // 0x0724(0x0004) (Net)
	struct FString                                     NumLivesString;                                           // 0x0728(0x000C) (Localized, NeedCtorLink)
	struct FString                                     NumCoresString;                                           // 0x0734(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      NumLivesStringColor;                                      // 0x0740(0x0004)
	struct FColor                                      NumCoresStringColor;                                      // 0x0744(0x0004)
	unsigned long                                      HadPositiveCores : 1;                                     // 0x0748(0x0004)
	float                                              KillPhaseTimeLimit;                                       // 0x074C(0x0004) (Net)
	float                                              NightmareGroundSpeedLerp;                                 // 0x0750(0x0004)
	float                                              NightmareTimeLimitMultiplier;                             // 0x0754(0x0004)
	struct FString                                     TimeLimitString;                                          // 0x0758(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      TimeLimitTextColor;                                       // 0x0764(0x0004)
	struct FString                                     DestroyedEnemyCoreString;                                 // 0x0768(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      DestroyedEnemyCoreStringColor;                            // 0x0774(0x0004)
	int                                                LastNumberOfCoresRemaining;                               // 0x0778(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_Assault");
		return ptr;
	}


	unsigned long AllowedToTeleport(class APawn* Teleportee);
	float GetEnemyLifeSpanMultiplier(class ADunDefEnemy* anEnemy);
	float ModifyPlayerGroundSpeed(class ADunDefPlayer* aPlayer, float theGroundSpeed);
	float GetTrapRangeMultiplier(class ADunDefTower_DetonationType* aTrap);
	float GetAuraRangeMultiplier(class ADunDefTower_Aura* anAura);
	float GetTrapDamageMultiplier(class ADunDefTower_DetonationType* aTrap);
	float GetTrapHealthMultiplier(class ADunDefTower_DetonationType* aTrap);
	float GetStrengthDrainAuraMultiplier(class ADunDefTower_AuraStrengthDrain* anAura);
	float GetAuraDamageMultiplier(class ADunDefTower_Aura* anAura);
	float GetAuraHealthMultiplier(class ADunDefTower_Aura* anAura);
	float GetProjectileLimitDistance(class AActor* anInstigator, float originalLimit);
	void PostBeginPlay();
	void Tick(float DeltaTime);
	int GetNumberOfEnemyCoresRemaining();
	void DrawMyHUD(class ADunDefHUD* H);
	void RestartedPlayer(class ADunDefPlayerController* NewPlayer);
	unsigned long CanEnterSpectatorMode(class ADunDefPlayerController* thePlayerController);
	unsigned long CanRespawnPlayer(class ADunDefPlayerController* thePlayerController);
};


// Class DunDefSpecial.DunDefGRI_Chicken
// 0x0094 (0x07B8 - 0x0724)
class ADunDefGRI_Chicken : public ADunDefGameReplicationInfo
{
public:
	int                                                LivesRemaining;                                           // 0x0724(0x0004) (Net)
	struct FString                                     NumLivesString;                                           // 0x0728(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      NumLivesStringColor;                                      // 0x0734(0x0004)
	class ADunDefPlayer*                               ChickenPlayer;                                            // 0x0738(0x0004) (Net)
	struct FString                                     IsTheChickenString;                                       // 0x073C(0x000C) (Localized, NeedCtorLink)
	struct FString                                     MSG_YouAreTheChicken;                                     // 0x0748(0x000C) (Localized, NeedCtorLink)
	struct FString                                     SpectatorNoLivesWaitString;                               // 0x0754(0x000C) (Localized, NeedCtorLink)
	struct FString                                     MSG_WillBecomeChicken;                                    // 0x0760(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      ChickenMessageColor;                                      // 0x076C(0x0004)
	struct FColor                                      ChickenMessageYouColor;                                   // 0x0770(0x0004)
	class UTexture2D*                                  ChickenIcon;                                              // 0x0774(0x0004)
	struct FVector                                     ChickenIconPositionOffset;                                // 0x0778(0x000C)
	float                                              ChickenIconPositionHeightScale;                           // 0x0784(0x0004)
	float                                              ChickenIconSize;                                          // 0x0788(0x0004)
	class USoundCue*                                   ChickenSoundEffect;                                       // 0x078C(0x0004)
	TArray<int>                                        LivesRemainings;                                          // 0x0790(0x000C) (NeedCtorLink)
	unsigned long                                      bSentChickenChangeNotification : 1;                       // 0x079C(0x0004) (Transient)
	unsigned long                                      bWasAChicken : 1;                                         // 0x079C(0x0004) (Transient)
	unsigned long                                      bIsSinglePlayer : 1;                                      // 0x079C(0x0004) (Transient)
	float                                              LastChickenChangeTime;                                    // 0x07A0(0x0004) (Transient)
	class ADunDefPlayer*                               NewChickenPlayer;                                         // 0x07A4(0x0004) (Transient)
	float                                              ChickenChangeNotificationInterval;                        // 0x07A8(0x0004)
	float                                              ChickenChangeInterval;                                    // 0x07AC(0x0004)
	float                                              SinglePlayerChickenTimeout;                               // 0x07B0(0x0004) (Transient)
	float                                              SinglePlayerCombatStartChickenInterval;                   // 0x07B4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_Chicken");
		return ptr;
	}


	void PostBeginPlay();
	struct FString GetSpectatorWaitString();
	void RestartedPlayer(class ADunDefPlayerController* NewPlayer);
	unsigned long CanEnterSpectatorMode(class ADunDefPlayerController* thePlayerController);
	unsigned long CanRespawnPlayer(class ADunDefPlayerController* thePlayerController);
	void DrawMyHUD(class ADunDefHUD* H);
	void BeganCombatPhase();
	void SetChickenPlayer(class ADunDefPlayer* theNewChickenPlayer);
	class ADunDefPlayer* GetRandomPlayer();
	void Tick(float DeltaTime);
	void SetInCombatPhase(unsigned long inCombatPhase);
	void NotifyOfChicken(class ADunDefPlayerController* PC);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefPlayerAbility_PickUpItem
// 0x0008 (0x0470 - 0x0468)
class ADunDefPlayerAbility_PickUpItem : public ADunDefPlayerAbility_GenericSpellTimer
{
public:
	class ADunDefPickupableItem*                       PickupItem;                                               // 0x0468(0x0004) (Net)
	class USoundCue*                                   StartPickingupSound;                                      // 0x046C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_PickUpItem");
		return ptr;
	}


	void RequestPickup(class ADunDefPickupableItem* NewItem);
};


// Class DunDefSpecial.DunDefMapInfo_Delivery
// 0x003C (0x03AC - 0x0370)
class UDunDefMapInfo_Delivery : public UDunDefMapInfo
{
public:
	TArray<struct FTimes>                              DifficultyTimeLimits;                                     // 0x0370(0x000C) (Edit, NeedCtorLink)
	TArray<struct FPerDifficulty>                      NumPlayerTimeMultiplier;                                  // 0x037C(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        DropPointsPerWave;                                        // 0x0388(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        DUPerWave;                                                // 0x0394(0x000C) (Edit, NeedCtorLink)
	TArray<int>                                        NumDropOffsPerPoints;                                     // 0x03A0(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefMapInfo_Delivery");
		return ptr;
	}


	int GetPointDropOffCount();
	int GetDUForWave(int waveNumber);
	float GetTimeLimit(int waveNumber, int difficulty, int NumPlayers);
	int GetWaveDropOffCount(int waveNumber);
};


// Class DunDefSpecial.DunDefManaToken_Golden
// 0x0003 (0x0374 - 0x0371)
class ADunDefManaToken_Golden : public ADunDefManaToken
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefManaToken_Golden");
		return ptr;
	}


	void Collected(class ADunDefPlayer* byPlayer);
};


// Class DunDefSpecial.DunDefGRI_GoldenTokens
// 0x0074 (0x0798 - 0x0724)
class ADunDefGRI_GoldenTokens : public ADunDefGameReplicationInfo
{
public:
	class ADunDefEnemy*                                GoldenEnemy;                                              // 0x0724(0x0004) (Net)
	class ADunDefEnemy*                                PreviousGoldenEnemy;                                      // 0x0728(0x0004)
	class UParticleSystemComponent*                    PreviousGoldEffectComp;                                   // 0x072C(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystem*                             GoldParticleEffect;                                       // 0x0730(0x0004)
	class ADunDefManaToken_Golden*                     GoldenManaTokenTemplate;                                  // 0x0734(0x0004)
	struct FString                                     GoldenManaTokenCollectedString;                           // 0x0738(0x000C) (Localized, NeedCtorLink)
	struct FString                                     AllGoldenManaTokenCollectedString;                        // 0x0744(0x000C) (Localized, NeedCtorLink)
	struct FString                                     GoldenManaTokensToCollectString;                          // 0x0750(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      GoldenManaTokenCollectedStringColor;                      // 0x075C(0x0004)
	struct FColor                                      AllGoldenManaTokenCollectedStringColor;                   // 0x0760(0x0004)
	class UMaterialInstanceConstant*                   GoldMaterialTemplate;                                     // 0x0764(0x0004)
	int                                                NumSpawners;                                              // 0x0768(0x0004)
	int                                                NumGoldenTokens;                                          // 0x076C(0x0004) (Net)
	int                                                LastNumGoldenTokens;                                      // 0x0770(0x0004)
	float                                              NextGoldenEnemyTimer;                                     // 0x0774(0x0004)
	float                                              GoldenEnemyMinInterval;                                   // 0x0778(0x0004)
	float                                              GoldenEnemyMaxInterval;                                   // 0x077C(0x0004)
	float                                              MaxGoldenEnemyAge;                                        // 0x0780(0x0004)
	float                                              GoldenTokenRequirementWaveMultiplier;                     // 0x0784(0x0004)
	float                                              TokenEnemyDifficultyOffset;                               // 0x0788(0x0004)
	TArray<class UDunDef_SeqAct_EnemyWaveSpawner*>     UsedSpawners;                                             // 0x078C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_GoldenTokens");
		return ptr;
	}


	void DrawMyHUD(class ADunDefHUD* H);
	void SetInCombatPhase(unsigned long inCombatPhase);
	void CollectedGoldenToken();
	void PawnDied(class APawn* KilledPawn);
	void SetGoldenEnemy(class ADunDefEnemy* Enemy);
	void PostBeginPlay();
	void Tick(float DeltaTime);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit
// 0x0028 (0x074C - 0x0724)
class ADunDefGRI_KillEnemiesTimeLimit : public ADunDefGameReplicationInfo
{
public:
	int                                                LivesRemaining;                                           // 0x0724(0x0004) (Net)
	float                                              KillPhaseTimeLimit;                                       // 0x0728(0x0004) (Net)
	struct FString                                     TimeLimitString;                                          // 0x072C(0x000C) (Localized, NeedCtorLink)
	struct FColor                                      TimeLimitTextColor;                                       // 0x0738(0x0004)
	TArray<int>                                        LivesRemainings;                                          // 0x073C(0x000C) (NeedCtorLink)
	unsigned long                                      bDisableTimer : 1;                                        // 0x0748(0x0004) (Net)
	unsigned long                                      bDisableTimerBySpeedBuild : 1;                            // 0x0748(0x0004)
	unsigned long                                      bNightmareDontAllowRespawn : 1;                           // 0x0748(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit");
		return ptr;
	}


	struct FString GetSpectatorWaitString();
	void RestartedPlayer(class ADunDefPlayerController* NewPlayer);
	unsigned long CanEnterSpectatorMode(class ADunDefPlayerController* thePlayerController);
	unsigned long CanRespawnPlayer(class ADunDefPlayerController* thePlayerController);
	void DrawMyHUD(class ADunDefHUD* H);
	void ReceivedGameClass();
	void SetInCombatPhase(unsigned long inCombatPhase);
	void PostBeginPlay();
	void Tick(float DeltaTime);
};


// Class DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit
// 0x0040 (0x03B0 - 0x0370)
class UDunDefMapInfo_KillEnemiesTimeLimit : public UDunDefMapInfo
{
public:
	TArray<float>                                      TimeLimits;                                               // 0x0370(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      TimeLimitMultipliers;                                     // 0x037C(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      DifficultyTimeLimitAdditions;                             // 0x0388(0x000C) (Edit, NeedCtorLink)
	TArray<struct FTimeLimitAddition>                  WavePlayerTimeLimitAdditions;                             // 0x0394(0x000C) (Edit, NeedCtorLink)
	int                                                KillEnemiesTimeLimitWaveToStartAt;                        // 0x03A0(0x0004) (Edit)
	TArray<int>                                        LivesPerDifficulty;                                       // 0x03A4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit");
		return ptr;
	}


	float GetTimeLimit(int waveNumber);
};


// Class DunDefSpecial.UI_GlobalHUDUberMF
// 0x0018 (0x0720 - 0x0708)
class UUI_GlobalHUDUberMF : public UUI_GlobalHUD
{
public:
	class UUILabel*                                    ScoreLabel;                                               // 0x0708(0x0004) (Edit)
	class UUIPanel*                                    ScorePanel;                                               // 0x070C(0x0004) (Edit)
	class UUILabel*                                    PlayerList;                                               // 0x0710(0x0004) (Edit)
	class UUILabel*                                    ScoreList;                                                // 0x0714(0x0004) (Edit)
	struct FColor                                      LocalPlayerHighLightColor;                                // 0x0718(0x0004) (Edit)
	struct FColor                                      DefaultPlayerHighLightColor;                              // 0x071C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.UI_GlobalHUDUberMF");
		return ptr;
	}


	void GetPlayerList(struct FString* pList, struct FString* sList);
	struct FString GetColorString(const struct FColor& aColor);
	void UpdateScorePanel();
	void Update(float DeltaTime);
};


// Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber
// 0x001C (0x0768 - 0x074C)
class ADunDefGRI_KillEnemiesTimeLimit_Uber : public ADunDefGRI_KillEnemiesTimeLimit
{
public:
	struct FColor                                      WinMsgColor;                                              // 0x074C(0x0004)
	struct FString                                     mvpString;                                                // 0x0750(0x000C) (Localized, NeedCtorLink)
	TArray<float>                                      MoveRepSizes;                                             // 0x075C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber");
		return ptr;
	}


	void Tick(float DeltaTime);
	unsigned long ReadToShowStats();
	struct FColor GetGameOverLabelColor();
	struct FColor GetVictoryLabelColor();
	struct FString GetGameOverLabelString(class APlayerReplicationInfo* myPlayer);
	struct FString GetVictoryLabelString(class APlayerReplicationInfo* myPlayer);
	unsigned long OverrideEndGameLabel();
	class ADunDefPlayerReplicationInfo* GetMVP();
	void DoLevelVictory();
};


// Class DunDefSpecial.DunDefGRI_OgreAlly
// 0x0000 (0x0724 - 0x0724)
class ADunDefGRI_OgreAlly : public ADunDefGameReplicationInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_OgreAlly");
		return ptr;
	}


	void ReceivedGameClass();
	void SetInCombatPhase(unsigned long inCombatPhase);
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefGRI_UberAssault
// 0x000C (0x0788 - 0x077C)
class ADunDefGRI_UberAssault : public ADunDefGRI_Assault
{
public:
	TArray<float>                                      MoveRepSizes;                                             // 0x077C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_UberAssault");
		return ptr;
	}


	void Tick(float DeltaTime);
};


// Class DunDefSpecial.DunDefGRI_UberDefense
// 0x000C (0x0730 - 0x0724)
class ADunDefGRI_UberDefense : public ADunDefGameReplicationInfo
{
public:
	TArray<float>                                      MoveRepSizes;                                             // 0x0724(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_UberDefense");
		return ptr;
	}


	void Tick(float DeltaTime);
};


// Class DunDefSpecial.DunDefGRI_VDay2
// 0x0020 (0x0744 - 0x0724)
class ADunDefGRI_VDay2 : public ADunDefGameReplicationInfo
{
public:
	TArray<int>                                        DefaultLivesRemainings;                                   // 0x0724(0x000C) (NeedCtorLink)
	int                                                LivesRemaining;                                           // 0x0730(0x0004) (Net)
	struct FColor                                      NumLivesStringColor;                                      // 0x0734(0x0004)
	TArray<float>                                      MoveRepSizes;                                             // 0x0738(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_VDay2");
		return ptr;
	}


	void PostBeginPlay();
	void Tick(float DeltaTime);
	void DrawMyHUD(class ADunDefHUD* H);
	struct FString GetGameOverString(int GameOverType, int gameOverNumberAppend);
	void DrawExtraEnemyMinimapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap, class ADunDefEnemy* Enemy);
	void PrintPairMatch(class ADunDefEnemy* aPairMatch1, class ADunDefEnemy* aPairMatch2);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefGRI_ZippyTerror
// 0x0000 (0x0724 - 0x0724)
class ADunDefGRI_ZippyTerror : public ADunDefGameReplicationInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_ZippyTerror");
		return ptr;
	}

};


// Class DunDefSpecial.DunDefHarbinger_v2
// 0x0034 (0x0D48 - 0x0D14)
class ADunDefHarbinger_v2 : public ADunDefEnemy
{
public:
	struct FName                                       ShootFireAnimation;                                       // 0x0D14(0x0008) (Edit)
	struct FName                                       ChargeAnimationName;                                      // 0x0D1C(0x0008) (Edit)
	struct FName                                       ProjectileSpawnSocketNameLeft;                            // 0x0D24(0x0008) (Edit)
	struct FName                                       ProjectileSpawnSocketNameRight;                           // 0x0D2C(0x0008) (Edit)
	struct FName                                       GloveEffectSocketName;                                    // 0x0D34(0x0008) (Edit)
	class UParticleSystemComponent*                    FireGloveEffectComponent;                                 // 0x0D3C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    AuraEffectComponent;                                      // 0x0D40(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    FiringAuraEffect;                                         // 0x0D44(0x0004) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefHarbinger_v2");
		return ptr;
	}


	void FireAttackShootRight();
	void FireAttackShootLeft();
	void FireAttackBegin();
	void PostBeginPlay();
	void GetProjectileSpawnTransformation(const struct FName& socketToUse, struct FVector* Position, struct FRotator* Orientation);
	unsigned long IsCurrentlyPlayingAttackAnimation();
	float PlayShootFireAnimation();
	unsigned long IsCurrentlyPlayingChargeAnimation();
	float PlayChargeFireAnimation();
	void PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation);
	void PlayJumpAnimation();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefHarbingerController_v2
// 0x000C (0x0644 - 0x0638)
class ADunDefHarbingerController_v2 : public ADunDefDarkElfController
{
public:
	float                                              AimRandomSpreadYaw;                                       // 0x0638(0x0004) (Edit)
	float                                              AimRandomSpreadPitch;                                     // 0x063C(0x0004) (Edit)
	class UDunDefBuff_Harbinger*                       BuffTemplate;                                             // 0x0640(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefHarbingerController_v2");
		return ptr;
	}


	void PawnDied(class APawn* inPawn);
	void CheckPlayer(class ADunDefPlayer* aPlayer);
	void CheckForNearbyPlayers();
	void ObstructionJump(const struct FVector& jumpForwardDir, const struct FVector& jumpSideDir);
	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	void PostBeginPlay();
	void FireProjectiles(const struct FName& socketToUse);
};


// Class DunDefSpecial.DunDefPickupableSpawner
// 0x00A8 (0x05BC - 0x0514)
class ADunDefPickupableSpawner : public ADunDefDamageableTarget
{
public:
	class USkeletalMeshComponent*                      MyMesh;                                                   // 0x0514(0x0004) (Edit, ExportObject, Component, EditInline)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x0518(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<class ADunDefPickupableItem*>               PickupableTemplates;                                      // 0x051C(0x000C) (Edit, NeedCtorLink)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0528(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    ActiveParticle;                                           // 0x052C(0x0004) (Edit, ExportObject, Component, EditInline)
	class ADunDefEmitterSpawnable*                     ActivateEmitter;                                          // 0x0530(0x0004) (Edit)
	int                                                MaxAllowedSpawnedItems;                                   // 0x0534(0x0004) (Edit)
	unsigned long                                      bUseSocketForSpawn : 1;                                   // 0x0538(0x0004) (Edit)
	unsigned long                                      bInCombatPhase : 1;                                       // 0x0538(0x0004)
	unsigned long                                      bAllowActivate : 1;                                       // 0x0538(0x0004) (Net)
	struct FName                                       SocketName;                                               // 0x053C(0x0008) (Edit)
	float                                              RespawnNewItemDelay;                                      // 0x0544(0x0004) (Edit)
	struct FColor                                      ToolTipDrawColor;                                         // 0x0548(0x0004) (Edit)
	struct FString                                     CombatPhaseString;                                        // 0x054C(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     BuildPhaseString;                                         // 0x0558(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     PickedUpSpawnHudMessage;                                  // 0x0564(0x000C) (Edit, Localized, NeedCtorLink)
	class UTexture2D*                                  MiniMapIconTexture;                                       // 0x0570(0x0004) (Edit)
	class UTexture2D*                                  OffScreenWaypointTexture;                                 // 0x0574(0x0004) (Edit)
	class UTexture2D*                                  OnScreenWaypointTexture;                                  // 0x0578(0x0004) (Edit)
	float                                              WaypointIconOffscreenScale;                               // 0x057C(0x0004) (Edit)
	float                                              WaypointIconCenterScale;                                  // 0x0580(0x0004) (Edit)
	float                                              WaypointCenterYOffset;                                    // 0x0584(0x0004) (Edit)
	float                                              MiniMapIconSize;                                          // 0x0588(0x0004) (Edit)
	struct FColor                                      MiniMapIconColor;                                         // 0x058C(0x0004) (Edit)
	struct FColor                                      MiniMapIconColorDisabled;                                 // 0x0590(0x0004) (Edit)
	struct FColor                                      PickedUpSpawnMessageColor;                                // 0x0594(0x0004) (Edit)
	TArray<class ADunDefPickupableItem*>               currentPickupItems;                                       // 0x0598(0x000C) (NeedCtorLink)
	TArray<class ADunDefPickupableItem*>               currentSpawnedItems;                                      // 0x05A4(0x000C) (NeedCtorLink)
	float                                              MaxPickupDistance;                                        // 0x05B0(0x0004) (Edit)
	float                                              PickupWeighting;                                          // 0x05B4(0x0004) (Edit)
	float                                              PickupOffset;                                             // 0x05B8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPickupableSpawner");
		return ptr;
	}


	void AdjustDamage(class UClass* DamageType, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FTraceHitInfo& HitInfo, int* DamageAmount, struct FVector* Momentum);
	unsigned long OnlyDrawHUDForOwner();
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	void DrawToolTip(class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer);
	void ChangedGamePhases(unsigned long IsCombatPhase);
	void NotifyPickUp(class ADunDefPickupableItem* pickedupItem, class ADunDefPlayer* playerPickUp);
	void NotifyDestroyed(class ADunDefPickupableItem* droppedItem);
	void NotifyDrop(class ADunDefPickupableItem* droppedItem);
	void GetSpawnLocandRot(struct FVector* sLoc, struct FRotator* sRot);
	void ActivateEffects(unsigned long bTurnOn);
	void SpawnPickUpItem(unsigned long bForceSpawn);
	void PostBeginPlay();
	unsigned long AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point);
	unsigned long CheckAllowance();
	unsigned long PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius);
	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	void Client_Activate(class ADunDefPlayerController* PC, int activationType);
	float GetActivationOffset();
	float GetActivationWeighting();
	void Server_Activate(class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType);
	int AllowActivation(class ADunDefPlayerController* PC, int activationType);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefPlayer_DualMelee
// 0x0090 (0x0E30 - 0x0DA0)
class ADunDefPlayer_DualMelee : public ADunDefPlayer
{
public:
	TEnumAsByte<EStances>                              myCurrentStance;                                          // 0x0DA0(0x0001)
	unsigned char                                      PendingFireMain;                                          // 0x0DA1(0x0001)
	unsigned char                                      PendingFireOff;                                           // 0x0DA2(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0DA3(0x0001) MISSED OFFSET
	struct FName                                       OffHandWeaponSocketName;                                  // 0x0DA4(0x0008) (Edit)
	struct FName                                       StanceIdleNodeName;                                       // 0x0DAC(0x0008) (Edit)
	struct FName                                       StanceMovementNodeName;                                   // 0x0DB4(0x0008) (Edit)
	float                                              StanceBlendTime;                                          // 0x0DBC(0x0004) (Edit)
	class UAnimNodeBlendList*                          StanceIdleNode;                                           // 0x0DC0(0x0004)
	class UAnimNodeBlendList*                          StanceMovementNode;                                       // 0x0DC4(0x0004)
	class ADunDefWeapon_MeleeSword*                    PreviousAttackWeapon;                                     // 0x0DC8(0x0004)
	int                                                currentComboSwingIndex;                                   // 0x0DCC(0x0004)
	struct FMeleeSwingInfo                             currentComboMeleeSwingInfo;                               // 0x0DD0(0x002C)
	unsigned long                                      bInCombo : 1;                                             // 0x0DFC(0x0004)
	float                                              LastSwingTime;                                            // 0x0E00(0x0004)
	class ADunDefWeapon_MeleeSword*                    OffHandWeapon;                                            // 0x0E04(0x0004) (Net)
	TArray<struct FMeleeSwingInfo>                     OffHandMeleeSwingInfos;                                   // 0x0E08(0x000C) (Edit, NeedCtorLink)
	TArray<struct FMeleeSwingInfo>                     MainHandMeleeSwingInfos;                                  // 0x0E14(0x000C) (Edit, NeedCtorLink)
	class ADunDefPlayerAbility_StanceBase*             myActiveStance;                                           // 0x0E20(0x0004)
	class ADunDefPlayerAbility_StanceBase*             mySecondaryStance;                                        // 0x0E24(0x0004)
	struct FName                                       PreviousAnim;                                             // 0x0E28(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_DualMelee");
		return ptr;
	}


	void SetOwnerNoSee(unsigned long ownerNoSee, unsigned long ownerNoSeeWeapon);
	unsigned long AutoActivateSecondaryWeapon();
	unsigned long AllowNegativeStatusAffecting();
	class ADunDefPlayerAbility_StanceBase* GetAlternateStance(class ADunDefPlayerAbility_StanceBase* askingStance);
	void SetWeaponSpeedMultiplier(float newMult);
	struct FName GetOverrideSocketName(class ADunDefWeapon* theWeapon);
	void JumpOffPawn();
	unsigned long ShouldPlayHurtAnimation(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, int* Result);
	void AnimNotify_ResetOffhandWeaponSwingDamage();
	void AnimNotify_StopOffhandWeaponSwingDamage();
	void AnimNotify_StartOffhandWeaponSwingDamage();
	void AnimNotify_ResetWeaponSwingDamage();
	void AnimNotify_StopWeaponSwingDamage();
	void AnimNotify_StartWeaponSwingDamage();
	void Destroyed();
	void AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum);
	void GivePlayerHitInfo(class AActor* HitActor, int dealtDamage, unsigned long bAllowMomentumOverride, struct FVector* appliedMomentum);
	void Tick(float DeltaTime);
	void AnimNotify_CurrentAbility_Off();
	void AnimNotify_CurrentAbility_On();
	void DoStanceBlend();
	void DeActivateStance(class ADunDefPlayerAbility_StanceBase* oldStance);
	void ActivateStance(class ADunDefPlayerAbility_StanceBase* newStance);
	unsigned long GetMeleeSwingInfoOverride(class ADunDefWeapon_MeleeSword* overrideForWeap, int* currentMeleeSwingIndex, struct FMeleeSwingInfo* OverrideInfo);
	unsigned long OverrideMeleeSwingInfo(class ADunDefWeapon_MeleeSword* askingWeapon);
	unsigned long CheckAllowMelee(class ADunDefWeapon_MeleeSword* weaponCheck, unsigned long checkAnimDuration);
	unsigned long CheckPlayingCustomAnim(const struct FName& inAnim, float TimeFromEndToConsiderFinished);
	void StopFire(unsigned char FireModeNum);
	void ServerStopFire(unsigned char FireModeNum);
	void SetComboInfo(class ADunDefWeapon_MeleeSword* comboWeapon, unsigned long bMainHand);
	unsigned long DoStanceCheck();
	void StartFire(unsigned char FireModeNum);
	void ServerStartFire(unsigned char FireModeNum);
	struct FName STATIC_GetOffHandSocketName();
	unsigned long STATIC_AllowDualWeapon();
	class AInventory* CreateContainedInventoryFromTemplate(class AActor* InventoryActorTemplate, unsigned long bDoNotActivate);
	void SetOffHandWeapon(class ADunDefWeapon_MeleeSword* newOffHandWeap);
	class ADunDefWeapon* SwapOffHandWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef);
	class ADunDefWeapon* SwapWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef);
	unsigned long HasLightningStance();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefPlayerAbility_StanceBase
// 0x0098 (0x0514 - 0x047C)
class ADunDefPlayerAbility_StanceBase : public ADunDefPlayerAbility_CharacterToggle
{
public:
	class UParticleSystemComponent*                    AbilityEffectComponent;                                   // 0x047C(0x0004) (Edit, ExportObject, Component, EditInline)
	class ADunDefEmitterSpawnable*                     AbilityActivateTemplate;                                  // 0x0480(0x0004) (Edit)
	class USoundCue*                                   AbilityActivateSound;                                     // 0x0484(0x0004) (Edit)
	class USoundCue*                                   AbilityDeActivateSound;                                   // 0x0488(0x0004) (Edit)
	struct FStatMultipliers                            GroundSpeed;                                              // 0x048C(0x0010) (Edit)
	struct FStatMultipliers                            AttackDamage;                                             // 0x049C(0x0010) (Edit)
	struct FStatMultipliers                            AttackSpeed;                                              // 0x04AC(0x0010) (Edit)
	struct FStatMultipliers                            AttackKnockBack;                                          // 0x04BC(0x0010) (Edit)
	struct FStatMultipliers                            MomentumMultiplier;                                       // 0x04CC(0x0010) (Edit)
	struct FStatMultipliers                            DamageResistance;                                         // 0x04DC(0x0010) (Edit)
	unsigned long                                      ReducePetDamageWhileUnderEffect : 1;                      // 0x04EC(0x0004) (Edit)
	unsigned long                                      bAllowActivateWhileCasting : 1;                           // 0x04EC(0x0004) (Edit)
	unsigned long                                      bCancelAllStancesOnActivate : 1;                          // 0x04EC(0x0004) (Edit)
	unsigned long                                      bCancelTornadoStanceOnActivate : 1;                       // 0x04EC(0x0004) (Edit)
	unsigned long                                      bCancelTurtleStanceOnActivate : 1;                        // 0x04EC(0x0004) (Edit)
	unsigned long                                      bCancelHawkStanceOnActivate : 1;                          // 0x04EC(0x0004) (Edit)
	unsigned long                                      bIsTurtleStance : 1;                                      // 0x04EC(0x0004) (Edit)
	unsigned long                                      bIsTornadoStance : 1;                                     // 0x04EC(0x0004) (Edit)
	unsigned long                                      bIsHawkStance : 1;                                        // 0x04EC(0x0004) (Edit)
	unsigned long                                      bAllowAttackStepTowards : 1;                              // 0x04EC(0x0004) (Edit)
	unsigned long                                      bNullifyJumpModifier : 1;                                 // 0x04EC(0x0004) (Edit)
	unsigned long                                      bStatusActive : 1;                                        // 0x04EC(0x0004)
	TEnumAsByte<EStances>                              myStance;                                                 // 0x04F0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	struct FName                                       activeEffectSocket;                                       // 0x04F4(0x0008) (Edit)
	struct FName                                       StanceDeactivateAnim;                                     // 0x04FC(0x0008) (Edit)
	struct FName                                       StanceActivateAnim;                                       // 0x0504(0x0008) (Edit)
	float                                              JumpZMultiplier;                                          // 0x050C(0x0004) (Edit)
	float                                              AttackKnockBackMomentumBase;                              // 0x0510(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_StanceBase");
		return ptr;
	}


	unsigned long AllowNegativeStatusAffecting();
	void ResetWeaponDamage();
	unsigned long StopOffHandWeaponDamage();
	unsigned long StopWeaponDamage();
	unsigned long StartOffHandWeaponDamage();
	unsigned long StartWeaponDamage();
	void GivePlayerHitInfo(class AActor* HitActor, int dealtDamage, unsigned long bAllowMomentumOverride, struct FVector* appliedMomentum);
	void AnimNotify_CurrentAbility_Off();
	void AnimNotify_CurrentAbility_On();
	unsigned long AllowStanceCancel();
	unsigned long CheckDoStanceAttack();
	float GetMultiplierValue(const struct FStatMultipliers& multiplierCheck, unsigned long bDoLog);
	unsigned long CheckStatus();
	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	void OnActivate();
	unsigned long AllowStepTowards();
	float GetPlayerMomentumMultiplier();
	float GetPlayerAttackKnockbackMultiplier();
	float GetPlayerAttackSpeedMultiplier();
	void PlayActivationAnimation();
};


// Class DunDefSpecial.DunDefPlayerAbility_LeapSlam
// 0x00B4 (0x04E0 - 0x042C)
class ADunDefPlayerAbility_LeapSlam : public ADunDefPlayerAbility
{
public:
	float                                              LeapHeight;                                               // 0x042C(0x0004) (Edit)
	float                                              LeapSpeed;                                                // 0x0430(0x0004) (Edit)
	float                                              LeapRotationSpeed;                                        // 0x0434(0x0004) (Edit)
	int                                                ManaCostToActivate;                                       // 0x0438(0x0004) (Edit)
	float                                              MaxLeapDistance;                                          // 0x043C(0x0004) (Edit)
	struct FName                                       LeapStartAnim;                                            // 0x0440(0x0008) (Edit)
	struct FName                                       LeapLoopAnim;                                             // 0x0448(0x0008) (Edit)
	struct FName                                       LeapStopAnim;                                             // 0x0450(0x0008) (Edit)
	class ADunDefEmitterDamage*                        ShockwaveTemplate;                                        // 0x0458(0x0004) (Edit)
	struct FVector                                     LeapExtent;                                               // 0x045C(0x000C) (Edit)
	float                                              MassMomentumExponentialScale;                             // 0x0468(0x0004) (Edit)
	float                                              WeaponDamageMultiplier;                                   // 0x046C(0x0004) (Edit)
	float                                              AdditionalDamageAmount;                                   // 0x0470(0x0004) (Edit)
	float                                              HeroStatDamageModifierExponent;                           // 0x0474(0x0004) (Edit)
	float                                              MeleeDamageMomentum;                                      // 0x0478(0x0004) (Edit)
	float                                              HeroStatMomentumModifierExponent;                         // 0x047C(0x0004) (Edit)
	float                                              velocityInterp;                                           // 0x0480(0x0004) (Edit)
	float                                              AirTargetLeapStopDistance;                                // 0x0484(0x0004) (Edit)
	unsigned long                                      bRequiresAutoAimTarget : 1;                               // 0x0488(0x0004) (Edit)
	unsigned long                                      bStartedLeap : 1;                                         // 0x0488(0x0004)
	unsigned long                                      bStartDamage : 1;                                         // 0x0488(0x0004)
	unsigned long                                      bStopped : 1;                                             // 0x0488(0x0004) (Net)
	float                                              leapTimeOut;                                              // 0x048C(0x0004) (Edit)
	struct FString                                     NotAutoAimTargetFailString;                               // 0x0490(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              HomingScale;                                              // 0x049C(0x0004) (Edit)
	class AActor*                                      TargetActor;                                              // 0x04A0(0x0004)
	struct FVector                                     originalTargetLoc;                                        // 0x04A4(0x000C)
	TArray<struct ADunDefPlayerAbility_LeapSlam_FHitTarget> HitTargets;                                               // 0x04B0(0x000C) (NeedCtorLink)
	class ADunDefEmitterSpawnable*                     WeaponEmitterTemplate;                                    // 0x04BC(0x0004) (Edit)
	class UParticleSystemComponent*                    MyParticleSystemComponent;                                // 0x04C0(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FVector                                     lastStuckCheck;                                           // 0x04C4(0x000C) (Transient)
	float                                              hitWallTraceOffset;                                       // 0x04D0(0x0004) (Edit)
	float                                              StuckCheckInterval;                                       // 0x04D4(0x0004) (Edit)
	float                                              StuckCheckDistance;                                       // 0x04D8(0x0004) (Edit)
	class UClass*                                      MyDamageType;                                             // 0x04DC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_LeapSlam");
		return ptr;
	}


	void OnActivate();
	int GetCostToActivate(unsigned long returnTrueValue);
	unsigned long RequestActivation(unsigned long bHeld);
	unsigned long HasNoAutoAim();
	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	float GetMomentum();
	float GetElementalDamage();
	float GetDamage(class ADunDefWeapon_MeleeSword* weaponCheck);
	void AnimNotify_CurrentAbility_Off();
	void AnimNotify_CurrentAbility_On();
	unsigned long ConsumesInputWhenActive();
	void DoTimeOut();
	unsigned long GetLeapVelocity(const struct FVector& End, const struct FVector& Start, struct FVector* JumpVelocity);
	void CancelAbility();
	void PlayStopAnim();
	void ShutOffVFX();
	void ActivateHandVFX();
	void PushCheck();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefPlayer_Jester
// 0x008C (0x0E2C - 0x0DA0)
class ADunDefPlayer_Jester : public ADunDefPlayer
{
public:
	float                                              WeaponIconScale;                                          // 0x0DA0(0x0004) (Edit)
	float                                              WeaponIconFrameSize;                                      // 0x0DA4(0x0004) (Edit)
	float                                              WeaponIconYOffset;                                        // 0x0DA8(0x0004) (Edit)
	float                                              WeaponIconXOffset;                                        // 0x0DAC(0x0004) (Edit)
	float                                              WeaponIconXOffset_GamePad;                                // 0x0DB0(0x0004) (Edit)
	float                                              WeaponIconYOffset_GamePad;                                // 0x0DB4(0x0004) (Edit)
	float                                              WeaponIconSize;                                           // 0x0DB8(0x0004) (Edit)
	float                                              SplitScreenIconScale;                                     // 0x0DBC(0x0004) (Edit)
	float                                              FrameInterpSpeed;                                         // 0x0DC0(0x0004) (Edit)
	float                                              OffHandIconOpacity;                                       // 0x0DC4(0x0004) (Edit)
	float                                              MainHandIconOpacity;                                      // 0x0DC8(0x0004) (Edit)
	class ADunDefWeapon*                               storedWeapon;                                             // 0x0DCC(0x0004) (Net)
	struct FName                                       WeaponSwapAnim_ToRanged;                                  // 0x0DD0(0x0008) (Edit)
	struct FName                                       WeaponSwapAnim_ToStaff;                                   // 0x0DD8(0x0008) (Edit)
	struct FName                                       Shootanim_Spear;                                          // 0x0DE0(0x0008) (Edit)
	float                                              MinWeaponSwitchDelay;                                     // 0x0DE8(0x0004) (Edit)
	float                                              LastSwitchTime;                                           // 0x0DEC(0x0004)
	class USoundCue*                                   WeaponSwitchSound;                                        // 0x0DF0(0x0004) (Edit)
	class USurface*                                    WeaponSelectFrame;                                        // 0x0DF4(0x0004) (Edit)
	class UAnimSet*                                    CrossBowAnimSet;                                          // 0x0DF8(0x0004) (Edit)
	class UAnimSet*                                    StaffAnimSet;                                             // 0x0DFC(0x0004) (Edit)
	struct FName                                       WeaponCrossbow_Socket;                                    // 0x0E00(0x0008) (Edit)
	struct FName                                       WeaponStaff_Socket;                                       // 0x0E08(0x0008) (Edit)
	struct FName                                       WeaponSpear_Socket;                                       // 0x0E10(0x0008) (Edit)
	struct FName                                       WeaponSword_Socket;                                       // 0x0E18(0x0008) (Edit)
	int                                                MainHandIndex;                                            // 0x0E20(0x0004) (Net)
	unsigned long                                      bDoInterp : 1;                                            // 0x0E24(0x0004)
	float                                              InterpTime;                                               // 0x0E28(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_Jester");
		return ptr;
	}


	struct FName STATIC_StaticGetOverrideSocketName(class UDunDefHero* aHero);
	struct FName GetOverrideSocketName(class ADunDefWeapon* theWeapon);
	void SwapAnimSets(class ADunDefWeapon* NewWeapon);
	void WeaponSet(class AWeapon* NewWeapon);
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	void Tick(float DeltaTime);
	class UMaterialInstanceConstant* GetWeaponIcon(unsigned long bOffHand);
	void DrawWeaponIcons(class UCanvas* C, class ADunDefWeapon* weapDraw, float weapOpacity, int paddingIndex, unsigned long bSelected, float hudScale, class ADunDefPlayerController* PC);
	void Destroyed();
	class AInventory* CreateContainedInventoryFromTemplate(class AActor* InventoryActorTemplate, unsigned long bDoNotActivate);
	class ADunDefWeapon* SwapOffHandWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef);
	void DoWeaponSwap(unsigned long bForceSwap);
	void ServerDoSwap(unsigned long bForceSwap);
	void SetNewMainWeapon(class AWeapon* theNewWeapon, unsigned long bRemoveExisting, class UHeroEquipment* equipRef);
	void SetStoredWeapon(class AWeapon* newStoredWeapon, class UHeroEquipment* equipRef);
	struct FName GetShootAnim();
	unsigned long ForceWeaponActivationOverride();
	class ADunDefWeapon* SwapWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef);
	unsigned long STATIC_AllowDualWeapon();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefPlayer_SeriesEv
// 0x00D0 (0x0E70 - 0x0DA0)
class ADunDefPlayer_SeriesEv : public ADunDefPlayer
{
public:
	class ADunDefWeapon*                               storedWeapon;                                             // 0x0DA0(0x0004) (Net)
	float                                              WeaponIconScale;                                          // 0x0DA4(0x0004) (Edit)
	float                                              WeaponIconFrameSize;                                      // 0x0DA8(0x0004) (Edit)
	float                                              WeaponIconYOffset;                                        // 0x0DAC(0x0004) (Edit)
	float                                              WeaponIconXOffset;                                        // 0x0DB0(0x0004) (Edit)
	float                                              WeaponIconXOffset_GamePad;                                // 0x0DB4(0x0004) (Edit)
	float                                              WeaponIconYOffset_GamePad;                                // 0x0DB8(0x0004) (Edit)
	float                                              WeaponIconSize;                                           // 0x0DBC(0x0004) (Edit)
	float                                              SplitScreenIconScale;                                     // 0x0DC0(0x0004) (Edit)
	float                                              OffHandIconOpacity;                                       // 0x0DC4(0x0004) (Edit)
	float                                              MainHandIconOpacity;                                      // 0x0DC8(0x0004) (Edit)
	float                                              ArmUpNoFireTime;                                          // 0x0DCC(0x0004) (Edit)
	class USurface*                                    WeaponSelectFrame;                                        // 0x0DD0(0x0004) (Edit)
	struct FName                                       DoubleShootAnim;                                          // 0x0DD4(0x0008) (Edit)
	struct FName                                       SingleShootAnim;                                          // 0x0DDC(0x0008) (Edit)
	struct FName                                       WeaponElementalSocket;                                    // 0x0DE4(0x0008) (Edit)
	struct FName                                       WeaponSwapAnim;                                           // 0x0DEC(0x0008) (Edit)
	TArray<struct FName>                               GunUpHurtAnims;                                           // 0x0DF4(0x000C) (Edit, NeedCtorLink)
	class UMaterialInstanceConstant*                   DefaultWeaponIcon;                                        // 0x0E00(0x0004) (Edit)
	TArray<struct FGameDamageEntry>                    ElementalWeaponOverrides;                                 // 0x0E04(0x000C) (Edit, NeedCtorLink)
	class USoundCue*                                   WeaponSwitchSound;                                        // 0x0E10(0x0004) (Edit)
	float                                              FrameInterpSpeed;                                         // 0x0E14(0x0004) (Edit)
	float                                              MinWeaponSwitchDelay;                                     // 0x0E18(0x0004) (Edit)
	float                                              LastSwitchTime;                                           // 0x0E1C(0x0004)
	class ADunDefPlayerAbility_ManaCharge*             activeChargeAbility;                                      // 0x0E20(0x0004)
	float                                              LastFireTime;                                             // 0x0E24(0x0004)
	unsigned long                                      bArmUp : 1;                                               // 0x0E28(0x0004)
	unsigned long                                      bDoInterp : 1;                                            // 0x0E28(0x0004)
	class UMaterialInstanceConstant*                   MainHandWeapTex;                                          // 0x0E2C(0x0004) (Transient)
	class UMaterialInstanceConstant*                   OffHandWeapTex;                                           // 0x0E30(0x0004) (Transient)
	float                                              frameXCenterPos;                                          // 0x0E34(0x0004)
	float                                              frameYCenterPos;                                          // 0x0E38(0x0004)
	int                                                MainHandIndex;                                            // 0x0E3C(0x0004) (Net)
	float                                              InterpTime;                                               // 0x0E40(0x0004)
	struct FName                                       HoveringBlenderName;                                      // 0x0E44(0x0008) (Edit)
	float                                              HoverOnBlendTime;                                         // 0x0E4C(0x0004) (Edit)
	float                                              HoverOffBlendTime;                                        // 0x0E50(0x0004) (Edit)
	class USoundCue*                                   HoveringStartSound;                                       // 0x0E54(0x0004) (Edit)
	class USoundCue*                                   HoveringStopSound;                                        // 0x0E58(0x0004) (Edit)
	class UParticleSystemComponent*                    HoveringParticleSystem;                                   // 0x0E5C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UAudioComponent*                             HoveringLoopSound;                                        // 0x0E60(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       HoveringParticleSystemAttachSocketName;                   // 0x0E64(0x0008) (Edit)
	class UAnimNodeBlend*                              HoveringBlender;                                          // 0x0E6C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_SeriesEv");
		return ptr;
	}


	void PostBeginPlay();
	void StopHovering();
	void StartHovering();
	void Tick(float DeltaTime);
	void UsedAbility(class ADunDefPlayerAbility* ability);
	void SetActiveChargeAbility(class ADunDefPlayerAbility_ManaCharge* newCharge);
	float GetManaTokenAttractionRadius();
	unsigned long HasMaxManaPower();
	void TryTokenCollection(class ADunDefManaToken* Token);
	unsigned long IsCurrentlyPlayingHurtAnimation();
	void PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation);
	unsigned long ShouldOverrideWeaponElementalEffects(class ADunDefWeapon* weaponCheck);
	void StopFire(unsigned char FireModeNum);
	void PlayJumpAnimation();
	void StartFire(unsigned char FireModeNum);
	void PutArmDown();
	void PlayShootAnimation(unsigned long isBigShoot, unsigned long Replicate, unsigned long bDontPlayAnim);
	unsigned long ForceUseInstigatorForMuzzle();
	unsigned long CanReload();
	class UMaterialInstanceConstant* GetWeaponIcon(unsigned long bOffHand);
	void DrawWeaponIcons(class UCanvas* C, class ADunDefWeapon* weapDraw, float weapOpacity, int paddingIndex, unsigned long bSelected, float hudScale, class ADunDefPlayerController* PC);
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	void Destroyed();
	class AInventory* CreateContainedInventoryFromTemplate(class AActor* InventoryActorTemplate, unsigned long bDoNotActivate);
	class ADunDefWeapon* SwapOffHandWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef);
	void DoWeaponSwap(unsigned long bForceSwap);
	void ServerDoSwap(unsigned long bForceSwap);
	void SetNewMainWeapon(class AWeapon* theNewWeapon, unsigned long bRemoveExisting, class UHeroEquipment* equipRef);
	void SetStoredWeapon(class AWeapon* newStoredWeapon, class UHeroEquipment* equipRef);
	class ADunDefWeapon* SwapWeaponFor(class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef);
	struct FName STATIC_GetOffHandSocketName();
	unsigned long OverrideWeaponAttach(class ADunDefWeapon* weaponCheck);
	unsigned long STATIC_AllowDualWeapon();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefPlayerAbility_ManaCharge
// 0x0114 (0x0590 - 0x047C)
class ADunDefPlayerAbility_ManaCharge : public ADunDefPlayerAbility_CharacterToggle
{
public:
	int                                                currentManaCharge;                                        // 0x047C(0x0004) (Net)
	float                                              MinShootTime;                                             // 0x0480(0x0004) (Edit)
	float                                              MaxShootTime;                                             // 0x0484(0x0004) (Edit)
	int                                                MaxAllowedManaCharge;                                     // 0x0488(0x0004) (Edit)
	int                                                MinAllowedManaCharge;                                     // 0x048C(0x0004) (Edit)
	float                                              DamageProcInterval;                                       // 0x0490(0x0004) (Edit)
	float                                              BeamDamageMomentum;                                       // 0x0494(0x0004) (Edit)
	float                                              DamageMultiplier;                                         // 0x0498(0x0004) (Edit)
	float                                              DamageExponent;                                           // 0x049C(0x0004) (Edit)
	float                                              ManaTimeExponent;                                         // 0x04A0(0x0004) (Edit)
	float                                              ChargeBarExponent;                                        // 0x04A4(0x0004) (Edit)
	float                                              BeamRange;                                                // 0x04A8(0x0004) (Edit)
	struct FName                                       ChargingAnim;                                             // 0x04AC(0x0008) (Edit)
	struct FName                                       ReleasingAnim;                                            // 0x04B4(0x0008) (Edit)
	struct FName                                       MuzzleSocketName;                                         // 0x04BC(0x0008) (Edit)
	class UClass*                                      BeamDamageType;                                           // 0x04C4(0x0004) (Edit)
	class UParticleSystemComponent*                    BeamEffect;                                               // 0x04C8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    MuzzleEffect;                                             // 0x04CC(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    BeamEndEffect;                                            // 0x04D0(0x0004) (Edit, ExportObject, Component, EditInline)
	class ADunDefEmitterSpawnable*                     ManaPickUpEffect;                                         // 0x04D4(0x0004) (Edit)
	float                                              TimeBetweenManaPickUpVFX;                                 // 0x04D8(0x0004) (Edit)
	float                                              LastManaPickUpTime;                                       // 0x04DC(0x0004)
	class UParticleSystemComponent*                    ChargeEffect;                                             // 0x04E0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UMaterialInterface*                          ChargeBar;                                                // 0x04E4(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     ActivationEffect;                                         // 0x04E8(0x0004) (Edit)
	float                                              BarScale;                                                 // 0x04EC(0x0004) (Edit)
	float                                              ChargingManaAttractionRadiusMultiplier;                   // 0x04F0(0x0004) (Edit)
	float                                              BarXOffset;                                               // 0x04F4(0x0004) (Edit)
	float                                              BarYOffset;                                               // 0x04F8(0x0004) (Edit)
	float                                              BarIconSizeY;                                             // 0x04FC(0x0004) (Edit)
	float                                              BarIconSizeX;                                             // 0x0500(0x0004) (Edit)
	struct FName                                       ManaGatherSocketName;                                     // 0x0504(0x0008) (Edit)
	struct FName                                       ManaChargeBarSocket;                                      // 0x050C(0x0008) (Edit)
	struct FVector                                     ChargeBarOffset;                                          // 0x0514(0x000C) (Edit)
	struct FRotator                                    ChargeBarRot;                                             // 0x0520(0x000C) (Edit)
	unsigned long                                      bUseCastBarForCharge : 1;                                 // 0x052C(0x0004) (Edit)
	unsigned long                                      bUseActivateAsToggleOnly : 1;                             // 0x052C(0x0004) (Edit)
	unsigned long                                      bDoingDamage : 1;                                         // 0x052C(0x0004) (Net)
	unsigned long                                      ScaleMomentumForPawnMass : 1;                             // 0x052C(0x0004) (Edit)
	struct FLinearColor                                ChargeBarColor;                                           // 0x0530(0x0010) (Edit)
	struct FLinearColor                                ChargeBarColorAllowActivate;                              // 0x0540(0x0010) (Edit)
	struct FString                                     NeedMoreManaChargeMsg;                                    // 0x0550(0x000C) (Edit, Localized, NeedCtorLink)
	struct FColor                                      NeedMoreManaMsgColor;                                     // 0x055C(0x0004) (Edit)
	class USoundCue*                                   BeginFiringSound;                                         // 0x0560(0x0004) (Edit)
	class USoundCue*                                   StopFiringSound;                                          // 0x0564(0x0004) (Edit)
	class UAudioComponent*                             LoopingFiringSound;                                       // 0x0568(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              LoopingFiringSoundFadeInTime;                             // 0x056C(0x0004) (Edit)
	float                                              LastBeamFireTime;                                         // 0x0570(0x0004) (Transient)
	class UMaterialInstanceConstant*                   chargeBarMIC;                                             // 0x0574(0x0004) (Transient)
	float                                              currentTimeLimit;                                         // 0x0578(0x0004)
	float                                              MaxPawnMassMomentumScale;                                 // 0x057C(0x0004) (Edit)
	float                                              ScaleMomentumForPawnMassExponent;                         // 0x0580(0x0004) (Edit)
	float                                              MinPawnMassMomentumScale;                                 // 0x0584(0x0004) (Edit)
	float                                              MaxTargetDeltaPitch;                                      // 0x0588(0x0004) (Edit)
	float                                              MaxTargetDeltaYaw;                                        // 0x058C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_ManaCharge");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	unsigned long AllowUsageDuringCastingStates();
	void DrawChargeBar(class ADunDefHUD* H);
	float GetCooldownStartTime();
	unsigned long ShouldDrawManaBar();
	void StopEffects();
	void NotifyStopFire();
	void ServerStartDamage();
	void NotifyStartFire();
	void ActivateEffects();
	struct FName GetSocketName();
	void AttachParticles();
	int GetDamage();
	void ResetManaCharge();
	void AddManaCharge(int addedMana);
	void SpawnManaEffect();
	void ServerCollectManaToken(class ADunDefManaToken* Token);
	unsigned long InCylinderFwd(const struct FVector& Origin, const struct FVector& VDir, float RadiusSq, const struct FVector& A);
	void DoDamage();
	void CheckForFire();
	float GetTimeBasedOnCharge();
	void StartDamage();
	void StartDamageEffects();
	unsigned long CanHoldMoreCharge();
	void CancelAbility();
	void OnActivate();
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefPlayerAbility_PhaseShift
// 0x0060 (0x04DC - 0x047C)
class ADunDefPlayerAbility_PhaseShift : public ADunDefPlayerAbility_CharacterToggle
{
public:
	class UParticleSystemComponent*                    AbilityEffectComponent;                                   // 0x047C(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       UnPhasedScaleDown;                                        // 0x0480(0x0008) (Edit)
	struct FName                                       UnPhasedScaleUp;                                          // 0x0488(0x0008) (Edit)
	struct FName                                       PhasedScaleDown;                                          // 0x0490(0x0008) (Edit)
	struct FName                                       PhaseScaleUp;                                             // 0x0498(0x0008) (Edit)
	struct FLinearColor                                OverlayEffectColor;                                       // 0x04A0(0x0010) (Edit)
	float                                              ScaleTime;                                                // 0x04B0(0x0004) (Edit)
	float                                              ReScaleBackUpDelay;                                       // 0x04B4(0x0004) (Edit)
	unsigned long                                      bEndCastingStateOnScale : 1;                              // 0x04B8(0x0004) (Edit)
	unsigned long                                      bEnterCastingStateWhilePhased : 1;                        // 0x04B8(0x0004) (Edit)
	unsigned long                                      bScalingDown : 1;                                         // 0x04B8(0x0004) (Transient)
	unsigned long                                      bPendingScaleUp : 1;                                      // 0x04B8(0x0004) (Transient)
	unsigned long                                      bPendingScaleDown : 1;                                    // 0x04B8(0x0004) (Transient)
	unsigned long                                      bIgnoreCastingState : 1;                                  // 0x04B8(0x0004) (Transient)
	unsigned long                                      bIsPhased : 1;                                            // 0x04B8(0x0004) (Net)
	unsigned long                                      bUpScaling : 1;                                           // 0x04B8(0x0004)
	unsigned long                                      bScaling : 1;                                             // 0x04B8(0x0004)
	unsigned long                                      bUnphasing : 1;                                           // 0x04B8(0x0004) (Transient)
	unsigned long                                      bUnphased : 1;                                            // 0x04B8(0x0004) (Transient)
	float                                              InitialScale;                                             // 0x04BC(0x0004) (Transient)
	float                                              ScaleDownCompleteTime;                                    // 0x04C0(0x0004) (Transient)
	TArray<class UMaterialInstanceConstant*>           myOriginalMICs;                                           // 0x04C4(0x000C) (Transient, NeedCtorLink)
	TArray<class UMaterialInstanceConstant*>           myMICOverride;                                            // 0x04D0(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_PhaseShift");
		return ptr;
	}


	unsigned long AllowUsageDuringCastingStates();
	struct FName GetCastingStateNamePC();
	void CancelAbility();
	void ClientForceCancel();
	void ForceCancel();
	void SetPhaseMaterials(unsigned long bPhasedMaterials);
	void StartScaleUp();
	void SetMaterialColors(const struct FLinearColor& C1, const struct FLinearColor& c2, const struct FLinearColor& C3);
	void OnActivate();
	void SetDefaultValues();
	void SetPhaseShiftValue();
	void PhaseScaleDown();
	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	void FinishScaleUp();
	void InitializeForPlayer(class ADunDefPlayer* myPlayer);
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefPlayerAbility_BuilTripWire
// 0x0064 (0x077C - 0x0718)
class ADunDefPlayerAbility_BuilTripWire : public ADunDefPlayerAbility_BuildTower
{
public:
	int                                                PlacementPoints;                                          // 0x0718(0x0004) (Edit)
	unsigned long                                      bCheckLineOfSight : 1;                                    // 0x071C(0x0004) (Edit)
	struct FString                                     LineofSightBlockString;                                   // 0x0720(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              DUTextScale;                                              // 0x072C(0x0004) (Edit)
	float                                              MinPointPlacementDistance;                                // 0x0730(0x0004) (Edit)
	struct FVector                                     DUStringOffset;                                           // 0x0734(0x000C) (Edit)
	struct FString                                     DUPlacementString;                                        // 0x0740(0x000C) (Edit, Localized, NeedCtorLink)
	TArray<class UClass*>                              CancelsLineOfSightClass;                                  // 0x074C(0x000C) (Edit, NeedCtorLink)
	class UParticleSystemComponent*                    PreviewBeamEffect;                                        // 0x0758(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FVector                                     LineofSightExtent;                                        // 0x075C(0x000C) (Edit)
	class ADunDefEmitterSpawnable*                     MyAltSummoningEmitter;                                    // 0x0768(0x0004) (Transient)
	float                                              MaxTowerDistance;                                         // 0x076C(0x0004)
	TArray<struct FPreviewPoint>                       PreviewPoints;                                            // 0x0770(0x000C) (Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_BuilTripWire");
		return ptr;
	}


	void PostBeginPlay();
	void CancelAbility();
	unsigned long AllowTowerPlacementPosition(const struct FVector& placementPos, unsigned long bOnlyCheckVolumes, int* PlacementDeniedReason);
	struct FVector GetCenterLocation();
	unsigned long CanPlaceTowerUnitCost();
	int GetDUCost(unsigned long bUseCustomEndLoc, const struct FVector& endLoc);
	unsigned long DrawCastingHUD(class ADunDefHUD* H);
	void CreateNewPreviewPoint(const struct FVector& previewLoc);
	void ClearPreviewPoints();
	void ServerAddPlacementPoint(const struct FVector& tPlacementLocation);
	void PostPlacementUpdate(float DeltaTime);
	void ServerRequestBuildTower(const struct FVector& towerPlacementLocation, const struct FRotator& towerPlacementRotation);
	void AbilityTick(float DeltaTime);
	void HidePreviewPoints();
	void StopAltSummonTowerFXCompleted();
	void StopAltSummonTowerFX();
	void UpdateAltSummonTowerFX(float Percent);
	void BeginAltSummonTowerFX(class ADunDefEmitterSpawnable* spellEffect, const struct FVector& thePlacementLocation, const struct FRotator& thePlacementRotation, float scaleMult, unsigned long bUsesDecal);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefPlayerAbility_DefenseBoost
// 0x0030 (0x0508 - 0x04D8)
class ADunDefPlayerAbility_DefenseBoost : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	TArray<TEnumAsByte<ETowerBoostType>>               MyTowerBoostType;                                         // 0x04D8(0x000C) (Edit, NeedCtorLink)
	float                                              ETBAttackRateExponent;                                    // 0x04E4(0x0004) (Edit)
	float                                              ETBAttackRangeExponent;                                   // 0x04E8(0x0004) (Edit)
	float                                              ETBDamageExponent;                                        // 0x04EC(0x0004) (Edit)
	float                                              TowerDamageMultiplier;                                    // 0x04F0(0x0004) (Edit)
	float                                              TowerRangeMultiplier;                                     // 0x04F4(0x0004) (Edit)
	float                                              TowerRateMultiplier;                                      // 0x04F8(0x0004) (Edit)
	TArray<struct FAffectedActor>                      BoostedTowers;                                            // 0x04FC(0x000C) (Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_DefenseBoost");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	void RemoveTower(int Index);
	void AddTower(class AActor* theAct);
	void Destroyed();
	void RemoveAllTowers();
	void CheckAllTowers();
	void RemoveAllTowersFor(class ADunDefPlayer* aPlayer);
	void AddAllTowersFor(class ADunDefPlayer* aPlayer);
	void AddEffect(class AActor* theAct);
	void RemoveEffect(int Index);
	float GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType);
	unsigned long HasTowerBoostingType(TEnumAsByte<ETowerBoostType> boostType);
	TScriptInterface<class UDunDefTargetableInterface> GetTowerBoostingTarget();
};


// Class DunDefSpecial.DunDefPlayerAbility_EnemyDrain
// 0x0018 (0x04F0 - 0x04D8)
class ADunDefPlayerAbility_EnemyDrain : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              DamageScalar;                                             // 0x04D8(0x0004) (Edit)
	float                                              DamageResistanceMultiplier;                               // 0x04DC(0x0004) (Edit)
	float                                              SpeedMultiplier;                                          // 0x04E0(0x0004) (Edit)
	float                                              DamageExponent;                                           // 0x04E4(0x0004) (Edit)
	float                                              DamageResistanceExponent;                                 // 0x04E8(0x0004) (Edit)
	float                                              SpeedExponent;                                            // 0x04EC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_EnemyDrain");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	float GetPawnResistanceMultiplier();
	float GetSpeedMultiplier();
	float GetDamageMultiplier();
	unsigned long CanAffect(class AActor* theAct);
	void AddEffect(class AActor* theAct);
	void RemoveEffect(int Index);
};


// Class DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner
// 0x000C (0x04E4 - 0x04D8)
class ADunDefPlayerAbility_GenericMultiActorSpawner : public ADunDefPlayerAbility_GenericActorSpawner
{
public:
	TArray<struct FSpawnSettings>                      ActorSpawns;                                              // 0x04D8(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner");
		return ptr;
	}


	void DoMultiActorSpawn();
	void SetUpActorSpawn();
};


// Class DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower
// 0x0008 (0x04E0 - 0x04D8)
class ADunDefPlayerAbility_InstantUpgradeTower : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              TowerUpgradeScale;                                        // 0x04D8(0x0004) (Edit)
	float                                              ExpTowerUpgradeScale;                                     // 0x04DC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	void DoEffect();
	int GetTowerCost(class ADunDefTower* UpgradeTower);
	void ScaleForHeroModifiers(unsigned long IsFirstTime);
	unsigned long IsValidUpgradeTower(class ADunDefTower* Tower, unsigned long bDontCountMana, int* theNextUpgradeLevel);
};


// Class DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE
// 0x0004 (0x04DC - 0x04D8)
class ADunDefPlayerAbility_InvisibilityAOE : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              NewTowerTargetableAttackRange;                            // 0x04D8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE");
		return ptr;
	}


	void RemovedTower(class ADunDefTower* affectedTower);
	void AddedTower(class ADunDefTower* affectedTower);
	void RemovedPawn(class ADunDefPawn* affectedPawn);
	void AddedPawn(class ADunDefPawn* affectedPawn);
	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	void AddEffect(class AActor* theAct);
	void RemoveEffect(int Index);
};


// Class DunDefSpecial.DunDefPlayerAbility_MoveTower
// 0x0170 (0x06B0 - 0x0540)
class ADunDefPlayerAbility_MoveTower : public ADunDefPlayerAbility_TowerPlacement
{
public:
	class UMaterialInstanceConstant*                   DecalMaterialMoveTower;                                   // 0x0540(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     ChoosingTowerWeaponEmitter;                               // 0x0544(0x0004) (Edit)
	class UTexture2D*                                  CursorSelectTexture;                                      // 0x0548(0x0004) (Edit)
	class UTexture2D*                                  CursorMoveTexture;                                        // 0x054C(0x0004) (Edit)
	class USkeletalMeshComponent*                      TowerMeshComponent;                                       // 0x0550(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              MinimumNormalZForPlacement;                               // 0x0554(0x0004) (Edit)
	float                                              MinimumRotationInputDistance;                             // 0x0558(0x0004) (Edit)
	TArray<struct FVector>                             TraceDirections;                                          // 0x055C(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     TraceExtent;                                              // 0x0568(0x000C) (Edit)
	struct FVector                                     RotationGamepadCursorOffset;                              // 0x0574(0x000C) (Edit)
	struct FVector                                     PlacementRotationCursorOffset;                            // 0x0580(0x000C) (Edit)
	struct FVector                                     ExtentCheckBaseOffset;                                    // 0x058C(0x000C) (Edit)
	float                                              RotationCursorScale;                                      // 0x0598(0x0004) (Edit)
	class UTexture2D*                                  CursorRotateTexture;                                      // 0x059C(0x0004) (Edit)
	float                                              PlacementLightIntensityMultiplier;                        // 0x05A0(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     MovementEffect;                                           // 0x05A4(0x0004) (Edit)
	class UMaterialInterface*                          MeshPlacementMaterial;                                    // 0x05A8(0x0004) (Edit)
	float                                              AutoTowerPlacementMeshScaleBase;                          // 0x05AC(0x0004) (Edit)
	float                                              OtherAbilityPreventionRadiusBuffer;                       // 0x05B0(0x0004) (Edit)
	float                                              OtherAbilityPreventionRadiusMultiplier;                   // 0x05B4(0x0004) (Edit)
	class UStaticMeshComponent*                        rangeMesh;                                                // 0x05B8(0x0004) (Edit, ExportObject, Component, EditInline)
	class USkeletalMesh*                               TrapPreviewMesh;                                          // 0x05BC(0x0004) (Edit)
	struct FVector                                     TrapMeshScaleVec;                                         // 0x05C0(0x000C) (Edit)
	TArray<struct FString>                             PlacementDeniedStrings;                                   // 0x05CC(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     ChooseWhereToPlaceString;                                 // 0x05D8(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     ChooseTowerString;                                        // 0x05E4(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              TrapZOffset;                                              // 0x05F0(0x0004) (Edit)
	float                                              AngleIndicatorDecalSize;                                  // 0x05F4(0x0004) (Edit)
	struct FVector                                     AngleIndicatorDecalOffset;                                // 0x05F8(0x000C) (Edit)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial_361;                          // 0x0604(0x0004) (Edit)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial_121;                          // 0x0608(0x0004) (Edit)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial_91;                           // 0x060C(0x0004) (Edit)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial_31;                           // 0x0610(0x0004) (Edit)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial_361;                          // 0x0614(0x0004) (Edit)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial_121;                          // 0x0618(0x0004) (Edit)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial_91;                           // 0x061C(0x0004) (Edit)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial_31;                           // 0x0620(0x0004) (Edit)
	float                                              AngleIndicatorDecalTowerRangeScale;                       // 0x0624(0x0004) (Edit)
	float                                              baseRangeMeshScale;                                       // 0x0628(0x0004) (Edit)
	float                                              PlacementRangeExponent;                                   // 0x062C(0x0004) (Edit)
	float                                              ManaCostToActivate;                                       // 0x0630(0x0004) (Edit)
	class UDecalComponent*                             AngleIndicatorDecal;                                      // 0x0634(0x0004) (ExportObject, Component, EditInline)
	class UDecalComponent*                             RangeIndicatorDecal;                                      // 0x0638(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterialInstance;                      // 0x063C(0x0004) (Transient)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterialInstance;                      // 0x0640(0x0004) (Transient)
	struct FVector                                     TowerActorPlacementOffset;                                // 0x0644(0x000C)
	struct FVector                                     ReplicatedPlacementLocation;                              // 0x0650(0x000C) (Net)
	struct FRotator                                    ReplicatedPlacementRotation;                              // 0x065C(0x000C) (Net)
	unsigned long                                      ReplicatedIsValidPlacement : 1;                           // 0x0668(0x0004) (Net)
	unsigned long                                      bWasValidTower : 1;                                       // 0x0668(0x0004) (Transient)
	unsigned long                                      bShowAngleDecal : 1;                                      // 0x0668(0x0004) (Transient)
	unsigned long                                      bShowRangeDecal : 1;                                      // 0x0668(0x0004) (Transient)
	unsigned long                                      bClientGotoRotationState : 1;                             // 0x0668(0x0004) (Transient)
	unsigned long                                      ClientForceNoInterpolation : 1;                           // 0x0668(0x0004) (Transient)
	float                                              LastTowerMeshScale;                                       // 0x066C(0x0004) (Transient)
	float                                              TowerRangeScaler;                                         // 0x0670(0x0004) (Net, Transient)
	float                                              TowerMeshScale;                                           // 0x0674(0x0004)
	float                                              CurrentAngleDecalOpacity;                                 // 0x0678(0x0004)
	class ADunDefTower*                                currentMovingTower;                                       // 0x067C(0x0004)
	class ADunDefTower*                                pendingMovingTower;                                       // 0x0680(0x0004) (Transient)
	class UParticleSystem*                             defaultParticleTemplate;                                  // 0x0684(0x0004) (Transient)
	struct FVector                                     GamepadLookDirection;                                     // 0x0688(0x000C) (Transient)
	struct FRotator                                    PlacementRotation;                                        // 0x0694(0x000C) (Transient)
	struct FVector                                     LookAtLocation;                                           // 0x06A0(0x000C) (Transient)
	class UMaterialInstanceConstant*                   MeshMaterialInstance;                                     // 0x06AC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_MoveTower");
		return ptr;
	}


	int GetCostToActivate(unsigned long returnTrueValue);
	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	void ClientReset();
	void ServerMoveTower(const struct FVector& towerPlacementLocation, const struct FRotator& towerPlacementRotation);
	void SetUpTowerMesh(class ADunDefTower* theTower);
	void ServerRequestGrabTower(class ADunDefTower* Tower);
	void StartMovingState(class ADunDefTower* Tower);
	void ClientStartMovingState(class ADunDefTower* Tower);
	void ServerReceivePlacementState(unsigned long bIsValidPlacement, const struct FVector& tPlacementLocation, const struct FRotator& tPlacementRotation);
	void PostPlacementUpdate(float DeltaTime);
	void UpdateDecalPlacement(float DeltaTime);
	unsigned long AllowTowerPlacementPosition(const struct FVector& placementPos, unsigned long bOnlyCheckVolumes, int* PlacementDeniedReason);
	float GetOtherMoveAbilityTowerRadius();
	unsigned long IsInPlacingTowerState();
	unsigned long IsTowerPhysical();
	void OnActivate();
	void UpdateClientInterpolations(float DeltaTime);
	void ServerGotoRotationState();
	class ADunDefEmitterSpawnable* GetPlacementWeaponEffect();
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefPlayerAbility_SummonCommand
// 0x008C (0x05CC - 0x0540)
class ADunDefPlayerAbility_SummonCommand : public ADunDefPlayerAbility_TowerPlacement
{
public:
	class UMaterialInstanceConstant*                   DecalMaterialBuild;                                       // 0x0540(0x0004) (Edit)
	float                                              SelectionRadius;                                          // 0x0544(0x0004) (Edit)
	class UDecalComponent*                             SummonRangeDecal;                                         // 0x0548(0x0004) (Edit, ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterial;                        // 0x054C(0x0004) (Edit)
	struct FVector                                     SummonIndicatorDecalOffset;                               // 0x0550(0x000C) (Edit)
	unsigned long                                      bRequiresMovementLocation : 1;                            // 0x055C(0x0004) (Edit)
	unsigned long                                      bTraceForTarget : 1;                                      // 0x055C(0x0004) (Edit)
	unsigned long                                      bForceMaualInOverlord : 1;                                // 0x055C(0x0004) (Edit)
	unsigned long                                      bDoInstantCommand : 1;                                    // 0x055C(0x0004) (Edit)
	unsigned long                                      bUseInstigatorAsTargetedActor : 1;                        // 0x055C(0x0004) (Edit)
	unsigned long                                      bOnlyTargetFriendly : 1;                                  // 0x055C(0x0004) (Edit)
	unsigned long                                      bUsePlayersTarget : 1;                                    // 0x055C(0x0004) (Edit)
	unsigned long                                      bRequiresSelections : 1;                                  // 0x055C(0x0004) (Edit)
	TEnumAsByte<ESummonedCommand>                      myCommand;                                                // 0x0560(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0561(0x0003) MISSED OFFSET
	class UTexture2D*                                  targetedIcon;                                             // 0x0564(0x0004) (Edit)
	struct FVector                                     TargetedIconOffset;                                       // 0x0568(0x000C) (Edit)
	float                                              targetedIconSize;                                         // 0x0574(0x0004) (Edit)
	float                                              SelectRadius;                                             // 0x0578(0x0004) (Edit)
	float                                              placementSteps;                                           // 0x057C(0x0004) (Edit)
	float                                              placementRadius;                                          // 0x0580(0x0004) (Edit)
	float                                              placementIncrease;                                        // 0x0584(0x0004) (Edit)
	int                                                placementIterations;                                      // 0x0588(0x0004) (Edit)
	struct FName                                       IssueCommandAnimName;                                     // 0x058C(0x0008) (Edit)
	struct FName                                       CommandFinishAnim;                                        // 0x0594(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     Blip_MoveEmitter;                                         // 0x059C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     Blip_Follow;                                              // 0x05A0(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     Blip_AttackEmitter;                                       // 0x05A4(0x0004) (Edit)
	class USoundCue*                                   LocalIssueCommandSound;                                   // 0x05A8(0x0004) (Edit)
	struct FString                                     RequiresMinionsString;                                    // 0x05AC(0x000C) (Edit, Localized, NeedCtorLink)
	class UAudioComponent*                             OrderIssuedUnitCommand;                                   // 0x05B8(0x0004) (ExportObject, Component, EditInline)
	class AActor*                                      targetedActor;                                            // 0x05BC(0x0004) (Transient)
	class ADunDefPlayer_Summoner*                      mySummoner;                                               // 0x05C0(0x0004) (Transient)
	float                                              SelectionRangeScaler;                                     // 0x05C4(0x0004) (Transient)
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterialInstance;                // 0x05C8(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_SummonCommand");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	unsigned long RequestActivation(unsigned long bHeld);
	void StopTowerPlacingAnimation();
	void StartTowerPlacingAnimation();
	unsigned long AllowCastingCancelOnDamage();
	void PostPlacementUpdate(float DeltaTime);
	void UpdateDecalPlacement(float DeltaTime);
	void ServerRequestSetCommand(const struct FVector& pLoc, class AActor* targActor);
	void HandleInstantCommand();
	void OnActivate();
	struct FName GetCastingStateNamePC();
	void PostBeginPlay();
	void IncreasePlacementTowerRadius();
	void DecreasePlacementTowerRadius();
};


// Class DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord
// 0x00C8 (0x05A4 - 0x04DC)
class ADunDefPlayerAbility_PhaseShiftOverlord : public ADunDefPlayerAbility_PhaseShift
{
public:
	class ADunDefEmitterSpawnable*                     Blip_MoveEmitter;                                         // 0x04DC(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     Blip_Follow;                                              // 0x04E0(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     Blip_AttackEmitter;                                       // 0x04E4(0x0004) (Edit)
	class UTexture2D*                                  overFriendly;                                             // 0x04E8(0x0004) (Edit)
	class UTexture2D*                                  overEnemy;                                                // 0x04EC(0x0004) (Edit)
	class UTexture2D*                                  overFollow;                                               // 0x04F0(0x0004) (Edit)
	float                                              mouseOverIconScale;                                       // 0x04F4(0x0004) (Edit)
	struct FColor                                      overEnemyColor;                                           // 0x04F8(0x0004) (Edit)
	struct FColor                                      overFriendlyColor;                                        // 0x04FC(0x0004) (Edit)
	float                                              moveLocRadius;                                            // 0x0500(0x0004) (Edit)
	float                                              placementSteps;                                           // 0x0504(0x0004) (Edit)
	float                                              placementRadius;                                          // 0x0508(0x0004) (Edit)
	float                                              placementIncrease;                                        // 0x050C(0x0004) (Edit)
	int                                                placementIterations;                                      // 0x0510(0x0004) (Edit)
	class USoundCue*                                   MovementClickSound;                                       // 0x0514(0x0004) (Edit)
	class USoundCue*                                   AttackSound;                                              // 0x0518(0x0004) (Edit)
	class USoundCue*                                   FollowSound;                                              // 0x051C(0x0004) (Edit)
	class USoundCue*                                   SelectSound;                                              // 0x0520(0x0004) (Edit)
	class USoundCue*                                   DeSelectSound;                                            // 0x0524(0x0004) (Edit)
	struct FName                                       UnphasingCastingStateName;                                // 0x0528(0x0008) (Edit)
	struct FString                                     UnsupportedGamepadString;                                 // 0x0530(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     SelectMinionsString;                                      // 0x053C(0x000C) (Edit, Localized, NeedCtorLink)
	unsigned long                                      bDrawStringPrompt : 1;                                    // 0x0548(0x0004) (Edit)
	unsigned long                                      bSelectionStarted : 1;                                    // 0x0548(0x0004) (Transient)
	unsigned long                                      bForceCancel : 1;                                         // 0x0548(0x0004) (Transient)
	float                                              BlipZOffset;                                              // 0x054C(0x0004) (Edit)
	struct FVector2D                                   startMouseCoords;                                         // 0x0550(0x0008) (Transient)
	struct FVector                                     startMouseProjection;                                     // 0x0558(0x000C) (Transient)
	struct FVector                                     startMouseDirection;                                      // 0x0564(0x000C) (Transient)
	TArray<class ADunDefTower_SummonEnemy*>            currentSelectedTowers;                                    // 0x0570(0x000C) (Transient, NeedCtorLink)
	class AActor*                                      currentMousedActor;                                       // 0x057C(0x0004) (Transient)
	float                                              clickStart;                                               // 0x0580(0x0004) (Transient)
	struct FColor                                      LineColor;                                                // 0x0584(0x0004) (Edit)
	class ADunDefDroppedEquipment*                     MovingItem;                                               // 0x0588(0x0004) (Transient)
	struct FVector                                     MovingItemStartLocation;                                  // 0x058C(0x000C) (Transient)
	float                                              MovingItemZOffset;                                        // 0x0598(0x0004) (Transient)
	float                                              MovingItemZOffsetAdditional;                              // 0x059C(0x0004) (Edit)
	float                                              MovingItemZOffsetMinimum;                                 // 0x05A0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord");
		return ptr;
	}


	struct FName GetCastingStateNamePC();
	void ServerRequestSetCommand(const struct FVector& pLoc, class AActor* targActor, TEnumAsByte<ESummonedCommand> myCommand);
	void DoMovementCommand(TArray<class ADunDefTower_SummonEnemy*> selectedTowers, const struct FVector& pLoc, TEnumAsByte<ESummonedCommand> myCommand);
	unsigned long DrawCastingHUD(class ADunDefHUD* H);
	unsigned long RequestActivation(unsigned long bHeld);
	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	unsigned long RequestCancellation(unsigned long bForce);
	void HandleConfirmation();
	void HandleAltCancellation();
	void HandleAltConfirmation();
};


// Class DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits
// 0x0064 (0x05A4 - 0x0540)
class ADunDefPlayerAbility_SelectSummonUnits : public ADunDefPlayerAbility_TowerPlacement
{
public:
	class UMaterialInstanceConstant*                   DecalMaterialBuild;                                       // 0x0540(0x0004) (Edit)
	float                                              SelectionRadius;                                          // 0x0544(0x0004) (Edit)
	float                                              DecalRangeScale;                                          // 0x0548(0x0004) (Edit)
	TArray<class ADunDefTower_SummonEnemy*>            currentSelectedTowers;                                    // 0x054C(0x000C) (NeedCtorLink)
	class UDecalComponent*                             SummonRangeDecal;                                         // 0x0558(0x0004) (Edit, ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterial;                        // 0x055C(0x0004) (Edit)
	struct FVector                                     SummonIndicatorDecalOffset;                               // 0x0560(0x000C) (Edit)
	unsigned long                                      bRequiresMovementLocation : 1;                            // 0x056C(0x0004) (Edit)
	unsigned long                                      DeselectAllTower : 1;                                     // 0x056C(0x0004) (Edit)
	unsigned long                                      bSelectAllTowers : 1;                                     // 0x056C(0x0004) (Edit)
	struct FName                                       SelectingAnimName;                                        // 0x0570(0x0008) (Edit)
	struct FName                                       SelectingStopAnim;                                        // 0x0578(0x0008) (Edit)
	struct FString                                     SelectUnitsString;                                        // 0x0580(0x000C) (Edit, Localized, NeedCtorLink)
	class USoundCue*                                   SelectSound;                                              // 0x058C(0x0004) (Edit)
	class USoundCue*                                   DeSelectSound;                                            // 0x0590(0x0004) (Edit)
	class ADunDefPlayer_Summoner*                      mySummoner;                                               // 0x0594(0x0004) (Transient)
	float                                              SelectionRangeScaler;                                     // 0x0598(0x0004) (Transient)
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterialInstance;                // 0x059C(0x0004) (Transient)
	float                                              LastConfirmTime;                                          // 0x05A0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits");
		return ptr;
	}


	void StopTowerPlacingAnimation();
	void StartTowerPlacingAnimation();
	unsigned long AllowCastingCancelOnDamage();
	void DeSelectUnits();
	void SelectAllTowers();
	void OnActivate();
	void PostPlacementUpdate(float DeltaTime);
	void UpdateDecalPlacement(float DeltaTime);
	void CancelAbility();
	void AbilityTick(float DeltaTime);
	void PostBeginPlay();
	void IncreasePlacementTowerRadius();
	void DecreasePlacementTowerRadius();
};


// Class DunDefSpecial.DunDefPlayerAbility_SlamDash
// 0x00B8 (0x0534 - 0x047C)
class ADunDefPlayerAbility_SlamDash : public ADunDefPlayerAbility_CharacterToggle
{
public:
	TArray<struct ADunDefPlayerAbility_SlamDash_FHitTarget> HitTargets;                                               // 0x047C(0x000C) (NeedCtorLink)
	float                                              DamageInterval;                                           // 0x0488(0x0004) (Edit)
	float                                              MaxActiveTime;                                            // 0x048C(0x0004) (Edit)
	float                                              MeleeDamageMomentum;                                      // 0x0490(0x0004) (Edit)
	struct FVector                                     MeleeSwingExtent;                                         // 0x0494(0x000C) (Edit)
	float                                              MassMomentumExponentialScale;                             // 0x04A0(0x0004) (Edit)
	float                                              WeaponDamageMultiplier;                                   // 0x04A4(0x0004) (Edit)
	float                                              AdditionalDamageAmount;                                   // 0x04A8(0x0004) (Edit)
	float                                              HeroStatDamageModifierExponent;                           // 0x04AC(0x0004) (Edit)
	float                                              HeroStatMomentumModifierExponent;                         // 0x04B0(0x0004) (Edit)
	float                                              DashAnimPlayRate;                                         // 0x04B4(0x0004) (Edit)
	float                                              DashGroundSpeed;                                          // 0x04B8(0x0004) (Edit)
	float                                              HeroStatGroundSpeedExponent;                              // 0x04BC(0x0004) (Edit)
	float                                              PushRadius;                                               // 0x04C0(0x0004) (Edit)
	float                                              PlayRateExp;                                              // 0x04C4(0x0004) (Edit)
	float                                              MaxPlayRate;                                              // 0x04C8(0x0004) (Edit)
	float                                              MaxTravelDistance;                                        // 0x04CC(0x0004) (Edit)
	struct FVector                                     RunStartPoint;                                            // 0x04D0(0x000C)
	struct FName                                       DashStartAnim;                                            // 0x04DC(0x0008) (Edit)
	struct FName                                       DashLoopAnim;                                             // 0x04E4(0x0008) (Edit)
	struct FName                                       DashStopAnim;                                             // 0x04EC(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     WeaponEmitterTemplate;                                    // 0x04F4(0x0004) (Edit)
	class UParticleSystemComponent*                    MyParticleSystemComponent;                                // 0x04F8(0x0004) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bStopped : 1;                                             // 0x04FC(0x0004) (Net)
	unsigned long                                      bStartedDash : 1;                                         // 0x04FC(0x0004)
	unsigned long                                      SummoningFlameLine : 1;                                   // 0x04FC(0x0004)
	struct FVector                                     lastStuckCheck;                                           // 0x0500(0x000C) (Transient)
	float                                              hitWallTraceOffset;                                       // 0x050C(0x0004) (Edit)
	float                                              StuckCheckInterval;                                       // 0x0510(0x0004) (Edit)
	float                                              StuckCheckDistance;                                       // 0x0514(0x0004) (Edit)
	class UClass*                                      MyDamageType;                                             // 0x0518(0x0004) (Edit)
	class ADunDefGasCloud*                             FlameCloudTemplate;                                       // 0x051C(0x0004) (Edit)
	float                                              SummonFlameInterval;                                      // 0x0520(0x0004) (Edit)
	struct FVector                                     FlameOffset;                                              // 0x0524(0x000C) (Edit)
	float                                              LastSummonFlameLineTime;                                  // 0x0530(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_SlamDash");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	unsigned long ConsumesInputWhenActive();
	unsigned long AllowUsageDuringCastingStates();
	void CheckStuck();
	void PlayStopAnim();
	void ShutOffVFX();
	void ActivateHandVFX();
	void PushCheck();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect
// 0x0038 (0x054C - 0x0514)
class ADunDefPlayerAbility_StanceOnDmgEffect : public ADunDefPlayerAbility_StanceBase
{
public:
	unsigned long                                      bDoStun : 1;                                              // 0x0514(0x0004) (Edit)
	unsigned long                                      bHealthAsDmg : 1;                                         // 0x0514(0x0004) (Edit)
	unsigned long                                      bLimitHealAmtPerAttack : 1;                               // 0x0514(0x0004) (Edit)
	unsigned long                                      bBaseHealOnOwnerHealth : 1;                               // 0x0514(0x0004) (Edit)
	unsigned long                                      bUseHealAmtforPerAttack : 1;                              // 0x0514(0x0004) (Edit)
	unsigned long                                      bIgnoreMaxHealAmt : 1;                                    // 0x0514(0x0004) (Edit)
	struct FStatMultipliers                            HealOnHitMult;                                            // 0x0518(0x0010) (Edit)
	class UClass*                                      dmgType;                                                  // 0x0528(0x0004) (Edit)
	float                                              MinHealAmtPct;                                            // 0x052C(0x0004) (Edit)
	float                                              MaxHealAmtPctPerAttack;                                   // 0x0530(0x0004) (Edit)
	int                                                BaseHealAmount;                                           // 0x0534(0x0004) (Edit)
	int                                                MinHealAmount;                                            // 0x0538(0x0004) (Edit)
	int                                                MaxNumProcs;                                              // 0x053C(0x0004) (Edit)
	int                                                curNumProcs;                                              // 0x0540(0x0004)
	int                                                accumulatedHeal;                                          // 0x0544(0x0004)
	int                                                MaxHealAmtPerAttack;                                      // 0x0548(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	void SetMaxHealAmountPerAttack();
	void ResetWeaponDamage();
	unsigned long StopOffHandWeaponDamage();
	unsigned long StopWeaponDamage();
	unsigned long StartOffHandWeaponDamage();
	unsigned long StartWeaponDamage();
	void DoAddHealth(int dmgAmount);
};


// Class DunDefSpecial.DunDefPlayerAbility_StanceLightning
// 0x0064 (0x05B0 - 0x054C)
class ADunDefPlayerAbility_StanceLightning : public ADunDefPlayerAbility_StanceOnDmgEffect
{
public:
	TArray<struct FStunnedActors>                      currentStunnedEnemies;                                    // 0x054C(0x000C) (Component, NeedCtorLink)
	TArray<struct FChainedActors>                      currentChainedActors;                                     // 0x0558(0x000C) (Component, NeedCtorLink)
	int                                                BaseChainRange;                                           // 0x0564(0x0004) (Edit)
	int                                                BaseChainTargets;                                         // 0x0568(0x0004) (Edit)
	float                                              ChainRangeExponent;                                       // 0x056C(0x0004) (Edit)
	struct FStatMultipliers                            StunTimeValue;                                            // 0x0570(0x0010) (Edit)
	struct FName                                       AttachEffectToPawnSocket;                                 // 0x0580(0x0008) (Edit)
	class USoundCue*                                   StunEnemySound;                                           // 0x0588(0x0004) (Edit)
	float                                              StunSoundDelay;                                           // 0x058C(0x0004) (Edit)
	float                                              LastStunSound;                                            // 0x0590(0x0004)
	class UParticleSystem*                             StunnedEffect;                                            // 0x0594(0x0004) (Edit)
	class UParticleSystem*                             ChainEffect;                                              // 0x0598(0x0004) (Edit)
	float                                              StunTime;                                                 // 0x059C(0x0004) (Edit)
	unsigned long                                      bAllowBossStun : 1;                                       // 0x05A0(0x0004) (Edit)
	TArray<class UClass*>                              NoStunDamageTypes;                                        // 0x05A4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_StanceLightning");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	float GetStunTime();
	void ClearChainedList();
	void ClearStunnedList();
	void RemoveStunnedActor(class ADunDefEnemy* stunRemoval, unsigned long bDontReplicate);
	void AddStunnedActor(class ADunDefEnemy* newStun);
	float GetChainRange();
	void FadeOutChain();
	int GetNumberOfChains();
	struct FVector GetLastChainPos();
	unsigned long CanStun(class ADunDefEnemy* stunTest);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack
// 0x0044 (0x0558 - 0x0514)
class ADunDefPlayerAbility_StanceSpecialAttack : public ADunDefPlayerAbility_StanceBase
{
public:
	struct FName                                       SpecialAnimation;                                         // 0x0514(0x0008) (Edit)
	struct FVector                                     MeleeSwingExtent;                                         // 0x051C(0x000C) (Edit)
	float                                              DamageMomentum;                                           // 0x0528(0x0004) (Edit)
	float                                              MassMomentumExponentialScale;                             // 0x052C(0x0004) (Edit)
	float                                              WeaponDamageMultiplier;                                   // 0x0530(0x0004) (Edit)
	float                                              AdditionalDamageAmount;                                   // 0x0534(0x0004) (Edit)
	float                                              HeroStatDamageModifierExponent;                           // 0x0538(0x0004) (Edit)
	float                                              HeroStatMomentumModifierExponent;                         // 0x053C(0x0004) (Edit)
	float                                              TimeBeforeEndAnimationToFinish;                           // 0x0540(0x0004) (Edit)
	float                                              CompletedStunDelayTime;                                   // 0x0544(0x0004) (Edit)
	unsigned long                                      bUseWeaponsIndividual : 1;                                // 0x0548(0x0004) (Edit)
	unsigned long                                      bUseCombinedDamage : 1;                                   // 0x0548(0x0004) (Edit)
	unsigned long                                      bLockStanceOnComplete : 1;                                // 0x0548(0x0004) (Edit)
	unsigned long                                      bAutoActivate : 1;                                        // 0x0548(0x0004) (Edit)
	unsigned long                                      bSpawnEmitterOnEnd : 1;                                   // 0x0548(0x0004) (Edit)
	unsigned long                                      bUseOffHandForEmitter : 1;                                // 0x0548(0x0004) (Edit)
	unsigned long                                      bConsumeManaOnSpecial : 1;                                // 0x0548(0x0004) (Edit)
	unsigned long                                      bStopAttackOnComplete : 1;                                // 0x0548(0x0004) (Edit)
	unsigned long                                      bDoingAttack : 1;                                         // 0x0548(0x0004)
	unsigned long                                      bLockedStance : 1;                                        // 0x0548(0x0004) (Net)
	unsigned long                                      bSpecialStarted : 1;                                      // 0x0548(0x0004) (Net)
	unsigned long                                      bDoingMainHandDmg : 1;                                    // 0x0548(0x0004)
	unsigned long                                      bDoingOffHandDmg : 1;                                     // 0x0548(0x0004)
	class ADunDefEmitterDamage*                        EndDamageEmitter;                                         // 0x054C(0x0004) (Edit)
	class UParticleSystemComponent*                    StunEffectComponent;                                      // 0x0550(0x0004) (Edit, ExportObject, Component, EditInline)
	int                                                ManaCostForSpecial;                                       // 0x0554(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	unsigned long StopOffHandWeaponDamage();
	unsigned long StopWeaponDamage();
	unsigned long StartOffHandWeaponDamage();
	unsigned long StartWeaponDamage();
	float GetMomentum();
	float GetDamage(class ADunDefWeapon_MeleeSword* dmgWeapon);
	void ClearStanceStun();
	void CancelAbility();
	void CompletedSpecial();
	void ClientCompletedSpecial();
	void SpawnFinishEmitter();
	void AnimNotify_CurrentAbility_Off();
	void AnimNotify_CurrentAbility_On();
	void DoSpecialAttack();
	void ClearHitList();
	void DoSwinging();
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefPlayerAbility_WheeloFortuna
// 0x02D0 (0x06FC - 0x042C)
class ADunDefPlayerAbility_WheeloFortuna : public ADunDefPlayerAbility
{
public:
	class UMaterialInterface*                          SlotMachineMat;                                           // 0x042C(0x0004) (Edit)
	TArray<struct FGlyphPattern>                       myPatterns;                                               // 0x0430(0x000C) (Edit, NeedCtorLink)
	struct FGlyphIcon                                  wheelSlots[0x3];                                          // 0x043C(0x0020) (Edit)
	float                                              GlobalSpinSpeedMult;                                      // 0x049C(0x0004) (Edit)
	float                                              WheelIconSizeX;                                           // 0x04A0(0x0004) (Edit)
	float                                              WheelIconSizeY;                                           // 0x04A4(0x0004) (Edit)
	float                                              WheelStepValue;                                           // 0x04A8(0x0004) (Edit)
	unsigned long                                      bForceTestPattern : 1;                                    // 0x04AC(0x0004) (Edit)
	unsigned long                                      bDoingTimeDilation : 1;                                   // 0x04AC(0x0004) (Transient)
	unsigned long                                      bForceSelections : 1;                                     // 0x04AC(0x0004) (Transient)
	unsigned long                                      bDoFadeOut : 1;                                           // 0x04AC(0x0004) (Transient)
	unsigned long                                      bFinished : 1;                                            // 0x04AC(0x0004) (Transient)
	struct FGlyphPattern                               testPattern;                                              // 0x04B0(0x0084) (Edit, NeedCtorLink)
	class UMaterialInstanceConstant*                   GoldMaterialTemplate;                                     // 0x0534(0x0004) (Edit)
	int                                                defaultManaAmount;                                        // 0x0538(0x0004) (Edit)
	float                                              defaultManaExp;                                           // 0x053C(0x0004) (Edit)
	class ADunDefManaToken*                            SmallManaTokenTemplate;                                   // 0x0540(0x0004) (Edit)
	class ADunDefManaToken*                            MinorManaTokenTemplate;                                   // 0x0544(0x0004) (Edit)
	class ADunDefManaToken*                            LargeManaTokenTemplate;                                   // 0x0548(0x0004) (Edit)
	float                                              ManaTokenImpulseMagnitude;                                // 0x054C(0x0004) (Edit)
	float                                              ManaTokenTorqueMagnitude;                                 // 0x0550(0x0004) (Edit)
	struct FVector                                     ManaTokenImpulseUpOffset;                                 // 0x0554(0x000C) (Edit)
	struct FString                                     defaultNoMatchMessage;                                    // 0x0560(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              EndLingerTime;                                            // 0x056C(0x0004) (Edit)
	struct FName                                       DanceStartAnimName;                                       // 0x0570(0x0008) (Edit)
	struct FName                                       DanceLoopAnimName;                                        // 0x0578(0x0008) (Edit)
	struct FName                                       DanceEndAnimName;                                         // 0x0580(0x0008) (Edit)
	struct FLinearColor                                DefaultSelection;                                         // 0x0588(0x0010) (Edit)
	struct FLinearColor                                goodSelection;                                            // 0x0598(0x0010) (Edit)
	struct FName                                       selectionBarParamName;                                    // 0x05A8(0x0008) (Edit)
	struct FName                                       selectionFlashParamName;                                  // 0x05B0(0x0008) (Edit)
	float                                              ManaCostToActivate;                                       // 0x05B8(0x0004) (Edit)
	float                                              WheelFadeInTime;                                          // 0x05BC(0x0004) (Edit)
	float                                              WheelFadeOutTime;                                         // 0x05C0(0x0004) (Edit)
	class USoundCue*                                   StopWheelSound;                                           // 0x05C4(0x0004) (Edit)
	class USoundCue*                                   DefaultSound;                                             // 0x05C8(0x0004) (Edit)
	class UAudioComponent*                             LoopingWheelSound;                                        // 0x05CC(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       WheelOpacityName;                                         // 0x05D0(0x0008) (Edit)
	float                                              fadeOutDelay;                                             // 0x05D8(0x0004) (Edit)
	TArray<class UClass*>                              GRInotallowedon;                                          // 0x05DC(0x000C) (Edit, NeedCtorLink)
	struct FString                                     DummyPercentDamageString;                                 // 0x05E8(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     DummyPercentHealingString;                                // 0x05F4(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     DummyDamageTakenByPlayerString;                           // 0x0600(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     DummyDamageDoneByPlayerString;                            // 0x060C(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     DummyDamageTakenByEnemyString;                            // 0x0618(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     DummyDamageDoneByEnemyString;                             // 0x0624(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     DummyPercentGoldedString;                                 // 0x0630(0x000C) (Edit, Localized, NeedCtorLink)
	int                                                currentStopIndex;                                         // 0x063C(0x0004) (Transient)
	int                                                currentPatternIdx;                                        // 0x0640(0x0004) (Transient)
	struct FGlyphPattern                               selectedPattern;                                          // 0x0644(0x0084) (Transient, NeedCtorLink)
	TArray<class ADunDefPawn*>                         boostingPawns;                                            // 0x06C8(0x000C) (Transient, NeedCtorLink)
	TArray<class ADunDefPracticeDummy*>                boostingDummies;                                          // 0x06D4(0x000C) (Transient, NeedCtorLink)
	TArray<class ADunDefEnemy*>                        goldedEnemies;                                            // 0x06E0(0x000C) (Transient, NeedCtorLink)
	TArray<class ADunDefEnemy*>                        stunnedPawns;                                             // 0x06EC(0x000C) (Transient, NeedCtorLink)
	class UMaterialInstanceConstant*                   mySlotMIC;                                                // 0x06F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_WheeloFortuna");
		return ptr;
	}


	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	int GetCostToActivate(unsigned long returnTrueValue);
	void StopLoopingAnims();
	struct FName GetCastingCharacterAnimation();
	void Destroyed();
	void ResetTimeDilation();
	void DoTimeDilation(const struct FGlyphPattern& thePattern);
	void SpawnManaTokens();
	void GoldEnemy(class ADunDefEnemy* Enemy);
	unsigned long DoGolding(const struct FGlyphPattern& thePattern);
	void EndEffect();
	void ClearOutBoosters();
	void HandleEnemyAffects(const struct FGlyphPattern& thePattern);
	void HandleTowerAffects(const struct FGlyphPattern& thePattern);
	void HandlePlayerAffects(const struct FGlyphPattern& thePattern);
	void DoTowerUpgrades(const struct FGlyphPattern& thePattern);
	void SortStuff(TArray<float> arrayin, int Size, TArray<float>* arrayout);
	void CoreDMG(const struct FGlyphPattern& thePattern);
	void CoreHeal(const struct FGlyphPattern& thePattern);
	void PlayerTeleport(const struct FGlyphPattern& thePattern);
	void ServerHandleSuccess(int patternIdx);
	void ServerHandleDefault();
	void CancelAbility();
	void SetDoFadeOut();
	void FinishSelection();
	unsigned long CheckPattern(const struct FGlyphPattern& CheckPattern);
	void GetBoostedTargets(TArray<class APawn*>* boostedTargets);
	void NotifyOfBoostedRemoval(class APawn* removedBoostee);
	float GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType);
	unsigned long HasPawnBoostingType(TEnumAsByte<EPawnBoostType> boostType);
	void UpdateStuns();
	void AbilityTick(float DeltaTime);
	void ForceSelections();
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefPlayerAbility_WhirlWind
// 0x008D (0x0565 - 0x04D8)
class ADunDefPlayerAbility_WhirlWind : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              WhirlWindDamage;                                          // 0x04D8(0x0004) (Edit)
	float                                              WhirlWindElementalDamage;                                 // 0x04DC(0x0004) (Edit)
	float                                              WhirlWindDamageMomentum;                                  // 0x04E0(0x0004) (Edit)
	float                                              WhirlWindDamageMultiplier;                                // 0x04E4(0x0004) (Edit)
	float                                              WhirlWindDamageExponent;                                  // 0x04E8(0x0004) (Edit)
	class UClass*                                      WhirlWindDamageType;                                      // 0x04EC(0x0004) (Edit)
	class UClass*                                      WhirlWindElementalDamageType;                             // 0x04F0(0x0004) (Edit)
	float                                              WhirlWindDuration;                                        // 0x04F4(0x0004) (Edit, Net)
	unsigned long                                      bCancelAbilityAfterDuration : 1;                          // 0x04F8(0x0004) (Edit)
	unsigned long                                      bUseElementalVFX : 1;                                     // 0x04F8(0x0004) (Edit)
	unsigned long                                      bUseWeaponDamage : 1;                                     // 0x04F8(0x0004) (Edit)
	struct FName                                       IdleAnimationName;                                        // 0x04FC(0x0008) (Edit)
	class UParticleSystem*                             ElementalVFXEntries[0xB];                                 // 0x0504(0x0004) (Edit)
	class UParticleSystem*                             ElementalDamageVFXEntries[0xB];                           // 0x0530(0x0004) (Edit)
	class UParticleSystem*                             CachedAbilityEffect;                                      // 0x055C(0x0004) (Transient)
	class UParticleSystem*                             CachedAbilityActorEffect;                                 // 0x0560(0x0004) (Transient)
	TEnumAsByte<EElementTrait>                         WeaponElementalTrait;                                     // 0x0564(0x0001) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_WhirlWind");
		return ptr;
	}


	unsigned long ConsumesInputWhenActive();
	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly);
	unsigned long CanAffect(class AActor* theAct);
	void SetElementalVFX(TEnumAsByte<EElementTrait> aElementalTrait);
	unsigned long AbilityReleased();
	unsigned long AbilityPressed();
	void CancelEffect();
	class UClass* GetElementalDamageType();
	class UClass* GetDamageType();
	float GetElementalDamage();
	float GetDamage();
	TEnumAsByte<EPlayerAbilityStatus> GetAbilityStatus(int* ExtraStatusFlag);
	void DoEffect();
	void AddEffect(class AActor* theAct);
	void OnActivate();
	void PostBeginPlay();
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound
// 0x0028 (0x03B8 - 0x0390)
class ADunDefProjectileHoming_Piercing_GroundBound : public ADunDefProjectile_Harpoon
{
public:
	float                                              maxTraceZ;                                                // 0x0390(0x0004) (Edit)
	float                                              MaxStartHeightCheck;                                      // 0x0394(0x0004) (Edit)
	float                                              MaxEndHeightCheck;                                        // 0x0398(0x0004) (Edit)
	float                                              FloatDownVelocity;                                        // 0x039C(0x0004) (Edit)
	float                                              GroundHeight;                                             // 0x03A0(0x0004) (Edit)
	float                                              SnapToGroundMaxHeight;                                    // 0x03A4(0x0004) (Edit)
	unsigned long                                      bFloatDown : 1;                                           // 0x03A8(0x0004) (Edit)
	unsigned long                                      bDisableClimbCheck : 1;                                   // 0x03A8(0x0004) (Edit)
	unsigned long                                      bSnapToGroundWhenClose : 1;                               // 0x03A8(0x0004) (Edit)
	unsigned long                                      bCheckGroundBound : 1;                                    // 0x03A8(0x0004) (Edit)
	struct FVector                                     SavedDirection;                                           // 0x03AC(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound");
		return ptr;
	}


	void CheckGround();
	void InitProjectile(const struct FVector& Direction, class APawn* MyInstigator, float baseDamageForScaling, class AActor* myHomingTarget, const TScriptInterface<class UIActorModifierInterface>& MyActorModifier);
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse
// 0x0030 (0x03E8 - 0x03B8)
class ADunDefProjectileHoming_Piercing_GroundBound_Pulse : public ADunDefProjectileHoming_Piercing_GroundBound
{
public:
	unsigned long                                      bAllowImpacts : 1;                                        // 0x03B8(0x0004) (Edit)
	unsigned long                                      bExpireOnFinalPulse : 1;                                  // 0x03B8(0x0004) (Edit)
	unsigned long                                      bDynamicPulseInterval : 1;                                // 0x03B8(0x0004) (Edit)
	unsigned long                                      bCompletedPulses : 1;                                     // 0x03B8(0x0004) (Net, Transient)
	unsigned long                                      bDidInit : 1;                                             // 0x03B8(0x0004) (Transient)
	int                                                numPulses;                                                // 0x03BC(0x0004) (Edit)
	class ADunDefEmitterDamage*                        PulseEmitters_Singular;                                   // 0x03C0(0x0004) (Edit)
	class ADunDefEmitterDamage*                        PulseEmitter_Final;                                       // 0x03C4(0x0004) (Edit)
	TArray<class ADunDefEmitterDamage*>                PulseEmitters;                                            // 0x03C8(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      PulseRadiusOverride;                                      // 0x03D4(0x000C) (Edit, NeedCtorLink)
	float                                              pulseInterval;                                            // 0x03E0(0x0004) (Edit)
	int                                                currentNumPulses;                                         // 0x03E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefProjectileHoming_Piercing_GroundBound_Pulse");
		return ptr;
	}


	void DoPulse(unsigned long bForce);
	void Expire();
	void InitProjectile(const struct FVector& Direction, class APawn* MyInstigator, float baseDamageForScaling, class AActor* myHomingTarget, const TScriptInterface<class UIActorModifierInterface>& MyActorModifier);
	unsigned long IsImpactAllowed(class AActor* Other);
	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly);
};


// Class DunDefSpecial.DunDefProjectile_Orb
// 0x001C (0x0404 - 0x03E8)
class ADunDefProjectile_Orb : public ADunDefProjectileHoming_Piercing_GroundBound_Pulse
{
public:
	unsigned long                                      bOnlyBurstIfTargetsInRange : 1;                           // 0x03E8(0x0004) (Edit)
	unsigned long                                      bScaleSpeedByNearbyTargets : 1;                           // 0x03E8(0x0004) (Edit)
	float                                              RadiusToCheckForTargets;                                  // 0x03EC(0x0004) (Edit)
	float                                              NearbyTargetProjectileSpeed;                              // 0x03F0(0x0004) (Edit)
	TArray<class UClass*>                              TargetClasses;                                            // 0x03F4(0x000C) (Edit, NeedCtorLink)
	float                                              OriginalSpeed;                                            // 0x0400(0x0004) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefProjectile_Orb");
		return ptr;
	}


	void Destroyed();
	void DoPulse(unsigned long bForce);
	unsigned long IsTargetsInRange();
	void ChangeSpeed(float spd, const struct FVector& Dir);
	void CheckGround();
	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly);
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefPurifyingBomb
// 0x000C (0x033C - 0x0330)
class ADunDefPurifyingBomb : public ADunDefManaBomb
{
public:
	TArray<struct FBonusDamageType>                    BonusDamageTypes;                                         // 0x0330(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPurifyingBomb");
		return ptr;
	}


	unsigned long HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage);
};


// Class DunDefSpecial.DunDefTower_BoostAura
// 0x002C (0x08F8 - 0x08CC)
class ADunDefTower_BoostAura : public ADunDefTower_Aura
{
public:
	struct FString                                     boostedTowerString;                                       // 0x08CC(0x000C) (Edit, NeedCtorLink)
	TArray<class UClass*>                              DamagableClassesToIgnore;                                 // 0x08D8(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBoostingtypes>                      BoostValues;                                              // 0x08E4(0x000C) (Edit, NeedCtorLink)
	float                                              AttackRangeMultiplier;                                    // 0x08F0(0x0004) (Net)
	float                                              ResistanceMultiplier;                                     // 0x08F4(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_BoostAura");
		return ptr;
	}


	float GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType);
	unsigned long HasTowerBoostingType(TEnumAsByte<ETowerBoostType> boostType);
	TScriptInterface<class UDunDefTargetableInterface> GetTowerBoostingTarget();
	void SetBoostMultiplier(int Idx);
	void RefreshBoosts();
	float GetAttackInterval();
	float GetAttackDamage();
	void ScaleForHeroModifiers(unsigned long IsFirstTime);
	struct FString GetToolTipText();
	void DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY);
	void ExitEffectDT(class ADunDefDamageableTarget* dt);
	void EntryEffectDT(class ADunDefDamageableTarget* dt);
	unsigned long AttacksDT(class ADunDefDamageableTarget* dt);
	void EnteredRadiusDT(class ADunDefDamageableTarget* dt);
	void UnTouch(class AActor* Other);
	unsigned long CanTargetInvisibleTarget(const TScriptInterface<class UDunDefTargetableInterface>& aTarget);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void CheckForDamagableTargets();
	void Timer();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefTower_TripTowerBuff
// 0x0050 (0x0A4C - 0x09FC)
class ADunDefTower_TripTowerBuff : public ADunDefTower_TripWire
{
public:
	TArray<struct FBoostingtypes>                      BoostValues;                                              // 0x09FC(0x000C) (Edit, NeedCtorLink)
	int                                                MaxAllowedLostTowers;                                     // 0x0A08(0x0004) (Edit)
	int                                                currentLostTowers;                                        // 0x0A0C(0x0004)
	float                                              TowerCheckInterval;                                       // 0x0A10(0x0004)
	float                                              LastTowerCheckTime;                                       // 0x0A14(0x0004)
	float                                              AttachParticleScale;                                      // 0x0A18(0x0004) (Edit)
	class UParticleSystem*                             AttachParticle;                                           // 0x0A1C(0x0004) (Edit)
	TArray<class UClass*>                              IgnoreForBuffs;                                           // 0x0A20(0x000C) (Edit, NeedCtorLink)
	struct FString                                     boostedTowerString;                                       // 0x0A2C(0x000C) (Edit, Localized, NeedCtorLink)
	float                                              AttackRangeMultiplier;                                    // 0x0A38(0x0004) (Net)
	float                                              ResistanceMultiplier;                                     // 0x0A3C(0x0004) (Net)
	TArray<class ADunDefTower*>                        TracedTowers;                                             // 0x0A40(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_TripTowerBuff");
		return ptr;
	}


	void SetBoostMultiplier(int Idx);
	void RefreshBoosts();
	void ScaleForHeroModifiers(unsigned long IsFirstTime);
	void DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY);
	void SetUseHealthBarMat();
	struct FString GetToolTipText();
	unsigned long NeedsRepair(unsigned long requireFullHealth);
	void RemoveTowerEffectIndex(int Idx);
	void RemoveTowerEffect(class ADunDefTower* theTower);
	void AddTowerEffect(class ADunDefTower* theTower);
	int GetMaxDetonations();
	void Destroyed();
	void RemoveAllBoosts();
	void PostBeginPlay();
	void ClearDeletedTowers();
	void CheckTowers();
	unsigned long CanAffectTower(class ADunDefTower* towerCheck);
	void DoTracing(float dt, unsigned long bForceDamage);
	float GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType);
	unsigned long HasTowerBoostingType(TEnumAsByte<ETowerBoostType> boostType);
	TScriptInterface<class UDunDefTargetableInterface> GetTowerBoostingTarget();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefTower_BuffSpawner
// 0x003C (0x086C - 0x0830)
class ADunDefTower_BuffSpawner : public ADunDefTower
{
public:
	TArray<class UDunDefBuff*>                         BuffTemplates;                                            // 0x0830(0x000C) (Edit, NeedCtorLink)
	TArray<class UClass*>                              ClassesToAffect;                                          // 0x083C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bIsPhysicalTower : 1;                                     // 0x0848(0x0004) (Edit)
	unsigned long                                      bPreventTowerOverlap : 1;                                 // 0x0848(0x0004) (Edit)
	unsigned long                                      bDoneInitalOverlap : 1;                                   // 0x0848(0x0004) (Net, Transient)
	float                                              TowerPreventionRadiusOffset;                              // 0x084C(0x0004) (Edit)
	int                                                CostPerBuffSpawn;                                         // 0x0850(0x0004) (Edit)
	TArray<struct FsBuffTarget>                        BuffTargets;                                              // 0x0854(0x000C) (NeedCtorLink)
	TArray<class UDunDefBuff*>                         ActiveBuffs;                                              // 0x0860(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_BuffSpawner");
		return ptr;
	}


	void ChangedGamePhases(unsigned long IsCombatPhase);
	unsigned long AllowTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point);
	unsigned long CheckAllowance();
	unsigned long PreventTowerAtPoint(class ADunDefPlayerController* PC, class ADunDefTower* towerArch, const struct FVector& Point, float towerRadius);
	unsigned long IsPhysicalTower();
	float GetTowerTargetingDesirability(class ADunDefTower* forTower);
	float GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer);
	void DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY);
	float GetAttackInterval();
	float GetAttackDamage();
	void ScaleForHeroModifiers(unsigned long IsFirstTime);
	void RemoveAllBuffTargets();
	void RemoveBuffsFromTarget(class AActor* Other);
	void AddBuffsToTarget(class AActor* Other);
	unsigned long CanAffectTarget(class AActor* Other);
	void Tick(float DeltaTime);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	void Destroyed();
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSpecial.DunDefTower_EmitterBurst
// 0x0020 (0x0908 - 0x08E8)
class ADunDefTower_EmitterBurst : public ADunDefTower_ProjectileType
{
public:
	class ADunDefEmitterDamage*                        EmitterTemplate;                                          // 0x08E8(0x0004) (Edit)
	float                                              DamageHeight;                                             // 0x08EC(0x0004) (Edit)
	float                                              DamageWidth;                                              // 0x08F0(0x0004) (Edit)
	float                                              BurstTime;                                                // 0x08F4(0x0004) (Edit)
	struct FName                                       stopShootAnim;                                            // 0x08F8(0x0008) (Edit)
	unsigned long                                      bSingleBurst : 1;                                         // 0x0900(0x0004) (Edit)
	unsigned long                                      bIsShooting : 1;                                          // 0x0900(0x0004) (Net, Transient)
	class ADunDefEmitterDamage*                        damageEmitterInstance;                                    // 0x0904(0x0004) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_EmitterBurst");
		return ptr;
	}


	class UClass* GetDamageType();
	float STATIC_StaticGetAttackRange(class UDunDefHero* hero, class ADunDefTower* Tower, float TowerRangeScaler);
	float GetAttackRange();
	float GetAttackDamage();
	void StopShooting();
	void ShootProjectile();
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefTower_Present
// 0x0098 (0x08C8 - 0x0830)
class ADunDefTower_Present : public ADunDefTower
{
public:
	struct FString                                     ChanceToSpawnString;                                      // 0x0830(0x000C) (Edit, Localized, NeedCtorLink)
	TArray<struct FspawnTypes>                         mySpawns;                                                 // 0x083C(0x000C) (Edit, NeedCtorLink)
	int                                                minManatoSpawn;                                           // 0x0848(0x0004) (Edit)
	int                                                maxManatoSpawn;                                           // 0x084C(0x0004) (Edit)
	class ADunDefManaToken*                            SmallManaTokenTemplate;                                   // 0x0850(0x0004) (Edit)
	class ADunDefManaToken*                            MinorManaTokenTemplate;                                   // 0x0854(0x0004) (Edit)
	class ADunDefManaToken*                            LargeManaTokenTemplate;                                   // 0x0858(0x0004) (Edit)
	class ADunDefManaToken*                            SuperManaTokenTemplate;                                   // 0x085C(0x0004) (Edit)
	float                                              ManaTokenImpulseMagnitude;                                // 0x0860(0x0004) (Edit)
	float                                              ManaTokenTorqueMagnitude;                                 // 0x0864(0x0004) (Edit)
	struct FVector                                     ManaTokenImpulseUpOffset;                                 // 0x0868(0x000C) (Edit)
	struct FVector                                     PlacementPosOffset;                                       // 0x0874(0x000C) (Edit)
	float                                              GlobalEquipmentDropValueMin;                              // 0x0880(0x0004) (Edit)
	float                                              GlobalEquipmentDropValueMax;                              // 0x0884(0x0004) (Edit)
	float                                              NightmareAbsoluteMaxEquipmentDropQuality;                 // 0x0888(0x0004) (Edit)
	float                                              NightmareGlobalEquipmentDropQuality;                      // 0x088C(0x0004) (Edit)
	float                                              AdditionalEquipmentRarityWeighting;                       // 0x0890(0x0004) (Edit)
	float                                              MaxDropEquipmentAngle;                                    // 0x0894(0x0004) (Edit)
	float                                              MaxWaveEquipmentQualityMultiplier;                        // 0x0898(0x0004) (Edit)
	float                                              EquipmentQualityMultiplierMaxWave;                        // 0x089C(0x0004) (Edit)
	float                                              AbsoluteMaxEquipmentDropQuality;                          // 0x08A0(0x0004) (Edit)
	float                                              GlobalEquipmentDropQuality;                               // 0x08A4(0x0004) (Edit)
	TArray<float>                                      DifficultyEquipmentQualityMultipliers;                    // 0x08A8(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bOpenPresentOnCombatPhase : 1;                            // 0x08B4(0x0004) (Edit)
	int                                                spawnGroupIdx;                                            // 0x08B8(0x0004) (Transient)
	TArray<struct FspawnChances>                       tempSpawnType;                                            // 0x08BC(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_Present");
		return ptr;
	}


	void UpdateTowerRatingMaterial();
	void SpawnDroppedEquipment();
	void SpawnManaTokens();
	void DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY);
	unsigned long AllowTowerSpawnAtLoc(class ADunDefTower* TowerArchetype, const struct FVector& placementPos, unsigned long bOnlyCheckVolumes);
	void DoActorSpawn(const struct FspawnChances& spawnChance);
	void DoEnemySpawn(const struct FspawnChances& spawnChance);
	unsigned long DoTowerSpawn(const struct FspawnChances& spawnChance, const struct FVector& HitLoc);
	void DoPresentSpawn(const struct FVector& HitLocation, unsigned long bSpawnOgresInLobby);
	unsigned long PickActor(int Idx, struct FspawnChances* spawnChance);
	void PickSpawnGroup();
	void Died(class AController* EventInstigator, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser);
	void ChangedGamePhases(unsigned long IsCombatPhase);
};


// Class DunDefSpecial.DunDefTower_ProjectileReflect
// 0x0016 (0x0AC2 - 0x0AAC)
class ADunDefTower_ProjectileReflect : public ADunDefTower_TripPhysical
{
public:
	float                                              costPerReflect;                                           // 0x0AAC(0x0004) (Edit)
	float                                              ProjDmgScale;                                             // 0x0AB0(0x0004) (Edit)
	float                                              ProjDmgExp;                                               // 0x0AB4(0x0004) (Edit)
	float                                              ProjSecondDmgScale;                                       // 0x0AB8(0x0004) (Edit)
	float                                              ProjSecondDmgExp;                                         // 0x0ABC(0x0004) (Edit)
	TEnumAsByte<ELevelUpValueType>                     ProjDmgStatType;                                          // 0x0AC0(0x0001) (Edit)
	TEnumAsByte<ELevelUpValueType>                     ProjSecondDmgStatType;                                    // 0x0AC1(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_ProjectileReflect");
		return ptr;
	}


	unsigned long IsPhysicalTower();
	int GetCostPerReflect();
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	float GetAttackDamage();
	void DoReflection(class ADunDefProjectile* reflectedProj, const struct FVector& NewDir);
	void KilledTarget(const TScriptInterface<class UDunDefTargetableInterface>& aTarget);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class DunDefSpecial.DunDefTower_WebWall
// 0x000C (0x0AB8 - 0x0AAC)
class ADunDefTower_WebWall : public ADunDefTower_TripPhysical
{
public:
	class UDunDefBuff*                                 BuffTemplate;                                             // 0x0AAC(0x0004) (Edit)
	int                                                CostPerWeb;                                               // 0x0AB0(0x0004) (Edit)
	unsigned long                                      ActivateTouchForSameTeam : 1;                             // 0x0AB4(0x0004) (Edit)
	unsigned long                                      bBuffExistingWebbedTargets : 1;                           // 0x0AB4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_WebWall");
		return ptr;
	}


	void ScaleForHeroModifiers(unsigned long IsFirstTime);
	void DrawTowerToolTipActorStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY);
	void DrawTowerToolTipStats(class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY);
	unsigned long CheckTouchingActor(class AActor* Other);
	float GetAttackDamage();
	int GetCostPerWeb();
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	unsigned long IsPhysicalTower();
	void KilledTarget(const TScriptInterface<class UDunDefTargetableInterface>& aTarget);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void UpdateBuffTargets();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefTurkey
// 0x000C (0x0D20 - 0x0D14)
class ADunDefTurkey : public ADunDefEnemy
{
public:
	class ADunDefEmitterSpawnable*                     DeathEffect;                                              // 0x0D14(0x0004) (Edit)
	float                                              FleeSpeed;                                                // 0x0D18(0x0004) (Edit)
	int                                                FleeSoundIndex;                                           // 0x0D1C(0x0004) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTurkey");
		return ptr;
	}


	void UpdateDifficultyValues(unsigned long UpdateMaterial, unsigned long onlyDynamicValues);
	void Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	void StopFlee();
	void PlayFleeSound();
	void StartFlee();
	void SetGroundSpeed(float NewSpeed, unsigned long bUseDifficultyMult);
	unsigned long Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void Destroyed();
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSpecial.DunDefTurkeyController
// 0x0030 (0x063C - 0x060C)
class ADunDefTurkeyController : public ADunDefEnemyController
{
public:
	float                                              FleeDistance;                                             // 0x060C(0x0004) (Edit)
	float                                              WanderRange;                                              // 0x0610(0x0004) (Edit)
	float                                              FleeTimeOut;                                              // 0x0614(0x0004) (Edit)
	float                                              MaxWanderOffSet;                                          // 0x0618(0x0004)
	float                                              MaxYawOffset;                                             // 0x061C(0x0004) (Edit)
	int                                                currentFleeIndex;                                         // 0x0620(0x0004)
	float                                              LastFleeChange;                                           // 0x0624(0x0004)
	class ADunDefPlayer*                               FleeTarget;                                               // 0x0628(0x0004)
	struct FVector                                     FleePoint;                                                // 0x062C(0x000C)
	float                                              currentYaw;                                               // 0x0638(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTurkeyController");
		return ptr;
	}


	unsigned long WantsHurtAnimation();
	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	struct FVector GetWanderPoint();
	unsigned long DoFlee(class ADunDefPlayer* fleeFrom);
	unsigned long CheckPlayers();
	void TimeOutFlee();
};


// Class DunDefSpecial.GameInfo_AroundTheWorld
// 0x0000 (0x053C - 0x053C)
class AGameInfo_AroundTheWorld : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_AroundTheWorld");
		return ptr;
	}


	void InitGameReplicationInfo();
	void DoWaveSkipping(unsigned long bAllowArbritraryWaveSkipping);
};


// Class DunDefSpecial.GameInfo_Assault
// 0x0000 (0x053C - 0x053C)
class AGameInfo_Assault : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_Assault");
		return ptr;
	}


	void InitGameReplicationInfo();
	void DoWaveSkipping(unsigned long bAllowArbritraryWaveSkipping);
	void PostBeginPlay();
	void RestartPlayer(class AController* NewPlayer);
};


// Class DunDefSpecial.GameInfo_Chicken
// 0x0000 (0x053C - 0x053C)
class AGameInfo_Chicken : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_Chicken");
		return ptr;
	}


	void RestartPlayer(class AController* NewPlayer);
};


// Class DunDefSpecial.GameInfo_Delivery
// 0x0000 (0x053C - 0x053C)
class AGameInfo_Delivery : public AMain
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_Delivery");
		return ptr;
	}

};


// Class DunDefSpecial.GameInfo_GoldenTokens
// 0x0000 (0x053C - 0x053C)
class AGameInfo_GoldenTokens : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_GoldenTokens");
		return ptr;
	}


	void Killed(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType);
};


// Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit
// 0x0000 (0x053C - 0x053C)
class AGameInfo_KillEnemiesTimeLimit : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit");
		return ptr;
	}


	void RestartPlayer(class AController* NewPlayer);
	void DoWaveSkipping(unsigned long bAllowArbritraryWaveSkipping);
};


// Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber
// 0x0000 (0x053C - 0x053C)
class AGameInfo_KillEnemiesTimeLimit_Uber : public AGameInfo_KillEnemiesTimeLimit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber");
		return ptr;
	}


	void AddObjectiveScore(class APlayerReplicationInfo* Scorer, int Score);
	void ScoreKill(class AController* Killer, class AController* Other);
	void Killed(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType);
};


// Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber6
// 0x0000 (0x053C - 0x053C)
class AGameInfo_KillEnemiesTimeLimit_Uber6 : public AGameInfo_KillEnemiesTimeLimit_Uber
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber6");
		return ptr;
	}

};


// Class DunDefSpecial.GameInfo_NoTowers
// 0x0000 (0x053C - 0x053C)
class AGameInfo_NoTowers : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_NoTowers");
		return ptr;
	}


	void InitGameReplicationInfo();
};


// Class DunDefSpecial.GameInfo_OgreAlly
// 0x0000 (0x053C - 0x053C)
class AGameInfo_OgreAlly : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_OgreAlly");
		return ptr;
	}


	void InitGameReplicationInfo();
};


// Class DunDefSpecial.GameInfo_RainingGoblins
// 0x0000 (0x053C - 0x053C)
class AGameInfo_RainingGoblins : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_RainingGoblins");
		return ptr;
	}


	void InitGameReplicationInfo();
};


// Class DunDefSpecial.GameInfo_UberAssault
// 0x0000 (0x053C - 0x053C)
class AGameInfo_UberAssault : public AGameInfo_Assault
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_UberAssault");
		return ptr;
	}

};


// Class DunDefSpecial.GameInfo_UberDefense
// 0x0000 (0x053C - 0x053C)
class AGameInfo_UberDefense : public AMain
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_UberDefense");
		return ptr;
	}

};


// Class DunDefSpecial.GameInfo_VDay2
// 0x0018 (0x0554 - 0x053C)
class AGameInfo_VDay2 : public AMain
{
public:
	TArray<class ADunDefEnemy*>                        Boys;                                                     // 0x053C(0x000C) (Transient, NeedCtorLink)
	TArray<class ADunDefEnemy*>                        Girls;                                                    // 0x0548(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_VDay2");
		return ptr;
	}


	void PairMatched(class ADunDefEnemy* Boy, class ADunDefEnemy* Girl);
	void Tick(float DeltaTime);
	void EnemyDied(class ADunDefEnemy* anEnemy);
	class ADunDefEnemy* WaveSpawnerCreateEnemy(class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
};


// Class DunDefSpecial.GameInfo_Wizardry
// 0x0008 (0x0544 - 0x053C)
class AGameInfo_Wizardry : public AGameInfo_Special
{
public:
	class ADunDefDarkElfMage*                          RegularMage;                                              // 0x053C(0x0004)
	class ADunDefDarkElfMage*                          RegularMageTwo;                                           // 0x0540(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_Wizardry");
		return ptr;
	}


	void MageCheck();
	void PostBeginPlay();
};


// Class DunDefSpecial.GameInfo_ZippyTerror
// 0x0000 (0x053C - 0x053C)
class AGameInfo_ZippyTerror : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_ZippyTerror");
		return ptr;
	}


	void InitGameReplicationInfo();
};


// Class DunDefSpecial.SnowManBoss
// 0x004C (0x0DBC - 0x0D70)
class ASnowManBoss : public ADunDefBoss
{
public:
	struct FName                                       PeckAnim;                                                 // 0x0D70(0x0008) (Edit)
	struct FName                                       PeckSocket;                                               // 0x0D78(0x0008) (Edit)
	struct FName                                       SnowShootAnim;                                            // 0x0D80(0x0008) (Edit)
	struct FName                                       SnowSpawnSocketLeft;                                      // 0x0D88(0x0008) (Edit)
	struct FName                                       SnowSpawnSocketRight;                                     // 0x0D90(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     SnowShootEffect;                                          // 0x0D98(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     PeckHitEffect;                                            // 0x0D9C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     StompEffect;                                              // 0x0DA0(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     DeathEffect;                                              // 0x0DA4(0x0004) (Edit)
	struct FName                                       StompAnim;                                                // 0x0DA8(0x0008) (Edit)
	float                                              StompEffectRadius;                                        // 0x0DB0(0x0004) (Edit)
	struct FName                                       SpawnInAnim;                                              // 0x0DB4(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.SnowManBoss");
		return ptr;
	}


	void StartMovement();
	void StopMovement();
	unsigned long Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void Destroyed();
	void DoStompDamage();
	void DoStomp();
	void DoPeck();
	void GetPeckLoc(struct FVector* Loc);
	void SnowBallRight();
	void SnowBallLeft();
	void SpawnSnowShootEffect(const struct FVector& SpawnLoc, const struct FRotator& SpawnRot);
	void GetProjectileSpawnLoc(unsigned long bIsLeftSocket, struct FVector* Loc, struct FRotator* Rot);
	float PlayStomp();
	float PlaySnowShoot();
	float PlayPeckAttack();
	void PlaySpawnIn();
	void PostBeginPlay();
};


// Class DunDefSpecial.SnowManBossController
// 0x0068 (0x0674 - 0x060C)
class ASnowManBossController : public ADunDefEnemyController
{
public:
	class ADunDefProjectile*                           SnowProjectileTemplate;                                   // 0x060C(0x0004) (Edit)
	float                                              PeckRange;                                                // 0x0610(0x0004) (Edit)
	float                                              PeckRadius;                                               // 0x0614(0x0004) (Edit)
	float                                              BasePeckDamage;                                           // 0x0618(0x0004) (Edit)
	class UClass*                                      PeckDmgType;                                              // 0x061C(0x0004) (Edit)
	float                                              PeckMomentum;                                             // 0x0620(0x0004) (Edit)
	float                                              PeckDmgFallOffExp;                                        // 0x0624(0x0004) (Edit)
	unsigned long                                      bDoFullPeckRadialDmg : 1;                                 // 0x0628(0x0004) (Edit)
	unsigned long                                      bDoFullStompRadialDmg : 1;                                // 0x0628(0x0004) (Edit)
	float                                              SnowShootRange;                                           // 0x062C(0x0004) (Edit)
	float                                              PeckAngle;                                                // 0x0630(0x0004) (Edit)
	float                                              PeckCoolDown;                                             // 0x0634(0x0004) (Edit)
	float                                              LastPeckTime;                                             // 0x0638(0x0004)
	float                                              SnowShootCoolDown;                                        // 0x063C(0x0004) (Edit)
	float                                              SnowShootAngle;                                           // 0x0640(0x0004) (Edit)
	float                                              MaxSnowShootRotOffset;                                    // 0x0644(0x0004) (Edit)
	float                                              LastSnowShoot;                                            // 0x0648(0x0004)
	float                                              StompRadius;                                              // 0x064C(0x0004) (Edit)
	float                                              BaseStompDamage;                                          // 0x0650(0x0004) (Edit)
	class UClass*                                      StompDmgType;                                             // 0x0654(0x0004) (Edit)
	float                                              StompMomentum;                                            // 0x0658(0x0004) (Edit)
	float                                              StompDmgFallOffExp;                                       // 0x065C(0x0004) (Edit)
	float                                              BaseStompChance;                                          // 0x0660(0x0004) (Edit)
	float                                              MinSurroundingEnemiesForStomp;                            // 0x0664(0x0004) (Edit)
	float                                              MaxSurroundingEnemiesForStomp;                            // 0x0668(0x0004) (Edit)
	float                                              StompCoolDown;                                            // 0x066C(0x0004) (Edit)
	float                                              LastStompTime;                                            // 0x0670(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.SnowManBossController");
		return ptr;
	}


	void CheckForCustomAttacks();
	unsigned long WantsHurtAnimation();
	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	unsigned long CheckStomp();
	void ChooseAttack();
	void DoPeck();
	void DoStomp();
	void SpawnSnowProjectile(unsigned long bIsLeftSocket);
};


// Class DunDefSpecial.TurkeyBoss
// 0x003C (0x0DAC - 0x0D70)
class ATurkeyBoss : public ADunDefBoss
{
public:
	struct FName                                       PeckAnim;                                                 // 0x0D70(0x0008) (Edit)
	struct FName                                       PeckSocket;                                               // 0x0D78(0x0008) (Edit)
	struct FName                                       EggShootAnim;                                             // 0x0D80(0x0008) (Edit)
	struct FName                                       EggSpawnSocket;                                           // 0x0D88(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     EggShootEffect;                                           // 0x0D90(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     PeckHitEffect;                                            // 0x0D94(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     StompEffect;                                              // 0x0D98(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     DeathEffect;                                              // 0x0D9C(0x0004) (Edit)
	struct FName                                       StompAnim;                                                // 0x0DA0(0x0008) (Edit)
	float                                              StompEffectRadius;                                        // 0x0DA8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.TurkeyBoss");
		return ptr;
	}


	unsigned long Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void Destroyed();
	void DoStompDamage();
	void DoStomp();
	void DoPeck();
	void GetPeckLoc(struct FVector* Loc);
	void ShootEgg();
	void SpawnEggShootEffect(const struct FVector& SpawnLoc, const struct FRotator& SpawnRot);
	void GetProjectileSpawnLoc(struct FVector* Loc, struct FRotator* Rot);
	float PlayStomp();
	float PlayEggShoot();
	float PlayPeckAttack();
};


// Class DunDefSpecial.TurkeyBossController
// 0x0068 (0x0674 - 0x060C)
class ATurkeyBossController : public ADunDefEnemyController
{
public:
	class ADunDefProjectile*                           EggProjectileTemplate;                                    // 0x060C(0x0004) (Edit)
	float                                              PeckRange;                                                // 0x0610(0x0004) (Edit)
	float                                              PeckRadius;                                               // 0x0614(0x0004) (Edit)
	float                                              BasePeckDamage;                                           // 0x0618(0x0004) (Edit)
	class UClass*                                      PeckDmgType;                                              // 0x061C(0x0004) (Edit)
	float                                              PeckMomentum;                                             // 0x0620(0x0004) (Edit)
	float                                              PeckDmgFallOffExp;                                        // 0x0624(0x0004) (Edit)
	unsigned long                                      bDoFullPeckRadialDmg : 1;                                 // 0x0628(0x0004) (Edit)
	unsigned long                                      bDoFullStompRadialDmg : 1;                                // 0x0628(0x0004) (Edit)
	float                                              EggShootRange;                                            // 0x062C(0x0004) (Edit)
	float                                              PeckAngle;                                                // 0x0630(0x0004) (Edit)
	float                                              PeckCoolDown;                                             // 0x0634(0x0004) (Edit)
	float                                              LastPeckTime;                                             // 0x0638(0x0004)
	float                                              EggShootCoolDown;                                         // 0x063C(0x0004) (Edit)
	float                                              EggShootAngle;                                            // 0x0640(0x0004) (Edit)
	float                                              MaxEggShootRotOffset;                                     // 0x0644(0x0004) (Edit)
	float                                              LastEggShoot;                                             // 0x0648(0x0004)
	float                                              StompRadius;                                              // 0x064C(0x0004) (Edit)
	float                                              BaseStompDamage;                                          // 0x0650(0x0004) (Edit)
	class UClass*                                      StompDmgType;                                             // 0x0654(0x0004) (Edit)
	float                                              StompMomentum;                                            // 0x0658(0x0004) (Edit)
	float                                              StompDmgFallOffExp;                                       // 0x065C(0x0004) (Edit)
	float                                              BaseStompChance;                                          // 0x0660(0x0004) (Edit)
	float                                              MinSurroundingEnemiesForStomp;                            // 0x0664(0x0004) (Edit)
	float                                              MaxSurroundingEnemiesForStomp;                            // 0x0668(0x0004) (Edit)
	float                                              StompCoolDown;                                            // 0x066C(0x0004) (Edit)
	float                                              LastStompTime;                                            // 0x0670(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.TurkeyBossController");
		return ptr;
	}


	unsigned long WantsHurtAnimation();
	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	unsigned long CheckStomp();
	void ChooseAttack();
	void DoPeck();
	void DoStomp();
	void SpawnEggProjectile();
};


// Class DunDefSpecial.UI_GameStatsUberMF
// 0x0010 (0x0FD0 - 0x0FC0)
class UUI_GameStatsUberMF : public UUI_GameStats
{
public:
	class UUILabel*                                    PlayerListLabel;                                          // 0x0FC0(0x0004) (Edit)
	class UUILabel*                                    ScoreListLabel;                                           // 0x0FC4(0x0004) (Edit)
	struct FColor                                      LocalPlayerHighLightColor;                                // 0x0FC8(0x0004) (Edit)
	struct FColor                                      DefaultPlayerHighLightColor;                              // 0x0FCC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.UI_GameStatsUberMF");
		return ptr;
	}


	void GetPlayerList(struct FString* pList, struct FString* sList);
	struct FString GetColorString(const struct FColor& aColor);
	void UpdateTeamPanels();
	void CustomInit(int CustomInitIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
