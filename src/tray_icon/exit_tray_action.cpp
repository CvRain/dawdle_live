//
// Created by cvrain on 24-7-18.
//

#include "exit_tray_action.hpp"

tray_icon::ExitTrayAction::ExitTrayAction(QObject *parent)
        : BaseTrayAction(parent) {
    setText("Exit");
    setToolTip("Exit this application");
}

void tray_icon::ExitTrayAction::onTriggered() {
    QApplication::quit();
}
