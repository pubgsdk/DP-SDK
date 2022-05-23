#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DiscordRichPresence.EDiscordPresenceActivityActionType
enum class EDiscordPresenceActivityActionType : uint8_t
{
	Join                           = 0,
	Spectate                       = 1,
	EDiscordPresenceActivityActionType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
