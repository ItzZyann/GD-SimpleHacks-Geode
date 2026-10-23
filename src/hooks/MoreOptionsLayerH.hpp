#pragma once
#include <Geode/Geode.hpp>
#include <Geode/modify/MoreOptionsLayer.hpp>

class $modify(MoreOptionsLayerH, MoreOptionsLayer) {
public:
    $override bool init();
    $override void goToPage(int pID);
};