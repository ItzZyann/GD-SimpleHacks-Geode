#pragma once
#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>

class $modify(GameManagerH, GameManager) {
public:
    bool isIconUnlocked(int pID, IconType pType);
    bool isColorUnlocked(int pID, UnlockType pType);
};