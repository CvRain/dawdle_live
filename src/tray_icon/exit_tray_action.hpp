//
// Created by cvrain on 24-7-18.
//

#ifndef DAWDLE_LIVE_EXIT_TRAY_ACTION_HPP
#define DAWDLE_LIVE_EXIT_TRAY_ACTION_HPP

#include "base_tray_action.hpp"
#include <QApplication>
#include <QAction>

namespace tray_icon {
    class ExitTrayAction : public BaseTrayAction {
    Q_OBJECT
    public:
        explicit ExitTrayAction(QObject *parent = nullptr);
        void onTriggered() override;
    };
}


#endif //DAWDLE_LIVE_EXIT_TRAY_ACTION_HPP
