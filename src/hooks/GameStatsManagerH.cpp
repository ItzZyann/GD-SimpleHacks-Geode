#include "GameStatsManagerH.hpp"

using namespace geode::prelude;

bool GameStatsManagerH::isItemUnlocked(UnlockType pType, int pID) {
    auto GM = GameManager::get();

    if (pType == UnlockType::GJItem) {
        if (GM->getGameVariable("2003") && pID == 16) return true;
        if (GM->getGameVariable("2004") && pID == 17) return true;
    }

    if (GM->getGameVariable("2005")) return true;

    return GameStatsManager::isItemUnlocked(pType, pID);
}