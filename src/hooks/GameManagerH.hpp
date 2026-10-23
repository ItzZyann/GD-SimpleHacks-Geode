#pragma once
#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>

class $modify(GameManagerH, GameManager) {
public:
    $override bool isIconUnlocked(int pID, IconType pType);
    $override bool isColorUnlocked(int pID, UnlockType pType);
};