#include "MoreOptionsLayerH.hpp"

using namespace geode::prelude;

bool MoreOptionsLayerH::init() {
    if (!MoreOptionsLayer::init()) return false;

    addToggle(
        "Unlock All\nIcons",
        "2001",
        "Unlocks all icons only."
    );

    addToggle(
        "Unlock All\nColors",
        "2002",
        "Unlocks all colors only."
    );

    addToggle(
        "Unlock Music\nCustomizer",
        "2003",
        "Allows you to set custom music for menu and practice mode."
    );

    addToggle(
        "Unlock Practice\nMusic",
        "2004",
        "Allows you to play music normally in practice mode."
    );

    addToggle(
        "Unlock All\nItems",
        "2005",
        "Unlock all items. This includes animations, icons, items, and more."
    );

    addToggle(
        "Disable Level\nShaders",
        "2006",
        "Disable level shaders, may improve performance on low-end devices."
    );

    addToggle(
        "Disable Area\nEffects",
        "2007",
        "Disable area effects, this includes move and scale. May improve performance on low-end devices, but might broke some levels that uses this trigger."
    );
    
    // can u just add this show fps
    // in options menu rob?
    #ifdef GEODE_IS_MOBILE
        addToggle(
            "Show Framerate",
            "0115",
            "Displays FPS in your screen."
        );
    #endif

    return true;
}

void MoreOptionsLayerH::goToPage(int pID) {
    MoreOptionsLayer::goToPage(pID);

    if (m_categoryLabel) {
        if (m_page == 7) {
            m_categoryLabel->setString("Simple Hacks | v1.0.0");
            m_categoryLabel->setFntFile("goldFont.fnt");
        } else {
            m_categoryLabel->setFntFile("bigFont.fnt");
        }
    }
}