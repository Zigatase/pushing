#pragma once

#include <cstdint>
#include <cstddef>

namespace globals
{
    // Client Address
    inline std::uintptr_t clientAddress = 0;

    // Glow
    inline bool glow = false;
    inline float glowColor[] = { 1.f, 0.f, 0.f, 1.f };

    // Radar
    inline bool radar = false;

    //
    inline bool aimBot = false;
}

namespace offsets
{
    // Client
    constexpr ::std::ptrdiff_t dwMainPlayer = 0xDEA964;
    constexpr ::std::ptrdiff_t dwEntityList = 0x4DFFFC4;

    // Engine
    constexpr ::std::ptrdiff_t dwClientState = 0x59F19C;
    constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
    constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;

    // Glow
    constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x535AA70;
    constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;

    // Entity
    constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
    constexpr ::std::ptrdiff_t m_bDormant = 0xED;
    constexpr ::std::ptrdiff_t m_iHealth = 0x100;
    constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
    constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
    constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x303C;
    constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;


    constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
    constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
    constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
}