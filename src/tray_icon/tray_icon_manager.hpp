//
// Created by cvrain-thinkbook on 2024/7/16.
//

#ifndef DAWDLE_LIVE_TRAY_ICON_MANAGER_HPP
#define DAWDLE_LIVE_TRAY_ICON_MANAGER_HPP

#include <QSystemTrayIcon>
#include <QSharedMemory>
#include <QString>

namespace tray_icon {
    class TrayIconManager {
    public:
        explicit TrayIconManager(QObject *parent = nullptr);

        ~TrayIconManager();

        void setIcon(const QString &iconPath);

        void setToolTip(const QString &toolTip);

        void setMenu(QMenu *menu);

        void show();

        void hide();

    private:
        QSystemTrayIcon *trayIcon;
    };
}


#endif //DAWDLE_LIVE_TRAY_ICON_MANAGER_HPP
