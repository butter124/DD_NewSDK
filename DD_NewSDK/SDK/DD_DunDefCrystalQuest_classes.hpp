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

// Class DunDefCrystalQuest.DunDef_SeqAct_SkelMeshActorPlayAnim
// 0x0010 (0x00F8 - 0x00E8)
class UDunDef_SeqAct_SkelMeshActorPlayAnim : public USequenceAction
{
public:
	class AActor*                                      TargetActor;                                              // 0x00E8(0x0004) (Edit)
	struct FName                                       AnimName;                                                 // 0x00EC(0x0008) (Edit)
	unsigned long                                      bLoop : 1;                                                // 0x00F4(0x0004) (Edit)
	unsigned long                                      bRestartIfAlreadyPlaying : 1;                             // 0x00F4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefCrystalQuest.DunDef_SeqAct_SkelMeshActorPlayAnim");
		return ptr;
	}


	void Activated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
