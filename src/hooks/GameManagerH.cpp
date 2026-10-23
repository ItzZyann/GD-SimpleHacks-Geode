#include "GameManagerH.hpp"

using namespace geode::prelude;

bool GameManagerH::isIconUnlocked(int pID, IconType pType) {
    if (getGameVariable("2001"))
        return true;
    else
        return GameManager::isIconUnlocked(pID, pType);
}

bool GameManagerH::isColorUnlocked(int pID, UnlockType pType) {
    if (getGameVariable("2001"))
        return true;
    else
        return GameManager::isColorUnlocked(pID, pType);
}