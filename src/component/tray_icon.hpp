//
// Created by cvrain on 24-7-14.
//

#ifndef DAWDLE_LIVE_TRAY_ICON_HPP
#define DAWDLE_LIVE_TRAY_ICON_HPP

#include <memory>
#include <QSystemTrayIcon>

namespace component {

    class TrayIcon {
    public:
        explicit TrayIcon();
        static bool isEnable();
    private:
        std::unique_ptr<QSystemTrayIcon> trayIcon;
    };

} // component

#endif //DAWDLE_LIVE_TRAY_ICON_HPP
