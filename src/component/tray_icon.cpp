//
// Created by cvrain on 24-7-14.
//

#include "tray_icon.hpp"

namespace component {
    bool TrayIcon::isEnable() {
        //检查系统托盘图盘是否能运行在当前系统上
        return QSystemTrayIcon::isSystemTrayAvailable();
    }

    TrayIcon::TrayIcon(): trayIcon(std::make_unique<QSystemTrayIcon>()) {
        if (!component::TrayIcon::isEnable()){
            throw std::runtime_error("Tray icon is not enable");
        }
//        trayIcon->show();
//        trayIcon->showMessage("Hello", "Hello World!");
    }
} // component