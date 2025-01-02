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

// Class DunDefPortal.DunDefDamageType_Hearts
// 0x0000 (0x00D4 - 0x00D4)
class UDunDefDamageType_Hearts : public UDunDefDamageType_ForceKnockBack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefPortal.DunDefDamageType_Hearts");
		return ptr;
	}

};


// Class DunDefPortal.DunDefPortalNode
// 0x004C (0x0320 - 0x02D4)
class ADunDefPortalNode : public ADunDefEmitterSpawnable
{
public:
	class ADunDefEmitterSpawnable*                     TeleportedEffect;                                         // 0x02D4(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     ProjectileTeleportedEffect;                               // 0x02D8(0x0004) (Edit)
	class USceneCapturePortalComponent*                MyPortalComponent;                                        // 0x02DC(0x0004) (Edit, ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   PortalMaterial;                                           // 0x02E0(0x0004) (Edit)
	class USoundCue*                                   EnterPortalSound;                                         // 0x02E4(0x0004) (Edit)
	class USoundCue*                                   ExitPortalSound;                                          // 0x02E8(0x0004) (Edit)
	class USoundCue*                                   CreationSound;                                            // 0x02EC(0x0004) (Edit)
	class USoundCue*                                   DeletionSound;                                            // 0x02F0(0x0004) (Edit)
	float                                              ReteleportInterval;                                       // 0x02F4(0x0004) (Edit)
	class UMaterialInstanceConstant*                   PortalMaterialInstance;                                   // 0x02F8(0x0004) (Transient)
	class ADunDefPortalNode*                           LastSibling;                                              // 0x02FC(0x0004) (Transient)
	unsigned long                                      bIsActive : 1;                                            // 0x0300(0x0004) (Net)
	unsigned long                                      bFadingMICUp : 1;                                         // 0x0300(0x0004) (Transient)
	unsigned long                                      bDeleted : 1;                                             // 0x0300(0x0004) (Transient)
	unsigned long                                      bPortalEffectEnabled : 1;                                 // 0x0300(0x0004) (Transient)
	class AActor*                                      IgnoreActor;                                              // 0x0304(0x0004) (Transient)
	float                                              FadingMICValue;                                           // 0x0308(0x0004) (Transient)
	float                                              LastFadingMICValue;                                       // 0x030C(0x0004) (Transient)
	TArray<struct FRecentTeleport>                     RecentTeleports;                                          // 0x0310(0x000C) (Transient, NeedCtorLink)
	class ADunDefWeapon_PortalGun*                     InstigatorWeapon;                                         // 0x031C(0x0004) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefPortal.DunDefPortalNode");
		return ptr;
	}


	void PostBeginPlay();
	void Tick(float DeltaTime);
	bool STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot);
	void FadeOut(float theLightFadeOutTime);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefPortal.DunDefWeapon_PortalGun
// 0x00AA (0x0594 - 0x04EA)
class ADunDefWeapon_PortalGun : public ADunDefWeapon
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x04EA(0x0002) MISSED OFFSET
	struct FName                                       CustomAnimNodeName;                                       // 0x04EC(0x0008) (Edit)
	struct FName                                       PrimaryShootAnimName;                                     // 0x04F4(0x0008) (Edit)
	struct FName                                       AltShootAnimName;                                         // 0x04FC(0x0008) (Edit)
	struct FName                                       PrimaryCancelAnimName;                                    // 0x0504(0x0008) (Edit)
	struct FName                                       AltCancelAnimName;                                        // 0x050C(0x0008) (Edit)
	class ADunDefPortalNode*                           PortalNodeTemplates[0x2];                                 // 0x0514(0x0004) (Edit)
	class AActor*                                      AltTemplate;                                              // 0x051C(0x0004) (Edit)
	float                                              PortalFireInterval;                                       // 0x0520(0x0004) (Edit)
	float                                              PortalKillRadius;                                         // 0x0524(0x0004) (Edit)
	float                                              AmmoRegenInterval;                                        // 0x0528(0x0004) (Edit)
	float                                              AmmoRegenAmount;                                          // 0x052C(0x0004) (Edit)
	float                                              AmmoConsumeInterval;                                      // 0x0530(0x0004) (Edit)
	float                                              AmmoConsumeAmount;                                        // 0x0534(0x0004) (Edit)
	float                                              FullDrainRegenTimePenalty;                                // 0x0538(0x0004) (Edit)
	struct FLinearColor                                PrimaryFireColor;                                         // 0x053C(0x0010) (Edit)
	struct FLinearColor                                AltFireColor;                                             // 0x054C(0x0010) (Edit)
	struct FColor                                      PrimaryFireLightColor;                                    // 0x055C(0x0004) (Edit)
	struct FColor                                      AltFireLightColor;                                        // 0x0560(0x0004) (Edit)
	class UParticleSystemComponent*                    InUseParticleComponent;                                   // 0x0564(0x0004) (Edit, ExportObject, Component, EditInline)
	class USoundCue*                                   NotAllowedToPortalSound;                                  // 0x0568(0x0004) (Edit)
	class UTextureRenderTarget2D*                      PortalTextureTargets[0x2];                                // 0x056C(0x0004) (Transient)
	class UPointLightComponent*                        MyLightComp;                                              // 0x0574(0x0004) (ExportObject, Component, EditInline)
	float                                              LastFireTimes[0x2];                                       // 0x0578(0x0004)
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                           // 0x0580(0x0004)
	class ADunDefPortalNode*                           PortalNodes[0x2];                                         // 0x0584(0x0004) (Net, Transient)
	int                                                CurrentAmmo;                                              // 0x058C(0x0004) (Net)
	float                                              LastRegenTime;                                            // 0x0590(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefPortal.DunDefWeapon_PortalGun");
		return ptr;
	}


	bool HitBlockingVolume(const struct FVector& Start, const struct FVector& End);
	bool IsInAnyPortalBlockingVolume(const struct FVector& aPoint);
	void Tick(float DeltaTime);
	bool GetReloadingColors(struct FLinearColor* BarColor, struct FLinearColor* TextColor);
	bool HasBothPortals();
	void ClearPortal(int portalIndex);
	void Destroyed();
	void DetachWeapon();
	void HolderDied();
	void CustomFire(int theFireMode);
	void ShootProjectiles(int theFireMode);
	bool HasAnyAmmo();
	void BeginFire(unsigned char FireModeNum);
	class ADunDefPortalNode* GetSiblingPortal(class ADunDefPortalNode* aPortal, class ADunDefPortalNode** aSibling, class UTextureRenderTarget2D** portalTextureTarget);
	void PostBeginPlay();
	void PlayCancelAnimation(bool bIsPrimary);
	void PlayedShootAnimation(bool isBigShot);
	int GetTotalAmmo();
	int GetMaxAmmo();
	int GetAmmo();
	float GetAmmoPercent();
	bool UsesAmmo();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
