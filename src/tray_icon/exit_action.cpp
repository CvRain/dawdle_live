//
// Created by cvrain-thinkbook on 2024/7/16.
//

#include "exit_action.hpp"
#include <QApplication>

namespace tray_icon::menu::action {

    ExitAction::ExitAction(QObject *parent) : BaseAction(parent) {
        this->setText("exit");
        this->setToolTip("exit this application");
        this->setIcon(QIcon{":/res/img/exit.svg"});
    }

    void ExitAction::execute() {
        QApplication::quit();
    }
}