#!/bin/bash


git restore "DD_NewSDK/SDK/DD_Basic.hpp"
git restore "DD_NewSDK/SDK/DD_Basic.cpp"
git restore "DD_NewSDK/SDK/DD_Engine_structs.hpp"


# fix draw text
# void DrawText(const struct FString& Text, unsigned long CR, float XScale, float YScale, unsigned long Wrap, float Left, float Right, float Top, float Bottom, struct FFontRenderInfo* RenderInfo, TArray<struct FTextEx>* TextBlock);
sed -i 's|void DrawText(const struct FString|void DrawText_(const struct FString|' DD_NewSDK/SDK/DD_Engine_classes.hpp
sed -i 's|void UCanvas::DrawText(const struct FString|void UCanvas::DrawText_(const struct FString|' DD_NewSDK/SDK/DD_Engine_functions.cpp



# fix heromanager alignment
#	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
# unsigned long                                      bSentSteamStatsAfterRanked : 1;                           // 0x007C(0x0004)
sed -i '/class UDunDefHeroManager/,/}/{ 
    /UnknownData00/ s/^/\/\// 
    /bSentSteamStatsAfterRanked/ s/^/\/\// 
}' DD_NewSDK/SDK/DD_UDKGame_classes.hpp
