// Dungeon Defenders (10.0) SDK
#include "../SDK.hpp"
#include "../includes/HelperFunctions.h"
#include <Psapi.h>

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#define GObjects_Pattern                                                       \
  "\x8b\x00\x00\x00\x00\x00\x8b\x04\x00\x8b\x40\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask "x?????xx?xx?xxxxx"
#define GObjects_Offset 0x2

#define GNames_Pattern "\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask "xx????xxxxx"
#define GNames_Offset 0x2
MODULEINFO miGame = GetModuleInfo(NULL);
DWORD GObjectsAddr =
    *(unsigned long *)(FindPattern((unsigned long)miGame.lpBaseOfDll,
                                   miGame.SizeOfImage,
                                   (unsigned char *)GObjects_Pattern,
                                   (char *)GObjects_Mask) +
                       GObjects_Offset);
DWORD GNamesAddr =
    *(unsigned long *)(FindPattern((unsigned long)miGame.lpBaseOfDll,
                                   miGame.SizeOfImage,
                                   (unsigned char *)GNames_Pattern,
                                   (char *)GNames_Mask) +
                       GNames_Offset);
namespace Classes {

TArray<FNameEntry *> *FName::GNames = (TArray<FNameEntry *> *)GNamesAddr;
TArray<UObject *> *UObject::GObjects = (TArray<UObject *> *)GObjectsAddr;

} // namespace Classes

#ifdef _MSC_VER
#pragma pack(pop)
#endif
