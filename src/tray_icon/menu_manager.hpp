//
// Created by cvrain-thinkbook on 2024/7/16.
//

#ifndef DAWDLE_LIVE_MENU_MANAGER_HPP
#define DAWDLE_LIVE_MENU_MANAGER_HPP

#include <QMenu>
#include <QSharedMemory>

namespace tray_icon::menu {
    class MenuManager{
    public:
        explicit MenuManager();
        void addAction(QAction* action);
        void addSeparator();
        void removeAction(QAction* action);
        QMenu* getMenu();
    private:
        QSharedPointer<QMenu> menu;
    };
}


#endif //DAWDLE_LIVE_MENU_MANAGER_HPP
