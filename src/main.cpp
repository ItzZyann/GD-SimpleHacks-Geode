#include <Geode/Geode.hpp>
#include <Geode/modify/ShaderLayer.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

using namespace geode::prelude;

// shader thing
// too laggy in my android-5
class $modify(ShaderLayer) {
    void performCalculations() {
        if (GameManager::get()->getGameVariable("2006"))
            return;
        else
            return ShaderLayer::performCalculations();
    }
};

// this thing is for
// area move and scale
// since its laggy in low-end mobile T-T
class $modify(GJBaseGameLayer) {
    void processAreaMoveGroupAction(CCArray* p0, EnterEffectInstance* p1, CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9) {
        if (GameManager::get()->getGameVariable("2007"))
            return;
        else
            return GJBaseGameLayer::processAreaMoveGroupAction(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    }

    void processAreaTransformGroupAction(CCArray* p0, EnterEffectInstance* p1, CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9) {
        if (GameManager::get()->getGameVariable("2007"))
            return;
        else
            return GJBaseGameLayer::processAreaTransformGroupAction(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    }
};