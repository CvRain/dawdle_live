//
// Created by cvrain-thinkbook on 2024/7/16.
//

#include "menu_manager.hpp"

namespace tray_icon::menu {
    MenuManager::MenuManager(): menu(QSharedPointer<QMenu>::create()) {

    }

    void MenuManager::addAction(QAction *action) {
        menu->addAction(action);
    }

    void MenuManager::addSeparator() {
        menu->addSeparator();
    }

    void MenuManager::removeAction(QAction *action) {
        menu->removeAction(action);
    }

    QMenu *MenuManager::getMenu() {
        return menu.data();
    }
}