#pragma once
#include <Geode/Geode.hpp>
#include <Geode/modify/GameStatsManager.hpp>

class $modify(GameStatsManagerH, GameStatsManager) {
public:
    $override bool isItemUnlocked(UnlockType pType, int pID);
};