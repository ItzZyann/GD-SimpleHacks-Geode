#include "MoreOptionsLayerH.hpp"

using namespace geode::prelude;

bool MoreOptionsLayerH::init() {
    if (!MoreOptionsLayer::init()) return false;

    addToggle("Unlock All\nIcons", "2001", "Unlocks all icons only.");
    addToggle("Unlock All\nColors", "2002", "Unlocks all colors only.");
    addToggle("Unlock Music\nCustomizer", "2003", "Allows you to set custom music for menu and practice mode.");
    addToggle("Unlock Practice\nMusic", "2004", "Allows you to play music normally in practice mode.");
    addToggle("Unlock All\nItems", "2005", "Unlock all items. This includes animations, icons, items, and more.");

    return true;
}

void MoreOptionsLayerH::goToPage(int pID) {
    if (m_categoryLabel)
        if (m_pageID == 7)
            m_categoryLabel->setString("Simple Hacks");

    MoreOptionsLayer::goToPage(pID);
}