//
// Created by cvrain-thinkbook on 2024/7/16.
//

#include "tray_icon_manager.hpp"

namespace tray_icon {

    TrayIconManager::TrayIconManager(QObject* parent) : trayIcon(new QSystemTrayIcon{parent}) {

    }

    TrayIconManager::~TrayIconManager() {
        if (trayIcon != nullptr) {
            delete trayIcon;
            trayIcon = nullptr;
        }
    }

    void TrayIconManager::setIcon(const QString &iconPath) {
        trayIcon->setIcon(QIcon(iconPath));
    }

    void TrayIconManager::setToolTip(const QString &toolTip) {
        trayIcon->setToolTip(toolTip);
    }

    void TrayIconManager::setMenu(QMenu *menu) {
        trayIcon->setContextMenu(menu);
    }

    void TrayIconManager::show() {
        trayIcon->show();
    }

    void TrayIconManager::hide() {
        trayIcon->hide();
    }
}