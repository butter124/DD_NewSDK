#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DunDefSpider.DunDefWebProjectile.WebbedActor
// 0x0008
struct FWebbedActor
{
	class AActor*                                      TheActor;                                                 // 0x0000(0x0004)
	class UParticleSystemComponent*                    theEffectComponent;                                       // 0x0004(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct DunDefSpider.DunDefMapInfo_VDay.WaveKillCounts
// 0x000C
struct FWaveKillCounts
{
	TArray<int>                                        KillCountsPerWave;                                        // 0x0000(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct DunDefSpider.DunDefMapInfo_VDay.EnemyGenderOverride
// 0x000C
struct FEnemyGenderOverride
{
	class ADunDefEnemy*                                OriginalArchetype;                                        // 0x0000(0x0004) (Edit)
	class ADunDefEnemy*                                ReplacementGenderArchetypeBoy;                            // 0x0004(0x0004) (Edit)
	class ADunDefEnemy*                                ReplacementGenderArchetypeGirl;                           // 0x0008(0x0004) (Edit)
};

// ScriptStruct DunDefSpider.DunDefMapInfo_PortalDefense.MinMaxValues
// 0x0008
struct FMinMaxValues
{
	float                                              MinValue;                                                 // 0x0000(0x0004) (Edit)
	float                                              MaxValue;                                                 // 0x0004(0x0004) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
